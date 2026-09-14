/* 0004e368 | STG::LLogicSceneWrapper::TransformToClip */

/* STG::LLogicSceneWrapper::TransformToClip(STG::MMatrix const&, STG::MVector3 const&) const */

MMatrix * STG::LLogicSceneWrapper::TransformToClip(MMatrix *param_1,MVector3 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *in_r2;
  undefined4 *in_r3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar4 = *in_r3;
  uVar6 = in_r3[1];
  uVar5 = in_r3[2];
  uVar1 = __mulsf3(uVar4,in_r2[3]);
  uVar2 = __mulsf3(uVar6,in_r2[7]);
  uVar1 = __addsf3(uVar1,uVar2);
  uVar1 = __addsf3(uVar1,in_r2[0xf]);
  uVar2 = __mulsf3(uVar5,in_r2[0xb]);
  uVar1 = __addsf3(uVar1,uVar2);
  uVar1 = __divsf3(0x3f800000,uVar1);
  uVar2 = __mulsf3(uVar4,in_r2[1]);
  uVar3 = __mulsf3(uVar6,in_r2[5]);
  uVar2 = __addsf3(uVar2,uVar3);
  uVar2 = __addsf3(uVar2,in_r2[0xd]);
  uVar3 = __mulsf3(uVar5,in_r2[9]);
  uVar2 = __addsf3(uVar2,uVar3);
  uVar2 = __mulsf3(uVar1,uVar2);
  uVar3 = __mulsf3(uVar4,*in_r2);
  uVar4 = __mulsf3(uVar6,in_r2[4]);
  uVar3 = __addsf3(uVar3,uVar4);
  uVar3 = __addsf3(uVar3,in_r2[0xc]);
  uVar4 = __mulsf3(uVar5,in_r2[8]);
  uVar3 = __addsf3(uVar3,uVar4);
  uVar1 = __mulsf3(uVar1,uVar3);
  *(undefined4 *)param_1 = uVar1;
  *(undefined4 *)(param_1 + 4) = uVar2;
  return param_1;
}

