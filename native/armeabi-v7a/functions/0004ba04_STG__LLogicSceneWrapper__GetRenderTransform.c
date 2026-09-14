/* 0004ba04 | STG::LLogicSceneWrapper::GetRenderTransform */

/* STG::LLogicSceneWrapper::GetRenderTransform(unsigned long) const */

int __thiscall STG::LLogicSceneWrapper::GetRenderTransform(LLogicSceneWrapper *this,ulong param_1)

{
  return *(int *)(*(int *)this + 0xc0) + param_1 * 0x40;
}

