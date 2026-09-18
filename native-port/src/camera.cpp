#include "beach/geometry.hpp"
#include <cmath>
#include <stdexcept>

namespace beach {
namespace {
float dot(const Vector3& a, const Vector3& b) { return a[0]*b[0] + a[1]*b[1] + a[2]*b[2]; }
Vector3 cross(const Vector3& a, const Vector3& b) {
    return {a[1]*b[2]-a[2]*b[1], a[2]*b[0]-a[0]*b[2], a[0]*b[1]-a[1]*b[0]};
}
Vector3 unit(Vector3 value) {
    const auto length = std::sqrt(dot(value, value));
    if (!std::isfinite(length) || length < 1e-8f) throw std::runtime_error("degenerate camera basis");
    for (auto& x : value) x /= length;
    return value;
}
} // namespace
Matrix multiply(const Matrix& a, const Matrix& b) {
    Matrix result{};
    for (unsigned c = 0; c < 4; ++c) for (unsigned r = 0; r < 4; ++r)
        for (unsigned k = 0; k < 4; ++k) result[c*4+r] += a[k*4+r]*b[c*4+k];
    return result;
}
Matrix viewMatrix(const Camera& camera) {
    const auto z = unit({camera.eye[0]-camera.target[0], camera.eye[1]-camera.target[1], camera.eye[2]-camera.target[2]});
    const auto x = unit(cross(camera.up, z));
    const auto y = unit(cross(z, x));
    return {x[0],y[0],z[0],0, x[1],y[1],z[1],0, x[2],y[2],z[2],0,
            -dot(x,camera.eye),-dot(y,camera.eye),-dot(z,camera.eye),1};
}
Matrix projectionMatrix(const Camera& camera, float aspect) {
    if (!std::isfinite(aspect) || aspect <= 0) throw std::runtime_error("invalid viewport aspect");
    if (!std::isfinite(camera.fovDegrees) || camera.fovDegrees <= 0 || camera.fovDegrees >= 179 ||
        !std::isfinite(camera.nearPlane) || !std::isfinite(camera.farPlane) ||
        camera.nearPlane <= 0 || camera.farPlane <= camera.nearPlane)
        throw std::runtime_error("invalid perspective parameters");
    const auto scale = 1.0f / std::tan(camera.fovDegrees * 0.008726646259971648f);
    const auto divisor = camera.nearPlane - camera.farPlane;
    Matrix result{};
    result[0] = scale / aspect; result[5] = scale;
    result[10] = (camera.nearPlane+camera.farPlane)/divisor; result[11] = -1;
    result[14] = 2*camera.nearPlane*camera.farPlane/divisor;
    return result;
}
std::vector<Matrix> renderTransforms(const SceneGeometry& scene, const Camera& camera) {
    std::vector<Matrix> result(scene.matrices.size());
    for (const auto& [index, parent] : scene.transformOrder) {
        auto transform = scene.matrices.at(index);
        if (parent != 0xffffffff) transform = multiply(result.at(parent),transform);
        const auto& model = scene.models.at(index);
        if (model.billboard || model.clipPositionEnabled)
            throw std::runtime_error("unsupported model camera transform: " + model.name);
        if (model.followsCamera)
            for (unsigned axis = 0; axis < 3; ++axis) transform[12+axis] += camera.eye[axis]*model.cameraFactor;
        result.at(index) = transform;
    }
    return result;
}
} // namespace beach
