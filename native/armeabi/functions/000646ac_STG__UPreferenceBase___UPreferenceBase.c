/* 000646ac | STG::UPreferenceBase::~UPreferenceBase */

/* STG::UPreferenceBase::~UPreferenceBase() */

UPreferenceBase * __thiscall STG::UPreferenceBase::~UPreferenceBase(UPreferenceBase *this)

{
  ~UPreferenceBase(this);
  operator_delete(this);
  return this;
}

