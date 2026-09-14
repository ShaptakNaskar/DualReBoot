/* 00043d7c | STG::GEScene::ApplyTint */

/* STG::GEScene::ApplyTint(STG::GEColor const&) */

void __thiscall STG::GEScene::ApplyTint(GEScene *this,GEColor *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  uint *puVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  GEVertexBuffer *pGVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  int iVar24;
  undefined4 local_6c;
  undefined4 local_68;
  uint local_64;
  int local_34;
  int local_30;
  int local_2c [2];
  
  uVar22 = *(undefined4 *)param_1;
  uVar23 = *(undefined4 *)(param_1 + 4);
  local_6c = *(undefined4 *)(param_1 + 8);
  local_68 = *(undefined4 *)(param_1 + 0xc);
  iVar2 = __aeabi_fcmple(uVar22,0x3f800000);
  if (iVar2 == 0) {
    uVar22 = 0x3f800000;
  }
  iVar2 = __aeabi_fcmpge(uVar22,0);
  if (iVar2 == 0) {
    uVar22 = 0;
  }
  iVar2 = __aeabi_fcmple(uVar23,0x3f800000);
  if (iVar2 == 0) {
    uVar23 = 0x3f800000;
  }
  iVar2 = __aeabi_fcmpge(uVar23,0);
  if (iVar2 == 0) {
    uVar23 = 0;
  }
  iVar2 = __aeabi_fcmple(local_6c,0x3f800000);
  if (iVar2 == 0) {
    local_6c = 0x3f800000;
  }
  iVar2 = __aeabi_fcmpge(local_6c,0);
  if (iVar2 == 0) {
    local_6c = 0;
  }
  iVar2 = __aeabi_fcmple(local_68,0x3f800000);
  if (iVar2 == 0) {
    local_68 = 0x3f800000;
  }
  iVar2 = __aeabi_fcmpge(local_68,0);
  if (iVar2 == 0) {
    local_68 = 0;
  }
  iVar2 = __aeabi_fcmpeq(uVar22,0x3f800000);
  if (((((iVar2 != 0) && (iVar2 = __aeabi_fcmpeq(uVar23,0x3f800000), iVar2 != 0)) &&
       (iVar2 = __aeabi_fcmpeq(local_6c,0x3f800000), iVar2 != 0)) &&
      (iVar2 = __aeabi_fcmpeq(local_68,0x3f800000), iVar2 != 0)) ||
     (uVar19 = *(uint *)(this + 0xa4), uVar19 == 0)) {
    return;
  }
  __mulsf3(uVar22,DAT_000441e8);
  iVar2 = __fixunssfsi();
  __mulsf3(uVar23,DAT_000441e8);
  iVar3 = __fixunssfsi();
  __mulsf3(local_6c,DAT_000441e8);
  iVar4 = __fixunssfsi();
  __mulsf3(local_68,DAT_000441e8);
  iVar5 = __fixunssfsi();
  local_64 = 0;
LAB_00043ef8:
  do {
    iVar17 = *(int *)(*(int *)(this + 0xb0) + local_64 * 4);
    iVar24 = *(int *)(iVar17 + 0x30);
    bVar1 = *(byte *)(iVar17 + 0xa4) ^ 1;
    if (iVar24 != 0) {
      iVar12 = 0;
      piVar11 = *(int **)(iVar17 + 0x84);
      do {
        while( true ) {
          iVar14 = *(int *)(*piVar11 + 0x13c);
          if ((iVar14 != 5) && (iVar14 != 2)) break;
          iVar12 = iVar12 + 1;
          bVar1 = 0;
          piVar11 = piVar11 + 1;
          if (iVar12 == iVar24) goto LAB_00043f64;
        }
        iVar12 = iVar12 + 1;
        if (iVar14 == 4) {
          bVar1 = 0;
        }
        piVar11 = piVar11 + 1;
      } while (iVar12 != iVar24);
    }
LAB_00043f64:
    if (((bVar1 != 0) && (*(char *)(iVar17 + 0xc5) == '\0')) || (*(char *)(iVar17 + 0xc4) != '\0'))
    {
      if (iVar24 != 0) {
        uVar19 = 0;
        do {
          iVar24 = *(int *)(*(int *)(iVar17 + 0x84) + uVar19 * 4);
          uVar19 = uVar19 + 1;
          uVar6 = __mulsf3(uVar23,*(undefined4 *)(iVar24 + 0x14c));
          uVar7 = __mulsf3(local_6c,*(undefined4 *)(iVar24 + 0x150));
          uVar8 = __mulsf3(local_68,*(undefined4 *)(iVar24 + 0x154));
          uVar9 = __mulsf3(*(undefined4 *)(iVar24 + 0x148),uVar22);
          *(undefined4 *)(iVar24 + 0x14c) = uVar6;
          *(undefined4 *)(iVar24 + 0x148) = uVar9;
          *(undefined4 *)(iVar24 + 0x150) = uVar7;
          *(undefined4 *)(iVar24 + 0x154) = uVar8;
        } while (uVar19 < *(uint *)(iVar17 + 0x30));
      }
      if (*(int *)(iVar17 + 0x34) == 0) {
        uVar19 = *(uint *)(this + 0xa4);
        local_64 = local_64 + 1;
        if (uVar19 <= local_64) {
          return;
        }
        goto LAB_00043ef8;
      }
      uVar19 = 0;
      do {
        while( true ) {
          iVar12 = 0;
          pGVar21 = *(GEVertexBuffer **)(*(int *)(iVar17 + 0x7c) + uVar19 * 4);
          local_34 = 2;
          local_30 = 0;
          local_2c[0] = 0;
          iVar24 = GEVertexBuffer::HasComponent(pGVar21,2,&local_34,&local_30,local_2c);
          if ((((iVar24 != 0) && (local_34 == 1)) && (local_30 == 4)) && (local_2c[0] == 4)) break;
LAB_00044010:
          uVar19 = uVar19 + 1;
          if (*(uint *)(iVar17 + 0x34) <= uVar19) goto LAB_00044178;
        }
        iVar24 = *(int *)(pGVar21 + 0x10);
        iVar14 = *(int *)(pGVar21 + 0xc);
        if (iVar24 == 0) goto LAB_00044010;
        puVar13 = (uint *)(*(int *)(pGVar21 + 0x14) + *(int *)(pGVar21 + 0x74));
        do {
          uVar15 = *puVar13;
          uVar10 = 0xff000000;
          iVar12 = iVar12 + 1;
          uVar18 = (iVar5 * (uVar15 >> 0x18)) / 0xffff;
          uVar16 = (iVar2 * (uVar15 & 0xff)) / 0xffff;
          uVar20 = (iVar3 * (uVar15 >> 8 & 0xff)) / 0xffff;
          if (uVar18 < 0xff) {
            uVar10 = uVar18 << 0x18;
          }
          uVar18 = (iVar4 * (uVar15 >> 0x10 & 0xff)) / 0xffff;
          if (0xfe < uVar16) {
            uVar16 = 0xff;
          }
          if (uVar20 < 0xff) {
            uVar20 = uVar20 << 8;
          }
          else {
            uVar20 = 0xff00;
          }
          if (uVar18 < 0xff) {
            uVar18 = uVar18 << 0x10;
          }
          else {
            uVar18 = 0xff0000;
          }
          *puVar13 = uVar10 | uVar16 | uVar20 | uVar18;
          puVar13 = (uint *)((int)puVar13 + iVar14);
        } while (iVar12 != iVar24);
        uVar19 = uVar19 + 1;
      } while (uVar19 < *(uint *)(iVar17 + 0x34));
LAB_00044178:
      uVar19 = *(uint *)(this + 0xa4);
    }
    local_64 = local_64 + 1;
    if (uVar19 <= local_64) {
      return;
    }
  } while( true );
}

