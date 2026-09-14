/* 000541d0 | STG::GETextureSwapContainer::SetSwapVariant */

/* STG::GETextureSwapContainer::SetSwapVariant(unsigned long, unsigned long, STG::UStringBase<char,
   int> const&, STG::FFileHash const&, STG::GETimeOfDay const&, unsigned long) */

void __thiscall
STG::GETextureSwapContainer::SetSwapVariant
          (GETextureSwapContainer *this,ulong param_1,ulong param_2,UStringBase *param_3,
          FFileHash *param_4,GETimeOfDay *param_5,ulong param_6)

{
  FUN_0002e044();
  GETextureSwap::SetVariant
            ((GETextureSwap *)(param_1 * 0x34 + *(int *)(this + 4)),param_2,param_3,param_4,param_5,
             param_6);
  return;
}

