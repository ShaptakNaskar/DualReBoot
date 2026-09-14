/* 0004ba14 | STG::LLogicSceneWrapper::GetBoundingData_Local */

/* STG::LLogicSceneWrapper::GetBoundingData_Local(unsigned long, STG::MVector3&, float&) const */

void __thiscall
STG::LLogicSceneWrapper::GetBoundingData_Local
          (LLogicSceneWrapper *this,ulong param_1,MVector3 *param_2,float *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = GetModel(this,param_1);
  uVar2 = *(undefined4 *)(iVar1 + 0x6c);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(iVar1 + 0x70);
  uVar3 = *(undefined4 *)(iVar1 + 0x74);
  *(undefined4 *)param_2 = uVar2;
  *(undefined4 *)(param_2 + 8) = uVar3;
  *param_3 = *(float *)(iVar1 + 0x78);
  return;
}

