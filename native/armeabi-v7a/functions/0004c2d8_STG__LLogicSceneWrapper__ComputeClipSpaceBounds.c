/* 0004c2d8 | STG::LLogicSceneWrapper::ComputeClipSpaceBounds */

/* STG::LLogicSceneWrapper::ComputeClipSpaceBounds(unsigned long, STG::MVector2&, STG::MVector2&,
   STG::MVector2&) const */

bool __thiscall
STG::LLogicSceneWrapper::ComputeClipSpaceBounds
          (LLogicSceneWrapper *this,ulong param_1,MVector2 *param_2,MVector2 *param_3,
          MVector2 *param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d0;
  float local_cc;
  float local_c8;
  MMatrix aMStack_b0 [64];
  MMatrix aMStack_70 [64];
  
  iVar3 = *(int *)this;
  iVar2 = GetIsModelVisible(this,param_1);
  bVar1 = false;
  if (iVar2 != 0) {
    MMatrix::ComputeTranspose((MMatrix *)(iVar3 + 0x45c),(MMatrix *)&local_f0);
    MMatrix::ComputeInverse((MMatrix *)(iVar3 + 0x3dc),aMStack_b0);
    MMatrix::Transform((MMatrix *)(iVar3 + 0x49c),aMStack_b0,aMStack_70);
    GetBoundingData_World(this,param_1,(MVector3 *)&local_114,&local_130);
    fVar4 = ((local_dc + local_ec) - local_cc) * local_130;
    fVar6 = ((local_e0 + local_f0) - local_d0) * local_130;
    fVar5 = ((local_d8 + local_e8) - local_c8) * local_130;
    TransformToClip((MMatrix *)&local_12c,(MVector3 *)this);
    local_104 = local_110 - fVar4;
    local_100 = local_10c - fVar5;
    local_108 = local_114 - fVar6;
    TransformToClip((MMatrix *)&local_124,(MVector3 *)this);
    local_f8 = fVar4 + local_110;
    local_f4 = fVar5 + local_10c;
    local_fc = fVar6 + local_114;
    TransformToClip((MMatrix *)&local_11c,(MVector3 *)this);
    fVar4 = (local_124 - local_12c) * (local_124 - local_12c) +
            (local_120 - local_128) * (local_120 - local_128);
    fVar5 = (local_11c - local_12c) * (local_11c - local_12c) +
            (local_118 - local_128) * (local_118 - local_128);
    if (fVar4 <= fVar5) {
      fVar4 = fVar5;
    }
    fVar4 = SQRT(fVar4);
    fVar6 = local_12c + fVar4 * local_12c;
    fVar5 = local_128 + fVar4 * local_128;
    *(float *)param_3 = local_12c - fVar4;
    *(float *)(param_3 + 4) = local_128 - fVar4;
    *(float *)param_4 = fVar4 + local_12c;
    *(float *)param_2 = fVar6;
    *(float *)(param_4 + 4) = fVar4 + local_128;
    *(float *)(param_2 + 4) = fVar5;
    if (((fVar6 < -1.0) || (fVar5 < -1.0)) || (1.0 < fVar6)) {
      bVar1 = false;
    }
    else {
      bVar1 = fVar5 <= 1.0;
    }
  }
  return bVar1;
}

