/* 00054720 | STG::LLogicSceneWrapper::GetBoundingData_World */

/* STG::LLogicSceneWrapper::GetBoundingData_World(unsigned long, STG::MVector3&, float&) const */

void __thiscall
STG::LLogicSceneWrapper::GetBoundingData_World
          (LLogicSceneWrapper *this,ulong param_1,MVector3 *param_2,float *param_3)

{
  float *pfVar1;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  
  FUN_0002e044();
  GetBoundingData_Local(this,param_1,(MVector3 *)&local_28,&local_2c);
  pfVar1 = (float *)GetRenderTransform(this,param_1);
  *(float *)param_2 = *pfVar1 * local_28 + pfVar1[4] * local_24 + pfVar1[0xc] + pfVar1[8] * local_20
  ;
  *(float *)(param_2 + 4) =
       pfVar1[1] * local_28 + pfVar1[5] * local_24 + pfVar1[0xd] + pfVar1[9] * local_20;
  *(float *)(param_2 + 8) =
       local_28 * pfVar1[2] + local_24 * pfVar1[6] + pfVar1[0xe] + local_20 * pfVar1[10];
  *param_3 = local_2c;
  return;
}

