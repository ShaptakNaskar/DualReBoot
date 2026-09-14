/* 00070810 | std::range_error::~range_error */

/* std::range_error::~range_error() */

range_error * __thiscall std::range_error::~range_error(range_error *this)

{
  ~range_error(this);
  operator_delete(this);
  return this;
}

