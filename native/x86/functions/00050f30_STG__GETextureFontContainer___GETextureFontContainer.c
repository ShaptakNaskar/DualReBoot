/* 00050f30 | STG::GETextureFontContainer::~GETextureFontContainer */

/* STG::GETextureFontContainer::~GETextureFontContainer() */

void __thiscall STG::GETextureFontContainer::~GETextureFontContainer(GETextureFontContainer *this)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  GETextureFont *pGVar4;
  int *piVar5;
  uint uVar6;
  GETextureFont *this_00;
  uint local_20;
  
  FUN_0002e044();
  local_20 = *(uint *)this;
  if (local_20 != 0) {
    uVar6 = 0;
    do {
      while( true ) {
        iVar1 = uVar6 * 4;
        piVar5 = (int *)(iVar1 + *(int *)(this + 4));
        piVar2 = (int *)*piVar5;
        if ((piVar2 == (int *)0x0) || (iVar3 = piVar2[1], piVar2[1] = iVar3 + -1, iVar3 != 1))
        break;
        (**(code **)(*piVar2 + 4))(piVar2);
        uVar6 = uVar6 + 1;
        local_20 = *(uint *)this;
        *(undefined4 *)(iVar1 + *(int *)(this + 4)) = 0;
        if (local_20 <= uVar6) goto LAB_00050fc4;
      }
      uVar6 = uVar6 + 1;
      *piVar5 = 0;
    } while (uVar6 < local_20);
  }
LAB_00050fc4:
  if (*(void **)(this + 4) != (void *)0x0) {
    operator_delete__(*(void **)(this + 4));
  }
  pGVar4 = *(GETextureFont **)(this + 0xc);
  *(undefined4 *)(this + 4) = 0;
  if (pGVar4 != (GETextureFont *)0x0) {
    this_00 = pGVar4 + *(int *)(pGVar4 + -4) * 0x30;
    if (pGVar4 != this_00) {
      do {
        this_00 = this_00 + -0x30;
        GETextureFont::~GETextureFont(this_00);
        pGVar4 = *(GETextureFont **)(this + 0xc);
      } while (pGVar4 != this_00);
    }
    operator_delete__(pGVar4 + -4);
  }
  *(undefined4 *)(this + 0xc) = 0;
  return;
}

