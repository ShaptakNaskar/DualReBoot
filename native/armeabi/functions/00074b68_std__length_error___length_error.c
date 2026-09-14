/* 00074b68 | std::length_error::~length_error */

/* std::length_error::~length_error() */

length_error * __thiscall std::length_error::~length_error(length_error *this)

{
  ~length_error(this);
  operator_delete(this);
  return this;
}

