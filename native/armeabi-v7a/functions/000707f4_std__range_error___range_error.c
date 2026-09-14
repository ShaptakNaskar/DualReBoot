/* 000707f4 | std::range_error::~range_error */

/* std::range_error::~range_error() */

range_error * __thiscall std::range_error::~range_error(range_error *this)

{
  *(int *)this = *(int *)(DAT_0007080c + 0x707fc) + 8;
  runtime_error::~runtime_error((runtime_error *)this);
  return this;
}

