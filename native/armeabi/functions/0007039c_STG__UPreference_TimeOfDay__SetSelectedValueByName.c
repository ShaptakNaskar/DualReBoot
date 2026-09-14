/* 0007039c | STG::UPreference_TimeOfDay::SetSelectedValueByName */

/* STG::UPreference_TimeOfDay::SetSelectedValueByName(STG::UStringBase<char, int> const&) */

void __thiscall
STG::UPreference_TimeOfDay::SetSelectedValueByName(UPreference_TimeOfDay *this,UStringBase *param_1)

{
  int iVar1;
  GETimeOfDay local_18 [12];
  
  GETimeOfDay::GETimeOfDay(local_18);
  iVar1 = GETimeOfDay::GetTimeOfDay(*(char **)(param_1 + 0x18),local_18);
  if (iVar1 != 0) {
    (**(code **)(*(int *)this + 0x40))(this);
  }
  return;
}

