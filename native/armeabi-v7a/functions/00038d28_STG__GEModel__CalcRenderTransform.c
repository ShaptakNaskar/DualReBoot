/* 00038d28 | STG::GEModel::CalcRenderTransform */

/* STG::GEModel::CalcRenderTransform(STG::GECamera const&, STG::MMatrix const&, STG::MMatrix&) const
    */

void __thiscall
STG::GEModel::CalcRenderTransform(GEModel *this,GECamera *param_1,MMatrix *param_2,MMatrix *param_3)

{
  float fVar1;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  if (this[0xc2] == (GEModel)0x0) {
    MMatrix::operator=(param_3,param_2);
  }
  else if (this[0xa4] == (GEModel)0x0) {
    if (this[0x9c] == (GEModel)0x0) {
      if (this[0xc0] != (GEModel)0x0) {
        GECamera::ConvertClipToWorld
                  (param_1,*(float *)(this + 0xb4),*(float *)(this + 0xb8),(MVector3 *)&local_34,
                   (MVector3 *)&local_28);
        fVar1 = *(float *)(this + 0xbc);
        local_1c = local_34 + (local_28 - local_34) * fVar1;
        local_18 = local_30 + (local_24 - local_30) * fVar1;
        local_14 = local_2c + (local_20 - local_2c) * fVar1;
        MMatrix::operator=(param_3,param_2);
        MMatrix::SetPosition(param_3,(MVector3 *)&local_1c);
      }
    }
    else {
      MMatrix::Transform3x3_Transpose(param_2,(MMatrix *)(param_1 + 0x100),param_3);
    }
  }
  else {
    fVar1 = *(float *)(this + 0xa0);
    local_40 = *(float *)(param_2 + 0x30) + fVar1 * *(float *)(param_1 + 0x1c0);
    local_3c = *(float *)(param_2 + 0x34) + fVar1 * *(float *)(param_1 + 0x1c4);
    local_38 = *(float *)(param_2 + 0x38) + fVar1 * *(float *)(param_1 + 0x1c8);
    MMatrix::operator=(param_3,param_2);
    MMatrix::SetPosition(param_3,(MVector3 *)&local_40);
  }
  return;
}

