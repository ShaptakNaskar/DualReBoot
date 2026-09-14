/* 0004dd90 | STG::LLogicSceneWrapper::~LLogicSceneWrapper */

/* STG::LLogicSceneWrapper::~LLogicSceneWrapper() */

LLogicSceneWrapper * __thiscall
STG::LLogicSceneWrapper::~LLogicSceneWrapper(LLogicSceneWrapper *this)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)this;
  if (piVar1 != (int *)0x0) {
    iVar2 = piVar1[1];
    piVar1[1] = iVar2 + -1;
    if (iVar2 == 1) {
      (**(code **)(*piVar1 + 4))();
      *(undefined4 *)this = 0;
      return this;
    }
  }
  *(undefined4 *)this = 0;
  return this;
}

