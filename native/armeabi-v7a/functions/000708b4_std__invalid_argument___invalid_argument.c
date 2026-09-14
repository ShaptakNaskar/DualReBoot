/* 000708b4 | std::invalid_argument::~invalid_argument */

/* std::invalid_argument::~invalid_argument() */

invalid_argument * __thiscall std::invalid_argument::~invalid_argument(invalid_argument *this)

{
  *(int *)this = *(int *)(DAT_000708cc + 0x708bc) + 8;
  logic_error::~logic_error((logic_error *)this);
  return this;
}

