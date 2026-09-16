#pragma once
#include <cstddef>

namespace beach_math {
inline constexpr const char *symbols[] = {
    "_ZN3STG5MSIMD16BlendVector4f_SWEPfPKfS3_fm",
    "_ZN3STG5MSIMD16Skin3Vector4f_SWEPfPKfS3_S3_S3_S3_m",
    "_ZNK3STG7MMatrix9TransformERKS0_RS0_",
    "_ZNK3STG7MMatrix12Transform4x3ERKS0_RS0_",
    "_ZNK3STG7MMatrix12Transform3x3ERKS0_RS0_",
    "_ZNK3STG7MMatrix22Transform3x3_TransposeERKS0_RS0_"};
// Recovered interfaces use vec4-sized storage, but blend/skin write XYZ only.
void blend(float *output, const float *a, const float *b, float weight,
           size_t count);
void skin3(float *output, const float *vertices, const float *matrices,
           const float *weight0, const float *weight1, const float *weight2,
           size_t count);
enum class MatrixKind {
  Full,
  AffineRight,
  LinearRight,
  TransposedLinearProduct
};
void transform(const float *a, const float *b, float *output, MatrixKind kind);
} // namespace beach_math
