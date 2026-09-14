/* 0003501c | STG::FFileMemory_Android::~FFileMemory_Android */

/* STG::FFileMemory_Android::~FFileMemory_Android() */

FFileMemory_Android * __thiscall
STG::FFileMemory_Android::~FFileMemory_Android(FFileMemory_Android *this)

{
  ~FFileMemory_Android(this);
  operator_delete(this);
  return this;
}

