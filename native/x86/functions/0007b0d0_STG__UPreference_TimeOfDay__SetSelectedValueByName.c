/* 0007b0d0 | STG::UPreference_TimeOfDay::SetSelectedValueByName */

/* STG::UPreference_TimeOfDay::SetSelectedValueByName(STG::UStringBase<char, int> const&) */

undefined4 __thiscall
STG::UPreference_TimeOfDay::SetSelectedValueByName(UPreference_TimeOfDay *this,UStringBase *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 local_18;
  undefined4 local_14 [2];
  
  FUN_0002e044();
  GETimeOfDay::GETimeOfDay((GETimeOfDay *)local_14);
  cVar1 = GETimeOfDay::GetTimeOfDay(*(char **)(param_1 + 0x18),(GETimeOfDay *)local_14);
  uVar2 = 0;
  if (cVar1 != '\0') {
    local_18 = local_14[0];
    uVar2 = (**(code **)(*(int *)this + 0x40))(this,&local_18);
  }
  return uVar2;
}

