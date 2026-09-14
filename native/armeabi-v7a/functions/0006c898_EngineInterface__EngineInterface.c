/* 0006c898 | EngineInterface::EngineInterface */

/* EngineInterface::EngineInterface() */

EngineInterface * __thiscall EngineInterface::EngineInterface(EngineInterface *this)

{
  GERenderer_Android *this_00;
  GEScene *this_01;
  GEMaterial *this_02;
  MLocation aMStack_18 [12];
  
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  this[0xc] = (EngineInterface)0x0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  this_00 = operator_new(0x380);
  STG::GERenderer_Android::GERenderer_Android(this_00);
  *(GERenderer_Android **)this = this_00;
  STG::MLocation::MLocation(aMStack_18);
  this_01 = operator_new(0x798);
  STG::GEScene::GEScene(this_01,aMStack_18);
  *(GEScene **)(this + 8) = this_01;
  this_02 = operator_new(0x158);
  STG::GEMaterial::GEMaterial(this_02);
  *(GEMaterial **)(this + 4) = this_02;
  *(undefined4 *)(this_02 + 0x13c) = 1;
  *(undefined4 *)(this_02 + 0x144) = 2;
  return this;
}

