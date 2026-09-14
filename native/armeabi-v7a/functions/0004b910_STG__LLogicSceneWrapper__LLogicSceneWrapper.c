/* 0004b910 | STG::LLogicSceneWrapper::LLogicSceneWrapper */

/* STG::LLogicSceneWrapper::LLogicSceneWrapper(STG::GEScene*) */

void __thiscall
STG::LLogicSceneWrapper::LLogicSceneWrapper(LLogicSceneWrapper *this,GEScene *param_1)

{
  *(GEScene **)this = param_1;
  if (param_1 != (GEScene *)0x0) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  return;
}

