/* 00048c90 | STG::GETextureFontContainer::~GETextureFontContainer */

/* STG::GETextureFontContainer::~GETextureFontContainer() */

GETextureFontContainer * __thiscall
STG::GETextureFontContainer::~GETextureFontContainer(GETextureFontContainer *this)

{
  int iVar1;
  int *piVar2;
  GETextureFont *pGVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  GETextureFont *this_00;
  
  uVar4 = *(uint *)this;
  if (uVar4 != 0) {
    uVar7 = 0;
    do {
      while( true ) {
        iVar5 = *(int *)(this + 4);
        iVar1 = uVar7 * 4;
        piVar2 = *(int **)(iVar5 + uVar7 * 4);
        uVar7 = uVar7 + 1;
        if ((piVar2 == (int *)0x0) || (iVar6 = piVar2[1], piVar2[1] = iVar6 + -1, iVar6 != 1))
        break;
        (**(code **)(*piVar2 + 4))();
        uVar4 = *(uint *)this;
        *(undefined4 *)(*(int *)(this + 4) + iVar1) = 0;
        if (uVar4 <= uVar7) goto LAB_00048d0c;
      }
      *(undefined4 *)(iVar5 + iVar1) = 0;
    } while (uVar7 < uVar4);
  }
LAB_00048d0c:
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

