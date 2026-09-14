/* 00074b4c | std::length_error::~length_error */

/* std::length_error::~length_error() */

length_error * __thiscall std::length_error::~length_error(length_error *this)

{
  *(int *)this = *(int *)(DAT_00074b64 + 0x74b56) + 8;
  logic_error::~logic_error((logic_error *)this);
  return this;
}

