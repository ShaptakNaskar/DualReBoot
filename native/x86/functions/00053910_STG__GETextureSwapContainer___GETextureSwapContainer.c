/* 00053910 | STG::GETextureSwapContainer::~GETextureSwapContainer */

/* STG::GETextureSwapContainer::~GETextureSwapContainer() */

void __thiscall STG::GETextureSwapContainer::~GETextureSwapContainer(GETextureSwapContainer *this)

{
  GETextureSwap *pGVar1;
  int unaff_EBX;
  GETextureSwap *this_00;
  
  FUN_0002e044();
  *(int *)this = *(int *)(unaff_EBX + 0x485b4) + 8;
  pGVar1 = *(GETextureSwap **)(this + 4);
  if (pGVar1 != (GETextureSwap *)0x0) {
    this_00 = pGVar1 + *(int *)(pGVar1 + -4) * 0x34;
    if (pGVar1 != this_00) {
      do {
        this_00 = this_00 + -0x34;
        GETextureSwap::~GETextureSwap(this_00);
        pGVar1 = *(GETextureSwap **)(this + 4);
      } while (pGVar1 != this_00);
    }
    operator_delete__(pGVar1 + -4);
  }
  *(undefined4 *)(this + 4) = 0;
  return;
}

