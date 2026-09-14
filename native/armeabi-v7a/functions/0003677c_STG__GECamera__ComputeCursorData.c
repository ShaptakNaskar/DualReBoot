/* 0003677c | STG::GECamera::ComputeCursorData */

/* STG::GECamera::ComputeCursorData(STG::GEViewport const&, STG::MVector2 const&,
   STG::UTimeValue<unsigned long long, 1ul> const&, STG::GECursorData&) const */

void __thiscall
STG::GECamera::ComputeCursorData
          (GECamera *this,GEViewport *param_1,MVector2 *param_2,UTimeValue *param_3,
          GECursorData *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_28;
  float local_24;
  
  param_4[0x38] = (GECursorData)0x0;
  *(undefined4 *)(param_4 + 0x30) = 0;
  *(undefined4 *)(param_4 + 0x34) = 0;
  ConvertScreenToClip(this,(URectangle *)param_1,param_2,(MVector2 *)&local_28);
  if ((((-1.0 < local_28) && (local_28 < 1.0)) && (-1.0 < local_24)) && (local_24 < 1.0)) {
    uVar1 = *(undefined4 *)param_3;
    uVar2 = *(undefined4 *)(param_3 + 4);
    param_4[0x38] = (GECursorData)0x1;
    *(undefined4 *)(param_4 + 0x30) = uVar1;
    *(undefined4 *)(param_4 + 0x34) = uVar2;
    ConvertClipToWorld(this,local_28,local_24,(MVector3 *)param_4,(MVector3 *)(param_4 + 0xc));
    fVar3 = *(float *)(param_4 + 0xc) - *(float *)param_4;
    *(float *)(param_4 + 0x18) = *(float *)param_4;
    *(float *)(param_4 + 0x1c) = *(float *)(param_4 + 4);
    *(float *)(param_4 + 0x20) = *(float *)(param_4 + 8);
    fVar4 = *(float *)(param_4 + 0x10) - *(float *)(param_4 + 4);
    fVar6 = *(float *)(param_4 + 0x14) - *(float *)(param_4 + 8);
    fVar7 = fVar3 * fVar3 + fVar4 * fVar4 + fVar6 * fVar6;
    fVar5 = DAT_00036890;
    fVar8 = DAT_00036890;
    if (0.0 < fVar7) {
      fVar8 = 1.0 / SQRT(fVar7);
      fVar3 = fVar8 * fVar3;
      fVar5 = fVar8 * fVar4;
      fVar8 = fVar8 * fVar6;
    }
    *(float *)(param_4 + 0x2c) = fVar8;
    if (fVar7 <= 0.0) {
      fVar3 = fVar8;
    }
    *(float *)(param_4 + 0x28) = fVar5;
    *(float *)(param_4 + 0x24) = fVar3;
  }
  return;
}

