/* 00070928 | std::__Named_exception::~__Named_exception */

/* std::__Named_exception::~__Named_exception() */

__Named_exception * __thiscall std::__Named_exception::~__Named_exception(__Named_exception *this)

{
  ~__Named_exception(this);
  operator_delete(this);
  return this;
}

