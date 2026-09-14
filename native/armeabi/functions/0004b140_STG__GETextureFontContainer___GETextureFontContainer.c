/* 0004b140 | STG::GETextureFontContainer::~GETextureFontContainer */

/* STG::GETextureFontContainer::~GETextureFontContainer() */

GETextureFontContainer * __thiscall
STG::GETextureFontContainer::~GETextureFontContainer(GETextureFontContainer *this)

{
  int iVar1;
  int *piVar2;
  GETextureFont *pGVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  GETextureFont *this_00;
  uint uVar7;
  
  uVar7 = *(uint *)this;
  if (uVar7 != 0) {
    uVar6 = 0;
LAB_0004b16c:
    do {
      iVar5 = *(int *)(this + 4);
      iVar1 = uVar6 * 4;
      piVar2 = *(int **)(iVar5 + uVar6 * 4);
      uVar6 = uVar6 + 1;
      if (piVar2 != (int *)0x0) {
        iVar4 = piVar2[1];
        piVar2[1] = iVar4 + -1;
        if (iVar4 == 1) {
          (**(code **)(*piVar2 + 4))();
          uVar7 = *(uint *)this;
          *(undefined4 *)(*(int *)(this + 4) + iVar1) = 0;
          if (uVar7 <= uVar6) break;
          goto LAB_0004b16c;
        }
      }
      *(undefined4 *)(iVar5 + iVar1) = 0;
    } while (uVar6 < uVar7);
  }
  if (*(void **)(this + 4) != (void *)0x0) {
    operator_delete__(*(void **)(this + 4));
  }
  pGVar3 = *(GETextureFont **)(this + 0xc);
  *(undefined4 *)(this + 4) = 0;
  if (pGVar3 != (GETextureFont *)0x0) {
    this_00 = pGVar3 + *(int *)(pGVar3 + -4) * 0x30;
    if (pGVar3 != this_00) {
      do {
        this_00 = this_00 + -0x30;
        GETextureFont::~GETextureFont(this_00);
        pGVar3 = *(GETextureFont **)(this + 0xc);
      } while (pGVar3 != this_00);
    }
    operator_delete__(pGVar3 + -8);
  }
  *(undefined4 *)(this + 0xc) = 0;
  return this;
}

