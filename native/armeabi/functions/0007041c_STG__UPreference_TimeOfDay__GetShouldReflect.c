/* 0007041c | STG::UPreference_TimeOfDay::GetShouldReflect */

/* STG::UPreference_TimeOfDay::GetShouldReflect() const */

undefined4 __thiscall STG::UPreference_TimeOfDay::GetShouldReflect(UPreference_TimeOfDay *this)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  iVar1 = UPreferenceBase::GetShouldReflect((UPreferenceBase *)this);
  uVar3 = 0;
  if (iVar1 != 0) {
    uVar2 = (**(code **)(*(int *)this + 0x1c))(this);
    if (uVar2 < 2) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  return uVar3;
}

