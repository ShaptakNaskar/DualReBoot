/* 00048820 | STG::GEScene::Internal_UpdateAnimationTime */

/* STG::GEScene::Internal_UpdateAnimationTime() */

void __thiscall STG::GEScene::Internal_UpdateAnimationTime(GEScene *this)

{
  GETimeOfDay *this_00;
  GEScene *pGVar1;
  longlong lVar2;
  double dVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int unaff_EBX;
  uint uVar12;
  uint uVar13;
  double dVar14;
  undefined8 uVar15;
  uint local_110;
  int local_10c;
  uint local_f0 [51];
  undefined4 local_24;
  int local_20;
  int local_1c;
  undefined4 uStack_14;
  
  uStack_14 = 0x4882b;
  FUN_0002e044();
  puVar7 = local_f0;
  uVar10 = *(uint *)(unaff_EBX + 0x3f035);
  uVar12 = *(uint *)(unaff_EBX + 0x3f039);
  uVar9 = *(uint *)(unaff_EBX + 0x3f03d);
  uVar13 = *(uint *)(unaff_EBX + 0x3f041);
  do {
    *puVar7 = uVar10;
    puVar7[1] = uVar12;
    puVar7[2] = uVar9;
    puVar7[3] = uVar13;
    puVar7 = puVar7 + 4;
  } while (puVar7 != local_f0 + 0x30);
  local_f0[0x30] = *(uint *)(this + 0x204);
  local_f0[0x31] = *(uint *)(this + 0x208);
  local_f0[0x32] = *(uint *)(this + 0x20c);
  local_24 = *(undefined4 *)(this + 0x210);
  local_20 = local_f0[0x30] - *(uint *)(this + 0x20c);
  local_1c = (local_f0[0x31] - *(int *)(this + 0x210)) -
             (uint)(local_f0[0x30] < *(uint *)(this + 0x20c));
  iVar8 = 0;
  do {
    uVar4 = *(undefined4 *)((int)local_f0 + iVar8 + 4);
    uVar5 = *(undefined4 *)((int)local_f0 + iVar8 + 8);
    uVar6 = *(undefined4 *)((int)local_f0 + iVar8 + 0xc);
    pGVar1 = this + iVar8 + 0x22c;
    *(undefined4 *)pGVar1 = *(undefined4 *)((int)local_f0 + iVar8);
    *(undefined4 *)(pGVar1 + 4) = uVar4;
    *(undefined4 *)(pGVar1 + 8) = uVar5;
    *(undefined4 *)(pGVar1 + 0xc) = uVar6;
    iVar8 = iVar8 + 0x10;
  } while (iVar8 != 0xc0);
  *(uint *)(this + 0x2ec) = local_f0[0x30];
  *(uint *)(this + 0x2f0) = local_f0[0x31];
  *(uint *)(this + 0x2f4) = local_f0[0x32];
  *(undefined4 *)(this + 0x2f8) = local_24;
  local_110 = *(uint *)(this + 0x1fc);
  local_10c = *(int *)(this + 0x200);
  *(int *)(this + 0x2fc) = local_20;
  *(int *)(this + 0x300) = local_1c;
  uVar10 = *(uint *)(this + 0x204);
  uVar12 = *(uint *)(this + 0x208);
  *(uint *)(this + 0x25c) = uVar10;
  *(uint *)(this + 0x260) = uVar12;
  *(undefined4 *)(this + 0x264) = 1;
  *(undefined4 *)(this + 0x268) = 0;
  if (local_10c == 0 && local_110 == 0) {
    local_110 = 1;
    local_10c = 0;
  }
  *(uint *)(this + 0x234) = local_110;
  *(int *)(this + 0x238) = local_10c;
  uVar9 = *(uint *)(this + 0x214);
  uVar13 = *(uint *)(this + 0x218);
  *(uint *)(this + 0x22c) = uVar10;
  *(uint *)(this + 0x230) = uVar12;
  if (((uVar13 == 0 && uVar9 == 0) || (uVar12 < uVar13)) || ((uVar12 <= uVar13 && (uVar10 < uVar9)))
     ) {
    this[0x21d] = (GEScene)0x0;
    iVar8 = 0;
    iVar11 = 0;
  }
  else {
    iVar8 = uVar10 - uVar9;
    iVar11 = (uVar12 - uVar13) - (uint)(uVar10 < uVar9);
    this[0x21d] = (GEScene)0x1;
  }
  *(int *)(this + 0x24c) = iVar8;
  *(int *)(this + 0x250) = iVar11;
  *(undefined4 *)(this + 0x254) = 1;
  *(undefined4 *)(this + 600) = 0;
  if (this[0x598] != (GEScene)0x0) {
    uVar9 = *(uint *)(this + 0x590);
    uVar13 = *(uint *)(this + 0x594);
    if (((uVar13 != 0 || uVar9 != 0) && (uVar13 <= uVar12)) &&
       ((uVar13 < uVar12 || (uVar9 <= uVar10)))) {
      iVar8 = uVar10 - uVar9;
      iVar11 = (uVar12 - uVar13) - (uint)(uVar10 < uVar9);
      this[0x21e] = (GEScene)0x1;
      goto LAB_00048a4c;
    }
  }
  this[0x21e] = (GEScene)0x0;
  iVar8 = 0;
  iVar11 = 0;
LAB_00048a4c:
  *(uint *)(this + 0x23c) = uVar10;
  *(uint *)(this + 0x240) = uVar12;
  *(int *)(this + 0x26c) = iVar8;
  *(int *)(this + 0x270) = iVar11;
  *(undefined4 *)(this + 0x274) = 1;
  *(undefined4 *)(this + 0x278) = 0;
  *(uint *)(this + 0x244) = local_110;
  *(int *)(this + 0x248) = local_10c;
  if (this[0x228] != (GEScene)0x0) {
    iVar8 = local_10c + -1 + (uint)(local_110 != 0);
    dVar14 = *(double *)(this + 0x220);
    if (*(double *)(unaff_EBX + 0x3f195) <= *(double *)(this + 0x220)) {
      dVar14 = *(double *)(unaff_EBX + 0x3f195);
    }
    dVar3 = (double)CONCAT44(iVar8,local_110 - 1);
    if (iVar8 < 0) {
      dVar3 = dVar3 + (double)*(float *)(unaff_EBX + 0x3ee81);
    }
    if (dVar14 <= *(double *)(unaff_EBX + 0x3f19d)) {
      dVar14 = *(double *)(unaff_EBX + 0x3f19d);
    }
    uVar15 = __fixunsdfdi(dVar3 * dVar14);
    *(undefined8 *)(this + 0x23c) = uVar15;
  }
  if (*(int *)(this + 0x73c) != *(int *)(this + 0x69c)) {
    this[0x770] = (GEScene)0x1;
  }
  uVar12 = *(uint *)(this + 0x720);
  uVar10 = *(int *)(this + 0x724) * 0x3c + uVar12;
  iVar8 = ((int)uVar12 >> 0x1f) + (uint)CARRY4(*(int *)(this + 0x724) * 0x3c,uVar12);
  uVar9 = *(uint *)(this + 0x728);
  uVar15 = __udivdi3((int)((ulonglong)local_110 * (ulonglong)*(uint *)(this + 0x720)),
                     (int)((ulonglong)local_110 * (ulonglong)*(uint *)(this + 0x720) >> 0x20) +
                     local_10c * *(int *)(this + 0x720) + local_110 * ((int)uVar12 >> 0x1f),0x3c,0);
  *(undefined8 *)(this + 0x27c) = uVar15;
  *(uint *)(this + 0x284) = local_110;
  *(int *)(this + 0x288) = local_10c;
  uVar15 = __udivdi3((int)((ulonglong)local_110 * (ulonglong)uVar10),
                     (int)((ulonglong)local_110 * (ulonglong)uVar10 >> 0x20) +
                     local_10c * uVar10 + iVar8 * local_110,0xe10,0);
  *(uint *)(this + 0x294) = local_110;
  uVar12 = uVar9 * 0xe10;
  *(undefined8 *)(this + 0x28c) = uVar15;
  *(int *)(this + 0x298) = local_10c;
  uVar13 = uVar12 + uVar10;
  lVar2 = (ulonglong)local_110 * (ulonglong)uVar13;
  uVar15 = __udivdi3((int)lVar2,
                     (int)((ulonglong)lVar2 >> 0x20) +
                     local_10c * uVar13 + local_110 * (iVar8 + (uint)CARRY4(uVar12,uVar10)),0x15180,
                     0);
  *(undefined8 *)(this + 0x29c) = uVar15;
  *(uint *)(this + 0x2a4) = local_110;
  *(int *)(this + 0x2a8) = local_10c;
  uVar12 = (uVar9 % 0xc) * 0xe10;
  uVar9 = uVar12 + uVar10;
  lVar2 = (ulonglong)uVar9 * (ulonglong)local_110;
  uVar15 = __udivdi3((int)lVar2,
                     (int)((ulonglong)lVar2 >> 0x20) +
                     local_10c * uVar9 + (iVar8 + (uint)CARRY4(uVar12,uVar10)) * local_110,0xa8c0,0)
  ;
  *(int *)(this + 0x2b0) = (int)((ulonglong)uVar15 >> 0x20);
  *(uint *)(this + 0x2b4) = local_110;
  *(int *)(this + 0x2b8) = local_10c;
  *(int *)(this + 0x2ac) = (int)uVar15;
  this_00 = (GETimeOfDay *)(this + 0x5c0);
  uVar10 = GETimeOfDay::GetNormalizedSec(this_00);
  uVar15 = __udivdi3((int)((ulonglong)uVar10 * (ulonglong)local_110),
                     (int)((ulonglong)uVar10 * (ulonglong)local_110 >> 0x20) + local_10c * uVar10,
                     0x15180,0);
  *(undefined8 *)(this + 700) = uVar15;
  *(int *)(this + 0x2c8) = local_10c;
  *(uint *)(this + 0x2c4) = local_110;
  uVar10 = GETimeOfDay::GetNormalizedSec_Daytime(this_00);
  uVar15 = __udivdi3((int)((ulonglong)uVar10 * (ulonglong)local_110),
                     (int)((ulonglong)uVar10 * (ulonglong)local_110 >> 0x20) + local_10c * uVar10,
                     0x15180,0);
  *(undefined8 *)(this + 0x2cc) = uVar15;
  *(int *)(this + 0x2d8) = local_10c;
  *(uint *)(this + 0x2d4) = local_110;
  uVar10 = GETimeOfDay::GetNormalizedSec_Nighttime(this_00);
  uVar15 = __udivdi3((int)((ulonglong)uVar10 * (ulonglong)local_110),
                     (int)((ulonglong)uVar10 * (ulonglong)local_110 >> 0x20) + local_10c * uVar10,
                     0x15180,0);
  *(undefined8 *)(this + 0x2dc) = uVar15;
  *(uint *)(this + 0x2e4) = local_110;
  *(int *)(this + 0x2e8) = local_10c;
  return;
}

