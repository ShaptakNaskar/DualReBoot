/* 0004dd00 | STG::LLogicObjectBase<STG::LLogicSceneWrapper>::~LLogicObjectBase */

/* STG::LLogicObjectBase<STG::LLogicSceneWrapper>::~LLogicObjectBase() */

LLogicObjectBase<STG::LLogicSceneWrapper> * __thiscall
STG::LLogicObjectBase<STG::LLogicSceneWrapper>::~LLogicObjectBase
          (LLogicObjectBase<STG::LLogicSceneWrapper> *this)

{
  *(int *)this = *(int *)(DAT_0004dd24 + 0x4dd10) + 8;
  operator_delete(this);
  return this;
}

