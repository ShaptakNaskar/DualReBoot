/* 00038a20 | STG::GECamera::ComputeCursorData */

/* STG::GECamera::ComputeCursorData(STG::GEViewport const&, STG::MVector2 const&,
   STG::UTimeValue<unsigned long long, 1ul> const&, STG::GECursorData&) const */

void __thiscall
STG::GECamera::ComputeCursorData
          (GECamera *this,GEViewport *param_1,MVector2 *param_2,UTimeValue *param_3,
          GECursorData *param_4)

{
  undefined4 uVar1;
  int unaff_EBX;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  float local_14;
  float local_10;
  
  FUN_0002e044();
  param_4[0x38] = (GECursorData)0x0;
  *(undefined4 *)(param_4 + 0x30) = 0;
  *(undefined4 *)(param_4 + 0x34) = 0;
  ConvertScreenToClip((URectangle *)this,(MVector2 *)param_1,param_2);
  if ((((*(float *)(&DAT_0004ec8f + unaff_EBX) < local_14) &&
       (local_14 < *(float *)(unaff_EBX + 0x4ec77))) &&
      (*(float *)(&DAT_0004ec8f + unaff_EBX) < local_10)) &&
     (local_10 < *(float *)(unaff_EBX + 0x4ec77))) {
    param_4[0x38] = (GECursorData)0x1;
    uVar1 = *(undefined4 *)(param_3 + 4);
    *(undefined4 *)(param_4 + 0x30) = *(undefined4 *)param_3;
    *(undefined4 *)(param_4 + 0x34) = uVar1;
    ConvertClipToWorld(this,local_14,local_10,(MVector3 *)param_4,(MVector3 *)(param_4 + 0xc));
    fVar7 = *(float *)(param_4 + 0xc) - *(float *)param_4;
    fVar5 = *(float *)(param_4 + 0x10) - *(float *)(param_4 + 4);
    fVar4 = *(float *)(param_4 + 0x14) - *(float *)(param_4 + 8);
    fVar2 = fVar5 * fVar5 + fVar7 * fVar7 + fVar4 * fVar4;
    fVar8 = 0.0;
    fVar6 = fVar8;
    fVar3 = fVar8;
    if (0.0 < fVar2) {
      auVar9 = rsqrtss(ZEXT416(0),ZEXT416((uint)fVar2));
      fVar6 = auVar9._0_4_;
      fVar3 = (fVar2 * fVar6 * fVar6 + *(float *)(unaff_EBX + 0x4ec93)) *
              fVar6 * *(float *)(unaff_EBX + 0x4ec97);
      fVar8 = fVar3 * fVar4;
      fVar6 = fVar5 * fVar3;
      fVar3 = fVar7 * fVar3;
    }
    *(float *)(param_4 + 0x18) = *(float *)param_4;
    *(float *)(param_4 + 0x1c) = *(float *)(param_4 + 4);
    *(float *)(param_4 + 0x20) = *(float *)(param_4 + 8);
    *(float *)(param_4 + 0x24) = fVar3;
    *(float *)(param_4 + 0x28) = fVar6;
    *(float *)(param_4 + 0x2c) = fVar8;
  }
  return;
}

