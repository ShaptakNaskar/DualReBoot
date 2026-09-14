/* 00074b7c | std::invalid_argument::~invalid_argument */

/* std::invalid_argument::~invalid_argument() */

invalid_argument * __thiscall std::invalid_argument::~invalid_argument(invalid_argument *this)

{
  *(int *)this = *(int *)(DAT_00074b94 + 0x74b86) + 8;
  logic_error::~logic_error((logic_error *)this);
  return this;
}

