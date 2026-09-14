/* 000446d4 | STG::GESkeleton::Animation::Update */

/* STG::GESkeleton::Animation::Update(STG::GEAnimationTimeData::EDriver, STG::GEAnimationTimeData
   const&, bool, STG::UTimeValue<unsigned long long, 1ul> const&) */

void __thiscall
STG::GESkeleton::Animation::Update
          (Animation *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5)

{
  int *piVar1;
  MMatrix *pMVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  if (*(int *)(this + 0x80) != 0) {
    iVar5 = 0;
    uVar7 = 0;
    do {
      while( true ) {
        uVar7 = uVar7 + 1;
        piVar3 = (int *)(*(int *)this + iVar5);
        iVar5 = iVar5 + 0x18;
        pMVar2 = (MMatrix *)(*(int *)(this + 0x10) + piVar3[4] * 0x40);
        if (piVar3[3] != 0) break;
        if (piVar3[1] == 0) goto LAB_00044718;
LAB_000447c8:
        uVar13 = GEAnimationTrack::Evaluate(*piVar3,param_2,param_3,param_4,param_5);
        uVar14 = GEAnimationTrack::Evaluate(*piVar3 + 0x58,param_2,param_3,param_4,param_5);
        local_34 = GEAnimationTrack::Evaluate(*piVar3 + 0xb0,param_2,param_3,param_4,param_5);
        local_3c = uVar13;
        local_38 = uVar14;
        MMatrix::SetPosition(pMVar2,(MVector3 *)&local_3c);
        if (*(uint *)(this + 0x80) <= uVar7) goto LAB_00044844;
      }
      fVar10 = (float)GEAnimationTrack::Evaluate(piVar3[2],param_2,param_3,param_4,param_5);
      fVar11 = (float)GEAnimationTrack::Evaluate(piVar3[2] + 0x58,param_2,param_3,param_4,param_5);
      fVar12 = (float)GEAnimationTrack::Evaluate(piVar3[2] + 0xb0,param_2,param_3,param_4,param_5);
      MMatrix::SetEulerXZY(pMVar2,fVar10,fVar11,fVar12);
      if (piVar3[1] != 0) goto LAB_000447c8;
LAB_00044718:
    } while (uVar7 < *(uint *)(this + 0x80));
  }
LAB_00044844:
  uVar7 = 0;
  if (*(int *)(this + 0x7c) != 0) {
    uVar6 = 0;
    do {
      iVar4 = *(int *)(this + 0x18);
      iVar9 = *(int *)(this + 8);
      iVar5 = uVar6 * 4;
      uVar6 = uVar6 + 1;
      iVar8 = *(int *)(this + 0x20);
      iVar5 = *(int *)(*(int *)(this + 0x28) + iVar5) * 0x40;
      MMatrix::Transform4x3
                ((MMatrix *)(*(int *)(this + 0x10) + iVar5),(MMatrix *)(this + 0x38),
                 (MMatrix *)(iVar4 + iVar5));
      MMatrix::Transform4x3
                ((MMatrix *)(iVar9 + iVar5),(MMatrix *)(iVar4 + iVar5),(MMatrix *)(iVar8 + iVar5));
      uVar7 = *(uint *)(this + 0x7c);
    } while (uVar6 < uVar7);
  }
  if (uVar7 < *(uint *)(this + 0x78)) {
    iVar5 = uVar7 << 2;
    do {
      uVar7 = uVar7 + 1;
      piVar3 = (int *)(*(int *)(this + 0x28) + iVar5);
      piVar1 = (int *)(*(int *)(this + 0x30) + iVar5);
      iVar5 = iVar5 + 4;
      iVar9 = *(int *)(this + 8);
      iVar4 = *piVar3 * 0x40;
      iVar8 = *(int *)(this + 0x20);
      pMVar2 = (MMatrix *)(*(int *)(this + 0x18) + iVar4);
      MMatrix::Transform4x3
                ((MMatrix *)(*(int *)(this + 0x10) + iVar4),
                 (MMatrix *)(*(int *)(this + 0x18) + *piVar1 * 0x40),pMVar2);
      MMatrix::Transform4x3((MMatrix *)(iVar9 + iVar4),pMVar2,(MMatrix *)(iVar8 + iVar4));
    } while (uVar7 < *(uint *)(this + 0x78));
  }
  return;
}

