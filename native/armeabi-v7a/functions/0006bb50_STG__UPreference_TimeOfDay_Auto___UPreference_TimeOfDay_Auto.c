/* 0006bb50 | STG::UPreference_TimeOfDay_Auto::~UPreference_TimeOfDay_Auto */

/* STG::UPreference_TimeOfDay_Auto::~UPreference_TimeOfDay_Auto() */

UPreference_TimeOfDay_Auto * __thiscall
STG::UPreference_TimeOfDay_Auto::~UPreference_TimeOfDay_Auto(UPreference_TimeOfDay_Auto *this)

{
  ~UPreference_TimeOfDay_Auto(this);
  operator_delete(this);
  return this;
}

