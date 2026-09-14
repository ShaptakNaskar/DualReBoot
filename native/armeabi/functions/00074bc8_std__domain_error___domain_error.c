/* 00074bc8 | std::domain_error::~domain_error */

/* std::domain_error::~domain_error() */

domain_error * __thiscall std::domain_error::~domain_error(domain_error *this)

{
  ~domain_error(this);
  operator_delete(this);
  return this;
}

