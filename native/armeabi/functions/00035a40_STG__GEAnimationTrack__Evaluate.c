/* 00035a40 | STG::GEAnimationTrack::Evaluate */

/* STG::GEAnimationTrack::Evaluate(STG::GEAnimationTimeData::EDriver, STG::GEAnimationTimeData
   const&, bool, STG::UTimeValue<unsigned long long, 1ul> const&, unsigned long&, float&) const */

undefined4 __thiscall
STG::GEAnimationTrack::Evaluate
          (GEAnimationTrack *this,int param_2,int param_3,int param_4,uint *param_5,int *param_6,
          undefined4 *param_7)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint extraout_r2;
  uint uVar4;
  uint extraout_r3;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  bool bVar12;
  
  if (*(int *)(this + 0x14) == 0) {
    return 0;
  }
  iVar9 = *(int *)(this + 4);
  if (0xb < *(int *)(this + 4)) {
    iVar9 = param_2;
  }
  puVar11 = (uint *)(param_3 + iVar9 * 0x10);
  uVar2 = *puVar11;
  uVar7 = *param_5 + uVar2;
  uVar2 = param_5[1] + puVar11[1] + (uint)CARRY4(*param_5,uVar2);
  iVar5 = param_3 + iVar9 * 0x10;
  if (iVar9 == 2 || iVar9 == 4) {
    if (this[0x50] == (GEAnimationTrack)0x0) {
      if (uVar7 != 0 || uVar2 != 0) {
        uVar4 = *(uint *)(param_3 + 0xc0);
        iVar5 = *(int *)(param_3 + 0xc4);
        uVar2 = iVar5 - (uVar2 + (uVar4 < uVar7));
        if (iVar9 != 4) {
          param_4 = 1;
        }
        bVar12 = uVar2 <= *(uint *)(this + 0x4c);
        if (*(uint *)(this + 0x4c) == uVar2) {
          bVar12 = uVar4 - uVar7 <= *(uint *)(this + 0x48);
        }
        if ((!bVar12) && (param_4 != 0)) {
          *(uint *)(this + 0x40) = uVar4;
          *(int *)(this + 0x44) = iVar5;
          this[0x50] = (GEAnimationTrack)0x1;
        }
        uVar7 = *(uint *)(this + 0x30);
        uVar2 = *(uint *)(this + 0x34);
      }
    }
    else {
      uVar4 = *(uint *)(param_3 + 0xc0);
      iVar9 = *(int *)(param_3 + 0xc4);
      uVar7 = uVar4 - *(uint *)(this + 0x40);
      uVar2 = iVar9 - (*(int *)(this + 0x44) + (uint)(uVar4 < *(uint *)(this + 0x40)));
      bVar12 = *(uint *)(this + 0x34) <= uVar2;
      if (uVar2 == *(uint *)(this + 0x34)) {
        bVar12 = *(uint *)(this + 0x30) <= uVar7;
      }
      if (bVar12) {
        this[0x50] = (GEAnimationTrack)0x0;
        *(uint *)(this + 0x48) = uVar4;
        *(int *)(this + 0x4c) = iVar9;
      }
    }
  }
  else {
    uVar4 = *(uint *)(this + 0x34);
    uVar8 = *(uint *)(iVar5 + 8);
    uVar10 = *(uint *)(iVar5 + 0xc);
    bVar12 = uVar10 <= uVar4;
    if (uVar4 == uVar10) {
      bVar12 = uVar8 <= *(uint *)(this + 0x30);
    }
    uVar1 = *(uint *)(this + 0x30);
    if (!bVar12) {
      uVar4 = uVar10;
      uVar1 = uVar8;
    }
    __aeabi_uldivmod(*(uint *)(this + 8) + uVar7,
                     *(int *)(this + 0xc) + uVar2 + (uint)CARRY4(*(uint *)(this + 8),uVar7),uVar1,
                     uVar4,param_4);
    uVar7 = extraout_r2;
    uVar2 = extraout_r3;
  }
  bVar12 = *(uint *)(this + 0x2c) <= uVar2;
  if (uVar2 == *(uint *)(this + 0x2c)) {
    bVar12 = *(uint *)(this + 0x28) <= uVar7;
  }
  if (bVar12) {
    bVar12 = *(uint *)(this + 0x34) <= uVar2;
    if (uVar2 == *(uint *)(this + 0x34)) {
      bVar12 = *(uint *)(this + 0x30) <= uVar7;
    }
    if (!bVar12) {
      puVar11 = *(uint **)(this + 0x18);
      iVar5 = 0;
      iVar9 = *(int *)(this + 0x10);
      uVar4 = *puVar11;
      uVar8 = puVar11[1];
      bVar12 = uVar8 <= uVar2;
      if (uVar2 == uVar8) {
        bVar12 = uVar4 <= uVar7;
      }
      iVar6 = 0;
      if (bVar12) goto LAB_00035b24;
      do {
        do {
          iVar5 = iVar5 + 8;
          uVar4 = *(uint *)((int)puVar11 + iVar5);
          uVar8 = ((uint *)((int)puVar11 + iVar5))[1];
          bVar12 = uVar8 <= uVar2;
          if (uVar2 == uVar8) {
            bVar12 = uVar4 <= uVar7;
          }
          iVar9 = iVar9 + 0x40;
          iVar6 = iVar6 + 1;
        } while (!bVar12);
LAB_00035b24:
        uVar10 = ((uint *)(*(int *)(this + 0x20) + iVar5))[1];
        bVar12 = uVar10 <= uVar2;
        if (uVar2 == uVar10) {
          bVar12 = *(uint *)(*(int *)(this + 0x20) + iVar5) <= uVar7;
        }
      } while (bVar12);
      uVar3 = __floatundisf(uVar7 - uVar4,uVar2 - (uVar8 + (uVar7 < uVar4)));
      uVar3 = __mulsf3(uVar3,*(undefined4 *)(iVar9 + 0x38));
      *param_6 = iVar6;
      *param_7 = uVar3;
      return 1;
    }
  }
  return 0;
}

