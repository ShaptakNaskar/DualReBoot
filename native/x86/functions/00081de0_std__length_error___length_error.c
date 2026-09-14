/* 00081de0 | std::length_error::~length_error */

/* std::length_error::~length_error() */

void __thiscall std::length_error::~length_error(length_error *this)

{
  int unaff_EBX;
  
  FUN_0002e044();
  *(int *)this = *(int *)("_ZN3STG7GEModelC2Ev" + unaff_EBX + 7) + 8;
  logic_error::~logic_error((logic_error *)this);
  return;
}

