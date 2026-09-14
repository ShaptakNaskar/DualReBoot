/* 00046760 | STG::GEScene::SetModelVisMask_Environment */

/* STG::GEScene::SetModelVisMask_Environment(unsigned long, unsigned long, unsigned long) */

void __thiscall
STG::GEScene::SetModelVisMask_Environment(GEScene *this,ulong param_1,ulong param_2,ulong param_3)

{
  *(ulong *)(*(int *)(this + 0x158) + param_1 * 4) = param_2;
  *(ulong *)(*(int *)(this + 0x160) + param_1 * 4) = param_3;
  return;
}

