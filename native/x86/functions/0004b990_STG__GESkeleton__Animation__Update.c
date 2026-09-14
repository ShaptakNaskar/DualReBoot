/* 0004b990 | STG::GESkeleton::Animation::Update */

/* STG::GESkeleton::Animation::Update(STG::GEAnimationTimeData::EDriver, STG::GEAnimationTimeData
   const&, bool, STG::UTimeValue<unsigned long long, 1ul> const&) */

void __thiscall
STG::GESkeleton::Animation::Update
          (Animation *this,undefined4 param_2,undefined4 param_3,undefined1 param_4,
          undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  MMatrix *this_00;
  uint uVar7;
  uint uVar8;
  longdouble lVar9;
  longdouble lVar10;
  longdouble lVar11;
  float local_28;
  float local_24;
  float local_20;
  undefined4 uStack_14;
  
  uStack_14 = 0x4b999;
  FUN_0002e044();
  if (*(int *)(this + 0x80) != 0) {
    uVar8 = 0;
    iVar6 = 0;
    do {
      while( true ) {
        piVar1 = (int *)(*(int *)this + iVar6);
        this_00 = (MMatrix *)(piVar1[4] * 0x40 + *(int *)(this + 0x10));
        if (piVar1[3] == 0) break;
        lVar9 = (longdouble)
                GEAnimationTrack::Evaluate
                          ((GEAnimationTrack *)piVar1[2],param_2,param_3,param_4,param_5);
        lVar10 = (longdouble)
                 GEAnimationTrack::Evaluate
                           ((GEAnimationTrack *)(piVar1[2] + 0x54),param_2,param_3,param_4,param_5);
        lVar11 = (longdouble)
                 GEAnimationTrack::Evaluate
                           ((GEAnimationTrack *)(piVar1[2] + 0xa8),param_2,param_3,param_4,param_5);
        MMatrix::SetEulerXZY(this_00,(float)lVar9,(float)lVar10,(float)lVar11);
        if (piVar1[1] == 0) goto LAB_0004b9e3;
LAB_0004baee:
        uVar8 = uVar8 + 1;
        lVar9 = (longdouble)
                GEAnimationTrack::Evaluate
                          ((GEAnimationTrack *)*piVar1,param_2,param_3,param_4,param_5);
        lVar10 = (longdouble)
                 GEAnimationTrack::Evaluate
                           ((GEAnimationTrack *)(*piVar1 + 0x54),param_2,param_3,param_4,param_5);
        lVar11 = (longdouble)
                 GEAnimationTrack::Evaluate
                           ((GEAnimationTrack *)(*piVar1 + 0xa8),param_2,param_3,param_4,param_5);
        local_20 = (float)lVar11;
        local_28 = (float)lVar9;
        local_24 = (float)lVar10;
        MMatrix::SetPosition(this_00,(MVector3 *)&local_28);
        iVar6 = iVar6 + 0x18;
        if (*(uint *)(this + 0x80) <= uVar8) goto LAB_0004bbe0;
      }
      if (piVar1[1] != 0) goto LAB_0004baee;
LAB_0004b9e3:
      uVar8 = uVar8 + 1;
      iVar6 = iVar6 + 0x18;
    } while (uVar8 < *(uint *)(this + 0x80));
  }
LAB_0004bbe0:
  uVar8 = 0;
  if (*(int *)(this + 0x7c) != 0) {
    uVar7 = 0;
    do {
      iVar2 = *(int *)(this + 8);
      iVar3 = *(int *)(this + 0x18);
      iVar4 = *(int *)(this + 0x20);
      iVar6 = uVar7 * 4;
      uVar7 = uVar7 + 1;
      iVar6 = *(int *)(*(int *)(this + 0x28) + iVar6) * 0x40;
      MMatrix::Transform4x3
                ((MMatrix *)(iVar6 + *(int *)(this + 0x10)),(MMatrix *)(this + 0x38),
                 (MMatrix *)(iVar3 + iVar6));
      MMatrix::Transform4x3
                ((MMatrix *)(iVar2 + iVar6),(MMatrix *)(iVar3 + iVar6),(MMatrix *)(iVar4 + iVar6));
      uVar8 = *(uint *)(this + 0x7c);
    } while (uVar7 < uVar8);
  }
  if (uVar8 < *(uint *)(this + 0x78)) {
    iVar6 = uVar8 * 4;
    do {
      iVar2 = *(int *)(this + 8);
      iVar3 = *(int *)(this + 0x18);
      uVar8 = uVar8 + 1;
      iVar5 = *(int *)(*(int *)(this + 0x28) + iVar6) * 0x40;
      iVar4 = *(int *)(this + 0x20);
      piVar1 = (int *)(*(int *)(this + 0x30) + iVar6);
      iVar6 = iVar6 + 4;
      MMatrix::Transform4x3
                ((MMatrix *)(iVar5 + *(int *)(this + 0x10)),
                 (MMatrix *)(*piVar1 * 0x40 + *(int *)(this + 0x18)),(MMatrix *)(iVar3 + iVar5));
      MMatrix::Transform4x3
                ((MMatrix *)(iVar2 + iVar5),(MMatrix *)(iVar3 + iVar5),(MMatrix *)(iVar4 + iVar5));
    } while (uVar8 < *(uint *)(this + 0x78));
  }
  return;
}

