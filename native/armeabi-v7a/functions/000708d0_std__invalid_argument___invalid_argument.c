/* 000708d0 | std::invalid_argument::~invalid_argument */

/* std::invalid_argument::~invalid_argument() */

invalid_argument * __thiscall std::invalid_argument::~invalid_argument(invalid_argument *this)

{
  ~invalid_argument(this);
  operator_delete(this);
  return this;
}

