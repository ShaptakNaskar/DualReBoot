/* 00081d40 | std::logic_error::~logic_error */

/* std::logic_error::~logic_error() */

void __thiscall std::logic_error::~logic_error(logic_error *this)

{
  int unaff_EBX;
  
  FUN_0002e044();
  *(int *)this = *(int *)("_ZNK3STG7GEModel19CalcRenderTransformERKNS_8GECameraERKNS_7MMatrixERS4_"
                         + unaff_EBX + 0x2f) + 8;
  __Named_exception::~__Named_exception((__Named_exception *)this);
  return;
}

