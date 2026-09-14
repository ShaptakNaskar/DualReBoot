/* 0003c4b0 | STG::GEModel::ConvertToMultiPassTransparency */

/* STG::GEModel::ConvertToMultiPassTransparency(STG::UArrayFixed<unsigned long, unsigned long>&) */

undefined4 __thiscall
STG::GEModel::ConvertToMultiPassTransparency(GEModel *this,UArrayFixed *param_1)

{
  int iVar1;
  GEIndexBuffer *pGVar2;
  GEIndexBuffer *pGVar3;
  int *piVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  void *pvVar8;
  void *pvVar9;
  GEIndexBuffer *pGVar10;
  GEMaterial *pGVar11;
  int *piVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  
  FUN_0002e044();
  iVar15 = *(int *)(this + 0x30);
  if (iVar15 != *(int *)(param_1 + 4)) {
    if (*(int *)(param_1 + 4) == 0) {
      *(int *)(param_1 + 4) = iVar15;
    }
    else {
      if (*(void **)param_1 != (void *)0x0) {
        operator_delete__(*(void **)param_1);
      }
      *(undefined4 *)param_1 = 0;
      *(int *)(param_1 + 4) = iVar15;
    }
    if (iVar15 != 0) {
      pvVar8 = operator_new__(iVar15 << 2);
      *(void **)param_1 = pvVar8;
    }
    iVar15 = *(int *)(this + 0x30);
  }
  uVar13 = 0;
  if (iVar15 != 0) {
    uVar7 = 0;
    do {
      *(uint *)(*(int *)param_1 + uVar7 * 4) = uVar7;
      uVar7 = uVar7 + 1;
      uVar13 = *(uint *)(this + 0x30);
    } while (uVar7 < uVar13);
  }
  if ((this[0xc6] != (GEModel)0x0) && (uVar13 != 0)) {
    uVar13 = 0;
    iVar15 = 0;
    do {
      iVar14 = uVar13 * 4;
      uVar13 = uVar13 + 1;
      cVar6 = GEMaterial::GetIsSuitableForMultiPassTransparency
                        (*(GEMaterial **)(*(int *)(this + 0x84) + iVar14));
      iVar15 = (iVar15 + 1) - (uint)(cVar6 == '\0');
    } while (uVar13 < *(uint *)(this + 0x30));
    if (iVar15 != 0) {
      iVar15 = *(uint *)(this + 0x30) + iVar15;
      pvVar8 = operator_new__(iVar15 * 4);
      pvVar9 = operator_new__(iVar15 * 4);
      if (iVar15 != 0) {
        iVar14 = 0;
        do {
          pGVar10 = operator_new(0x18);
          GEIndexBuffer::GEIndexBuffer(pGVar10);
          *(GEIndexBuffer **)((int)pvVar8 + iVar14 * 4) = pGVar10;
          pGVar11 = operator_new(0x158);
          GEMaterial::GEMaterial(pGVar11);
          *(GEMaterial **)((int)pvVar9 + iVar14 * 4) = pGVar11;
          iVar14 = iVar14 + 1;
        } while (iVar14 != iVar15);
      }
      if (*(int *)(this + 0x30) != 0) {
        uVar13 = 0;
        iVar14 = 0;
        do {
          while( true ) {
            pGVar11 = *(GEMaterial **)(*(int *)(this + 0x84) + uVar13 * 4);
            pGVar10 = *(GEIndexBuffer **)(*(int *)(this + 0x80) + uVar13 * 4);
            cVar6 = GEMaterial::GetIsSuitableForMultiPassTransparency(pGVar11);
            if (cVar6 != '\0') break;
            pGVar3 = *(GEIndexBuffer **)((int)pvVar8 + iVar14 * 4);
            *(int *)(*(int *)param_1 + uVar13 * 4) = iVar14;
            iVar1 = iVar14 * 4;
            uVar13 = uVar13 + 1;
            iVar14 = iVar14 + 1;
            GEMaterial::Clone(pGVar11,*(GEMaterial **)((int)pvVar9 + iVar1));
            GEIndexBuffer::Clone(pGVar10,pGVar3);
            uVar7 = *(uint *)(this + 0x30);
            if (uVar7 <= uVar13) goto LAB_0003c73d;
          }
          iVar1 = iVar14 + 1;
          *(int *)(*(int *)param_1 + uVar13 * 4) = iVar1;
          iVar5 = iVar14 * 4;
          uVar13 = uVar13 + 1;
          pGVar3 = *(GEIndexBuffer **)((int)pvVar8 + iVar14 * 4);
          iVar14 = iVar14 + 2;
          pGVar2 = *(GEIndexBuffer **)((int)pvVar8 + iVar1 * 4);
          GEMaterial::ConvertToMultiPassTransparency
                    (pGVar11,*(GEMaterial **)((int)pvVar9 + iVar5),
                     *(GEMaterial **)((int)pvVar9 + iVar1 * 4));
          GEIndexBuffer::Clone(pGVar10,pGVar3);
          GEIndexBuffer::Clone(pGVar10,pGVar2);
          uVar7 = *(uint *)(this + 0x30);
        } while (uVar13 < uVar7);
LAB_0003c73d:
        if (uVar7 != 0) {
          uVar13 = 0;
          do {
            while( true ) {
              iVar14 = uVar13 * 4;
              piVar12 = (int *)(*(int *)(this + 0x80) + iVar14);
              piVar4 = (int *)*piVar12;
              if (piVar4 != (int *)0x0) {
                (**(code **)(*piVar4 + 4))(piVar4);
                piVar12 = (int *)(*(int *)(this + 0x80) + iVar14);
              }
              *piVar12 = 0;
              iVar1 = *(int *)(this + 0x84);
              piVar12 = *(int **)(iVar1 + iVar14);
              if ((piVar12 != (int *)0x0) &&
                 (iVar5 = piVar12[1], piVar12[1] = iVar5 + -1, iVar5 == 1)) break;
              uVar13 = uVar13 + 1;
              uVar7 = *(uint *)(this + 0x30);
              *(int *)(iVar1 + iVar14) = 0;
              if (uVar7 <= uVar13) goto LAB_0003c7d0;
            }
            (**(code **)(*piVar12 + 4))(piVar12);
            uVar13 = uVar13 + 1;
            uVar7 = *(uint *)(this + 0x30);
            *(undefined4 *)(*(int *)(this + 0x84) + iVar14) = 0;
          } while (uVar13 < uVar7);
        }
      }
LAB_0003c7d0:
      if (*(void **)(this + 0x80) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0x80));
      }
      *(undefined4 *)(this + 0x80) = 0;
      if (*(void **)(this + 0x84) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0x84));
      }
      *(void **)(this + 0x80) = pvVar8;
      *(void **)(this + 0x84) = pvVar9;
      *(int *)(this + 0x30) = iVar15;
      return 1;
    }
  }
  return 0;
}

