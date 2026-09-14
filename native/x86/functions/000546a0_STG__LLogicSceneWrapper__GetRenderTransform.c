/* 000546a0 | STG::LLogicSceneWrapper::GetRenderTransform */

/* STG::LLogicSceneWrapper::GetRenderTransform(unsigned long) const */

int __thiscall STG::LLogicSceneWrapper::GetRenderTransform(LLogicSceneWrapper *this,ulong param_1)

{
  return param_1 * 0x40 + *(int *)(*(int *)this + 0xc0);
}

