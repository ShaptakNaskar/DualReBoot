/* 0004291c | STG::GEScene::SetModelVisMask_TimeOfDay */

/* STG::GEScene::SetModelVisMask_TimeOfDay(unsigned long, unsigned long, unsigned long) */

void __thiscall
STG::GEScene::SetModelVisMask_TimeOfDay(GEScene *this,ulong param_1,ulong param_2,ulong param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x130);
  *(ulong *)(*(int *)(this + 0x128) + param_1 * 4) = param_2;
  *(ulong *)(iVar1 + param_1 * 4) = param_3;
  return;
}

