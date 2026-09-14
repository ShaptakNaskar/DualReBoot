/* 0004b024 | STG::GETextureFont::~GETextureFont */

/* STG::GETextureFont::~GETextureFont() */

GETextureFont * __thiscall STG::GETextureFont::~GETextureFont(GETextureFont *this)

{
  undefined4 *puVar1;
  int iVar2;
  GETextureFont *pGVar3;
  int iVar4;
  
  iVar2 = *(int *)(this + 0x24);
  if (iVar2 != 0) {
    iVar4 = *(int *)(iVar2 + -4) * 0x2c + iVar2;
    if (iVar2 != iVar4) {
      do {
        puVar1 = (undefined4 *)(iVar4 + -0x2c);
        iVar4 = iVar4 + -0x2c;
        (**(code **)*puVar1)(iVar4);
        iVar2 = *(int *)(this + 0x24);
      } while (iVar2 != iVar4);
    }
    operator_delete__((void *)(iVar2 + -8));
  }
  pGVar3 = *(GETextureFont **)(this + 0x18);
  iVar2 = *(int *)(DAT_0004b0d8 + 0x4b094);
  *(undefined4 *)(this + 0x24) = 0;
  *(int *)this = iVar2 + 8;
  if ((pGVar3 != this + 4) && (pGVar3 != (GETextureFont *)0x0)) {
    if ((uint)(*(int *)(this + 4) - (int)pGVar3) < 0x81) {
      std::__node_alloc::_M_deallocate(pGVar3,*(int *)(this + 4) - (int)pGVar3);
      return this;
    }
    operator_delete(pGVar3);
  }
  return this;
}

