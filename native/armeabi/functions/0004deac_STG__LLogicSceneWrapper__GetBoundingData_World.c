/* 0004deac | STG::LLogicSceneWrapper::GetBoundingData_World */

/* STG::LLogicSceneWrapper::GetBoundingData_World(unsigned long, STG::MVector3&, float&) const */

void __thiscall
STG::LLogicSceneWrapper::GetBoundingData_World
          (LLogicSceneWrapper *this,ulong param_1,MVector3 *param_2,float *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  GetBoundingData_Local(this,param_1,(MVector3 *)&local_2c,&local_30);
  puVar1 = (undefined4 *)GetRenderTransform(this,param_1);
  uVar2 = __mulsf3(local_2c,*puVar1);
  uVar3 = __mulsf3(local_28,puVar1[4]);
  uVar2 = __addsf3(uVar2,uVar3);
  uVar2 = __addsf3(uVar2,puVar1[0xc]);
  uVar3 = __mulsf3(local_24,puVar1[8]);
  uVar2 = __addsf3(uVar2,uVar3);
  *(undefined4 *)param_2 = uVar2;
  uVar2 = __mulsf3(local_2c,puVar1[1]);
  uVar3 = __mulsf3(local_28,puVar1[5]);
  uVar2 = __addsf3(uVar2,uVar3);
  uVar2 = __addsf3(uVar2,puVar1[0xd]);
  uVar3 = __mulsf3(local_24,puVar1[9]);
  uVar2 = __addsf3(uVar2,uVar3);
  *(undefined4 *)(param_2 + 4) = uVar2;
  uVar2 = __mulsf3(local_2c,puVar1[2]);
  uVar3 = __mulsf3(local_28,puVar1[6]);
  uVar2 = __addsf3(uVar2,uVar3);
  uVar2 = __addsf3(uVar2,puVar1[0xe]);
  uVar3 = __mulsf3(local_24,puVar1[10]);
  uVar2 = __addsf3(uVar2,uVar3);
  *(undefined4 *)(param_2 + 8) = uVar2;
  *param_3 = local_30;
  return;
}

