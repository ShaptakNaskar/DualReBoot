/* 00035d88 | STG::GECamera::ConvertScreenToClip */

/* STG::GECamera::ConvertScreenToClip(STG::URectangle<unsigned long> const&, STG::MVector2 const&,
   STG::MVector2&) const */

void __thiscall
STG::GECamera::ConvertScreenToClip
          (GECamera *this,URectangle *param_1,MVector2 *param_2,MVector2 *param_3)

{
  uint in_fpscr;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = (float)VectorUnsignedToFloat(*(undefined4 *)param_1,(byte)(in_fpscr >> 0x16) & 3);
  fVar3 = (float)VectorUnsignedToFloat(*(undefined4 *)(param_1 + 0xc),(byte)(in_fpscr >> 0x16) & 3);
  fVar1 = (float)VectorUnsignedToFloat(*(undefined4 *)(param_1 + 4),(byte)(in_fpscr >> 0x16) & 3);
  fVar2 = (float)VectorUnsignedToFloat(*(undefined4 *)(param_1 + 8),(byte)(in_fpscr >> 0x16) & 3);
  fVar1 = (*(float *)(param_2 + 4) - fVar3) / (fVar1 - fVar3);
  fVar2 = (*(float *)param_2 - fVar4) / (fVar2 - fVar4);
  *(float *)(param_3 + 4) = (fVar1 + fVar1) - 1.0;
  *(float *)param_3 = (fVar2 + fVar2) - 1.0;
  return;
}

