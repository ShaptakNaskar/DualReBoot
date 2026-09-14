/* 0004ba48 | STG::LLogicSceneWrapper::GetBoundingData_World */

/* STG::LLogicSceneWrapper::GetBoundingData_World(unsigned long, STG::MVector3&, float&) const */

void __thiscall
STG::LLogicSceneWrapper::GetBoundingData_World
          (LLogicSceneWrapper *this,ulong param_1,MVector3 *param_2,float *param_3)

{
  float *pfVar1;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  
  GetBoundingData_Local(this,param_1,(MVector3 *)&local_24,&local_28);
  pfVar1 = (float *)GetRenderTransform(this,param_1);
  *(float *)param_2 = local_20 * pfVar1[4] + local_24 * *pfVar1 + pfVar1[0xc] + local_1c * pfVar1[8]
  ;
  *(float *)(param_2 + 4) =
       local_20 * pfVar1[5] + local_24 * pfVar1[1] + pfVar1[0xd] + local_1c * pfVar1[9];
  *(float *)(param_2 + 8) =
       local_20 * pfVar1[6] + local_24 * pfVar1[2] + pfVar1[0xe] + local_1c * pfVar1[10];
  *param_3 = local_28;
  return;
}

