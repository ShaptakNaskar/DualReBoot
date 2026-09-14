/* 00081c50 | std::overflow_error::~overflow_error */

/* std::overflow_error::~overflow_error() */

void __thiscall std::overflow_error::~overflow_error(overflow_error *this)

{
  FUN_0002e044();
  ~overflow_error(this);
  operator_delete(this);
  return;
}

