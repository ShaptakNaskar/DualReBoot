/* 00070838 | std::logic_error::~logic_error */

/* std::logic_error::~logic_error() */

logic_error * __thiscall std::logic_error::~logic_error(logic_error *this)

{
  *(int *)this = *(int *)(DAT_00070850 + 0x70840) + 8;
  __Named_exception::~__Named_exception((__Named_exception *)this);
  return this;
}

