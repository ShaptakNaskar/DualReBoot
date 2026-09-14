/* 00047e30 | STG::GEScene::ApplyTint */

/* STG::GEScene::ApplyTint(STG::GEColor const&) */

void __thiscall STG::GEScene::ApplyTint(GEScene *this,GEColor *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  GEVertexBuffer *pGVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  char cVar10;
  int iVar11;
  uint *puVar12;
  uint uVar13;
  byte bVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int unaff_EBX;
  uint uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  int local_60;
  uint local_5c;
  int local_40 [4];
  int local_30 [4];
  int local_20 [3];
  undefined4 uStack_14;
  
  uStack_14 = 0x47e3b;
  FUN_0002e044();
  fVar1 = *(float *)(unaff_EBX + 0x3f86d);
  fVar21 = *(float *)param_1;
  if (fVar1 <= *(float *)param_1) {
    fVar21 = fVar1;
  }
  fVar22 = *(float *)(param_1 + 4);
  if (fVar1 <= *(float *)(param_1 + 4)) {
    fVar22 = fVar1;
  }
  fVar23 = *(float *)(param_1 + 8);
  if (fVar1 <= *(float *)(param_1 + 8)) {
    fVar23 = fVar1;
  }
  fVar24 = *(float *)(param_1 + 0xc);
  if (fVar1 <= *(float *)(param_1 + 0xc)) {
    fVar24 = fVar1;
  }
  if (fVar21 <= 0.0) {
    fVar21 = 0.0;
  }
  if (fVar22 <= 0.0) {
    fVar22 = 0.0;
  }
  if (fVar23 <= 0.0) {
    fVar23 = 0.0;
  }
  fVar20 = 0.0;
  if (0.0 <= fVar24) {
    fVar20 = fVar24;
  }
  if (((((fVar21 != fVar1) || (fVar22 != fVar1)) || (fVar23 != fVar1)) || (fVar20 != fVar1)) &&
     (*(int *)(this + 0xa4) != 0)) {
    fVar1 = *(float *)(unaff_EBX + 0x3f8b1);
    local_5c = 0;
    fVar24 = *(float *)(unaff_EBX + 0x3fa15);
    uVar6 = (uint)(fVar24 <= fVar21 * fVar1);
    uVar7 = (uint)(fVar24 <= fVar22 * fVar1);
    uVar8 = (uint)(fVar24 <= fVar23 * fVar1);
    uVar9 = (uint)(fVar24 <= fVar1 * fVar20);
    do {
      iVar2 = *(int *)(*(int *)(this + 0xb0) + local_5c * 4);
      iVar3 = *(int *)(iVar2 + 0x30);
      bVar14 = *(byte *)(iVar2 + 0xa4) ^ 1;
      if (iVar3 != 0) {
        iVar11 = 0;
        do {
          while ((iVar4 = *(int *)(*(int *)(*(int *)(iVar2 + 0x84) + iVar11 * 4) + 0x13c),
                 iVar4 != 5 && (iVar4 != 2))) {
            if (iVar4 == 4) {
              bVar14 = 0;
            }
            iVar11 = iVar11 + 1;
            if (iVar11 == iVar3) goto LAB_00048022;
          }
          iVar11 = iVar11 + 1;
          bVar14 = 0;
        } while (iVar11 != iVar3);
      }
LAB_00048022:
      if (((bVar14 != 0) && (*(char *)(iVar2 + 0xc5) == '\0')) || (*(char *)(iVar2 + 0xc4) != '\0'))
      {
        if (iVar3 != 0) {
          uVar16 = 0;
          do {
            iVar3 = *(int *)(*(int *)(iVar2 + 0x84) + uVar16 * 4);
            uVar16 = uVar16 + 1;
            *(float *)(iVar3 + 0x14c) = fVar22 * *(float *)(iVar3 + 0x14c);
            *(float *)(iVar3 + 0x150) = fVar23 * *(float *)(iVar3 + 0x150);
            *(float *)(iVar3 + 0x154) = fVar20 * *(float *)(iVar3 + 0x154);
            *(float *)(iVar3 + 0x148) = fVar21 * *(float *)(iVar3 + 0x148);
          } while (uVar16 < *(uint *)(iVar2 + 0x30));
        }
        if (*(int *)(iVar2 + 0x34) != 0) {
          uVar16 = 0;
          do {
            while( true ) {
              pGVar5 = *(GEVertexBuffer **)(*(int *)(iVar2 + 0x7c) + uVar16 * 4);
              local_40[0] = 2;
              local_30[0] = 0;
              local_20[0] = 0;
              cVar10 = GEVertexBuffer::HasComponent(pGVar5,2,local_40,local_30,local_20);
              if ((((cVar10 != '\0') && (local_40[0] == 1)) && (local_30[0] == 4)) &&
                 (local_20[0] == 4)) break;
LAB_000480c0:
              uVar16 = uVar16 + 1;
              if (*(uint *)(iVar2 + 0x34) <= uVar16) goto LAB_00048278;
            }
            iVar3 = *(int *)(pGVar5 + 0xc);
            iVar11 = *(int *)(pGVar5 + 0x10);
            if (iVar11 == 0) goto LAB_000480c0;
            puVar12 = (uint *)(*(int *)(pGVar5 + 0x14) + *(int *)(pGVar5 + 0x74));
            local_60 = 0;
            do {
              uVar13 = *puVar12;
              uVar17 = ((uVar13 & 0xff) *
                       ((int)(fVar21 * fVar1 - (float)((uint)fVar24 & -uVar6)) ^ uVar6 * -0x80000000
                       )) / 0xffff;
              uVar18 = ((uVar13 >> 0x18) *
                       ((int)(fVar1 * fVar20 - (float)((uint)fVar24 & -uVar9)) ^ uVar9 * -0x80000000
                       )) / 0xffff;
              uVar15 = ((uVar13 >> 8 & 0xff) *
                       ((int)(fVar22 * fVar1 - (float)((uint)fVar24 & -uVar7)) ^ uVar7 * -0x80000000
                       )) / 0xffff;
              uVar19 = ((uVar13 >> 0x10 & 0xff) *
                       ((int)(fVar23 * fVar1 - (float)((uint)fVar24 & -uVar8)) ^ uVar8 * -0x80000000
                       )) / 0xffff;
              uVar13 = 0xff000000;
              if (uVar18 < 0xff) {
                uVar13 = uVar18 << 0x18;
              }
              uVar18 = 0xff;
              if (uVar17 < 0xff) {
                uVar18 = uVar17;
              }
              uVar17 = 0xff00;
              if (uVar15 < 0xff) {
                uVar17 = uVar15 << 8;
              }
              uVar15 = 0xff0000;
              if (uVar19 < 0xff) {
                uVar15 = uVar19 << 0x10;
              }
              local_60 = local_60 + 1;
              *puVar12 = uVar13 | uVar18 | uVar17 | uVar15;
              puVar12 = (uint *)((int)puVar12 + iVar3);
            } while (local_60 != iVar11);
            uVar16 = uVar16 + 1;
          } while (uVar16 < *(uint *)(iVar2 + 0x34));
        }
      }
LAB_00048278:
      local_5c = local_5c + 1;
    } while (local_5c < *(uint *)(this + 0xa4));
  }
  return;
}

