/* 00068658 | STG::UPreference_ModelSwap::SetModelCount */

/* STG::UPreference_ModelSwap::SetModelCount(unsigned long, unsigned long) */

void __thiscall
STG::UPreference_ModelSwap::SetModelCount(UPreference_ModelSwap *this,ulong param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x90);
  iVar1 = *(int *)(this + 0x98);
  *(undefined4 *)(iVar2 + param_1 * 4) = 0;
  *(ulong *)(iVar1 + param_1 * 4) = param_2;
  if (param_1 != 0) {
    *(int *)(iVar2 + param_1 * 4) =
         *(int *)(iVar1 + (param_1 - 1) * 4) + *(int *)(iVar2 + (param_1 - 1) * 4);
  }
  return;
}

