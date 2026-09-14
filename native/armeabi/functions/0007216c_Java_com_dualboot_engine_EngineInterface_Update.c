/* 0007216c | Java_com_dualboot_engine_EngineInterface_Update */

undefined4
Java_com_dualboot_engine_EngineInterface_Update
          (float param_1,float param_2,float param_3,int *param_4,int param_5,int param_6,
          int param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10,undefined4 param_11,
          uchar param_12)

{
  undefined4 uVar1;
  float extraout_s1;
  undefined4 extraout_s2;
  double in_d1;
  undefined4 extraout_s3;
  float extraout_s4;
  int *local_28;
  int local_24;
  int *local_20;
  int local_1c;
  
  local_28 = param_4;
  local_24 = param_5;
  if ((param_4 != (int *)0x0) && (param_5 != 0)) {
    param_1 = (float)(**(code **)(*param_4 + 0x364))();
    in_d1 = (double)CONCAT44(extraout_s3,extraout_s2);
    param_2 = extraout_s1;
    param_3 = extraout_s4;
  }
  local_20 = param_4;
  local_1c = param_5;
  uVar1 = EngineInterfaceImpl::Update
                    ((int)&local_28,param_6,param_7,param_1,param_2,CONCAT44(param_10,param_9),in_d1
                     ,param_3,param_12);
  if ((local_28 != (int *)0x0) && (local_24 != 0)) {
    (**(code **)(*local_28 + 0x368))();
  }
  return uVar1;
}

