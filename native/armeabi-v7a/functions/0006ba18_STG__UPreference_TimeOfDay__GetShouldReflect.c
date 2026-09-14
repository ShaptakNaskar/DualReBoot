/* 0006ba18 | STG::UPreference_TimeOfDay::GetShouldReflect */

/* STG::UPreference_TimeOfDay::GetShouldReflect() const */

bool __thiscall STG::UPreference_TimeOfDay::GetShouldReflect(UPreference_TimeOfDay *this)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = UPreferenceBase::GetShouldReflect((UPreferenceBase *)this);
  if (iVar1 != 0) {
    uVar2 = (**(code **)(*(int *)this + 0x1c))(this);
    return 1 < uVar2;
  }
  return false;
}

