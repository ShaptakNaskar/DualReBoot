/* 000393b0 | STG::GEModel::ConvertToMultiPassTransparency */

/* STG::GEModel::ConvertToMultiPassTransparency(STG::UArrayFixed<unsigned long, unsigned long>&) */

void __thiscall STG::GEModel::ConvertToMultiPassTransparency(GEModel *this,UArrayFixed *param_1)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  GEIndexBuffer *pGVar4;
  GEMaterial *pGVar5;
  int iVar6;
  GEMaterial *pGVar7;
  uint uVar8;
  GEMaterial *pGVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  GEIndexBuffer *pGVar15;
  GEIndexBuffer *pGVar16;
  
  iVar13 = *(int *)(this + 0x30);
  if (iVar13 != *(int *)(param_1 + 4)) {
    if (*(int *)(param_1 + 4) == 0) {
      *(int *)(param_1 + 4) = iVar13;
      if (iVar13 == 0) {
        iVar13 = *(int *)(this + 0x30);
        goto LAB_000393e8;
      }
    }
    else {
      if (*(void **)param_1 != (void *)0x0) {
        operator_delete__(*(void **)param_1);
      }
      *(int *)(param_1 + 4) = iVar13;
      *(undefined4 *)param_1 = 0;
      if (iVar13 == 0) {
        iVar13 = *(int *)(this + 0x30);
        goto LAB_000393e8;
      }
    }
    pvVar2 = operator_new__(iVar13 << 2);
    iVar13 = *(int *)(this + 0x30);
    *(void **)param_1 = pvVar2;
  }
LAB_000393e8:
  if (iVar13 == 0) {
    uVar8 = 0;
  }
  else {
    iVar13 = *(int *)param_1;
    uVar10 = 0;
    do {
      *(uint *)(iVar13 + uVar10 * 4) = uVar10;
      uVar10 = uVar10 + 1;
      uVar8 = *(uint *)(this + 0x30);
    } while (uVar10 < uVar8);
  }
  if ((this[0xc6] != (GEModel)0x0) && (uVar8 != 0)) {
    uVar8 = 0;
    iVar13 = 0;
    do {
      iVar1 = uVar8 * 4;
      uVar8 = uVar8 + 1;
      iVar1 = GEMaterial::GetIsSuitableForMultiPassTransparency
                        (*(GEMaterial **)(*(int *)(this + 0x84) + iVar1));
      if (iVar1 != 0) {
        iVar13 = iVar13 + 1;
      }
    } while (uVar8 < *(uint *)(this + 0x30));
    if (iVar13 != 0) {
      iVar13 = iVar13 + *(uint *)(this + 0x30);
      pvVar2 = operator_new__(iVar13 * 4);
      pvVar3 = operator_new__(iVar13 * 4);
      if (iVar13 != 0) {
        iVar1 = 0;
        iVar14 = 0;
        do {
          iVar14 = iVar14 + 1;
          pGVar4 = operator_new(0x18);
          GEIndexBuffer::GEIndexBuffer(pGVar4);
          *(GEIndexBuffer **)((int)pvVar2 + iVar1) = pGVar4;
          pGVar5 = operator_new(0x158);
          GEMaterial::GEMaterial(pGVar5);
          *(GEMaterial **)((int)pvVar3 + iVar1) = pGVar5;
          iVar1 = iVar1 + 4;
        } while (iVar14 != iVar13);
      }
      if (*(int *)(this + 0x30) != 0) {
        uVar8 = 0;
        iVar1 = 0;
        do {
          while( true ) {
            pGVar5 = *(GEMaterial **)(*(int *)(this + 0x84) + uVar8 * 4);
            pGVar4 = *(GEIndexBuffer **)(*(int *)(this + 0x80) + uVar8 * 4);
            iVar6 = GEMaterial::GetIsSuitableForMultiPassTransparency(pGVar5);
            iVar14 = iVar1 * 4;
            iVar11 = iVar1 + 1;
            if (iVar6 != 0) break;
            pGVar15 = *(GEIndexBuffer **)((int)pvVar2 + iVar1 * 4);
            pGVar7 = *(GEMaterial **)((int)pvVar3 + iVar14);
            *(int *)(*(int *)param_1 + uVar8 * 4) = iVar1;
            uVar8 = uVar8 + 1;
            GEMaterial::Clone(pGVar5,pGVar7);
            iVar1 = iVar1 + 1;
            GEIndexBuffer::Clone(pGVar4,pGVar15);
            uVar10 = *(uint *)(this + 0x30);
            if (uVar10 <= uVar8) goto LAB_000395e4;
          }
          pGVar16 = *(GEIndexBuffer **)((int)pvVar2 + iVar1 * 4);
          iVar1 = iVar1 + 2;
          pGVar9 = *(GEMaterial **)((int)pvVar3 + iVar11 * 4);
          pGVar7 = *(GEMaterial **)((int)pvVar3 + iVar14);
          *(int *)(*(int *)param_1 + uVar8 * 4) = iVar11;
          uVar8 = uVar8 + 1;
          pGVar15 = *(GEIndexBuffer **)((int)pvVar2 + iVar11 * 4);
          GEMaterial::ConvertToMultiPassTransparency(pGVar5,pGVar7,pGVar9);
          GEIndexBuffer::Clone(pGVar4,pGVar16);
          GEIndexBuffer::Clone(pGVar4,pGVar15);
          uVar10 = *(uint *)(this + 0x30);
        } while (uVar8 < uVar10);
LAB_000395e4:
        if (uVar10 != 0) {
          uVar8 = 0;
          do {
            while( true ) {
              iVar14 = *(int *)(this + 0x80);
              iVar1 = uVar8 * 4;
              piVar12 = *(int **)(iVar14 + uVar8 * 4);
              uVar8 = uVar8 + 1;
              if (piVar12 != (int *)0x0) {
                (**(code **)(*piVar12 + 4))(piVar12);
                iVar14 = *(int *)(this + 0x80);
              }
              *(undefined4 *)(iVar14 + iVar1) = 0;
              iVar14 = *(int *)(this + 0x84);
              piVar12 = *(int **)(iVar14 + iVar1);
              if ((piVar12 == (int *)0x0) ||
                 (iVar6 = piVar12[1], piVar12[1] = iVar6 + -1, iVar6 != 1)) break;
              (**(code **)(*piVar12 + 4))();
              uVar10 = *(uint *)(this + 0x30);
              *(undefined4 *)(*(int *)(this + 0x84) + iVar1) = 0;
              if (uVar10 <= uVar8) goto LAB_0003968c;
            }
            uVar10 = *(uint *)(this + 0x30);
            *(undefined4 *)(iVar14 + iVar1) = 0;
          } while (uVar8 < uVar10);
        }
      }
LAB_0003968c:
      if (*(void **)(this + 0x80) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0x80));
      }
      *(undefined4 *)(this + 0x80) = 0;
      if (*(void **)(this + 0x84) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0x84));
      }
      *(void **)(this + 0x80) = pvVar2;
      *(void **)(this + 0x84) = pvVar3;
      *(int *)(this + 0x30) = iVar13;
    }
  }
  return;
}

