/* 0003a8d0 | STG::GEMaterial::~GEMaterial */

/* STG::GEMaterial::~GEMaterial() */

void __thiscall STG::GEMaterial::~GEMaterial(GEMaterial *this)

{
  GEMaterial *pGVar1;
  int iVar2;
  GEMaterial *pGVar3;
  int unaff_EBX;
  GEMaterial *pGVar4;
  
  FUN_0002e044();
  *(int *)this = *(int *)(unaff_EBX + 0x615c7) + 8;
  SetDefault(this);
  pGVar1 = this + 0xac;
  iVar2 = *(int *)(unaff_EBX + 0x61563);
  pGVar4 = pGVar1;
  do {
    *(int *)(this + (int)(pGVar4 + (0x8c - (int)pGVar1))) = iVar2 + 8;
    pGVar3 = *(GEMaterial **)(this + (int)(pGVar4 + (0xa4 - (int)pGVar1)));
    if ((pGVar3 != pGVar4 + -0x1c) && (pGVar3 != (GEMaterial *)0x0)) {
      if ((uint)(*(int *)(this + (int)(pGVar4 + (0x90 - (int)pGVar1))) - (int)pGVar3) < 0x81) {
        std::__node_alloc::_M_deallocate
                  (pGVar3,*(int *)(this + (int)(pGVar4 + (0x90 - (int)pGVar1))) - (int)pGVar3);
      }
      else {
        operator_delete(pGVar3);
      }
    }
    pGVar4 = pGVar4 + -0x20;
  } while (this + 0x6c != pGVar4);
  iVar2 = *(int *)(unaff_EBX + 0x61563);
  *(int *)this = *(int *)(unaff_EBX + 0x615ab) + 8;
  *(int *)(this + 8) = iVar2 + 8;
  pGVar1 = *(GEMaterial **)(this + 0x20);
  if ((pGVar1 != this + 0xc) && (pGVar1 != (GEMaterial *)0x0)) {
    if ((uint)(*(int *)(this + 0xc) - (int)pGVar1) < 0x81) {
      std::__node_alloc::_M_deallocate(pGVar1,*(int *)(this + 0xc) - (int)pGVar1);
    }
    else {
      operator_delete(pGVar1);
    }
  }
  *(int *)this = *(int *)(unaff_EBX + 0x615a3) + 8;
  return;
}

