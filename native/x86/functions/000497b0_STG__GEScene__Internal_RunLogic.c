/* 000497b0 | STG::GEScene::Internal_RunLogic */

/* STG::GEScene::Internal_RunLogic(STG::LLogicBase::EStage) */

void __thiscall STG::GEScene::Internal_RunLogic(GEScene *this,undefined4 param_2)

{
  int *piVar1;
  uint uVar2;
  LLogicSceneWrapper local_20 [16];
  
  FUN_0002e044();
  if (*(int *)(this + 0x5ac) != 0) {
    LLogicSceneWrapper::LLogicSceneWrapper(local_20,this);
    if (*(int *)(this + 0x5ac) != 0) {
      uVar2 = 0;
      do {
        piVar1 = *(int **)(*(int *)(this + 0x5a4) + uVar2 * 4);
        uVar2 = uVar2 + 1;
        (**(code **)(*piVar1 + 0x14))(piVar1,param_2,local_20);
      } while (uVar2 < *(uint *)(this + 0x5ac));
    }
    LLogicSceneWrapper::~LLogicSceneWrapper(local_20);
  }
  return;
}

