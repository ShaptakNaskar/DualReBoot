/* 00048c64 | STG::GETexture::~GETexture */

/* STG::GETexture::~GETexture() */

GETexture * __thiscall STG::GETexture::~GETexture(GETexture *this)

{
  GETexture *pGVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = DAT_00048d94 + 0x48c7c;
  *(int *)this = *(int *)(iVar3 + DAT_00048d98) + 8;
  GERendererAPI::GL_DeleteTexture((ulong *)(this + 0x94));
  *(undefined4 *)(this + 0x94) = 0xffffffff;
  pGVar1 = *(GETexture **)(this + 0x84);
  iVar4 = *(int *)(iVar3 + DAT_00048d9c);
  *(int *)(this + 0x6c) = iVar4 + 8;
  if ((pGVar1 != this + 0x70) && (pGVar1 != (GETexture *)0x0)) {
    if ((uint)(*(int *)(this + 0x70) - (int)pGVar1) < 0x81) {
      std::__node_alloc::_M_deallocate(pGVar1,*(int *)(this + 0x70) - (int)pGVar1);
    }
    else {
      operator_delete(pGVar1);
    }
  }
  pGVar1 = *(GETexture **)(this + 100);
  *(int *)(this + 0x3c) = *(int *)(iVar3 + DAT_00048da0) + 8;
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
  *(int *)this = *(int *)(iVar3 + DAT_00048da4) + 8;
  *(int *)(this + 8) = iVar4 + 8;
  if ((pGVar1 != this + 0xc) && (pGVar1 != (GETexture *)0x0)) {
    if ((uint)(*(int *)(this + 0xc) - (int)pGVar1) < 0x81) {
      std::__node_alloc::_M_deallocate(pGVar1,*(int *)(this + 0xc) - (int)pGVar1);
      *(int *)this = *(int *)(iVar3 + DAT_00048da8) + 8;
      return this;
    }
    operator_delete(pGVar1);
  }
  *(int *)this = *(int *)(iVar3 + DAT_00048da8) + 8;
  return this;
}

