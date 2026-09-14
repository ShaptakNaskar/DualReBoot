/* 00046af8 | STG::GESkeleton::Animation::Update */

/* STG::GESkeleton::Animation::Update(STG::GEAnimationTimeData::EDriver, STG::GEAnimationTimeData
   const&, bool, STG::UTimeValue<unsigned long long, 1ul> const&) */

void __thiscall
STG::GESkeleton::Animation::Update
          (Animation *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  MMatrix *pMVar9;
  int iVar10;
  float extraout_s0;
  float extraout_s1;
  float extraout_s2;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  if (*(int *)(this + 0x80) != 0) {
    iVar6 = 0;
    uVar8 = 0;
    do {
      while( true ) {
        iVar4 = *(int *)(this + 0x10);
        uVar8 = uVar8 + 1;
        piVar5 = (int *)(*(int *)this + iVar6);
        iVar3 = piVar5[4];
        iVar6 = iVar6 + 0x18;
        if (piVar5[3] != 0) break;
        if (piVar5[1] == 0) goto LAB_00046b38;
LAB_00046bf0:
        uVar1 = GEAnimationTrack::Evaluate(*piVar5,param_2,param_3,param_4,param_5);
        uVar2 = GEAnimationTrack::Evaluate(*piVar5 + 0x58,param_2,param_3,param_4,param_5);
        local_2c = GEAnimationTrack::Evaluate(*piVar5 + 0xb0,param_2,param_3,param_4,param_5);
        local_34 = uVar1;
        local_30 = uVar2;
        MMatrix::SetPosition((MMatrix *)(iVar4 + iVar3 * 0x40),(MVector3 *)&local_34);
        if (*(uint *)(this + 0x80) <= uVar8) goto LAB_00046c78;
      }
      GEAnimationTrack::Evaluate(piVar5[2],param_2,param_3,param_4,param_5);
      GEAnimationTrack::Evaluate(piVar5[2] + 0x58,param_2,param_3,param_4,param_5);
      GEAnimationTrack::Evaluate(piVar5[2] + 0xb0,param_2,param_3,param_4,param_5);
      MMatrix::SetEulerXZY(extraout_s0,extraout_s1,extraout_s2);
      if (piVar5[1] != 0) goto LAB_00046bf0;
LAB_00046b38:
    } while (uVar8 < *(uint *)(this + 0x80));
  }
LAB_00046c78:
  uVar8 = 0;
  if (*(int *)(this + 0x7c) != 0) {
    uVar7 = 0;
    do {
      iVar3 = *(int *)(this + 0x18);
      iVar10 = *(int *)(this + 8);
      iVar4 = *(int *)(this + 0x20);
      iVar6 = *(int *)(*(int *)(this + 0x28) + uVar7 * 4) * 0x40;
      MMatrix::Transform4x3
                ((MMatrix *)(*(int *)(this + 0x10) + iVar6),(MMatrix *)(this + 0x38),
                 (MMatrix *)(iVar3 + iVar6));
      MMatrix::Transform4x3
                ((MMatrix *)(iVar10 + iVar6),(MMatrix *)(iVar3 + iVar6),(MMatrix *)(iVar4 + iVar6));
      uVar8 = *(uint *)(this + 0x7c);
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar8);
  }
  if (uVar8 < *(uint *)(this + 0x78)) {
    iVar6 = uVar8 << 2;
    do {
      iVar10 = *(int *)(this + 8);
      iVar4 = *(int *)(this + 0x20);
      iVar3 = *(int *)(*(int *)(this + 0x28) + iVar6) * 0x40;
      pMVar9 = (MMatrix *)(*(int *)(this + 0x18) + iVar3);
      MMatrix::Transform4x3
                ((MMatrix *)(*(int *)(this + 0x10) + iVar3),
                 (MMatrix *)(*(int *)(this + 0x18) + *(int *)(*(int *)(this + 0x30) + iVar6) * 0x40)
                 ,pMVar9);
      MMatrix::Transform4x3((MMatrix *)(iVar10 + iVar3),pMVar9,(MMatrix *)(iVar4 + iVar3));
      uVar8 = uVar8 + 1;
      iVar6 = iVar6 + 4;
    } while (uVar8 < *(uint *)(this + 0x78));
  }
  return;
}

