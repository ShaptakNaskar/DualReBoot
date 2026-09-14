/* 00048b70 | STG::GETextureFont::~GETextureFont */

/* STG::GETextureFont::~GETextureFont() */

GETextureFont * __thiscall STG::GETextureFont::~GETextureFont(GETextureFont *this)

{
  int iVar1;
  GETextureFont *pGVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(this + 0x24);
  if (iVar1 != 0) {
    iVar4 = *(int *)(iVar1 + -4) * 0x2c + iVar1;
    if (iVar1 != iVar4) {
      do {
        iVar3 = iVar4 + -0x2c;
        (*(code *)**(undefined4 **)(iVar4 + -0x2c))(iVar3);
        iVar1 = *(int *)(this + 0x24);
        iVar4 = iVar3;
      } while (iVar1 != iVar3);
    }
    operator_delete__((void *)(iVar1 + -8));
  }
  pGVar2 = *(GETextureFont **)(this + 0x18);
  iVar1 = *(int *)(DAT_00048c24 + 0x48be8);
  *(undefined4 *)(this + 0x24) = 0;
  *(int *)this = iVar1 + 8;
  if ((pGVar2 != this + 4) && (pGVar2 != (GETextureFont *)0x0)) {
    if ((uint)(*(int *)(this + 4) - (int)pGVar2) < 0x81) {
      std::__node_alloc::_M_deallocate(pGVar2,*(int *)(this + 4) - (int)pGVar2);
      return this;
    }
    operator_delete(pGVar2);
  }
  return this;
}

