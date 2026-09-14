/* 0004b9f4 | STG::LLogicSceneWrapper::GetModel */

/* STG::LLogicSceneWrapper::GetModel(unsigned long) */

undefined4 __thiscall STG::LLogicSceneWrapper::GetModel(LLogicSceneWrapper *this,ulong param_1)

{
  return *(undefined4 *)(*(int *)(*(int *)this + 0xb0) + param_1 * 4);
}

