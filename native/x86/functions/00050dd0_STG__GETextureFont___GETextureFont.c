/* 00050dd0 | STG::GETextureFont::~GETextureFont */

/* STG::GETextureFont::~GETextureFont() */

void __thiscall STG::GETextureFont::~GETextureFont(GETextureFont *this)

{
  int iVar1;
  GETextureFont *pGVar2;
  undefined4 *puVar3;
  int unaff_EBX;
  undefined4 *puVar4;
  
  FUN_0002e044();
  puVar3 = *(undefined4 **)(this + 0x24);
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = puVar3 + puVar3[-1] * 0xb;
    if (puVar3 != puVar4) {
      do {
        puVar4 = puVar4 + -0xb;
        (**(code **)*puVar4)(puVar4);
        puVar3 = *(undefined4 **)(this + 0x24);
      } while (puVar3 != puVar4);
    }
    operator_delete__(puVar3 + -1);
  }
  iVar1 = *(int *)(unaff_EBX + 0x4b063);
  *(undefined4 *)(this + 0x24) = 0;
  *(int *)this = iVar1 + 8;
  pGVar2 = *(GETextureFont **)(this + 0x18);
  if ((pGVar2 != this + 4) && (pGVar2 != (GETextureFont *)0x0)) {
    if (0x80 < (uint)(*(int *)(this + 4) - (int)pGVar2)) {
      operator_delete(pGVar2);
      return;
    }
    std::__node_alloc::_M_deallocate(pGVar2,*(int *)(this + 4) - (int)pGVar2);
  }
  return;
}

