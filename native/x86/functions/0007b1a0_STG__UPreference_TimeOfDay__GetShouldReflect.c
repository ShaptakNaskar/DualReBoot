/* 0007b1a0 | STG::UPreference_TimeOfDay::GetShouldReflect */

/* STG::UPreference_TimeOfDay::GetShouldReflect() const */

bool __thiscall STG::UPreference_TimeOfDay::GetShouldReflect(UPreference_TimeOfDay *this)

{
  char cVar1;
  uint uVar2;
  bool bVar3;
  
  FUN_0002e044();
  cVar1 = UPreferenceBase::GetShouldReflect((UPreferenceBase *)this);
  bVar3 = false;
  if (cVar1 != '\0') {
    uVar2 = (**(code **)(*(int *)this + 0x1c))(this);
    bVar3 = 1 < uVar2;
  }
  return bVar3;
}

