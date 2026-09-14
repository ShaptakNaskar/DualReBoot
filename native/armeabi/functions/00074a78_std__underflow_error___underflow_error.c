/* 00074a78 | std::underflow_error::~underflow_error */

/* std::underflow_error::~underflow_error() */

underflow_error * __thiscall std::underflow_error::~underflow_error(underflow_error *this)

{
  ~underflow_error(this);
  operator_delete(this);
  return this;
}

