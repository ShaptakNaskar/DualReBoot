/* 00074bdc | std::logic_error::~logic_error */

/* std::logic_error::~logic_error() */

logic_error * __thiscall std::logic_error::~logic_error(logic_error *this)

{
  ~logic_error(this);
  operator_delete(this);
  return this;
}

