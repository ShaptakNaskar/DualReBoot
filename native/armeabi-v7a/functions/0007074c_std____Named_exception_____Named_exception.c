/* 0007074c | std::__Named_exception::~__Named_exception */

/* std::__Named_exception::~__Named_exception() */

__Named_exception * __thiscall std::__Named_exception::~__Named_exception(__Named_exception *this)

{
  *(int *)this = *(int *)(DAT_00070774 + 0x7075c) + 8;
  if (*(__Named_exception **)(this + 0x104) != this + 4) {
    free(*(__Named_exception **)(this + 0x104));
  }
  FUN_000718e0(this);
  return this;
}

