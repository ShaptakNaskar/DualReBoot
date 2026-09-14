/* 00046ae4 | STG::GESkeleton::Animation::SetUpdateOrder */

/* STG::GESkeleton::Animation::SetUpdateOrder(unsigned long, unsigned long, unsigned long) */

void __thiscall
STG::GESkeleton::Animation::SetUpdateOrder
          (Animation *this,ulong param_1,ulong param_2,ulong param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x30);
  *(ulong *)(*(int *)(this + 0x28) + param_1 * 4) = param_2;
  *(ulong *)(iVar1 + param_1 * 4) = param_3;
  return;
}

