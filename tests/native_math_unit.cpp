#include "native_math.hpp"
#include <algorithm>
#include <array>
#include <cmath>
#include <iostream>
#include <stdexcept>

void equal(float actual,float expected) {
  if(actual!=expected)throw std::runtime_error("Native math contract mismatch");
}
int main() {
  try {
    std::array<float,8> a{0,10,-2,99,1,2,3,98}, b{4,2,6,777,3,4,5,888};
    std::array<float,8> output{0,0,0,-123,0,0,0,-456};
    beach_math::blend(output.data(),a.data(),b.data(),.25f,2);
    std::array<float,8> expected{1,8,0,-123,1.5f,2.5f,3.5f,-456};
    for(size_t i=0;i<8;i++)equal(output[i],expected[i]);
    beach_math::blend(a.data(),a.data(),b.data(),.25f,2);
    equal(a[0],1);equal(a[1],8);equal(a[2],0);equal(a[3],99);equal(a[7],98);
    beach_math::blend(nullptr,nullptr,nullptr,.5f,0);
    beach_math::skin3(nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,0);

    std::array<float,48> bones{};
    for(size_t i=0;i<3;i++)for(size_t j=0;j<4;j++)bones[i*16+j*5]=1;
    bones[12]=10;bones[13]=20;bones[14]=30;
    bones[28]=-10;bones[29]=-20;bones[30]=-30;
    bones[44]=2;bones[45]=4;bones[46]=6;
    float point[]{2,3,4,91}, result[]{0,0,0,42};
    float w0[]{.25f,999,999,999},w1[]{.25f,999,999,999},w2[]{.5f,999,999,999};
    beach_math::skin3(result,point,bones.data(),w0,w1,w2,1);
    equal(result[0],3);equal(result[1],5);equal(result[2],7);equal(result[3],42);

    std::array<float,16> identity{},matrix{},product{};
    for(size_t i=0;i<4;i++)identity[i*5]=1;
    for(size_t i=0;i<16;i++)matrix[i]=float(i+1);
    for(auto kind:{beach_math::MatrixKind::Full,beach_math::MatrixKind::AffineRight,
                   beach_math::MatrixKind::LinearRight,beach_math::MatrixKind::TransposedLinearProduct}) {
      beach_math::transform(matrix.data(),identity.data(),product.data(),kind);
      for(size_t i=0;i<16;i++)equal(product[i],matrix[i]);
    }
    auto diagonal=identity;diagonal[0]=2;diagonal[5]=3;diagonal[10]=4;
    beach_math::transform(matrix.data(),diagonal.data(),product.data(),beach_math::MatrixKind::TransposedLinearProduct);
    // This recovered routine is transpose(B)*A, so it scales rows, not columns.
    equal(product[1],4);equal(product[4],15);equal(product[8],36);
    for(size_t i:{3u,7u,11u,12u,13u,14u,15u})equal(product[i],matrix[i]);
    std::cout<<"PASS: vector stride/W preservation, skin weights, zero counts, matrix layouts\n";
  }catch(const std::exception& error){std::cerr<<error.what()<<"\n";return 1;}
}
