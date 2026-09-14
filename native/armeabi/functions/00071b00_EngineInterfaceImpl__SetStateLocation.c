/* 00071b00 | EngineInterfaceImpl::SetStateLocation */

/* EngineInterfaceImpl::SetStateLocation(int, float, float) const */

bool __thiscall
EngineInterfaceImpl::SetStateLocation
          (EngineInterfaceImpl *this,int param_1,float param_2,float param_3)

{
  GEScene *this_00;
  undefined4 local_20;
  undefined4 local_1c;
  MLocation aMStack_18 [12];
  
  if (param_1 != 0) {
    this_00 = *(GEScene **)(param_1 + 8);
    __mulsf3();
    local_20 = __fixsfsi();
    __mulsf3();
    local_1c = __fixsfsi();
    STG::MLocation::MLocation(aMStack_18,(MFloatQuantized *)&local_20,(MFloatQuantized *)&local_1c);
    STG::GEScene::SetLocation(this_00,aMStack_18);
  }
  return param_1 != 0;
}

