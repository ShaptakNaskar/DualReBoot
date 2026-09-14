/* 00038cd8 | STG::URefCountBase::~URefCountBase */

/* STG::URefCountBase::~URefCountBase() */

URefCountBase * __thiscall STG::URefCountBase::~URefCountBase(URefCountBase *this)

{
  *(int *)this = *(int *)(DAT_00038cfc + 0x38ce8) + 8;
  operator_delete(this);
  return this;
}

