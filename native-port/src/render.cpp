#include "beach/appearance.hpp"
#include "beach/behavior.hpp"
#include <EGL/egl.h>
#include <EGL/eglext.h>
#include <GLES2/gl2.h>
#include <algorithm>
#include <fstream>
#include <iostream>
#include <map>
#include <stdexcept>

namespace {
using namespace beach;
class Context {
public:
    EGLDisplay display = EGL_NO_DISPLAY;
    EGLSurface surface = EGL_NO_SURFACE;
    EGLContext context = EGL_NO_CONTEXT;
    Context() = default;
    Context(const Context&) = delete;
    void create(unsigned width, unsigned height) {
        display = eglGetDisplay(EGL_DEFAULT_DISPLAY);
        if (!eglInitialize(display, nullptr, nullptr)) {
            const auto platformDisplay = reinterpret_cast<PFNEGLGETPLATFORMDISPLAYEXTPROC>(
                eglGetProcAddress("eglGetPlatformDisplayEXT"));
            if (!platformDisplay) throw std::runtime_error("EGL display unavailable");
            display = platformDisplay(EGL_PLATFORM_SURFACELESS_MESA, EGL_DEFAULT_DISPLAY, nullptr);
            if (!eglInitialize(display, nullptr, nullptr)) throw std::runtime_error("EGL initialize failed");
        }
        if (!eglBindAPI(EGL_OPENGL_ES_API)) throw std::runtime_error("EGL GLES API unavailable");
        const EGLint attributes[]{EGL_SURFACE_TYPE,EGL_PBUFFER_BIT,EGL_RENDERABLE_TYPE,EGL_OPENGL_ES2_BIT,
            EGL_RED_SIZE,8,EGL_GREEN_SIZE,8,EGL_BLUE_SIZE,8,EGL_ALPHA_SIZE,8,EGL_DEPTH_SIZE,24,EGL_NONE};
        EGLConfig config; EGLint count;
        if (!eglChooseConfig(display,attributes,&config,1,&count) || !count)
            throw std::runtime_error("no EGL RGBA8/depth24 config");
        const EGLint size[]{EGL_WIDTH,static_cast<EGLint>(width),EGL_HEIGHT,static_cast<EGLint>(height),EGL_NONE};
        const EGLint version[]{EGL_CONTEXT_CLIENT_VERSION,2,EGL_NONE};
        surface = eglCreatePbufferSurface(display,config,size);
        context = eglCreateContext(display,config,EGL_NO_CONTEXT,version);
        if (surface == EGL_NO_SURFACE || context == EGL_NO_CONTEXT ||
            !eglMakeCurrent(display,surface,surface,context)) throw std::runtime_error("EGL context creation failed");
    }
    ~Context() {
        if (display != EGL_NO_DISPLAY) {
            eglMakeCurrent(display,EGL_NO_SURFACE,EGL_NO_SURFACE,EGL_NO_CONTEXT);
            if (context != EGL_NO_CONTEXT) eglDestroyContext(display,context);
            if (surface != EGL_NO_SURFACE) eglDestroySurface(display,surface);
            eglTerminate(display);
        }
    }
};

GLuint shader(GLenum type, const char* source) {
    const auto object = glCreateShader(type);
    glShaderSource(object,1,&source,nullptr); glCompileShader(object);
    GLint success; glGetShaderiv(object,GL_COMPILE_STATUS,&success);
    if (!success) {
        char log[2048]{}; glGetShaderInfoLog(object,sizeof(log),nullptr,log);
        glDeleteShader(object); throw std::runtime_error(log);
    }
    return object;
}
const char* vertexSource = R"(
attribute vec4 position;
attribute vec4 color;
attribute vec2 uv0;
attribute vec2 uv1;
uniform mat4 mvp;
uniform mat4 textureMatrix0;
uniform mat4 textureMatrix1;
uniform vec4 materialColor;
varying mediump vec4 tint;
varying mediump vec2 tex0;
varying mediump vec2 tex1;
void main() {
    gl_Position = mvp * position;
    tint = color * materialColor;
    tex0 = (textureMatrix0 * vec4(uv0,0.0,1.0)).xy;
    tex1 = (textureMatrix1 * vec4(uv1,0.0,1.0)).xy;
})";
const char* fragmentSource = R"(
precision mediump float;
uniform sampler2D image0;
uniform sampler2D image1;
uniform int enabled0;
uniform int enabled1;
uniform int stage0;
uniform int stage1;
uniform vec4 constant0;
uniform vec4 constant1;
uniform int alphaTest;
varying mediump vec4 tint;
varying mediump vec2 tex0;
varying mediump vec2 tex1;
vec4 combine(vec4 previous, vec4 texel, int stage, vec4 constantColor) {
    vec4 value = previous * texel;
    if (stage == 1) value.rgb = texel.rgb;
    if (stage == 2) value = mix(texel,previous,constantColor);
    if (stage == 3) value.rgb = previous.rgb + texel.rgb;
    if (stage == 4) value.rgb *= 2.0;
    if (stage == 5) value.rgb *= 4.0;
    return clamp(value,0.0,1.0);
}
void main() {
    vec4 value = tint;
    if (enabled0 != 0) value = combine(value,texture2D(image0,tex0),stage0,constant0);
    if (enabled1 != 0) value = combine(value,texture2D(image1,tex1),stage1,constant1);
    if (alphaTest != 0 && value.a < 0.5) discard;
    gl_FragColor = value;
})";

class Renderer {
    GLuint program = 0;
    std::map<std::string, GLuint> textures;
    std::filesystem::path root;
    const StaticAppearance& appearance;
    GLint uniform(const std::string& name) { return glGetUniformLocation(program,name.c_str()); }
    GLuint texture(std::string name) {
        if (name.empty()) return 0;
        const auto replacement = appearance.textures.find(name);
        if (replacement != appearance.textures.end()) name = replacement->second;
        if (name.rfind("/tex/",0) != 0) throw std::runtime_error("unresolved texture: " + name);
        const auto relative = std::filesystem::path(name.substr(1));
        for (const auto& part : relative)
            if (part == "..") throw std::runtime_error("invalid texture path");
        if (const auto cached = textures.find(name); cached != textures.end()) return cached->second;
        const auto decoded = decodePvr(readFile(root / relative));
        GLuint id; glGenTextures(1,&id); glBindTexture(GL_TEXTURE_2D,id);
        textures[name] = id;
        for (std::size_t i = 0; i < decoded.levels.size(); ++i) {
            const auto& mip = decoded.levels[i];
            glTexImage2D(GL_TEXTURE_2D,i,GL_RGBA,mip.width,mip.height,0,GL_RGBA,GL_UNSIGNED_BYTE,mip.rgba.data());
        }
        return id;
    }
    void material(const Material& material, const Model& model) {
        const GLenum sources[]{GL_ONE,GL_SRC_ALPHA,GL_ONE,GL_ONE,GL_SRC_ALPHA,GL_DST_COLOR};
        const GLenum destinations[]{GL_ZERO,GL_ONE_MINUS_SRC_ALPHA,GL_ONE,GL_ZERO,GL_ONE,GL_ZERO};
        if (material.blend == 0 || material.blend == 3) glDisable(GL_BLEND); else glEnable(GL_BLEND);
        glBlendFunc(sources[material.blend],destinations[material.blend]);
        glUniform1i(uniform("alphaTest"),material.blend == 3);
        if (material.cull == 0) glEnable(GL_CULL_FACE); else glDisable(GL_CULL_FACE);
        glCullFace(GL_BACK); glFrontFace(GL_CW);
        if (material.depth == 2) glDisable(GL_DEPTH_TEST); else glEnable(GL_DEPTH_TEST);
        glDepthFunc(material.depth == 3 ? GL_EQUAL : material.depth == 2 ? GL_ALWAYS : GL_LESS);
        glDepthMask(material.depth == 0 ? GL_TRUE : GL_FALSE);
        std::array<float,4> tint{};
        for (unsigned i = 0; i < 4; ++i) tint[i] = model.color[i]*material.color[i];
        tint[3] *= model.opacity;
        glUniform4fv(uniform("materialColor"),1,tint.data());
        for (unsigned i = 0; i < 2; ++i) {
            const auto suffix = std::to_string(i);
            glActiveTexture(GL_TEXTURE0+i);
            const TextureLayer* layer = i < material.layers.size() ? &material.layers[i] : nullptr;
            const auto id = layer ? texture(layer->file.name) : 0;
            glUniform1i(uniform("enabled"+suffix),id != 0 && layer->sampler != 3);
            if (!id) continue;
            if (layer->sampler > 5 || layer->anisotropy != 0)
                throw std::runtime_error("renderer does not support this sampler/anisotropy state");
            glBindTexture(GL_TEXTURE_2D,id);
            const bool nearest = layer->sampler == 0 || layer->sampler == 4;
            glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MAG_FILTER,nearest ? GL_NEAREST : GL_LINEAR);
            glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER,layer->sampler == 2 ? GL_LINEAR_MIPMAP_LINEAR :
                            nearest ? GL_NEAREST_MIPMAP_NEAREST : GL_LINEAR_MIPMAP_NEAREST);
            const auto wrap = layer->sampler >= 4 ? GL_CLAMP_TO_EDGE : GL_REPEAT;
            glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_WRAP_S,wrap); glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_WRAP_T,wrap);
            glUniform1i(uniform("stage"+suffix),layer->stage);
            glUniform4fv(uniform("constant"+suffix),1,layer->color.data());
            glUniformMatrix4fv(uniform("textureMatrix"+suffix),1,GL_FALSE,layer->transform.data());
        }
    }
public:
    Renderer(const std::filesystem::path& assets, const StaticAppearance& selected)
        : root(assets), appearance(selected) {
        const auto vertex = shader(GL_VERTEX_SHADER,vertexSource);
        const auto fragment = shader(GL_FRAGMENT_SHADER,fragmentSource);
        program = glCreateProgram(); glAttachShader(program,vertex); glAttachShader(program,fragment);
        glBindAttribLocation(program,0,"position"); glBindAttribLocation(program,1,"color");
        glBindAttribLocation(program,2,"uv0"); glBindAttribLocation(program,3,"uv1");
        glLinkProgram(program); glDeleteShader(vertex); glDeleteShader(fragment);
        GLint success; glGetProgramiv(program,GL_LINK_STATUS,&success);
        if (!success) throw std::runtime_error("shader link failed");
        glUseProgram(program); glUniform1i(uniform("image0"),0); glUniform1i(uniform("image1"),1);
    }
    ~Renderer() {
        for (const auto& entry : textures) glDeleteTextures(1,&entry.second);
        if (program) glDeleteProgram(program);
    }
    unsigned draw(const SceneGeometry& scene, std::size_t cameraIndex, unsigned width, unsigned height) {
        if (scene.models.size() != scene.matrices.size()) throw std::runtime_error("model/matrix mapping not one-to-one");
        const auto& camera = scene.cameras.at(cameraIndex);
        if (camera.adjustFov) throw std::runtime_error("adaptive camera FOV not implemented");
        const auto view = viewMatrix(camera);
        const auto projection = projectionMatrix(camera,float(width)/height);
        const auto transforms = renderTransforms(scene,camera);
        glViewport(0,0,width,height); glClearColor(0.05f,0.1f,0.15f,1); glDepthMask(GL_TRUE);
        glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
        unsigned draws = 0;
        for (std::size_t i = 0; i < scene.models.size(); ++i) {
            if (!appearance.visible[i]) continue;
            const auto& model = scene.models[i];
            // GERenderer::Draw rejects effective alpha <= 1/256, even for
            // an opaque material whose GL blend state would otherwise ignore it.
            if (model.color[3]*model.opacity <= 1.0f/256.0f) continue;
            const auto mvp = multiply(projection,multiply(view,transforms[i]));
            glUniformMatrix4fv(uniform("mvp"),1,GL_FALSE,mvp.data());
            glDepthRangef(model.customDepth ? model.depthRange[0] : 0, model.customDepth ? model.depthRange[1] : 1);
            for (unsigned a = 0; a < 4; ++a) glDisableVertexAttribArray(a);
            glVertexAttrib4f(1,1,1,1,1); glVertexAttrib2f(2,0,0); glVertexAttrib2f(3,0,0);
            for (const auto& buffer : model.buffers) for (const auto& component : buffer.components) {
                GLint attribute = -1;
                if (component.usage == 0) attribute = 0;
                if (component.usage == 2) attribute = 1;
                if (component.usage == 3) attribute = 2;
                if (component.usage == 4) attribute = 3;
                if (attribute < 0) throw std::runtime_error("unsupported renderer vertex usage");
                glEnableVertexAttribArray(attribute);
                glVertexAttribPointer(attribute,component.width,component.type == 0 ? GL_FLOAT : GL_UNSIGNED_BYTE,
                    component.type == 1 ? GL_TRUE : GL_FALSE,buffer.stride,buffer.data.data()+component.offset);
            }
            for (const auto& surface : model.surfaces) {
                material(surface.material,model);
                glDrawElements(GL_TRIANGLES,surface.indices.size(),GL_UNSIGNED_SHORT,surface.indices.data());
                ++draws;
            }
        }
        glFinish();
        const auto error = glGetError();
        if (error != GL_NO_ERROR) throw std::runtime_error("GLES error " + std::to_string(error));
        return draws;
    }
};

unsigned number(const char* text, unsigned minimum, unsigned maximum) {
    const std::string input(text); std::size_t used = 0;
    const auto value = std::stoul(input,&used);
    if (used != input.size() || value < minimum || value > maximum) throw std::runtime_error("argument out of range");
    return static_cast<unsigned>(value);
}
} // namespace

int main(int argc, char** argv) {
    if (argc != 3 && argc != 6 && argc != 9) {
        std::cerr << "Usage: beach-render ASSET_DIR OUTPUT.pam [CAMERA WIDTH HEIGHT [PHASE MONTH DAY]]\n"
                  << "  PHASE 0-7: midnight, night, dawn, morning, noon, afternoon, dusk, evening\n"
                  << "  MONTH 1-12 and DAY 1-31 select the serialized date visibility masks\n"; return 2;
    }
    try {
        const auto camera = argc >= 6 ? number(argv[3],0,4095) : 1;
        const auto width = argc >= 6 ? number(argv[4],16,4096) : 960;
        const auto height = argc >= 6 ? number(argv[5],16,4096) : 540;
        SceneState state;
        // June 15 is a deliberate default: no holiday date mask selects it.
        state.timeOfDay = argc == 9 ? number(argv[6],0,7) : 4;
        state.month = (argc == 9 ? number(argv[7],1,12) : 6)-1;
        state.day = argc == 9 ? number(argv[8],1,31) : 15;
        const std::filesystem::path assets(argv[1]);
        const auto behavior = readSceneBehavior(readFile(assets/"beach.stg-scene"));
        const auto& scene = behavior.animation.geometry;
        auto appearance = defaultAppearance(scene,state.timeOfDay);
        appearance.visible = computeShownModels(behavior,state,appearance.visible);
        Context context; context.create(width,height);
        Renderer renderer(assets,appearance);
        std::cout << "Native GLES renderer: " << glGetString(GL_RENDERER) << '\n';
        const auto draws = renderer.draw(scene,camera,width,height);
        MipLevel image{width,height,Bytes(std::size_t(width)*height*4)};
        glReadPixels(0,0,width,height,GL_RGBA,GL_UNSIGNED_BYTE,image.rgba.data());
        if (glGetError() != GL_NO_ERROR) throw std::runtime_error("frame readback failed");
        const auto row = std::size_t(width)*4;
        for (unsigned y = 0; y < height/2; ++y)
            std::swap_ranges(image.rgba.begin()+y*row,image.rgba.begin()+(y+1)*row,image.rgba.begin()+(height-1-y)*row);
        writePam(argv[2],image);
        std::cout << "Rendered " << draws << " surfaces to " << argv[2]
                  << "; authored static transforms, default theme, phase " << state.timeOfDay
                  << " textures,\nvisibility for month " << state.month+1 << " day " << state.day
                  << ".\nAnimation, skinning, dynamic text and effects are not evaluated.\n";
    } catch (const std::exception& error) { std::cerr << "ERROR: " << error.what() << '\n'; return 1; }
}
