/* 00074b00 | std::logic_error::~logic_error */

/* std::logic_error::~logic_error() */

logic_error * __thiscall std::logic_error::~logic_error(logic_error *this)

{
  *(int *)this = *(int *)(DAT_00074b18 + 0x74b0a) + 8;
  __Named_exception::~__Named_exception((__Named_exception *)this);
  return this;
}

