/* 00041bac | STG::GEScene::ApplyTint */

/* STG::GEScene::ApplyTint(STG::GEColor const&) */

void __thiscall STG::GEScene::ApplyTint(GEScene *this,GEColor *param_1)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  GEVertexBuffer *pGVar14;
  uint uVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  float fVar26;
  int local_44;
  int local_40;
  int local_3c [2];
  
  uVar22 = *(undefined8 *)param_1;
  uVar25 = *(undefined8 *)(param_1 + 8);
  if (1.0 < (float)uVar22) {
    uVar22 = CONCAT44((int)((ulonglong)uVar22 >> 0x20),0x3f800000);
  }
  fVar21 = (float)((ulonglong)uVar22 >> 0x20);
  if ((float)uVar22 < DAT_00041f28) {
    uVar22 = CONCAT44(fVar21,DAT_00041f28);
  }
  if (1.0 < fVar21) {
    uVar22 = CONCAT44(0x3f800000,(int)uVar22);
  }
  if ((float)((ulonglong)uVar22 >> 0x20) < DAT_00041f28) {
    uVar22 = CONCAT44(DAT_00041f28,(int)uVar22);
  }
  if (1.0 < (float)uVar25) {
    uVar25 = CONCAT44((int)((ulonglong)uVar25 >> 0x20),0x3f800000);
  }
  fVar21 = (float)((ulonglong)uVar25 >> 0x20);
  if ((float)uVar25 < DAT_00041f28) {
    uVar25 = CONCAT44(fVar21,DAT_00041f28);
  }
  if (1.0 < fVar21) {
    uVar25 = CONCAT44(0x3f800000,(int)uVar25);
  }
  fVar21 = (float)uVar22;
  if ((float)((ulonglong)uVar25 >> 0x20) < DAT_00041f28) {
    uVar25 = CONCAT44(DAT_00041f28,(int)uVar25);
  }
  fVar23 = (float)((ulonglong)uVar22 >> 0x20);
  fVar24 = (float)uVar25;
  fVar26 = (float)((ulonglong)uVar25 >> 0x20);
  if (((((fVar21 != 1.0) || (fVar23 != 1.0)) || (fVar24 != 1.0)) || (fVar26 != 1.0)) &&
     (uVar13 = *(uint *)(this + 0xa4), uVar13 != 0)) {
    fVar17 = fVar21 * DAT_00041f2c;
    uVar15 = 0;
    fVar18 = fVar23 * DAT_00041f2c;
    fVar19 = fVar24 * DAT_00041f2c;
    fVar20 = fVar26 * DAT_00041f2c;
    do {
      iVar11 = *(int *)(*(int *)(this + 0xb0) + uVar15 * 4);
      iVar16 = *(int *)(iVar11 + 0x30);
      bVar3 = *(byte *)(iVar11 + 0xa4) ^ 1;
      if (iVar16 != 0) {
        iVar6 = 0;
        piVar5 = *(int **)(iVar11 + 0x84);
        do {
          while( true ) {
            iVar8 = *(int *)(*piVar5 + 0x13c);
            if ((iVar8 != 5) && (iVar8 != 2)) break;
            iVar6 = iVar6 + 1;
            bVar3 = 0;
            piVar5 = piVar5 + 1;
            if (iVar6 == iVar16) goto LAB_00041d00;
          }
          iVar6 = iVar6 + 1;
          if (iVar8 == 4) {
            bVar3 = 0;
          }
          piVar5 = piVar5 + 1;
        } while (iVar6 != iVar16);
      }
LAB_00041d00:
      if (((bVar3 != 0) && (*(char *)(iVar11 + 0xc5) == '\0')) || (*(char *)(iVar11 + 0xc4) != '\0')
         ) {
        if (iVar16 != 0) {
          uVar13 = 0;
          do {
            iVar16 = *(int *)(*(int *)(iVar11 + 0x84) + uVar13 * 4);
            uVar13 = uVar13 + 1;
            *(float *)(iVar16 + 0x14c) = fVar23 * *(float *)(iVar16 + 0x14c);
            *(float *)(iVar16 + 0x150) = fVar24 * *(float *)(iVar16 + 0x150);
            *(float *)(iVar16 + 0x154) = fVar26 * *(float *)(iVar16 + 0x154);
            *(float *)(iVar16 + 0x148) = *(float *)(iVar16 + 0x148) * fVar21;
          } while (uVar13 < *(uint *)(iVar11 + 0x30));
        }
        if (*(int *)(iVar11 + 0x34) != 0) {
          uVar13 = 0;
          do {
            while( true ) {
              iVar6 = 0;
              pGVar14 = *(GEVertexBuffer **)(*(int *)(iVar11 + 0x7c) + uVar13 * 4);
              local_44 = 2;
              local_40 = 0;
              local_3c[0] = 0;
              iVar16 = GEVertexBuffer::HasComponent(pGVar14,2,&local_44,&local_40,local_3c);
              if ((((iVar16 != 0) && (local_44 == 1)) && (local_40 == 4)) && (local_3c[0] == 4))
              break;
LAB_00041d90:
              uVar13 = uVar13 + 1;
              if (*(uint *)(iVar11 + 0x34) <= uVar13) goto LAB_00041ef0;
            }
            iVar16 = *(int *)(pGVar14 + 0x10);
            iVar8 = *(int *)(pGVar14 + 0xc);
            if (iVar16 == 0) goto LAB_00041d90;
            puVar7 = (uint *)(*(int *)(pGVar14 + 0x14) + *(int *)(pGVar14 + 0x74));
            do {
              uVar9 = *puVar7;
              uVar4 = 0xff000000;
              iVar6 = iVar6 + 1;
              uVar12 = ((uint)(0.0 < fVar20) * (int)fVar20 * (uVar9 >> 0x18)) / 0xffff;
              uVar10 = ((uint)(0.0 < fVar17) * (int)fVar17 * (uVar9 & 0xff)) / 0xffff;
              if (uVar12 < 0xff) {
                uVar4 = uVar12 << 0x18;
              }
              uVar1 = ((uint)(0.0 < fVar18) * (int)fVar18 * ((uVar9 & 0xffff) >> 8)) / 0xffff;
              uVar12 = 0xff0000;
              if (0xfe < uVar10) {
                uVar10 = 0xff;
              }
              uVar2 = ((uint)(0.0 < fVar19) * (int)fVar19 * ((uVar9 & 0xffffff) >> 0x10)) / 0xffff;
              uVar9 = uVar1 << 8;
              if (0xfe < uVar1) {
                uVar9 = 0xff00;
              }
              if (uVar2 < 0xff) {
                uVar12 = uVar2 << 0x10;
              }
              *puVar7 = uVar4 | uVar10 | uVar9 | uVar12;
              puVar7 = (uint *)((int)puVar7 + iVar8);
            } while (iVar6 != iVar16);
            uVar13 = uVar13 + 1;
          } while (uVar13 < *(uint *)(iVar11 + 0x34));
        }
LAB_00041ef0:
        uVar13 = *(uint *)(this + 0xa4);
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 < uVar13);
  }
  return;
}

