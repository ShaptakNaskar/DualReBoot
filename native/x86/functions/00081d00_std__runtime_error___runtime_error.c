/* 00081d00 | std::runtime_error::~runtime_error */

/* std::runtime_error::~runtime_error() */

void __thiscall std::runtime_error::~runtime_error(runtime_error *this)

{
  FUN_0002e044();
  ~runtime_error(this);
  operator_delete(this);
  return;
}

