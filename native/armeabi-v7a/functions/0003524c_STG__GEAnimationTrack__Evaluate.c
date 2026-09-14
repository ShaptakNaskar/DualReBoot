/* 0003524c | STG::GEAnimationTrack::Evaluate */

/* STG::GEAnimationTrack::Evaluate(STG::GEAnimationTimeData::EDriver, STG::GEAnimationTimeData
   const&, bool, STG::UTimeValue<unsigned long long, 1ul> const&, unsigned long&, float&) const */

undefined4 __thiscall
STG::GEAnimationTrack::Evaluate
          (GEAnimationTrack *this,int param_2,int param_3,int param_4,uint *param_5,int *param_6,
          float *param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  uint uVar5;
  uint extraout_r2;
  uint uVar6;
  uint extraout_r3;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  bool bVar12;
  float fVar13;
  
  if (*(int *)(this + 0x14) == 0) {
    return 0;
  }
  iVar8 = *(int *)(this + 4);
  if (0xb < *(int *)(this + 4)) {
    iVar8 = param_2;
  }
  iVar7 = param_3 + iVar8 * 0x10;
  puVar11 = (uint *)(iVar8 * 0x10 + param_3);
  uVar2 = *puVar11;
  uVar9 = *param_5 + uVar2;
  uVar2 = param_5[1] + puVar11[1] + (uint)CARRY4(*param_5,uVar2);
  if (iVar8 == 2 || iVar8 == 4) {
    if (this[0x50] == (GEAnimationTrack)0x0) {
      if (uVar9 != 0 || uVar2 != 0) {
        uVar6 = *(uint *)(param_3 + 0xc0);
        iVar7 = *(int *)(param_3 + 0xc4);
        if (iVar8 != 4) {
          param_4 = 1;
        }
        uVar2 = iVar7 - (uVar2 + (uVar6 < uVar9));
        bVar12 = uVar2 <= *(uint *)(this + 0x4c);
        if (*(uint *)(this + 0x4c) == uVar2) {
          bVar12 = uVar6 - uVar9 <= *(uint *)(this + 0x48);
        }
        if ((!bVar12) && (param_4 != 0)) {
          *(uint *)(this + 0x40) = uVar6;
          *(int *)(this + 0x44) = iVar7;
          this[0x50] = (GEAnimationTrack)0x1;
        }
        uVar9 = *(uint *)(this + 0x30);
        uVar2 = *(uint *)(this + 0x34);
      }
    }
    else {
      uVar6 = *(uint *)(param_3 + 0xc0);
      iVar8 = *(int *)(param_3 + 0xc4);
      uVar9 = uVar6 - *(uint *)(this + 0x40);
      uVar2 = iVar8 - (*(int *)(this + 0x44) + (uint)(uVar6 < *(uint *)(this + 0x40)));
      bVar12 = *(uint *)(this + 0x34) <= uVar2;
      if (uVar2 == *(uint *)(this + 0x34)) {
        bVar12 = *(uint *)(this + 0x30) <= uVar9;
      }
      if (bVar12) {
        *(uint *)(this + 0x48) = uVar6;
        *(int *)(this + 0x4c) = iVar8;
        this[0x50] = (GEAnimationTrack)0x0;
      }
    }
  }
  else {
    uVar3 = *(uint *)(iVar7 + 8);
    uVar5 = *(uint *)(iVar7 + 0xc);
    uVar6 = *(uint *)(this + 0x34);
    bVar12 = uVar5 <= uVar6;
    if (uVar6 == uVar5) {
      bVar12 = uVar3 <= *(uint *)(this + 0x30);
    }
    uVar1 = *(uint *)(this + 0x30);
    if (!bVar12) {
      uVar6 = uVar5;
      uVar1 = uVar3;
    }
    __aeabi_uldivmod(*(uint *)(this + 8) + uVar9,
                     *(int *)(this + 0xc) + uVar2 + (uint)CARRY4(*(uint *)(this + 8),uVar9),uVar1,
                     uVar6,param_4);
    uVar9 = extraout_r2;
    uVar2 = extraout_r3;
  }
  bVar12 = *(uint *)(this + 0x2c) <= uVar2;
  if (uVar2 == *(uint *)(this + 0x2c)) {
    bVar12 = *(uint *)(this + 0x28) <= uVar9;
  }
  if (bVar12) {
    bVar12 = *(uint *)(this + 0x34) <= uVar2;
    if (uVar2 == *(uint *)(this + 0x34)) {
      bVar12 = *(uint *)(this + 0x30) <= uVar9;
    }
    if (!bVar12) {
      puVar11 = *(uint **)(this + 0x18);
      iVar10 = 0;
      iVar8 = *(int *)(this + 0x10);
      iVar7 = 0;
      uVar6 = *puVar11;
      uVar3 = puVar11[1];
      bVar12 = uVar3 <= uVar2;
      if (uVar2 == uVar3) {
        bVar12 = uVar6 <= uVar9;
      }
      if (bVar12) goto LAB_00035334;
      do {
        do {
          iVar10 = iVar10 + 8;
          iVar8 = iVar8 + 0x40;
          iVar7 = iVar7 + 1;
          uVar6 = *(uint *)((int)puVar11 + iVar10);
          uVar3 = ((uint *)((int)puVar11 + iVar10))[1];
          bVar12 = uVar3 <= uVar2;
          if (uVar2 == uVar3) {
            bVar12 = uVar6 <= uVar9;
          }
        } while (!bVar12);
LAB_00035334:
        uVar5 = ((uint *)(*(int *)(this + 0x20) + iVar10))[1];
        bVar12 = uVar5 <= uVar2;
        if (uVar2 == uVar5) {
          bVar12 = *(uint *)(*(int *)(this + 0x20) + iVar10) <= uVar9;
        }
      } while (bVar12);
      fVar4 = (float)__floatundisf(uVar9 - uVar6,uVar2 - (uVar3 + (uVar9 < uVar6)));
      fVar13 = *(float *)(iVar8 + 0x38);
      *param_6 = iVar7;
      *param_7 = fVar4 * fVar13;
      return 1;
    }
  }
  return 0;
}

