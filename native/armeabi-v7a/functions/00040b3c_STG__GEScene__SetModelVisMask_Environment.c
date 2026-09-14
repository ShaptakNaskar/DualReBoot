/* 00040b3c | STG::GEScene::SetModelVisMask_Environment */

/* STG::GEScene::SetModelVisMask_Environment(unsigned long, unsigned long, unsigned long) */

void __thiscall
STG::GEScene::SetModelVisMask_Environment(GEScene *this,ulong param_1,ulong param_2,ulong param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x160);
  *(ulong *)(*(int *)(this + 0x158) + param_1 * 4) = param_2;
  *(ulong *)(iVar1 + param_1 * 4) = param_3;
  return;
}

