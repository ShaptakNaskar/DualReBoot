/* 0002f440 | STG::FFileBase::~FFileBase */

/* STG::FFileBase::~FFileBase() */

FFileBase * __thiscall STG::FFileBase::~FFileBase(FFileBase *this)

{
  ~FFileBase(this);
  operator_delete(this);
  return this;
}

