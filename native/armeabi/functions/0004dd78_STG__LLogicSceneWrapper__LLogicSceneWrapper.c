/* 0004dd78 | STG::LLogicSceneWrapper::LLogicSceneWrapper */

/* STG::LLogicSceneWrapper::LLogicSceneWrapper(STG::GEScene*) */

void __thiscall
STG::LLogicSceneWrapper::LLogicSceneWrapper(LLogicSceneWrapper *this,GEScene *param_1)

{
  int in_r3;
  
  if (param_1 != (GEScene *)0x0) {
    in_r3 = *(int *)(param_1 + 4);
  }
  *(GEScene **)this = param_1;
  if (param_1 != (GEScene *)0x0) {
    *(int *)(param_1 + 4) = in_r3 + 1;
  }
  return;
}

