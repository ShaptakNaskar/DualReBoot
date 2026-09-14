/* 00055330 | STG::LLogicSceneWrapper::ComputeClipSpaceBounds */

/* STG::LLogicSceneWrapper::ComputeClipSpaceBounds(unsigned long, STG::MVector2&, STG::MVector2&,
   STG::MVector2&) const */

bool __thiscall
STG::LLogicSceneWrapper::ComputeClipSpaceBounds
          (LLogicSceneWrapper *this,ulong param_1,MVector2 *param_2,MVector2 *param_3,
          MVector2 *param_4)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int unaff_EBX;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float fStack_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_bc;
  float local_b8;
  float local_b4;
  MMatrix local_9c [64];
  MMatrix local_5c [76];
  
  FUN_0002e044();
  iVar1 = *(int *)this;
  cVar2 = GetIsModelVisible(this,param_1);
  bVar3 = false;
  if (cVar2 != '\0') {
    MMatrix::ComputeTranspose((MMatrix *)(iVar1 + 0x450),(MMatrix *)&local_dc);
    MMatrix::ComputeInverse((MMatrix *)(iVar1 + 0x3d0),local_9c);
    MMatrix::Transform((MMatrix *)(iVar1 + 0x490),local_9c,local_5c);
    GetBoundingData_World(this,param_1,(MVector3 *)&local_100,&local_11c);
    fVar6 = ((local_c4 + local_d4) - local_b4) * local_11c;
    fVar5 = ((local_c8 + local_d8) - local_b8) * local_11c;
    fVar4 = ((local_cc + local_dc) - local_bc) * local_11c;
    TransformToClip((MMatrix *)&local_118,(MVector3 *)this);
    local_ec = local_f8 - fVar6;
    local_f0 = local_fc - fVar5;
    local_f4 = local_100 - fVar4;
    TransformToClip((MMatrix *)&local_110,(MVector3 *)this);
    fStack_e0 = fVar6 + local_f8;
    fStack_e4 = fVar5 + local_fc;
    local_e8 = fVar4 + local_100;
    TransformToClip((MMatrix *)&local_108,(MVector3 *)this);
    fVar4 = (fStack_10c - local_114) * (fStack_10c - local_114) +
            (local_110 - local_118) * (local_110 - local_118);
    fVar5 = (local_104 - local_114) * (local_104 - local_114) +
            (local_108 - local_118) * (local_108 - local_118);
    if (fVar4 <= fVar5) {
      fVar4 = fVar5;
    }
    fVar4 = SQRT(fVar4);
    *(float *)param_3 = local_118 - fVar4;
    *(float *)(param_3 + 4) = local_114 - fVar4;
    *(float *)param_4 = fVar4 + local_118;
    *(float *)(param_4 + 4) = fVar4 + local_114;
    local_118 = fVar4 * local_118 + local_118;
    fVar5 = *(float *)(unaff_EBX + 0x32376);
    local_114 = fVar4 * local_114 + local_114;
    *(float *)param_2 = local_118;
    *(float *)(param_2 + 4) = local_114;
    bVar3 = false;
    if (((fVar5 <= local_118) && (fVar5 <= local_114)) &&
       (local_118 <= *(float *)(unaff_EBX + 0x3235e))) {
      bVar3 = local_114 <= *(float *)(unaff_EBX + 0x3235e);
    }
  }
  return bVar3;
}

