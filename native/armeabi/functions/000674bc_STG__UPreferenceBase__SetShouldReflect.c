/* 000674bc | STG::UPreferenceBase::SetShouldReflect */

/* STG::UPreferenceBase::SetShouldReflect(bool) */

uint __thiscall STG::UPreferenceBase::SetShouldReflect(UPreferenceBase *this,bool param_1)

{
  uint uVar1;
  
  uVar1 = (**(code **)(*(int *)this + 4))();
  if (uVar1 != param_1) {
    FUN_00066a04(this,(uint)param_1);
  }
  return uVar1;
}

