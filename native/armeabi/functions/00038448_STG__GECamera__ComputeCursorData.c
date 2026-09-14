/* 00038448 | STG::GECamera::ComputeCursorData */

/* STG::GECamera::ComputeCursorData(STG::GEViewport const&, STG::MVector2 const&,
   STG::UTimeValue<unsigned long long, 1ul> const&, STG::GECursorData&) const */

void __thiscall
STG::GECamera::ComputeCursorData
          (GECamera *this,GEViewport *param_1,MVector2 *param_2,UTimeValue *param_3,
          GECursorData *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 extraout_r0;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float extraout_s0;
  float __x;
  float extraout_s1;
  MVector3 *local_30;
  MVector3 *local_2c;
  
  *(undefined4 *)(param_4 + 0x30) = 0;
  *(undefined4 *)(param_4 + 0x34) = 0;
  param_4[0x38] = (GECursorData)0x0;
  ConvertScreenToClip(this,(URectangle *)param_1,param_2,(MVector2 *)&local_30);
  iVar1 = __aeabi_fcmpgt(local_30,0xbf800000);
  if ((((iVar1 != 0) && (iVar1 = __aeabi_fcmplt(local_30,0x3f800000), iVar1 != 0)) &&
      (iVar1 = __aeabi_fcmpgt(local_2c,0xbf800000), iVar1 != 0)) &&
     (iVar1 = __aeabi_fcmplt(local_2c,0x3f800000), iVar1 != 0)) {
    uVar7 = *(undefined4 *)(param_3 + 4);
    *(undefined4 *)(param_4 + 0x30) = *(undefined4 *)param_3;
    *(undefined4 *)(param_4 + 0x34) = uVar7;
    param_4[0x38] = (GECursorData)0x1;
    ConvertClipToWorld(this,extraout_s0,extraout_s1,local_30,local_2c);
    uVar8 = *(undefined4 *)param_4;
    uVar5 = *(undefined4 *)(param_4 + 0x10);
    uVar7 = __subsf3(*(undefined4 *)(param_4 + 0xc),uVar8);
    uVar9 = *(undefined4 *)(param_4 + 4);
    uVar5 = __subsf3(uVar5,uVar9);
    uVar6 = *(undefined4 *)(param_4 + 8);
    uVar2 = __subsf3(*(undefined4 *)(param_4 + 0x14),uVar6);
    uVar3 = __mulsf3(uVar5,uVar5);
    uVar4 = __mulsf3(uVar7,uVar7);
    uVar3 = __addsf3(uVar3,uVar4);
    uVar4 = __mulsf3(uVar2,uVar2);
    uVar3 = __addsf3(uVar3,uVar4);
    iVar1 = __aeabi_fcmpgt(uVar3,0);
    if (iVar1 == 0) {
      uVar5 = 0;
      uVar7 = uVar5;
      uVar3 = uVar5;
    }
    else {
      sqrtf(__x);
      uVar4 = __divsf3(0x3f800000,extraout_r0);
      uVar3 = __mulsf3(uVar4,uVar7);
      uVar7 = __mulsf3(uVar4,uVar5);
      uVar5 = __mulsf3(uVar4,uVar2);
    }
    *(undefined4 *)(param_4 + 0x18) = uVar8;
    *(undefined4 *)(param_4 + 0x1c) = uVar9;
    *(undefined4 *)(param_4 + 0x20) = uVar6;
    *(undefined4 *)(param_4 + 0x24) = uVar3;
    *(undefined4 *)(param_4 + 0x28) = uVar7;
    *(undefined4 *)(param_4 + 0x2c) = uVar5;
  }
  return;
}

