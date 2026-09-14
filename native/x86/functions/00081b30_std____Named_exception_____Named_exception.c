/* 00081b30 | std::__Named_exception::~__Named_exception */

/* std::__Named_exception::~__Named_exception() */

void __thiscall std::__Named_exception::~__Named_exception(__Named_exception *this)

{
  int unaff_EBX;
  
  FUN_0002e044();
  *(int *)this = *(int *)("_ZN3STG11GEPixelData9SetFormatENS_13GEPixelFormat7EFormatE" +
                         unaff_EBX + 6) + 8;
  if (*(__Named_exception **)(this + 0x104) != this + 4) {
    free(*(__Named_exception **)(this + 0x104));
  }
  FUN_00083940(this);
  return;
}

