/* 000446a4 | STG::GEScene::Internal_UpdateAnimationTime */

/* STG::GEScene::Internal_UpdateAnimationTime() */

void __thiscall STG::GEScene::Internal_UpdateAnimationTime(GEScene *this)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  GEScene *pGVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  GETimeOfDay *this_00;
  uint uVar13;
  uint uVar14;
  int *piVar15;
  uint uVar16;
  bool bVar17;
  undefined8 uVar18;
  int local_100 [51];
  int iStack_34;
  int local_30;
  int iStack_2c;
  
  piVar2 = local_100 + 4;
  piVar15 = piVar2;
  do {
    piVar15[-4] = 0;
    piVar15[-3] = 0;
    piVar15[-2] = 1;
    piVar15[-1] = 0;
    piVar15 = piVar15 + 4;
  } while (piVar15 != &local_30);
  local_100[0x30] = *(int *)(this + 0x208);
  local_100[0x31] = *(int *)(this + 0x20c);
  local_100[0x32] = *(int *)(this + 0x210);
  iStack_34 = *(int *)(this + 0x214);
  local_30 = local_100[0x30] - local_100[0x32];
  iStack_2c = local_100[0x31] - (iStack_34 + (uint)((uint)local_100[0x30] < (uint)local_100[0x32]));
  pGVar7 = this + 0x238;
  do {
    piVar15 = piVar2 + -4;
    iVar12 = piVar2[-3];
    iVar3 = piVar2[-2];
    iVar5 = piVar2[-1];
    piVar2 = piVar2 + 4;
    *(int *)pGVar7 = *piVar15;
    *(int *)(pGVar7 + 4) = iVar12;
    *(int *)(this + (int)(pGVar7 + (0x240 - (int)(this + 0x238)))) = iVar3;
    *(int *)(this + (int)(pGVar7 + (0x240 - (int)(this + 0x238))) + 4) = iVar5;
    pGVar7 = pGVar7 + 0x10;
  } while (piVar2 != &local_30);
  uVar13 = *(uint *)(this + 0x200);
  iVar3 = *(int *)(this + 0x204);
  uVar8 = *(uint *)(this + 0x208);
  uVar10 = *(uint *)(this + 0x20c);
  bVar17 = iVar3 == 0;
  *(int *)(this + 0x2f8) = local_100[0x30];
  *(int *)(this + 0x2fc) = local_100[0x31];
  *(int *)(this + 0x300) = local_100[0x32];
  *(int *)(this + 0x304) = iStack_34;
  *(int *)(this + 0x308) = local_30;
  *(int *)(this + 0x30c) = iStack_2c;
  *(uint *)(this + 0x268) = uVar8;
  *(uint *)(this + 0x26c) = uVar10;
  *(undefined4 *)(this + 0x270) = 1;
  *(undefined4 *)(this + 0x274) = 0;
  if (uVar13 == 0 && bVar17) {
    iVar3 = 0;
  }
  uVar4 = *(uint *)(this + 0x218);
  uVar6 = *(uint *)(this + 0x21c);
  if (uVar13 == 0 && bVar17) {
    uVar13 = 1;
  }
  *(uint *)(this + 0x238) = uVar8;
  *(uint *)(this + 0x23c) = uVar10;
  *(uint *)(this + 0x240) = uVar13;
  *(int *)(this + 0x244) = iVar3;
  if (uVar4 == 0 && uVar6 == 0) {
LAB_000447c8:
    this[0x221] = (GEScene)0x0;
    iVar5 = 0;
    iVar12 = 0;
  }
  else {
    bVar17 = uVar6 <= uVar10;
    if (uVar10 == uVar6) {
      bVar17 = uVar4 <= uVar8;
    }
    if (!bVar17) goto LAB_000447c8;
    this[0x221] = (GEScene)0x1;
    iVar5 = uVar8 - uVar4;
    iVar12 = uVar10 - (uVar6 + (uVar8 < uVar4));
  }
  *(int *)(this + 600) = iVar5;
  *(int *)(this + 0x25c) = iVar12;
  *(undefined4 *)(this + 0x260) = 1;
  *(undefined4 *)(this + 0x264) = 0;
  if (this[0x5a8] == (GEScene)0x0) {
    uVar4 = 0;
    uVar6 = 0;
  }
  else {
    uVar4 = *(uint *)(this + 0x5a0);
    uVar6 = *(uint *)(this + 0x5a4);
  }
  if (uVar4 != 0 || uVar6 != 0) {
    bVar17 = uVar6 <= uVar10;
    if (uVar10 == uVar6) {
      bVar17 = uVar4 <= uVar8;
    }
    if (bVar17) {
      this[0x222] = (GEScene)0x1;
      iVar5 = uVar8 - uVar4;
      iVar12 = uVar10 - (uVar6 + (uVar8 < uVar4));
      goto LAB_0004482c;
    }
  }
  this[0x222] = (GEScene)0x0;
  iVar5 = 0;
  iVar12 = 0;
LAB_0004482c:
  *(int *)(this + 0x278) = iVar5;
  *(int *)(this + 0x27c) = iVar12;
  *(undefined4 *)(this + 0x280) = 1;
  *(undefined4 *)(this + 0x284) = 0;
  *(uint *)(this + 0x248) = uVar8;
  *(uint *)(this + 0x24c) = uVar10;
  *(uint *)(this + 0x250) = uVar13;
  *(int *)(this + 0x254) = iVar3;
  if (this[0x230] != (GEScene)0x0) {
    uVar9 = *(undefined4 *)(this + 0x228);
    uVar11 = *(undefined4 *)(this + 0x22c);
    iVar5 = __aeabi_dcmple(uVar9,uVar11,0,0x3ff00000);
    if (iVar5 == 0) {
      uVar9 = 0;
      uVar11 = 0x3ff00000;
    }
    uVar18 = __floatundidf(uVar13 - 1,iVar3 - (uint)(uVar13 == 0));
    iVar5 = __aeabi_dcmpge(uVar9,uVar11,0,0);
    if (iVar5 == 0) {
      uVar9 = 0;
      uVar11 = 0;
    }
    __muldf3((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),uVar9,uVar11);
    uVar18 = __fixunsdfdi();
    *(undefined8 *)(this + 0x248) = uVar18;
  }
  uVar8 = DAT_00044b34;
  uVar10 = *(uint *)(this + 0x73c);
  if (*(int *)(this + 0x750) != *(int *)(this + 0x6b0)) {
    this[0x784] = (GEScene)0x1;
  }
  uVar4 = *(uint *)(this + 0x734);
  uVar16 = (uVar10 + (uint)((ulonglong)uVar8 * (ulonglong)uVar10 >> 0x23) * -0xc) * 0xe10;
  uVar8 = uVar4 + *(int *)(this + 0x738) * 0x3c;
  iVar5 = ((int)uVar4 >> 0x1f) + (uint)CARRY4(uVar4,*(int *)(this + 0x738) * 0x3c);
  uVar6 = uVar8 + uVar10 * 0xe10;
  uVar14 = uVar8 + uVar16;
  uVar18 = __aeabi_uldivmod((int)((ulonglong)uVar4 * (ulonglong)uVar13),
                            uVar4 * iVar3 + uVar13 * ((int)uVar4 >> 0x1f) +
                            (int)((ulonglong)uVar4 * (ulonglong)uVar13 >> 0x20),0x3c,0);
  *(undefined8 *)(this + 0x288) = uVar18;
  *(uint *)(this + 0x290) = uVar13;
  *(int *)(this + 0x294) = iVar3;
  uVar18 = __aeabi_uldivmod((int)((ulonglong)uVar8 * (ulonglong)uVar13),
                            uVar8 * iVar3 + uVar13 * iVar5 +
                            (int)((ulonglong)uVar8 * (ulonglong)uVar13 >> 0x20),0xe10,0);
  lVar1 = (ulonglong)uVar6 * (ulonglong)uVar13;
  *(undefined8 *)(this + 0x298) = uVar18;
  *(uint *)(this + 0x2a0) = uVar13;
  *(int *)(this + 0x2a4) = iVar3;
  uVar18 = __aeabi_uldivmod((int)lVar1,
                            uVar6 * iVar3 + uVar13 * (iVar5 + (uint)CARRY4(uVar8,uVar10 * 0xe10)) +
                            (int)((ulonglong)lVar1 >> 0x20),0x15180,0);
  lVar1 = (ulonglong)uVar14 * (ulonglong)uVar13;
  *(undefined8 *)(this + 0x2a8) = uVar18;
  *(uint *)(this + 0x2b0) = uVar13;
  *(int *)(this + 0x2b4) = iVar3;
  uVar18 = __aeabi_uldivmod((int)lVar1,
                            uVar14 * iVar3 + uVar13 * (iVar5 + (uint)CARRY4(uVar8,uVar16)) +
                            (int)((ulonglong)lVar1 >> 0x20),0xa8c0,0);
  this_00 = (GETimeOfDay *)(this + 0x5d4);
  *(undefined8 *)(this + 0x2b8) = uVar18;
  *(uint *)(this + 0x2c0) = uVar13;
  *(int *)(this + 0x2c4) = iVar3;
  uVar8 = GETimeOfDay::GetNormalizedSec(this_00);
  uVar18 = __aeabi_uldivmod((int)((ulonglong)uVar13 * (ulonglong)uVar8),
                            uVar8 * iVar3 + (int)((ulonglong)uVar13 * (ulonglong)uVar8 >> 0x20),
                            0x15180,0);
  *(undefined8 *)(this + 0x2c8) = uVar18;
  *(uint *)(this + 0x2d0) = uVar13;
  *(int *)(this + 0x2d4) = iVar3;
  uVar8 = GETimeOfDay::GetNormalizedSec_Daytime(this_00);
  uVar18 = __aeabi_uldivmod((int)((ulonglong)uVar13 * (ulonglong)uVar8),
                            uVar8 * iVar3 + (int)((ulonglong)uVar13 * (ulonglong)uVar8 >> 0x20),
                            0x15180,0);
  *(undefined8 *)(this + 0x2d8) = uVar18;
  *(uint *)(this + 0x2e0) = uVar13;
  *(int *)(this + 0x2e4) = iVar3;
  uVar8 = GETimeOfDay::GetNormalizedSec_Nighttime(this_00);
  uVar18 = __aeabi_uldivmod((int)((ulonglong)uVar13 * (ulonglong)uVar8),
                            uVar8 * iVar3 + (int)((ulonglong)uVar13 * (ulonglong)uVar8 >> 0x20),
                            0x15180,0);
  *(uint *)(this + 0x2f0) = uVar13;
  *(int *)(this + 0x2f4) = iVar3;
  *(undefined8 *)(this + 0x2e8) = uVar18;
  return;
}

