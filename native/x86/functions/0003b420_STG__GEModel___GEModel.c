/* 0003b420 | STG::GEModel::~GEModel */

/* STG::GEModel::~GEModel() */

void __thiscall STG::GEModel::~GEModel(GEModel *this)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  GEModel *pGVar5;
  int *piVar6;
  int unaff_EBX;
  uint uVar7;
  uint uVar8;
  
  FUN_0002e044();
  uVar8 = *(uint *)(this + 0x34);
  *(int *)this = *(int *)(unaff_EBX + 0x60a7b) + 8;
  if (uVar8 != 0) {
    uVar7 = 0;
    do {
      piVar6 = (int *)(*(int *)(this + 0x7c) + uVar7 * 4);
      piVar2 = (int *)*piVar6;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))(piVar2);
        uVar8 = *(uint *)(this + 0x34);
        piVar6 = (int *)(*(int *)(this + 0x7c) + uVar7 * 4);
      }
      uVar7 = uVar7 + 1;
      *piVar6 = 0;
    } while (uVar7 < uVar8);
  }
  if (*(int *)(this + 0x30) != 0) {
    uVar8 = 0;
    do {
      while( true ) {
        iVar1 = uVar8 * 4;
        piVar6 = (int *)(*(int *)(this + 0x80) + iVar1);
        piVar2 = (int *)*piVar6;
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 4))(piVar2);
          piVar6 = (int *)(*(int *)(this + 0x80) + iVar1);
        }
        *piVar6 = 0;
        iVar3 = *(int *)(this + 0x84);
        piVar6 = *(int **)(iVar3 + iVar1);
        if ((piVar6 != (int *)0x0) && (iVar4 = piVar6[1], piVar6[1] = iVar4 + -1, iVar4 == 1))
        break;
        uVar8 = uVar8 + 1;
        uVar7 = *(uint *)(this + 0x30);
        *(int *)(iVar3 + iVar1) = 0;
        if (uVar7 <= uVar8) goto LAB_0003b510;
      }
      (**(code **)(*piVar6 + 4))(piVar6);
      uVar8 = uVar8 + 1;
      uVar7 = *(uint *)(this + 0x30);
      *(undefined4 *)(*(int *)(this + 0x84) + iVar1) = 0;
    } while (uVar8 < uVar7);
  }
LAB_0003b510:
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
  iVar1 = *(int *)(unaff_EBX + 0x60a13);
  *(undefined4 *)(this + 0x84) = 0;
  *(int *)(this + 0x38) = iVar1 + 8;
  pGVar5 = *(GEModel **)(this + 0x50);
  if ((pGVar5 != this + 0x3c) && (pGVar5 != (GEModel *)0x0)) {
    if ((uint)(*(int *)(this + 0x3c) - (int)pGVar5) < 0x81) {
      std::__node_alloc::_M_deallocate(pGVar5,*(int *)(this + 0x3c) - (int)pGVar5);
    }
    else {
      operator_delete(pGVar5);
    }
  }
  *(int *)this = *(int *)(unaff_EBX + 0x60a5b) + 8;
  *(int *)(this + 8) = iVar1 + 8;
  pGVar5 = *(GEModel **)(this + 0x20);
  if ((pGVar5 != this + 0xc) && (pGVar5 != (GEModel *)0x0)) {
    if ((uint)(*(int *)(this + 0xc) - (int)pGVar5) < 0x81) {
      std::__node_alloc::_M_deallocate(pGVar5,*(int *)(this + 0xc) - (int)pGVar5);
    }
    else {
      operator_delete(pGVar5);
    }
  }
  *(int *)this = *(int *)(unaff_EBX + 0x60a53) + 8;
  return;
}

