/* 00072960 | STG::UPreference_ModelSwap::SetModelCount */

/* STG::UPreference_ModelSwap::SetModelCount(unsigned long, unsigned long) */

void __thiscall
STG::UPreference_ModelSwap::SetModelCount(UPreference_ModelSwap *this,ulong param_1,ulong param_2)

{
  *(undefined4 *)(*(int *)(this + 0x90) + param_1 * 4) = 0;
  *(ulong *)(*(int *)(this + 0x98) + param_1 * 4) = param_2;
  if (param_1 != 0) {
    *(int *)(*(int *)(this + 0x90) + param_1 * 4) =
         *(int *)(*(int *)(this + 0x98) + -4 + param_1 * 4) +
         *(int *)(*(int *)(this + 0x90) + -4 + param_1 * 4);
  }
  return;
}

