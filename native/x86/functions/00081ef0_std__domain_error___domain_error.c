/* 00081ef0 | std::domain_error::~domain_error */

/* std::domain_error::~domain_error() */

void __thiscall std::domain_error::~domain_error(domain_error *this)

{
  FUN_0002e044();
  ~domain_error(this);
  operator_delete(this);
  return;
}

