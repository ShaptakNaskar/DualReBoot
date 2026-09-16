#include "native_math.hpp"
#include <algorithm>

namespace beach_math {
void blend(float *output, const float *a, const float *b, float weight,
           size_t count) {
  for (size_t i = 0; i < count; i++) {
    const size_t n = i * 4;
    const float x = a[n] + (b[n] - a[n]) * weight;
    const float y = a[n + 1] + (b[n + 1] - a[n + 1]) * weight;
    const float z = a[n + 2] + (b[n + 2] - a[n + 2]) * weight;
    output[n] = x;
    output[n + 1] = y;
    output[n + 2] = z;
    // The fourth component belongs to the caller and is deliberately untouched.
  }
}
void skin3(float *output, const float *vertices, const float *matrices,
           const float *weight0, const float *weight1, const float *weight2,
           size_t count) {
  for (size_t i = 0; i < count; i++) {
    const size_t n = i * 4;
    const float x = vertices[n], y = vertices[n + 1], z = vertices[n + 2];
    const float w0 = weight0[n], w1 = weight1[n], w2 = weight2[n];
    float value[3];
    for (size_t component = 0; component < 3; component++) {
      auto point = [&](size_t bone) {
        const float *m = matrices + bone * 16;
        // Retain the original scalar operation order; no fused multiply/add.
        return ((y * m[4 + component] + x * m[component]) + m[12 + component]) +
               z * m[8 + component];
      };
      value[component] = (point(1) * w1 + point(0) * w0) + point(2) * w2;
    }
    std::copy(value, value + 3, output + n);
  }
}
void transform(const float *a, const float *b, float *output, MatrixKind kind) {
  float result[16];
  std::copy(a, a + 16, result);
  const size_t rows =
      (kind == MatrixKind::Full || kind == MatrixKind::AffineRight) ? 4 : 3;
  const size_t columns = kind == MatrixKind::Full ? 4 : 3;
  const size_t terms =
      (kind == MatrixKind::Full || kind == MatrixKind::AffineRight) ? 4 : 3;
  for (size_t row = 0; row < rows; row++) {
    for (size_t column = 0; column < columns; column++) {
      float value;
      if (kind == MatrixKind::TransposedLinearProduct) {
        // Original Transform3x3_Transpose computes transpose(B) * A in
        // row-major storage, not A * transpose(B). Preserve its untouched
        // cells.
        value = a[column] * b[row];
        for (size_t k = 1; k < 3; k++)
          value = value + a[k * 4 + column] * b[k * 4 + row];
      } else {
        value = a[row * 4] * b[column];
        for (size_t k = 1; k < terms; k++)
          value = value + a[row * 4 + k] * b[k * 4 + column];
      }
      result[row * 4 + column] = value;
    }
  }
  std::copy(result, result + 16, output);
}
} // namespace beach_math
