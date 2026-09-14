/* 000544f0 | STG::LLogicObjectBase<STG::LLogicSceneWrapper>::~LLogicObjectBase */

/* STG::LLogicObjectBase<STG::LLogicSceneWrapper>::~LLogicObjectBase() */

void __thiscall
STG::LLogicObjectBase<STG::LLogicSceneWrapper>::~LLogicObjectBase
          (LLogicObjectBase<STG::LLogicSceneWrapper> *this)

{
  int unaff_EBX;
  
  FUN_0002e044();
  *(int *)this = *(int *)(unaff_EBX + 0x479e2) + 8;
  operator_delete(this);
  return;
}

