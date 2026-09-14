/* 0007edd0 | EngineInterfaceImpl::SetPreferenceTimeOfDayAuto */

/* EngineInterfaceImpl::SetPreferenceTimeOfDayAuto(int, _jstring*, _jstring*) const */

void __thiscall
EngineInterfaceImpl::SetPreferenceTimeOfDayAuto
          (EngineInterfaceImpl *this,int param_1,_jstring *param_2,_jstring *param_3)

{
  FUN_0002e044();
  SetPreference(this,1,param_1,param_2,param_3);
  return;
}

