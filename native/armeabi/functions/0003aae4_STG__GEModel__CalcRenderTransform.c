/* 0003aae4 | STG::GEModel::CalcRenderTransform */

/* STG::GEModel::CalcRenderTransform(STG::GECamera const&, STG::MMatrix const&, STG::MMatrix&) const
    */

void STG::GEModel::CalcRenderTransform(GECamera *param_1,MMatrix *param_2,MMatrix *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  MMatrix *in_r3;
  undefined4 uVar3;
  undefined4 uVar4;
  float in_s0;
  float in_s1;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  if (param_1[0xc2] == (GECamera)0x0) {
    MMatrix::operator=(in_r3,param_3);
  }
  else if (param_1[0xa4] == (GECamera)0x0) {
    if (param_1[0x9c] == (GECamera)0x0) {
      if (param_1[0xc0] != (GECamera)0x0) {
        GECamera::ConvertClipToWorld
                  ((GECamera *)param_2,in_s0,in_s1,*(MVector3 **)(param_1 + 0xb4),
                   *(MVector3 **)(param_1 + 0xb8));
        uVar4 = *(undefined4 *)(param_1 + 0xbc);
        uVar1 = __subsf3(local_40,local_4c);
        uVar1 = __mulsf3(uVar1,uVar4);
        uVar2 = __subsf3(local_3c,local_48);
        uVar2 = __mulsf3(uVar2,uVar4);
        uVar3 = __subsf3(local_38,local_44);
        uVar3 = __mulsf3(uVar3,uVar4);
        local_34 = __addsf3(uVar1,local_4c);
        local_30 = __addsf3(uVar2,local_48);
        local_2c = __addsf3(uVar3,local_44);
        MMatrix::operator=(in_r3,param_3);
        MMatrix::SetPosition(in_r3,(MVector3 *)&local_34);
      }
    }
    else {
      MMatrix::Transform3x3_Transpose(param_3,param_2 + 0x100,in_r3);
    }
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 0xa0);
    uVar1 = __mulsf3(uVar3,*(undefined4 *)(param_2 + 0x1c0));
    uVar2 = __mulsf3(uVar3,*(undefined4 *)(param_2 + 0x1c4));
    uVar3 = __mulsf3(uVar3,*(undefined4 *)(param_2 + 0x1c8));
    local_58 = __addsf3(uVar1,*(undefined4 *)(param_3 + 0x30));
    local_54 = __addsf3(uVar2,*(undefined4 *)(param_3 + 0x34));
    local_50 = __addsf3(uVar3,*(undefined4 *)(param_3 + 0x38));
    MMatrix::operator=(in_r3,param_3);
    MMatrix::SetPosition(in_r3,(MVector3 *)&local_58);
  }
  return;
}

