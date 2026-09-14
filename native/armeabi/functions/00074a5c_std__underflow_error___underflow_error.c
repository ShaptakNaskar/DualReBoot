/* 00074a5c | std::underflow_error::~underflow_error */

/* std::underflow_error::~underflow_error() */

underflow_error * __thiscall std::underflow_error::~underflow_error(underflow_error *this)

{
  *(int *)this = *(int *)(DAT_00074a74 + 0x74a66) + 8;
  runtime_error::~runtime_error((runtime_error *)this);
  return this;
}

