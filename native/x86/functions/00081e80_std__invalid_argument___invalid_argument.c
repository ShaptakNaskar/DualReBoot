/* 00081e80 | std::invalid_argument::~invalid_argument */

/* std::invalid_argument::~invalid_argument() */

void __thiscall std::invalid_argument::~invalid_argument(invalid_argument *this)

{
  FUN_0002e044();
  ~invalid_argument(this);
  operator_delete(this);
  return;
}

