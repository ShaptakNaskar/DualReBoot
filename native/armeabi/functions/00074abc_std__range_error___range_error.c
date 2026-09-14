/* 00074abc | std::range_error::~range_error */

/* std::range_error::~range_error() */

range_error * __thiscall std::range_error::~range_error(range_error *this)

{
  *(int *)this = *(int *)(DAT_00074ad4 + 0x74ac6) + 8;
  runtime_error::~runtime_error((runtime_error *)this);
  return this;
}

