/* 000713e0 | STG::UPreferenceBase::SetShouldReflect */

/* STG::UPreferenceBase::SetShouldReflect(bool) */

undefined4 __thiscall STG::UPreferenceBase::SetShouldReflect(UPreferenceBase *this,bool param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)this + 4))(this);
  if ((bool)(char)uVar1 != param_1) {
    FUN_00070620();
  }
  return uVar1;
}

