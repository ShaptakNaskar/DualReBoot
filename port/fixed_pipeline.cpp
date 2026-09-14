#include "fixed_pipeline.hpp"
#include <EGL/egl.h>
#include <GLES2/gl2.h>
#include <algorithm>
#include <android/log.h>
#include <array>
#include <cstring>
#include <stdexcept>
#include <string>
#include <unordered_map>

namespace {
constexpr int Units = 3;
using Matrix = std::array<float, 16>;
Matrix identity() { return {1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1}; }
struct Array {
  bool enabled = false;
  int size = 4;
  GLenum type = GL_FLOAT;
  int stride = 0;
  const void *pointer = nullptr;
  GLuint buffer = 0;
};
struct Texture {
  bool enabled = false;
  Matrix matrix = identity();
  int mode = 0x2100, rgb = 0x2100, alpha = 0x2100;
  std::array<int, 3> srcRGB = {0x1702, 0x8578, 0x8576},
                     srcAlpha = {0x1702, 0x8578, 0x8576};
  std::array<int, 3> opRGB = {0x300, 0x300, 0x302},
                     opAlpha = {0x302, 0x302, 0x302};
  std::array<float, 4> color = {0, 0, 0, 0};
  float rgbScale = 1, alphaScale = 1;
};
struct State {
  EGLContext context = EGL_NO_CONTEXT;
  GLuint program = 0;
  std::unordered_map<std::string, GLint> uniforms;
  unsigned active = 0, client = 0;
  GLenum matrixMode = 0x1700;
  Matrix model = identity(), projection = identity();
  std::array<Texture, Units> textures;
  std::array<Array, Units + 2> arrays;
  std::array<float, 4> color = {1, 1, 1, 1};
  bool alphaEnabled = false;
  GLenum alphaFunc = GL_ALWAYS;
  float alphaRef = 0;
};
thread_local State state;
State &current() {
  auto context = eglGetCurrentContext();
  if (state.context != context) {
    state = State{};
    state.context = context;
  }
  return state;
}
Matrix &matrix() {
  auto &s = current();
  if (s.matrixMode == 0x1700)
    return s.model;
  if (s.matrixMode == 0x1701)
    return s.projection;
  return s.textures[s.active].matrix;
}
const char *vertexShader = R"(
attribute vec4 aPosition;
attribute vec4 aColor;
attribute vec4 aTex0;
attribute vec4 aTex1;
attribute vec4 aTex2;
uniform mat4 uModel;
uniform mat4 uProjection;
uniform mat4 uTexMatrix0;
uniform mat4 uTexMatrix1;
uniform mat4 uTexMatrix2;
varying vec4 vColor;
varying vec2 vTex0;
varying vec2 vTex1;
varying vec2 vTex2;
void main(){
 gl_Position=uProjection*uModel*aPosition;
 vColor=aColor;
 vTex0=(uTexMatrix0*aTex0).xy;
 vTex1=(uTexMatrix1*aTex1).xy;
 vTex2=(uTexMatrix2*aTex2).xy;
}
)";
// Constants below are the original GL texture environment enum values.
const char *fragmentShader = R"(
precision mediump float;
precision highp int;
varying vec4 vColor;
varying vec2 vTex0;
varying vec2 vTex1;
varying vec2 vTex2;
uniform sampler2D uSampler0;
uniform sampler2D uSampler1;
uniform sampler2D uSampler2;
uniform int uEnabled[3];
uniform int uMode[3];
uniform int uRGB[3];
uniform int uAlpha[3];
uniform ivec3 uSrcRGB[3];
uniform ivec3 uSrcAlpha[3];
uniform ivec3 uOpRGB[3];
uniform ivec3 uOpAlpha[3];
uniform vec4 uConstant[3];
uniform vec2 uScale[3];
uniform int uAlphaTest;
uniform int uAlphaFunc;
uniform float uAlphaRef;
vec4 source(int key,vec4 texel,vec4 previous,vec4 constantColor){
 if(key==5890)return texel;
 if(key==34168)return previous;
 if(key==34166)return constantColor;
 return vColor;
}
vec3 rgbOperand(vec4 s,int op){
 if(op==768)return s.rgb;
 if(op==769)return vec3(1.0)-s.rgb;
 if(op==770)return vec3(s.a);
 return vec3(1.0-s.a);
}
float alphaOperand(vec4 s,int op){return op==771?1.0-s.a:s.a;}
vec3 combineRGB(int mode,vec3 a,vec3 b,vec3 c){
 if(mode==7681)return a;
 if(mode==260)return a+b;
 if(mode==34164)return a+b-vec3(0.5);
 if(mode==34165)return a*c+b*(vec3(1.0)-c);
 if(mode==34023)return a-b;
 if(mode==34478||mode==34479)return vec3(4.0*dot(a-vec3(0.5),b-vec3(0.5)));
 return a*b;
}
float combineAlpha(int mode,float a,float b,float c){
 if(mode==7681)return a;
 if(mode==260)return a+b;
 if(mode==34164)return a+b-0.5;
 if(mode==34165)return a*c+b*(1.0-c);
 if(mode==34023)return a-b;
 return a*b;
}
vec4 stage(int i,vec4 t,vec4 p){
 if(uMode[i]==7681)return t;
 if(uMode[i]==8449)return vec4(mix(p.rgb,t.rgb,t.a),p.a);
 if(uMode[i]==260)return vec4(p.rgb+t.rgb,p.a*t.a);
 if(uMode[i]==3042)return vec4(mix(p.rgb,uConstant[i].rgb,t.rgb),p.a*t.a);
 if(uMode[i]!=34160)return p*t;
 vec4 c=uConstant[i];
 vec3 a0=rgbOperand(source(uSrcRGB[i].x,t,p,c),uOpRGB[i].x);
 vec3 a1=rgbOperand(source(uSrcRGB[i].y,t,p,c),uOpRGB[i].y);
 vec3 a2=rgbOperand(source(uSrcRGB[i].z,t,p,c),uOpRGB[i].z);
 float b0=alphaOperand(source(uSrcAlpha[i].x,t,p,c),uOpAlpha[i].x);
 float b1=alphaOperand(source(uSrcAlpha[i].y,t,p,c),uOpAlpha[i].y);
 float b2=alphaOperand(source(uSrcAlpha[i].z,t,p,c),uOpAlpha[i].z);
 vec3 rgb=combineRGB(uRGB[i],a0,a1,a2)*uScale[i].x;
 float alpha=combineAlpha(uAlpha[i],b0,b1,b2)*uScale[i].y;
 if(uRGB[i]==34479)alpha=rgb.r;
 return clamp(vec4(rgb,alpha),0.0,1.0);
}
void main(){
 vec4 c=vColor;
 if(uEnabled[0]!=0)c=stage(0,texture2D(uSampler0,vTex0),c);
 if(uEnabled[1]!=0)c=stage(1,texture2D(uSampler1,vTex1),c);
 if(uEnabled[2]!=0)c=stage(2,texture2D(uSampler2,vTex2),c);
 if(uAlphaTest!=0){
  bool pass=true;
  if(uAlphaFunc==512)pass=false;
  if(uAlphaFunc==513)pass=c.a<uAlphaRef;
  if(uAlphaFunc==514)pass=c.a==uAlphaRef;
  if(uAlphaFunc==515)pass=c.a<=uAlphaRef;
  if(uAlphaFunc==516)pass=c.a>uAlphaRef;
  if(uAlphaFunc==517)pass=c.a!=uAlphaRef;
  if(uAlphaFunc==518)pass=c.a>=uAlphaRef;
  if(!pass)discard;
 }
 gl_FragColor=c;
}
)";
GLuint compile(GLenum type, const char *source) {
  auto shader = glCreateShader(type);
  glShaderSource(shader, 1, &source, nullptr);
  glCompileShader(shader);
  GLint ok = 0;
  glGetShaderiv(shader, GL_COMPILE_STATUS, &ok);
  if (!ok) {
    char log[4096];
    glGetShaderInfoLog(shader, sizeof(log), nullptr, log);
    glDeleteShader(shader);
    throw std::runtime_error(std::string("Fixed pipeline shader: ") + log);
  }
  return shader;
}
void prepare() {
  auto &s = current();
  if (s.program)
    return;
  GLuint v = compile(GL_VERTEX_SHADER, vertexShader), f = 0;
  try {
    f = compile(GL_FRAGMENT_SHADER, fragmentShader);
    s.program = glCreateProgram();
    glAttachShader(s.program, v);
    glAttachShader(s.program, f);
    const char *names[] = {"aPosition", "aColor", "aTex0", "aTex1", "aTex2"};
    for (unsigned i = 0; i < 5; i++)
      glBindAttribLocation(s.program, i, names[i]);
    glLinkProgram(s.program);
    GLint ok = 0;
    glGetProgramiv(s.program, GL_LINK_STATUS, &ok);
    if (!ok) {
      char log[4096];
      glGetProgramInfoLog(s.program, sizeof(log), nullptr, log);
      throw std::runtime_error(std::string("Fixed pipeline link: ") + log);
    }
    glDeleteShader(v);
    glDeleteShader(f);
  } catch (...) {
    glDeleteShader(v);
    if (f)
      glDeleteShader(f);
    if (s.program)
      glDeleteProgram(s.program);
    s.program = 0;
    throw;
  }
}
GLint uniform(const char *name) {
  auto &s = current();
  auto found = s.uniforms.find(name);
  if (found != s.uniforms.end())
    return found->second;
  GLint location = glGetUniformLocation(s.program, name);
  s.uniforms.emplace(name, location);
  return location;
}
void enable(GLenum cap) {
  auto &s = current();
  if (cap == 0xde1)
    s.textures[s.active].enabled = true;
  else if (cap == 0xbc0)
    s.alphaEnabled = true;
  else if (cap == 0xb57 || cap == 0xba1 || cap == 0x803a || cap == 0x809d)
    return;
  else if (cap == 0xb50 || cap == 0xb60)
    throw std::runtime_error("Unsupported legacy lighting/fog state " +
                             std::to_string(cap));
  else
    glEnable(cap);
}
void disable(GLenum cap) {
  auto &s = current();
  if (cap == 0xde1)
    s.textures[s.active].enabled = false;
  else if (cap == 0xbc0)
    s.alphaEnabled = false;
  else if (cap == 0xb50 || cap == 0xb60 || cap == 0xb57 || cap == 0xba1 ||
           cap == 0x803a || cap == 0xbf2 || cap == 0x809d)
    return;
  else
    glDisable(cap);
}
void alphaFunc(GLenum func, GLfloat ref) {
  auto &s = current();
  s.alphaFunc = func;
  s.alphaRef = std::clamp(ref, 0.f, 1.f);
}
void activeTexture(GLenum unit) {
  if (unit < GL_TEXTURE0 || unit >= GL_TEXTURE0 + Units)
    throw std::runtime_error("Texture unit outside reconstructed range");
  current().active = unit - GL_TEXTURE0;
  glActiveTexture(unit);
}
void clientActive(GLenum unit) {
  if (unit < GL_TEXTURE0 || unit >= GL_TEXTURE0 + Units)
    throw std::runtime_error("Client texture unit outside range");
  current().client = unit - GL_TEXTURE0;
}
int arrayIndex(GLenum kind) {
  if (kind == 0x8074)
    return 0;
  if (kind == 0x8076)
    return 1;
  if (kind == 0x8078)
    return 2 + current().client;
  if (kind == 0x8075)
    return -1;
  throw std::runtime_error("Unknown client array");
}
void enableClient(GLenum kind) {
  int i = arrayIndex(kind);
  if (i >= 0)
    current().arrays[i].enabled = true;
}
void disableClient(GLenum kind) {
  int i = arrayIndex(kind);
  if (i >= 0)
    current().arrays[i].enabled = false;
}
void pointer(int index, GLint size, GLenum type, GLsizei stride,
             const void *data) {
  auto &a = current().arrays[index];
  a.size = size;
  a.type = type;
  a.stride = stride;
  a.pointer = data;
  GLint b = 0;
  glGetIntegerv(GL_ARRAY_BUFFER_BINDING, &b);
  a.buffer = b;
}
void vertexPointer(GLint size, GLenum type, GLsizei stride, const void *data) {
  pointer(0, size, type, stride, data);
}
void colorPointer(GLint size, GLenum type, GLsizei stride, const void *data) {
  pointer(1, size, type, stride, data);
}
void texPointer(GLint size, GLenum type, GLsizei stride, const void *data) {
  pointer(2 + current().client, size, type, stride, data);
}
void normalPointer(GLenum, GLsizei, const void *) {
} // Engine renders unlit materials.
void color(GLfloat r, GLfloat g, GLfloat b, GLfloat a) {
  current().color = {r, g, b, a};
}
void matrixMode(GLenum mode) {
  if (mode != 0x1700 && mode != 0x1701 && mode != 0x1702)
    throw std::runtime_error("Unsupported matrix mode");
  current().matrixMode = mode;
}
void loadMatrix(const GLfloat *data) { memcpy(matrix().data(), data, 64); }
void loadIdentity() { matrix() = identity(); }
void texEnvi(GLenum target, GLenum pname, GLint value) {
  if (target != 0x2300)
    throw std::runtime_error("Unknown texture environment target");
  auto &t = current().textures[current().active];
  if (pname == 0x2200)
    t.mode = value;
  else if (pname == 0x8571)
    t.rgb = value;
  else if (pname == 0x8572)
    t.alpha = value;
  else if (pname >= 0x8580 && pname <= 0x8582)
    t.srcRGB[pname - 0x8580] = value;
  else if (pname >= 0x8588 && pname <= 0x858a)
    t.srcAlpha[pname - 0x8588] = value;
  else if (pname >= 0x8590 && pname <= 0x8592)
    t.opRGB[pname - 0x8590] = value;
  else if (pname >= 0x8598 && pname <= 0x859a)
    t.opAlpha[pname - 0x8598] = value;
  else if (pname == 0x8573)
    t.rgbScale = value;
  else if (pname == 0xd1c)
    t.alphaScale = value;
  else
    throw std::runtime_error("Unsupported texture environment parameter " +
                             std::to_string(pname));
}
void texEnvf(GLenum target, GLenum pname, GLfloat value) {
  auto &t = current().textures[current().active];
  if (pname == 0x8573)
    t.rgbScale = value;
  else if (pname == 0xd1c)
    t.alphaScale = value;
  else
    texEnvi(target, pname, int(value));
}
void texEnvfv(GLenum target, GLenum pname, const GLfloat *value) {
  if (target == 0x2300 && pname == 0x2201)
    std::copy(value, value + 4,
              current().textures[current().active].color.begin());
  else
    texEnvf(target, pname, *value);
}
void draw(GLenum mode, GLsizei count, GLenum type, const void *indices) {
  prepare();
  auto &s = current();
  glUseProgram(s.program);
  glUniformMatrix4fv(uniform("uModel"), 1, GL_FALSE, s.model.data());
  glUniformMatrix4fv(uniform("uProjection"), 1, GL_FALSE, s.projection.data());
  GLint enabled[Units], modes[Units], rgbs[Units], alphas[Units],
      srcRGB[Units * 3], srcAlpha[Units * 3], opRGB[Units * 3],
      opAlpha[Units * 3];
  GLfloat colors[Units * 4], scales[Units * 2];
  for (int i = 0; i < Units; i++) {
    auto &t = s.textures[i];
    enabled[i] = t.enabled;
    modes[i] = t.mode;
    rgbs[i] = t.rgb;
    alphas[i] = t.alpha;
    std::copy(t.srcRGB.begin(), t.srcRGB.end(), srcRGB + i * 3);
    std::copy(t.srcAlpha.begin(), t.srcAlpha.end(), srcAlpha + i * 3);
    std::copy(t.opRGB.begin(), t.opRGB.end(), opRGB + i * 3);
    std::copy(t.opAlpha.begin(), t.opAlpha.end(), opAlpha + i * 3);
    std::copy(t.color.begin(), t.color.end(), colors + i * 4);
    scales[i * 2] = t.rgbScale;
    scales[i * 2 + 1] = t.alphaScale;
    glUniformMatrix4fv(uniform(("uTexMatrix" + std::to_string(i)).c_str()), 1,
                       GL_FALSE, t.matrix.data());
    glUniform1i(uniform(("uSampler" + std::to_string(i)).c_str()), i);
  }
  glUniform1iv(uniform("uEnabled"), Units, enabled);
  glUniform1iv(uniform("uMode"), Units, modes);
  glUniform1iv(uniform("uRGB"), Units, rgbs);
  glUniform1iv(uniform("uAlpha"), Units, alphas);
  glUniform3iv(uniform("uSrcRGB"), Units, srcRGB);
  glUniform3iv(uniform("uSrcAlpha"), Units, srcAlpha);
  glUniform3iv(uniform("uOpRGB"), Units, opRGB);
  glUniform3iv(uniform("uOpAlpha"), Units, opAlpha);
  glUniform4fv(uniform("uConstant"), Units, colors);
  glUniform2fv(uniform("uScale"), Units, scales);
  glUniform1i(uniform("uAlphaTest"), s.alphaEnabled);
  glUniform1i(uniform("uAlphaFunc"), s.alphaFunc);
  glUniform1f(uniform("uAlphaRef"), s.alphaRef);
  GLint saved = 0;
  glGetIntegerv(GL_ARRAY_BUFFER_BINDING, &saved);
  for (unsigned i = 0; i < s.arrays.size(); i++) {
    auto &a = s.arrays[i];
    if (a.enabled) {
      glBindBuffer(GL_ARRAY_BUFFER, a.buffer);
      glVertexAttribPointer(i, a.size, a.type, i == 1 ? GL_TRUE : GL_FALSE,
                            a.stride, a.pointer);
      glEnableVertexAttribArray(i);
    } else {
      glDisableVertexAttribArray(i);
      if (i == 1)
        glVertexAttrib4fv(i, s.color.data());
      else
        glVertexAttrib4f(i, 0, 0, 0, 1);
    }
  }
  glBindBuffer(GL_ARRAY_BUFFER, saved);
  glDrawElements(mode, count, type, indices);
}
} // namespace
void resetFixedPipeline() {
  auto ctx = eglGetCurrentContext();
  if (state.context == ctx && state.program && glIsProgram(state.program))
    glDeleteProgram(state.program);
  state = State{};
  state.context = ctx;
}
void *fixedPipelineProc(const char *name) {
#define MAP(n, f)                                                              \
  if (strcmp(name, n) == 0)                                                    \
  return reinterpret_cast<void *>(f)
  MAP("glEnable", enable);
  MAP("glDisable", disable);
  MAP("glAlphaFunc", alphaFunc);
  MAP("glActiveTexture", activeTexture);
  MAP("glClientActiveTexture", clientActive);
  MAP("glEnableClientState", enableClient);
  MAP("glDisableClientState", disableClient);
  MAP("glVertexPointer", vertexPointer);
  MAP("glColorPointer", colorPointer);
  MAP("glTexCoordPointer", texPointer);
  MAP("glNormalPointer", normalPointer);
  MAP("glColor4f", color);
  MAP("glMatrixMode", matrixMode);
  MAP("glLoadMatrixf", loadMatrix);
  MAP("glLoadIdentity", loadIdentity);
  MAP("glTexEnvi", texEnvi);
  MAP("glTexEnvf", texEnvf);
  MAP("glTexEnvfv", texEnvfv);
  MAP("glDrawElements", draw);
  return nullptr;
}
