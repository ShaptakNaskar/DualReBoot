/* 00038d28 | STG::GEFont::~GEFont */

/* STG::GEFont::~GEFont() */

GEFont * __thiscall STG::GEFont::~GEFont(GEFont *this)

{
  int *piVar1;
  GEFont *pGVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = DAT_00038e6c + 0x38d40;
  piVar1 = *(int **)(this + 0x2c);
  *(int *)this = *(int *)(iVar4 + DAT_00038e70) + 8;
  if (piVar1 != (int *)0x0) {
    iVar3 = piVar1[1];
    piVar1[1] = iVar3 + -1;
    if (iVar3 == 1) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  *(undefined4 *)(this + 0x2c) = 0;
  if (*(void **)(this + 0x58) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x58));
  }
  *(undefined4 *)(this + 0x58) = 0;
  if (*(void **)(this + 0x360) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x360));
  }
  *(undefined4 *)(this + 0x360) = 0;
  pGVar2 = *(GEFont **)(this + 0x48);
  iVar3 = *(int *)(iVar4 + DAT_00038e74);
  *(int *)(this + 0x30) = iVar3 + 8;
  if ((pGVar2 != this + 0x34) && (pGVar2 != (GEFont *)0x0)) {
    if ((uint)(*(int *)(this + 0x34) - (int)pGVar2) < 0x81) {
      std::__node_alloc::_M_deallocate(pGVar2,*(int *)(this + 0x34) - (int)pGVar2);
    }
    else {
      operator_delete(pGVar2);
    }
  }
  pGVar2 = *(GEFont **)(this + 0x20);
  *(int *)this = *(int *)(iVar4 + DAT_00038e78) + 8;
  *(int *)(this + 8) = iVar3 + 8;
  if ((pGVar2 != this + 0xc) && (pGVar2 != (GEFont *)0x0)) {
    if ((uint)(*(int *)(this + 0xc) - (int)pGVar2) < 0x81) {
      std::__node_alloc::_M_deallocate(pGVar2,*(int *)(this + 0xc) - (int)pGVar2);
      *(int *)this = *(int *)(iVar4 + DAT_00038e7c) + 8;
      return this;
    }
    operator_delete(pGVar2);
  }
  *(int *)this = *(int *)(iVar4 + DAT_00038e7c) + 8;
  return this;
}

