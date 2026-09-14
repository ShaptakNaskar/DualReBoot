/* 0002f3a4 | STG::FFileMemory::~FFileMemory */

/* STG::FFileMemory::~FFileMemory() */

FFileMemory * __thiscall STG::FFileMemory::~FFileMemory(FFileMemory *this)

{
  ~FFileMemory(this);
  operator_delete(this);
  return this;
}

