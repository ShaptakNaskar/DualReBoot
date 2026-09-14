/* 00070884 | std::length_error::~length_error */

/* std::length_error::~length_error() */

length_error * __thiscall std::length_error::~length_error(length_error *this)

{
  *(int *)this = *(int *)(DAT_0007089c + 0x7088c) + 8;
  logic_error::~logic_error((logic_error *)this);
  return this;
}

