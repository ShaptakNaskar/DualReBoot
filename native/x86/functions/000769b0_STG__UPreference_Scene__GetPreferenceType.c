/* 000769b0 | STG::UPreference_Scene::GetPreferenceType */

/* STG::UPreference_Scene::GetPreferenceType(STG::UStringBase<char, int> const&) const */

void __thiscall
STG::UPreference_Scene::GetPreferenceType(UPreference_Scene *this,UStringBase *param_1)

{
  UPreferenceBase *pUVar1;
  
  FUN_0002e044();
  pUVar1 = (UPreferenceBase *)FindPreference(this,param_1);
  GetPreferenceType(this,pUVar1);
  return;
}

