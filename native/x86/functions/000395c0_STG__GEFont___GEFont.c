/* 000395c0 | STG::GEFont::~GEFont */

/* STG::GEFont::~GEFont() */

void __thiscall STG::GEFont::~GEFont(GEFont *this)

{
  int *piVar1;
  int iVar2;
  GEFont *pGVar3;
  int unaff_EBX;
  
  FUN_0002e044();
  *(int *)this = *(int *)(unaff_EBX + 0x628b8) + 8;
  piVar1 = *(int **)(this + 0x2c);
  if ((piVar1 != (int *)0x0) && (iVar2 = piVar1[1], piVar1[1] = iVar2 + -1, iVar2 == 1)) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  *(undefined4 *)(this + 0x2c) = 0;
  if (*(void **)(this + 0x58) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x58));
  }
  *(undefined4 *)(this + 0x58) = 0;
  if (*(void **)(this + 0x360) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x360));
  }
  iVar2 = *(int *)(unaff_EBX + 0x62874);
  *(undefined4 *)(this + 0x360) = 0;
  *(int *)(this + 0x30) = iVar2 + 8;
  pGVar3 = *(GEFont **)(this + 0x48);
  if ((pGVar3 != this + 0x34) && (pGVar3 != (GEFont *)0x0)) {
    if ((uint)(*(int *)(this + 0x34) - (int)pGVar3) < 0x81) {
      std::__node_alloc::_M_deallocate(pGVar3,*(int *)(this + 0x34) - (int)pGVar3);
    }
    else {
      operator_delete(pGVar3);
    }
  }
  *(int *)this = *(int *)(unaff_EBX + 0x628bc) + 8;
  *(int *)(this + 8) = iVar2 + 8;
  pGVar3 = *(GEFont **)(this + 0x20);
  if ((pGVar3 != this + 0xc) && (pGVar3 != (GEFont *)0x0)) {
    if ((uint)(*(int *)(this + 0xc) - (int)pGVar3) < 0x81) {
      std::__node_alloc::_M_deallocate(pGVar3,*(int *)(this + 0xc) - (int)pGVar3);
    }
    else {
      operator_delete(pGVar3);
    }
  }
  *(int *)this = *(int *)(unaff_EBX + 0x628b4) + 8;
  return;
}

