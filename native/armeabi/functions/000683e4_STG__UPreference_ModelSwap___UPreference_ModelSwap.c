/* 000683e4 | STG::UPreference_ModelSwap::~UPreference_ModelSwap */

/* STG::UPreference_ModelSwap::~UPreference_ModelSwap() */

UPreference_ModelSwap * __thiscall
STG::UPreference_ModelSwap::~UPreference_ModelSwap(UPreference_ModelSwap *this)

{
  ~UPreference_ModelSwap(this);
  operator_delete(this);
  return this;
}

