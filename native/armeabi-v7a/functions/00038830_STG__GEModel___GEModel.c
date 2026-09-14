/* 00038830 | STG::GEModel::~GEModel */

/* STG::GEModel::~GEModel() */

GEModel * __thiscall STG::GEModel::~GEModel(GEModel *this)

{
  GEModel *pGVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  iVar6 = DAT_00038a58 + 0x38848;
  uVar2 = *(uint *)(this + 0x34);
  *(int *)this = *(int *)(iVar6 + DAT_00038a5c) + 8;
  if (uVar2 != 0) {
    uVar7 = 0;
    do {
      iVar3 = *(int *)(this + 0x7c);
      iVar8 = uVar7 * 4;
      piVar4 = *(int **)(iVar3 + uVar7 * 4);
      uVar7 = uVar7 + 1;
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 4))(piVar4);
        iVar3 = *(int *)(this + 0x7c);
        uVar2 = *(uint *)(this + 0x34);
      }
      *(undefined4 *)(iVar3 + iVar8) = 0;
    } while (uVar7 < uVar2);
  }
  if (*(int *)(this + 0x30) != 0) {
    uVar2 = 0;
    do {
      while( true ) {
        iVar3 = *(int *)(this + 0x80);
        iVar8 = uVar2 * 4;
        piVar4 = *(int **)(iVar3 + uVar2 * 4);
        uVar2 = uVar2 + 1;
        if (piVar4 != (int *)0x0) {
          (**(code **)(*piVar4 + 4))(piVar4);
          iVar3 = *(int *)(this + 0x80);
        }
        *(undefined4 *)(iVar3 + iVar8) = 0;
        iVar3 = *(int *)(this + 0x84);
        piVar4 = *(int **)(iVar3 + iVar8);
        if ((piVar4 == (int *)0x0) || (iVar5 = piVar4[1], piVar4[1] = iVar5 + -1, iVar5 != 1))
        break;
        (**(code **)(*piVar4 + 4))();
        uVar7 = *(uint *)(this + 0x30);
        *(undefined4 *)(*(int *)(this + 0x84) + iVar8) = 0;
        if (uVar7 <= uVar2) goto LAB_00038954;
      }
      uVar7 = *(uint *)(this + 0x30);
      *(undefined4 *)(iVar3 + iVar8) = 0;
    } while (uVar2 < uVar7);
  }
LAB_00038954:
  if (*(void **)(this + 0x7c) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x7c));
  }
  *(undefined4 *)(this + 0x7c) = 0;
  if (*(void **)(this + 0x80) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x80));
  }
  *(undefined4 *)(this + 0x80) = 0;
  if (*(void **)(this + 0x84) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x84));
  }
  pGVar1 = *(GEModel **)(this + 0x50);
  *(undefined4 *)(this + 0x84) = 0;
  iVar8 = *(int *)(iVar6 + DAT_00038a60);
  *(int *)(this + 0x38) = iVar8 + 8;
  if ((pGVar1 != this + 0x3c) && (pGVar1 != (GEModel *)0x0)) {
    if ((uint)(*(int *)(this + 0x3c) - (int)pGVar1) < 0x81) {
      std::__node_alloc::_M_deallocate(pGVar1,*(int *)(this + 0x3c) - (int)pGVar1);
    }
    else {
      operator_delete(pGVar1);
    }
  }
  pGVar1 = *(GEModel **)(this + 0x20);
  iVar3 = *(int *)(iVar6 + DAT_00038a64);
  *(int *)(this + 8) = iVar8 + 8;
  *(int *)this = iVar3 + 8;
  if ((pGVar1 != this + 0xc) && (pGVar1 != (GEModel *)0x0)) {
    if ((uint)(*(int *)(this + 0xc) - (int)pGVar1) < 0x81) {
      std::__node_alloc::_M_deallocate(pGVar1,*(int *)(this + 0xc) - (int)pGVar1);
      *(int *)this = *(int *)(iVar6 + DAT_00038a68) + 8;
      return this;
    }
    operator_delete(pGVar1);
  }
  *(int *)this = *(int *)(iVar6 + DAT_00038a68) + 8;
  return this;
}

