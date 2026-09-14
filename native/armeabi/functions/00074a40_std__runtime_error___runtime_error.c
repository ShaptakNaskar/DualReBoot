/* 00074a40 | std::runtime_error::~runtime_error */

/* std::runtime_error::~runtime_error() */

runtime_error * __thiscall std::runtime_error::~runtime_error(runtime_error *this)

{
  *(int *)this = *(int *)(DAT_00074a58 + 0x74a4a) + 8;
  __Named_exception::~__Named_exception((__Named_exception *)this);
  return this;
}

