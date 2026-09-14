/* 0004dd50 | STG::LLogicBase::~LLogicBase */

/* STG::LLogicBase::~LLogicBase() */

LLogicBase * __thiscall STG::LLogicBase::~LLogicBase(LLogicBase *this)

{
  *(int *)this = *(int *)(DAT_0004dd74 + 0x4dd60) + 8;
  operator_delete(this);
  return this;
}

