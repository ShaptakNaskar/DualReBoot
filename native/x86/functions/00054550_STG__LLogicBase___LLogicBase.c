/* 00054550 | STG::LLogicBase::~LLogicBase */

/* STG::LLogicBase::~LLogicBase() */

void __thiscall STG::LLogicBase::~LLogicBase(LLogicBase *this)

{
  int unaff_EBX;
  
  FUN_0002e044();
  *(int *)this = *(int *)(unaff_EBX + 0x47982) + 8;
  operator_delete(this);
  return;
}

