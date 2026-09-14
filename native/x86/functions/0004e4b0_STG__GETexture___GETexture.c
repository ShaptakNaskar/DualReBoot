/* 0004e4b0 | STG::GETexture::~GETexture */

/* STG::GETexture::~GETexture() */

void __thiscall STG::GETexture::~GETexture(GETexture *this)

{
  int iVar1;
  GETexture *pGVar2;
  uint uVar3;
  int unaff_EBX;
  
  FUN_0002e044();
  *(int *)this = *(int *)(unaff_EBX + 0x4da0c) + 8;
  GERendererAPI::GL_DeleteTexture((ulong *)(this + 0x94));
  iVar1 = *(int *)(unaff_EBX + 0x4d984);
  *(undefined4 *)(this + 0x94) = 0xffffffff;
  *(int *)(this + 0x6c) = iVar1 + 8;
  pGVar2 = *(GETexture **)(this + 0x84);
  if ((pGVar2 != this + 0x70) && (pGVar2 != (GETexture *)0x0)) {
    if ((uint)(*(int *)(this + 0x70) - (int)pGVar2) < 0x81) {
      std::__node_alloc::_M_deallocate(pGVar2,*(int *)(this + 0x70) - (int)pGVar2);
    }
    else {
      operator_delete(pGVar2);
    }
  }
  pGVar2 = *(GETexture **)(this + 100);
  *(int *)(this + 0x3c) = *(int *)(unaff_EBX + 0x4da08) + 8;
  if ((pGVar2 != this + 0x40) && (pGVar2 != (GETexture *)0x0)) {
    uVar3 = *(int *)(this + 0x40) - (int)pGVar2 & 0xfffffffe;
    if (uVar3 < 0x81) {
      std::__node_alloc::_M_deallocate(pGVar2,uVar3);
    }
    else {
      operator_delete(pGVar2);
    }
  }
  *(int *)this = *(int *)(unaff_EBX + 0x4d9cc) + 8;
  *(int *)(this + 8) = iVar1 + 8;
  pGVar2 = *(GETexture **)(this + 0x20);
  if ((pGVar2 != this + 0xc) && (pGVar2 != (GETexture *)0x0)) {
    if ((uint)(*(int *)(this + 0xc) - (int)pGVar2) < 0x81) {
      std::__node_alloc::_M_deallocate(pGVar2,*(int *)(this + 0xc) - (int)pGVar2);
    }
    else {
      operator_delete(pGVar2);
    }
  }
  *(int *)this = *(int *)(unaff_EBX + 0x4d9c4) + 8;
  return;
}

