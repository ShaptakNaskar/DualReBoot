/* 0006d148 | EngineInterfaceImpl::SetStateLocation */

/* EngineInterfaceImpl::SetStateLocation(int, float, float) const */

bool __thiscall
EngineInterfaceImpl::SetStateLocation
          (EngineInterfaceImpl *this,int param_1,float param_2,float param_3)

{
  GEScene *this_00;
  int local_18;
  int local_14;
  MLocation aMStack_10 [8];
  
  if (param_1 != 0) {
    this_00 = *(GEScene **)(param_1 + 8);
    local_18 = (int)(param_2 * DAT_0006d1a4);
    local_14 = (int)(param_3 * DAT_0006d1a4);
    STG::MLocation::MLocation(aMStack_10,(MFloatQuantized *)&local_18,(MFloatQuantized *)&local_14);
    STG::GEScene::SetLocation(this_00,aMStack_10);
  }
  return param_1 != 0;
}

