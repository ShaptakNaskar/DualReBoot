/* 00076990 | STG::UPreference_Scene::GetPreferenceType */

/* STG::UPreference_Scene::GetPreferenceType(STG::UPreferenceBase const*) const */

undefined4 __thiscall
STG::UPreference_Scene::GetPreferenceType(UPreference_Scene *this,UPreferenceBase *param_1)

{
  undefined4 uVar1;
  
  if (param_1 != (UPreferenceBase *)0x0) {
    uVar1 = FUN_00076390();
    return uVar1;
  }
  return 0xb;
}

