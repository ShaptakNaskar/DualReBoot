/* 00053fe4 | STG::MRay3::Intersect_Test_Sphere */

/* STG::MRay3::Intersect_Test_Sphere(STG::MVector3 const&, float) const */

bool STG::MRay3::Intersect_Test_Sphere(MVector3 *param_1,float param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *in_r1;
  undefined4 uVar6;
  
  uVar6 = *(undefined4 *)(param_1 + 4);
  uVar1 = __subsf3(*(undefined4 *)param_1,*in_r1);
  uVar6 = __subsf3(uVar6,in_r1[1]);
  uVar2 = __subsf3(*(undefined4 *)(param_1 + 8),in_r1[2]);
  uVar3 = __mulsf3(uVar6,uVar6);
  uVar4 = __mulsf3(uVar1,uVar1);
  uVar3 = __addsf3(uVar3,uVar4);
  uVar4 = __mulsf3(uVar2,uVar2);
  uVar3 = __addsf3(uVar3,uVar4);
  uVar4 = __mulsf3();
  uVar3 = __subsf3(uVar3,uVar4);
  iVar5 = __aeabi_fcmple(uVar3,0);
  if (iVar5 != 0) {
    return true;
  }
  uVar6 = __mulsf3(uVar6,*(undefined4 *)(param_1 + 0x10));
  uVar1 = __mulsf3(uVar1,*(undefined4 *)(param_1 + 0xc));
  uVar1 = __addsf3(uVar6,uVar1);
  uVar6 = __mulsf3(uVar2,*(undefined4 *)(param_1 + 0x14));
  uVar1 = __addsf3(uVar1,uVar6);
  iVar5 = __aeabi_fcmpge(uVar1,0);
  if (iVar5 != 0) {
    return false;
  }
  uVar1 = __mulsf3(uVar1,uVar1);
  iVar5 = __aeabi_fcmpge(uVar1,uVar3);
  return iVar5 != 0;
}

