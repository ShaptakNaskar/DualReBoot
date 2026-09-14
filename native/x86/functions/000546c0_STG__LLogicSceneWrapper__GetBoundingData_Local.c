/* 000546c0 | STG::LLogicSceneWrapper::GetBoundingData_Local */

/* STG::LLogicSceneWrapper::GetBoundingData_Local(unsigned long, STG::MVector3&, float&) const */

void __thiscall
STG::LLogicSceneWrapper::GetBoundingData_Local
          (LLogicSceneWrapper *this,ulong param_1,MVector3 *param_2,float *param_3)

{
  ulong uVar1;
  int iVar2;
  
  uVar1 = FUN_0002e044();
  iVar2 = GetModel(this,uVar1);
  *(undefined4 *)param_2 = *(undefined4 *)(iVar2 + 0x6c);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(iVar2 + 0x70);
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(iVar2 + 0x74);
  *param_3 = *(float *)(iVar2 + 0x78);
  return;
}

