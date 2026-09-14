/* 00036f64 | STG::URefCountBase::~URefCountBase */

/* STG::URefCountBase::~URefCountBase() */

URefCountBase * __thiscall STG::URefCountBase::~URefCountBase(URefCountBase *this)

{
  *(int *)this = *(int *)(DAT_00036f88 + 0x36f74) + 8;
  operator_delete(this);
  return this;
}

