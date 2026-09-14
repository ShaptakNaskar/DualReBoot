/* 00074a14 | std::__Named_exception::~__Named_exception */

/* std::__Named_exception::~__Named_exception() */

__Named_exception * __thiscall std::__Named_exception::~__Named_exception(__Named_exception *this)

{
  *(int *)this = *(int *)(DAT_00074a3c + 0x74a1e) + 8;
  if (*(__Named_exception **)(this + 0x104) != this + 4) {
    free(*(__Named_exception **)(this + 0x104));
  }
  FUN_00075b08(this);
  return this;
}

