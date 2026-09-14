/* 0007d720 | Java_com_dualboot_engine_EngineInterface_Update */

undefined4
Java_com_dualboot_engine_EngineInterface_Update
          (int *param_1,int param_2,int param_3,int param_4,float param_5,float param_6,
          undefined4 param_7,undefined4 param_8,undefined4 param_9,undefined8 param_10,
          uchar param_11)

{
  undefined4 uVar1;
  int *local_20;
  int local_1c;
  int *local_18;
  int local_14;
  
  local_14 = 0x7d72b;
  FUN_0002e044();
  local_20 = param_1;
  local_1c = param_2;
  if ((param_1 != (int *)0x0) && (param_2 != 0)) {
    (**(code **)(*param_1 + 0x364))(param_1,param_2);
  }
  local_18 = param_1;
  local_14 = param_2;
  uVar1 = EngineInterfaceImpl::Update
                    ((int)&local_20,param_3,param_4,param_5,param_6,CONCAT44(param_8,param_7),
                     (double)CONCAT44((int)param_10,param_9),(float)((ulonglong)param_10 >> 0x20),
                     param_11);
  if ((local_20 != (int *)0x0) && (local_1c != 0)) {
    (**(code **)(*local_20 + 0x368))(local_20,local_1c);
  }
  return uVar1;
}

