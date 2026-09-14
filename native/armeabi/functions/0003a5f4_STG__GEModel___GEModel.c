/* 0003a5f4 | STG::GEModel::~GEModel */

/* STG::GEModel::~GEModel() */

GEModel * __thiscall STG::GEModel::~GEModel(GEModel *this)

{
  int *piVar1;
  GEModel *pGVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  uVar3 = *(uint *)(this + 0x34);
  iVar6 = DAT_0003a814 + 0x3a60c;
  *(int *)this = *(int *)(iVar6 + DAT_0003a818) + 8;
  if (uVar3 != 0) {
    uVar7 = 0;
    do {
      iVar5 = *(int *)(this + 0x7c);
      iVar8 = uVar7 * 4;
      piVar1 = *(int **)(iVar5 + uVar7 * 4);
      uVar7 = uVar7 + 1;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
        iVar5 = *(int *)(this + 0x7c);
        uVar3 = *(uint *)(this + 0x34);
      }
      *(undefined4 *)(iVar5 + iVar8) = 0;
    } while (uVar7 < uVar3);
  }
  if (*(int *)(this + 0x30) != 0) {
    uVar3 = 0;
LAB_0003a690:
    do {
      iVar5 = *(int *)(this + 0x80);
      iVar8 = uVar3 * 4;
      piVar1 = *(int **)(iVar5 + uVar3 * 4);
      uVar3 = uVar3 + 1;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
        iVar5 = *(int *)(this + 0x80);
      }
      *(undefined4 *)(iVar5 + iVar8) = 0;
      iVar5 = *(int *)(this + 0x84);
      piVar1 = *(int **)(iVar5 + iVar8);
      if (piVar1 != (int *)0x0) {
        iVar4 = piVar1[1];
        piVar1[1] = iVar4 + -1;
        if (iVar4 == 1) {
          (**(code **)(*piVar1 + 4))();
          uVar7 = *(uint *)(this + 0x30);
          *(undefined4 *)(*(int *)(this + 0x84) + iVar8) = 0;
          if (uVar7 <= uVar3) break;
          goto LAB_0003a690;
        }
      }
      uVar7 = *(uint *)(this + 0x30);
      *(undefined4 *)(iVar5 + iVar8) = 0;
    } while (uVar3 < uVar7);
  }
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
  *(undefined4 *)(this + 0x84) = 0;
  pGVar2 = *(GEModel **)(this + 0x50);
  iVar8 = *(int *)(iVar6 + DAT_0003a81c);
  *(int *)(this + 0x38) = iVar8 + 8;
  if ((pGVar2 != this + 0x3c) && (pGVar2 != (GEModel *)0x0)) {
    if ((uint)(*(int *)(this + 0x3c) - (int)pGVar2) < 0x81) {
      std::__node_alloc::_M_deallocate(pGVar2,*(int *)(this + 0x3c) - (int)pGVar2);
    }
    else {
      operator_delete(pGVar2);
    }
  }
  pGVar2 = *(GEModel **)(this + 0x20);
  *(int *)this = *(int *)(iVar6 + DAT_0003a820) + 8;
  *(int *)(this + 8) = iVar8 + 8;
  if ((pGVar2 != this + 0xc) && (pGVar2 != (GEModel *)0x0)) {
    if ((uint)(*(int *)(this + 0xc) - (int)pGVar2) < 0x81) {
      std::__node_alloc::_M_deallocate(pGVar2,*(int *)(this + 0xc) - (int)pGVar2);
      *(int *)this = *(int *)(iVar6 + DAT_0003a824) + 8;
      return this;
    }
    operator_delete(pGVar2);
  }
  *(int *)this = *(int *)(iVar6 + DAT_0003a824) + 8;
  return this;
}

