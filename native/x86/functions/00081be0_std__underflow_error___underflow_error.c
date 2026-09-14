/* 00081be0 | std::underflow_error::~underflow_error */

/* std::underflow_error::~underflow_error() */

void __thiscall std::underflow_error::~underflow_error(underflow_error *this)

{
  FUN_0002e044();
  ~underflow_error(this);
  operator_delete(this);
  return;
}

