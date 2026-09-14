/* 000423e8 | STG::GEScene::Internal_UpdateAnimationTime */

/* STG::GEScene::Internal_UpdateAnimationTime() */

void __thiscall STG::GEScene::Internal_UpdateAnimationTime(GEScene *this)

{
  longlong lVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  GETimeOfDay *this_00;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  GEScene *pGVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  double dVar16;
  double dVar17;
  undefined8 uVar18;
  int local_120;
  int local_11c;
  int local_108 [51];
  int iStack_3c;
  int local_38;
  int iStack_34;
  
  piVar3 = local_108 + 4;
  piVar2 = piVar3;
  do {
    piVar2[-4] = 0;
    piVar2[-3] = 0;
    piVar2[-2] = 1;
    piVar2[-1] = 0;
    piVar2 = piVar2 + 4;
  } while (piVar2 != &local_38);
  local_108[0x30] = *(int *)(this + 0x208);
  local_108[0x31] = *(int *)(this + 0x20c);
  local_108[0x32] = *(int *)(this + 0x210);
  iStack_3c = *(int *)(this + 0x214);
  local_38 = local_108[0x30] - local_108[0x32];
  iStack_34 = local_108[0x31] - (iStack_3c + (uint)((uint)local_108[0x30] < (uint)local_108[0x32]));
  pGVar12 = this + 0x238;
  do {
    piVar2 = piVar3 + -4;
    iVar8 = piVar3[-3];
    iVar4 = piVar3[-2];
    iVar6 = piVar3[-1];
    piVar3 = piVar3 + 4;
    *(int *)pGVar12 = *piVar2;
    *(int *)(pGVar12 + 4) = iVar8;
    *(int *)(this + (int)(pGVar12 + (0x240 - (int)(this + 0x238)))) = iVar4;
    *(int *)(this + (int)(pGVar12 + (0x240 - (int)(this + 0x238))) + 4) = iVar6;
    pGVar12 = pGVar12 + 0x10;
  } while (piVar3 != &local_38);
  uVar9 = *(uint *)(this + 0x200);
  iVar4 = *(int *)(this + 0x204);
  uVar10 = *(uint *)(this + 0x208);
  uVar11 = *(uint *)(this + 0x20c);
  *(int *)(this + 0x2f8) = local_108[0x30];
  *(int *)(this + 0x2fc) = local_108[0x31];
  if (uVar9 == 0 && iVar4 == 0) {
    iVar4 = 0;
    uVar9 = 1;
  }
  *(int *)(this + 0x300) = local_108[0x32];
  *(int *)(this + 0x304) = iStack_3c;
  *(int *)(this + 0x308) = local_38;
  *(int *)(this + 0x30c) = iStack_34;
  *(uint *)(this + 0x268) = uVar10;
  *(uint *)(this + 0x26c) = uVar11;
  *(undefined4 *)(this + 0x270) = 1;
  *(undefined4 *)(this + 0x274) = 0;
  uVar5 = *(uint *)(this + 0x218);
  uVar7 = *(uint *)(this + 0x21c);
  *(uint *)(this + 0x238) = uVar10;
  *(uint *)(this + 0x23c) = uVar11;
  *(uint *)(this + 0x240) = uVar9;
  *(int *)(this + 0x244) = iVar4;
  if (uVar5 == 0 && uVar7 == 0) {
LAB_00042518:
    iVar6 = 0;
    iVar8 = 0;
    this[0x221] = (GEScene)0x0;
  }
  else {
    bVar15 = uVar7 <= uVar11;
    if (uVar11 == uVar7) {
      bVar15 = uVar5 <= uVar10;
    }
    if (!bVar15) goto LAB_00042518;
    iVar6 = uVar10 - uVar5;
    iVar8 = uVar11 - (uVar7 + (uVar10 < uVar5));
    this[0x221] = (GEScene)0x1;
  }
  *(int *)(this + 600) = iVar6;
  *(int *)(this + 0x25c) = iVar8;
  *(undefined4 *)(this + 0x260) = 1;
  *(undefined4 *)(this + 0x264) = 0;
  if (this[0x5a8] != (GEScene)0x0) {
    uVar5 = *(uint *)(this + 0x5a0);
  }
  else {
    uVar5 = 0;
  }
  uVar7 = 0;
  if (this[0x5a8] != (GEScene)0x0) {
    uVar7 = *(uint *)(this + 0x5a4);
  }
  if (uVar5 != 0 || uVar7 != 0) {
    bVar15 = uVar7 <= uVar11;
    if (uVar11 == uVar7) {
      bVar15 = uVar5 <= uVar10;
    }
    if (bVar15) {
      local_120 = uVar10 - uVar5;
      local_11c = uVar11 - (uVar7 + (uVar10 < uVar5));
      this[0x222] = (GEScene)0x1;
      goto LAB_00042580;
    }
  }
  local_120 = 0;
  local_11c = 0;
  this[0x222] = (GEScene)0x0;
LAB_00042580:
  *(int *)(this + 0x278) = local_120;
  *(int *)(this + 0x27c) = local_11c;
  *(undefined4 *)(this + 0x280) = 1;
  *(undefined4 *)(this + 0x284) = 0;
  *(uint *)(this + 0x248) = uVar10;
  *(uint *)(this + 0x24c) = uVar11;
  *(uint *)(this + 0x250) = uVar9;
  *(int *)(this + 0x254) = iVar4;
  if (this[0x230] != (GEScene)0x0) {
    dVar17 = *(double *)(this + 0x228);
    if (1.0 < dVar17) {
      dVar17 = 1.0;
    }
    dVar16 = (double)__floatundidf(uVar9 - 1,iVar4 - (uint)(uVar9 == 0));
    if (dVar17 < 0.0) {
      dVar17 = DAT_00042850;
    }
    uVar18 = __fixunsdfdi(SUB84(dVar16 * dVar17,0),(int)((ulonglong)(dVar16 * dVar17) >> 0x20));
    *(undefined8 *)(this + 0x248) = uVar18;
  }
  uVar10 = *(uint *)(this + 0x734);
  if (*(int *)(this + 0x750) != *(int *)(this + 0x6b0)) {
    this[0x784] = (GEScene)0x1;
  }
  uVar14 = *(uint *)(this + 0x73c) * 0xe10;
  uVar7 = uVar10 + *(int *)(this + 0x738) * 0x3c;
  this_00 = (GETimeOfDay *)(this + 0x5d4);
  iVar6 = ((int)uVar10 >> 0x1f) + (uint)CARRY4(uVar10,*(int *)(this + 0x738) * 0x3c);
  uVar11 = uVar7 + uVar14;
  uVar13 = (*(uint *)(this + 0x73c) % 0xc) * 0xe10;
  local_11c = (int)((ulonglong)uVar10 * (ulonglong)uVar9 >> 0x20);
  local_120 = (int)((ulonglong)uVar10 * (ulonglong)uVar9);
  uVar5 = uVar7 + uVar13;
  uVar18 = __aeabi_uldivmod(local_120,uVar10 * iVar4 + uVar9 * ((int)uVar10 >> 0x1f) + local_11c,
                            0x3c,0);
  *(uint *)(this + 0x290) = uVar9;
  *(int *)(this + 0x294) = iVar4;
  *(undefined8 *)(this + 0x288) = uVar18;
  uVar18 = __aeabi_uldivmod((int)((ulonglong)uVar7 * (ulonglong)uVar9),
                            uVar7 * iVar4 + uVar9 * iVar6 +
                            (int)((ulonglong)uVar7 * (ulonglong)uVar9 >> 0x20),0xe10,0);
  *(uint *)(this + 0x2a0) = uVar9;
  *(int *)(this + 0x2a4) = iVar4;
  lVar1 = (ulonglong)uVar11 * (ulonglong)uVar9;
  *(undefined8 *)(this + 0x298) = uVar18;
  uVar18 = __aeabi_uldivmod((int)lVar1,
                            uVar11 * iVar4 + uVar9 * (iVar6 + (uint)CARRY4(uVar7,uVar14)) +
                            (int)((ulonglong)lVar1 >> 0x20),0x15180,0);
  lVar1 = (ulonglong)uVar5 * (ulonglong)uVar9;
  *(uint *)(this + 0x2b0) = uVar9;
  *(int *)(this + 0x2b4) = iVar4;
  *(undefined8 *)(this + 0x2a8) = uVar18;
  uVar18 = __aeabi_uldivmod((int)lVar1,
                            uVar5 * iVar4 + uVar9 * (iVar6 + (uint)CARRY4(uVar7,uVar13)) +
                            (int)((ulonglong)lVar1 >> 0x20),0xa8c0,0);
  *(uint *)(this + 0x2c0) = uVar9;
  *(int *)(this + 0x2c4) = iVar4;
  *(undefined8 *)(this + 0x2b8) = uVar18;
  uVar10 = GETimeOfDay::GetNormalizedSec(this_00);
  uVar18 = __aeabi_uldivmod((int)((ulonglong)uVar9 * (ulonglong)uVar10),
                            uVar10 * iVar4 + (int)((ulonglong)uVar9 * (ulonglong)uVar10 >> 0x20),
                            0x15180,0);
  *(uint *)(this + 0x2d0) = uVar9;
  *(int *)(this + 0x2d4) = iVar4;
  *(undefined8 *)(this + 0x2c8) = uVar18;
  uVar10 = GETimeOfDay::GetNormalizedSec_Daytime(this_00);
  uVar18 = __aeabi_uldivmod((int)((ulonglong)uVar9 * (ulonglong)uVar10),
                            uVar10 * iVar4 + (int)((ulonglong)uVar9 * (ulonglong)uVar10 >> 0x20),
                            0x15180,0);
  *(uint *)(this + 0x2e0) = uVar9;
  *(int *)(this + 0x2e4) = iVar4;
  *(undefined8 *)(this + 0x2d8) = uVar18;
  uVar10 = GETimeOfDay::GetNormalizedSec_Nighttime(this_00);
  uVar18 = __aeabi_uldivmod((int)((ulonglong)uVar9 * (ulonglong)uVar10),
                            uVar10 * iVar4 + (int)((ulonglong)uVar9 * (ulonglong)uVar10 >> 0x20),
                            0x15180,0);
  *(uint *)(this + 0x2f0) = uVar9;
  *(int *)(this + 0x2f4) = iVar4;
  *(undefined8 *)(this + 0x2e8) = uVar18;
  return;
}

