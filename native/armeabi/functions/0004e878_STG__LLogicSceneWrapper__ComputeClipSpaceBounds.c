/* 0004e878 | STG::LLogicSceneWrapper::ComputeClipSpaceBounds */

/* STG::LLogicSceneWrapper::ComputeClipSpaceBounds(unsigned long, STG::MVector2&, STG::MVector2&,
   STG::MVector2&) const */

bool __thiscall
STG::LLogicSceneWrapper::ComputeClipSpaceBounds
          (LLogicSceneWrapper *this,ulong param_1,MVector2 *param_2,MVector2 *param_3,
          MVector2 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 extraout_r0;
  int iVar7;
  bool bVar8;
  float __x;
  float local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  MMatrix aMStack_a8 [64];
  MMatrix aMStack_68 [68];
  
  iVar7 = *(int *)this;
  iVar1 = GetIsModelVisible(this,param_1);
  bVar8 = false;
  if (iVar1 != 0) {
    MMatrix::ComputeTranspose((MMatrix *)(iVar7 + 0x45c),(MMatrix *)&local_e8);
    MMatrix::ComputeInverse((MMatrix *)(iVar7 + 0x3dc));
    MMatrix::Transform((MMatrix *)(iVar7 + 0x49c),aMStack_a8,aMStack_68);
    GetBoundingData_World(this,param_1,(MVector3 *)&local_10c,&local_128);
    uVar2 = __addsf3(local_d8,local_e8);
    uVar3 = __addsf3(local_d4,local_e4);
    uVar4 = __addsf3(local_d0,local_e0);
    uVar2 = __subsf3(uVar2,local_c8);
    uVar3 = __subsf3(uVar3,local_c4);
    uVar4 = __subsf3(uVar4,local_c0);
    uVar2 = __mulsf3(uVar2,local_128);
    uVar3 = __mulsf3(uVar3,local_128);
    uVar4 = __mulsf3(uVar4,local_128);
    TransformToClip((MMatrix *)&local_124,(MVector3 *)this);
    uVar5 = __subsf3(local_108,uVar3);
    uVar6 = __subsf3(local_104,uVar4);
    local_100 = __subsf3(local_10c,uVar2);
    local_fc = uVar5;
    local_f8 = uVar6;
    TransformToClip((MMatrix *)&local_11c,(MVector3 *)this);
    uVar3 = __addsf3(uVar3,local_108);
    uVar4 = __addsf3(uVar4,local_104);
    local_f4 = __addsf3(uVar2,local_10c);
    local_f0 = uVar3;
    local_ec = uVar4;
    TransformToClip((MMatrix *)&local_114,(MVector3 *)this);
    uVar2 = __subsf3(local_11c,local_124);
    uVar3 = __subsf3(local_118,local_120);
    uVar4 = __subsf3(local_114,local_124);
    uVar5 = __subsf3(local_110,local_120);
    uVar3 = __mulsf3(uVar3,uVar3);
    uVar2 = __mulsf3(uVar2,uVar2);
    uVar2 = __addsf3(uVar3,uVar2);
    uVar3 = __mulsf3(uVar5,uVar5);
    uVar4 = __mulsf3(uVar4,uVar4);
    uVar3 = __addsf3(uVar3,uVar4);
    __aeabi_fcmpge(uVar3,uVar2);
    sqrtf(__x);
    uVar2 = __subsf3(local_124,extraout_r0);
    uVar3 = __subsf3(local_120,extraout_r0);
    *(undefined4 *)param_3 = uVar2;
    *(undefined4 *)(param_3 + 4) = uVar3;
    uVar2 = __addsf3(extraout_r0,local_124);
    uVar3 = __addsf3(extraout_r0,local_120);
    *(undefined4 *)param_4 = uVar2;
    *(undefined4 *)(param_4 + 4) = uVar3;
    uVar2 = __mulsf3(extraout_r0,local_124);
    uVar3 = __mulsf3(extraout_r0,local_120);
    uVar2 = __addsf3(uVar2,local_124);
    uVar3 = __addsf3(uVar3,local_120);
    *(undefined4 *)(param_2 + 4) = uVar3;
    *(undefined4 *)param_2 = uVar2;
    iVar1 = __aeabi_fcmplt(uVar2,0xbf800000);
    if (((iVar1 == 0) && (iVar1 = __aeabi_fcmplt(uVar3,0xbf800000), iVar1 == 0)) &&
       (iVar1 = __aeabi_fcmpgt(uVar2,0x3f800000), iVar1 == 0)) {
      iVar1 = __aeabi_fcmple(uVar3,0x3f800000);
      bVar8 = iVar1 != 0;
    }
    else {
      bVar8 = false;
    }
  }
  return bVar8;
}

