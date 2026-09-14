/* 0004b898 | STG::LLogicObjectBase<STG::LLogicSceneWrapper>::~LLogicObjectBase */

/* STG::LLogicObjectBase<STG::LLogicSceneWrapper>::~LLogicObjectBase() */

LLogicObjectBase<STG::LLogicSceneWrapper> * __thiscall
STG::LLogicObjectBase<STG::LLogicSceneWrapper>::~LLogicObjectBase
          (LLogicObjectBase<STG::LLogicSceneWrapper> *this)

{
  *(int *)this = *(int *)(DAT_0004b8bc + 0x4b8a8) + 8;
  operator_delete(this);
  return this;
}

