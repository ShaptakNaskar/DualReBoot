/* 0007ce50 | EngineInterfaceImpl::SetStateLocation */

/* EngineInterfaceImpl::SetStateLocation(int, float, float) const */

undefined4 __thiscall
EngineInterfaceImpl::SetStateLocation
          (EngineInterfaceImpl *this,int param_1,float param_2,float param_3)

{
  undefined4 uVar1;
  int unaff_EBX;
  int local_1c;
  int local_18;
  MLocation local_14 [8];
  
  uVar1 = FUN_0002e044();
  if (param_1 != 0) {
    local_18 = (int)(param_3 * *(float *)(unaff_EBX + 0xa909));
    local_1c = (int)(*(float *)(unaff_EBX + 0xa909) * param_2);
    STG::MLocation::MLocation(local_14,(MFloatQuantized *)&local_1c,(MFloatQuantized *)&local_18);
    STG::GEScene::SetLocation(*(GEScene **)(param_1 + 8),local_14);
    uVar1 = 1;
  }
  return uVar1;
}

