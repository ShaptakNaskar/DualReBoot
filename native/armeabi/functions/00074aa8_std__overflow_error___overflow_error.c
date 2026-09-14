/* 00074aa8 | std::overflow_error::~overflow_error */

/* std::overflow_error::~overflow_error() */

overflow_error * __thiscall std::overflow_error::~overflow_error(overflow_error *this)

{
  ~overflow_error(this);
  operator_delete(this);
  return this;
}

