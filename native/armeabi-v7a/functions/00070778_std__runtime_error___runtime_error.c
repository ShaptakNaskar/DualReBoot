/* 00070778 | std::runtime_error::~runtime_error */

/* std::runtime_error::~runtime_error() */

runtime_error * __thiscall std::runtime_error::~runtime_error(runtime_error *this)

{
  *(int *)this = *(int *)(DAT_00070790 + 0x70780) + 8;
  __Named_exception::~__Named_exception((__Named_exception *)this);
  return this;
}

