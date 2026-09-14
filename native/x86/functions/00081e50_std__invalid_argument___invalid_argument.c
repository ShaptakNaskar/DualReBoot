/* 00081e50 | std::invalid_argument::~invalid_argument */

/* std::invalid_argument::~invalid_argument() */

void __thiscall std::invalid_argument::~invalid_argument(invalid_argument *this)

{
  int unaff_EBX;
  
  FUN_0002e044();
  *(int *)this = *(int *)("_ZN3STG7GEModel8LoadSelfERKNS_9FFileHashE" + unaff_EBX + 0x14) + 8;
  logic_error::~logic_error((logic_error *)this);
  return;
}

