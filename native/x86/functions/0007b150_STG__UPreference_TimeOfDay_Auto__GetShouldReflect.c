/* 0007b150 | STG::UPreference_TimeOfDay_Auto::GetShouldReflect */

/* STG::UPreference_TimeOfDay_Auto::GetShouldReflect() const */

undefined4 __thiscall
STG::UPreference_TimeOfDay_Auto::GetShouldReflect(UPreference_TimeOfDay_Auto *this)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  
  FUN_0002e044();
  cVar2 = UPreferenceBase::GetShouldReflect((UPreferenceBase *)this);
  uVar3 = 0;
  if ((cVar2 != '\0') && (piVar1 = *(int **)(this + 0x88), piVar1 != (int *)0x0)) {
    uVar3 = (**(code **)(*piVar1 + 4))(piVar1);
  }
  return uVar3;
}

