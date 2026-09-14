/* 00046794 | STG::GETexture::~GETexture */

/* STG::GETexture::~GETexture() */

GETexture * __thiscall STG::GETexture::~GETexture(GETexture *this)

{
  GETexture *pGVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = DAT_000468c4 + 0x467ac;
  *(int *)this = *(int *)(iVar4 + DAT_000468c8) + 8;
  GERendererAPI::GL_DeleteTexture((ulong *)(this + 0x94));
  iVar5 = DAT_000468cc;
  pGVar1 = *(GETexture **)(this + 0x84);
  *(undefined4 *)(this + 0x94) = 0xffffffff;
  iVar5 = *(int *)(iVar4 + iVar5);
  *(int *)(this + 0x6c) = iVar5 + 8;
  if ((pGVar1 != this + 0x70) && (pGVar1 != (GETexture *)0x0)) {
    if ((uint)(*(int *)(this + 0x70) - (int)pGVar1) < 0x81) {
      std::__node_alloc::_M_deallocate(pGVar1,*(int *)(this + 0x70) - (int)pGVar1);
    }
    else {
      operator_delete(pGVar1);
    }
  }
  pGVar1 = *(GETexture **)(this + 100);
  *(int *)(this + 0x3c) = *(int *)(iVar4 + DAT_000468d0) + 8;
  if ((pGVar1 != this + 0x40) && (pGVar1 != (GETexture *)0x0)) {
    uVar2 = *(int *)(this + 0x40) - (int)pGVar1 & 0xfffffffe;
    if (uVar2 < 0x81) {
      std::__node_alloc::_M_deallocate(pGVar1,uVar2);
    }
    else {
      operator_delete(pGVar1);
    }
  }
  pGVar1 = *(GETexture **)(this + 0x20);
  iVar3 = *(int *)(iVar4 + DAT_000468d4);
  *(int *)(this + 8) = iVar5 + 8;
  *(int *)this = iVar3 + 8;
  if ((pGVar1 != this + 0xc) && (pGVar1 != (GETexture *)0x0)) {
    if ((uint)(*(int *)(this + 0xc) - (int)pGVar1) < 0x81) {
      std::__node_alloc::_M_deallocate(pGVar1,*(int *)(this + 0xc) - (int)pGVar1);
      *(int *)this = *(int *)(iVar4 + DAT_000468d8) + 8;
      return this;
    }
    operator_delete(pGVar1);
  }
  *(int *)this = *(int *)(iVar4 + DAT_000468d8) + 8;
  return this;
}

