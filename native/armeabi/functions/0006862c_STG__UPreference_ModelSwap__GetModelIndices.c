/* 0006862c | STG::UPreference_ModelSwap::GetModelIndices */

/* STG::UPreference_ModelSwap::GetModelIndices(unsigned long, unsigned long const*&, unsigned long&)
   const */

void __thiscall
STG::UPreference_ModelSwap::GetModelIndices
          (UPreference_ModelSwap *this,ulong param_1,ulong **param_2,ulong *param_3)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(*(int *)(this + 0x98) + param_1 * 4);
  *param_2 = (ulong *)(*(int *)(this + 0x88) + *(int *)(*(int *)(this + 0x90) + param_1 * 4) * 4);
  *param_3 = uVar1;
  return;
}

