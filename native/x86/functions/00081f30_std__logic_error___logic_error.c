/* 00081f30 | std::logic_error::~logic_error */

/* std::logic_error::~logic_error() */

void __thiscall std::logic_error::~logic_error(logic_error *this)

{
  FUN_0002e044();
  ~logic_error(this);
  operator_delete(this);
  return;
}

