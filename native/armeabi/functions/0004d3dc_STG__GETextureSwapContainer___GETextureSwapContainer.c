/* 0004d3dc | STG::GETextureSwapContainer::~GETextureSwapContainer */

/* STG::GETextureSwapContainer::~GETextureSwapContainer() */

GETextureSwapContainer * __thiscall
STG::GETextureSwapContainer::~GETextureSwapContainer(GETextureSwapContainer *this)

{
  GETextureSwap *pGVar1;
  GETextureSwap *this_00;
  
  pGVar1 = *(GETextureSwap **)(this + 4);
  *(int *)this = *(int *)(DAT_0004d444 + 0x4d3f4) + 8;
  if (pGVar1 != (GETextureSwap *)0x0) {
    this_00 = pGVar1 + *(int *)(pGVar1 + -4) * 0x34;
    if (pGVar1 != this_00) {
      do {
        this_00 = this_00 + -0x34;
        GETextureSwap::~GETextureSwap(this_00);
        pGVar1 = *(GETextureSwap **)(this + 4);
      } while (pGVar1 != this_00);
    }
    operator_delete__(pGVar1 + -8);
  }
  *(undefined4 *)(this + 4) = 0;
  return this;
}

