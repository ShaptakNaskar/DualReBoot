/* 0003b794 | STG::GEModel::ConvertToMultiPassTransparency */

/* STG::GEModel::ConvertToMultiPassTransparency(STG::UArrayFixed<unsigned long, unsigned long>&) */

void __thiscall STG::GEModel::ConvertToMultiPassTransparency(GEModel *this,UArrayFixed *param_1)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  GEIndexBuffer *pGVar4;
  GEMaterial *pGVar5;
  int *piVar6;
  GEMaterial *pGVar7;
  uint uVar8;
  GEMaterial *pGVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  GEIndexBuffer *pGVar14;
  GEIndexBuffer *pGVar15;
  
  iVar12 = *(int *)(this + 0x30);
  if (iVar12 != *(int *)(param_1 + 4)) {
    if (*(int *)(param_1 + 4) == 0) {
      *(int *)(param_1 + 4) = iVar12;
      if (iVar12 == 0) {
        iVar12 = *(int *)(this + 0x30);
        goto LAB_0003b7cc;
      }
    }
    else {
      if (*(void **)param_1 != (void *)0x0) {
        operator_delete__(*(void **)param_1);
      }
      *(int *)(param_1 + 4) = iVar12;
      *(undefined4 *)param_1 = 0;
      if (iVar12 == 0) {
        iVar12 = *(int *)(this + 0x30);
        goto LAB_0003b7cc;
      }
    }
    pvVar2 = operator_new__(iVar12 << 2);
    iVar12 = *(int *)(this + 0x30);
    *(void **)param_1 = pvVar2;
  }
LAB_0003b7cc:
  if (iVar12 == 0) {
    uVar8 = 0;
  }
  else {
    iVar12 = *(int *)param_1;
    uVar11 = 0;
    do {
      *(uint *)(iVar12 + uVar11 * 4) = uVar11;
      uVar8 = *(uint *)(this + 0x30);
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar8);
  }
  if ((this[0xc6] != (GEModel)0x0) && (uVar8 != 0)) {
    uVar8 = 0;
    iVar12 = 0;
    do {
      iVar1 = GEMaterial::GetIsSuitableForMultiPassTransparency
                        (*(GEMaterial **)(*(int *)(this + 0x84) + uVar8 * 4));
      uVar8 = uVar8 + 1;
      if (iVar1 != 0) {
        iVar12 = iVar12 + 1;
      }
    } while (uVar8 < *(uint *)(this + 0x30));
    if (iVar12 != 0) {
      iVar12 = iVar12 + *(uint *)(this + 0x30);
      pvVar2 = operator_new__(iVar12 * 4);
      pvVar3 = operator_new__(iVar12 * 4);
      if (iVar12 != 0) {
        iVar1 = 0;
        iVar13 = 0;
        do {
          pGVar4 = operator_new(0x18);
          GEIndexBuffer::GEIndexBuffer(pGVar4);
          *(GEIndexBuffer **)((int)pvVar2 + iVar1) = pGVar4;
          pGVar5 = operator_new(0x158);
          GEMaterial::GEMaterial(pGVar5);
          iVar13 = iVar13 + 1;
          *(GEMaterial **)((int)pvVar3 + iVar1) = pGVar5;
          iVar1 = iVar1 + 4;
        } while (iVar13 != iVar12);
      }
      if (*(int *)(this + 0x30) != 0) {
        uVar8 = 0;
        iVar1 = 0;
        do {
          while( true ) {
            pGVar5 = *(GEMaterial **)(*(int *)(this + 0x84) + uVar8 * 4);
            pGVar4 = *(GEIndexBuffer **)(*(int *)(this + 0x80) + uVar8 * 4);
            iVar13 = GEMaterial::GetIsSuitableForMultiPassTransparency(pGVar5);
            if (iVar13 != 0) break;
            pGVar14 = *(GEIndexBuffer **)((int)pvVar2 + iVar1 * 4);
            pGVar7 = *(GEMaterial **)((int)pvVar3 + iVar1 * 4);
            *(int *)(*(int *)param_1 + uVar8 * 4) = iVar1;
            GEMaterial::Clone(pGVar5,pGVar7);
            GEIndexBuffer::Clone(pGVar4,pGVar14);
            uVar11 = *(uint *)(this + 0x30);
            uVar8 = uVar8 + 1;
            iVar1 = iVar1 + 1;
            if (uVar11 <= uVar8) goto LAB_0003b9cc;
          }
          pGVar15 = *(GEIndexBuffer **)((int)pvVar2 + iVar1 * 4);
          iVar13 = iVar1 + 1;
          pGVar7 = *(GEMaterial **)((int)pvVar3 + iVar1 * 4);
          pGVar9 = *(GEMaterial **)((int)pvVar3 + iVar13 * 4);
          *(int *)(*(int *)param_1 + uVar8 * 4) = iVar13;
          pGVar14 = *(GEIndexBuffer **)((int)pvVar2 + iVar13 * 4);
          GEMaterial::ConvertToMultiPassTransparency(pGVar5,pGVar7,pGVar9);
          uVar8 = uVar8 + 1;
          GEIndexBuffer::Clone(pGVar4,pGVar15);
          GEIndexBuffer::Clone(pGVar4,pGVar14);
          uVar11 = *(uint *)(this + 0x30);
          iVar1 = iVar1 + 2;
        } while (uVar8 < uVar11);
LAB_0003b9cc:
        if (uVar11 != 0) {
          uVar8 = 0;
          do {
            while( true ) {
              iVar13 = *(int *)(this + 0x80);
              iVar1 = uVar8 * 4;
              piVar6 = *(int **)(iVar13 + uVar8 * 4);
              uVar8 = uVar8 + 1;
              if (piVar6 != (int *)0x0) {
                (**(code **)(*piVar6 + 4))();
                iVar13 = *(int *)(this + 0x80);
              }
              *(undefined4 *)(iVar13 + iVar1) = 0;
              iVar13 = *(int *)(this + 0x84);
              piVar6 = *(int **)(iVar13 + iVar1);
              if ((piVar6 != (int *)0x0) &&
                 (iVar10 = piVar6[1], piVar6[1] = iVar10 + -1, iVar10 == 1)) break;
              uVar11 = *(uint *)(this + 0x30);
              *(undefined4 *)(iVar13 + iVar1) = 0;
              if (uVar11 <= uVar8) goto LAB_0003ba70;
            }
            (**(code **)(*piVar6 + 4))();
            uVar11 = *(uint *)(this + 0x30);
            *(undefined4 *)(*(int *)(this + 0x84) + iVar1) = 0;
          } while (uVar8 < uVar11);
        }
      }
LAB_0003ba70:
      if (*(void **)(this + 0x80) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0x80));
      }
      *(undefined4 *)(this + 0x80) = 0;
      if (*(void **)(this + 0x84) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0x84));
      }
      *(void **)(this + 0x80) = pvVar2;
      *(void **)(this + 0x84) = pvVar3;
      *(int *)(this + 0x30) = iVar12;
    }
  }
  return;
}

