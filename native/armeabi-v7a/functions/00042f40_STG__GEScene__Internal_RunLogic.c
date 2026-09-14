/* 00042f40 | STG::GEScene::Internal_RunLogic */

/* STG::GEScene::Internal_RunLogic(STG::LLogicBase::EStage) */

void __thiscall STG::GEScene::Internal_RunLogic(GEScene *this,undefined4 param_2)

{
  int *piVar1;
  uint uVar2;
  LLogicSceneWrapper aLStack_14 [4];
  
  if (*(int *)(this + 0x5c0) != 0) {
    LLogicSceneWrapper::LLogicSceneWrapper(aLStack_14,this);
    if (*(int *)(this + 0x5c0) != 0) {
      uVar2 = 0;
      do {
        piVar1 = *(int **)(*(int *)(this + 0x5b8) + uVar2 * 4);
        uVar2 = uVar2 + 1;
        (**(code **)(*piVar1 + 0x14))(piVar1,param_2,aLStack_14);
      } while (uVar2 < *(uint *)(this + 0x5c0));
    }
    LLogicSceneWrapper::~LLogicSceneWrapper(aLStack_14);
  }
  return;
}

