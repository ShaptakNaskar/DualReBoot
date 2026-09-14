/* 00045080 | STG::GEScene::SetLogicObject */

/* STG::GEScene::SetLogicObject(unsigned long, STG::LLogicScene::EType) */

void __thiscall STG::GEScene::SetLogicObject(GEScene *this,int param_1,undefined4 param_3)

{
  undefined4 uVar1;
  
  FUN_0002e044();
  uVar1 = LLogicScene::Allocate(param_3);
  *(undefined4 *)(*(int *)(this + 0x59c) + param_1 * 4) = uVar1;
  return;
}

