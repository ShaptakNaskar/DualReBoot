/* 000703ec | STG::UPreference_TimeOfDay_Auto::GetShouldReflect */

/* STG::UPreference_TimeOfDay_Auto::GetShouldReflect() const */

void __thiscall STG::UPreference_TimeOfDay_Auto::GetShouldReflect(UPreference_TimeOfDay_Auto *this)

{
  int iVar1;
  
  iVar1 = UPreferenceBase::GetShouldReflect((UPreferenceBase *)this);
  if ((iVar1 != 0) && (*(int **)(this + 0x88) != (int *)0x0)) {
    (**(code **)(**(int **)(this + 0x88) + 4))();
  }
  return;
}

