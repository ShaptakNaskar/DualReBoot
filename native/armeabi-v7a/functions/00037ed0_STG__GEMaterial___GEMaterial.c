/* 00037ed0 | STG::GEMaterial::~GEMaterial */

/* STG::GEMaterial::~GEMaterial() */

GEMaterial * __thiscall STG::GEMaterial::~GEMaterial(GEMaterial *this)

{
  GEMaterial *pGVar1;
  int iVar2;
  GEMaterial *pGVar3;
  int iVar4;
  GEMaterial *pGVar5;
  GEMaterial *pGVar6;
  int iVar7;
  
  pGVar6 = this + 0xac;
  iVar7 = DAT_00037fec + 0x37ef0;
  pGVar5 = this + 0xa4;
  *(int *)this = *(int *)(iVar7 + DAT_00037ff0) + 8;
  SetDefault(this);
  iVar2 = *(int *)(iVar7 + DAT_00037ff4);
  pGVar1 = pGVar6;
  do {
    *(int *)(this + (int)(pGVar1 + (0x8c - (int)pGVar6))) = iVar2 + 8;
    pGVar3 = *(GEMaterial **)pGVar5;
    if ((pGVar3 != pGVar1 + -0x1c) && (pGVar3 != (GEMaterial *)0x0)) {
      if ((uint)(*(int *)(this + (int)(pGVar1 + (0x90 - (int)pGVar6))) - (int)pGVar3) < 0x81) {
        std::__node_alloc::_M_deallocate
                  (pGVar3,*(int *)(this + (int)(pGVar1 + (0x90 - (int)pGVar6))) - (int)pGVar3);
      }
      else {
        operator_delete(pGVar3);
      }
    }
    pGVar5 = pGVar5 + -0x20;
    pGVar1 = pGVar1 + -0x20;
  } while (this + 0x6c != pGVar1);
  pGVar1 = *(GEMaterial **)(this + 0x20);
  iVar4 = *(int *)(iVar7 + DAT_00037ff8);
  *(int *)(this + 8) = iVar2 + 8;
  *(int *)this = iVar4 + 8;
  if ((pGVar1 != this + 0xc) && (pGVar1 != (GEMaterial *)0x0)) {
    if ((uint)(*(int *)(this + 0xc) - (int)pGVar1) < 0x81) {
      std::__node_alloc::_M_deallocate(pGVar1,*(int *)(this + 0xc) - (int)pGVar1);
    }
    else {
      operator_delete(pGVar1);
    }
  }
  *(int *)this = *(int *)(iVar7 + DAT_00037ffc) + 8;
  return this;
}

