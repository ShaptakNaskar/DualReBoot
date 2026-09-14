/* 0004b8e8 | STG::LLogicBase::~LLogicBase */

/* STG::LLogicBase::~LLogicBase() */

LLogicBase * __thiscall STG::LLogicBase::~LLogicBase(LLogicBase *this)

{
  *(int *)this = *(int *)(DAT_0004b90c + 0x4b8f8) + 8;
  operator_delete(this);
  return this;
}

