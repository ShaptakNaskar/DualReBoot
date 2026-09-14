/* 00053ab0 | STG::GETextureSwapContainer::Initialize */

/* STG::GETextureSwapContainer::Initialize(unsigned long) */

void __thiscall STG::GETextureSwapContainer::Initialize(GETextureSwapContainer *this,ulong param_1)

{
  ulong *puVar1;
  GETextureSwap *this_00;
  
  FUN_0002e044();
  *(ulong *)(this + 8) = param_1;
  if (param_1 != 0) {
    puVar1 = operator_new__(param_1 * 0x34 + 4);
    *puVar1 = param_1;
    this_00 = (GETextureSwap *)(puVar1 + 1);
    while (param_1 = param_1 - 1, param_1 != 0xffffffff) {
      GETextureSwap::GETextureSwap(this_00);
      this_00 = this_00 + 0x34;
    }
    *(GETextureSwap **)(this + 4) = (GETextureSwap *)(puVar1 + 1);
  }
  return;
}

