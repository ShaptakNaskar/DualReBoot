/* 00041fe0 | STG::GEScene::SetLogicObject */

/* STG::GEScene::SetLogicObject(unsigned long, STG::LLogicScene::EType) */

void __thiscall STG::GEScene::SetLogicObject(GEScene *this,int param_1,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = LLogicScene::Allocate(param_3);
  *(undefined4 *)(*(int *)(this + 0x5b0) + param_1 * 4) = uVar1;
  return;
}

