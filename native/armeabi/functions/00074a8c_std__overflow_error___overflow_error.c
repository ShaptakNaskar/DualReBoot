/* 00074a8c | std::overflow_error::~overflow_error */

/* std::overflow_error::~overflow_error() */

overflow_error * __thiscall std::overflow_error::~overflow_error(overflow_error *this)

{
  *(int *)this = *(int *)(DAT_00074aa4 + 0x74a96) + 8;
  runtime_error::~runtime_error((runtime_error *)this);
  return this;
}

