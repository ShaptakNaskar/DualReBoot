/* 00081cc0 | std::range_error::~range_error */

/* std::range_error::~range_error() */

void __thiscall std::range_error::~range_error(range_error *this)

{
  FUN_0002e044();
  ~range_error(this);
  operator_delete(this);
  return;
}

