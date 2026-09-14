/* 00039c8c | STG::GEMaterial::~GEMaterial */

/* STG::GEMaterial::~GEMaterial() */

GEMaterial * __thiscall STG::GEMaterial::~GEMaterial(GEMaterial *this)

{
  GEMaterial *pGVar1;
  int iVar2;
  GEMaterial *pGVar3;
  GEMaterial *pGVar4;
  GEMaterial *pGVar5;
  int iVar6;
  
  iVar6 = DAT_00039dac + 0x39ca4;
  *(int *)this = *(int *)(iVar6 + DAT_00039db0) + 8;
  pGVar5 = this + 0xac;
  SetDefault(this);
  pGVar4 = this + 0xa4;
  iVar2 = *(int *)(iVar6 + DAT_00039db4);
  pGVar1 = pGVar5;
  do {
    *(int *)(this + (int)(pGVar1 + (0x8c - (int)pGVar5))) = iVar2 + 8;
    pGVar3 = *(GEMaterial **)pGVar4;
    if ((pGVar3 != pGVar1 + -0x1c) && (pGVar3 != (GEMaterial *)0x0)) {
      if ((uint)(*(int *)(this + (int)(pGVar1 + (0x90 - (int)pGVar5))) - (int)pGVar3) < 0x81) {
        std::__node_alloc::_M_deallocate
                  (pGVar3,*(int *)(this + (int)(pGVar1 + (0x90 - (int)pGVar5))) - (int)pGVar3);
      }
      else {
        operator_delete(pGVar3);
      }
    }
    pGVar4 = pGVar4 + -0x20;
    pGVar1 = pGVar1 + -0x20;
  } while (this + 0x6c != pGVar1);
  pGVar1 = *(GEMaterial **)(this + 0x20);
  *(int *)this = *(int *)(iVar6 + DAT_00039db8) + 8;
  *(int *)(this + 8) = iVar2 + 8;
  if ((pGVar1 != this + 0xc) && (pGVar1 != (GEMaterial *)0x0)) {
    if ((uint)(*(int *)(this + 0xc) - (int)pGVar1) < 0x81) {
      std::__node_alloc::_M_deallocate(pGVar1,*(int *)(this + 0xc) - (int)pGVar1);
    }
    else {
      operator_delete(pGVar1);
    }
  }
  *(int *)this = *(int *)(iVar6 + DAT_00039dbc) + 8;
  return this;
}

