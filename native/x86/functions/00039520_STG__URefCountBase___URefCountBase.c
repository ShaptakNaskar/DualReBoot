/* 00039520 | STG::URefCountBase::~URefCountBase */

/* STG::URefCountBase::~URefCountBase() */

void __thiscall STG::URefCountBase::~URefCountBase(URefCountBase *this)

{
  int unaff_EBX;
  
  FUN_0002e044();
  *(int *)this = *(int *)(unaff_EBX + 0x62956) + 8;
  operator_delete(this);
  return;
}

