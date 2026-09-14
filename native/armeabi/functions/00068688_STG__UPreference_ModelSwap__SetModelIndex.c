/* 00068688 | STG::UPreference_ModelSwap::SetModelIndex */

/* STG::UPreference_ModelSwap::SetModelIndex(unsigned long, unsigned long, unsigned long) */

void __thiscall
STG::UPreference_ModelSwap::SetModelIndex
          (UPreference_ModelSwap *this,ulong param_1,ulong param_2,ulong param_3)

{
  *(ulong *)(*(int *)(this + 0x88) + (param_2 + *(int *)(*(int *)(this + 0x90) + param_1 * 4)) * 4)
       = param_3;
  return;
}

