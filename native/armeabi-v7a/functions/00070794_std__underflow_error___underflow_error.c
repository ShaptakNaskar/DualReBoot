/* 00070794 | std::underflow_error::~underflow_error */

/* std::underflow_error::~underflow_error() */

underflow_error * __thiscall std::underflow_error::~underflow_error(underflow_error *this)

{
  *(int *)this = *(int *)(DAT_000707ac + 0x7079c) + 8;
  runtime_error::~runtime_error((runtime_error *)this);
  return this;
}

