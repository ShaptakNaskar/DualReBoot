/* 0006d78c | Java_com_dualboot_engine_EngineInterface_Update */

undefined4
Java_com_dualboot_engine_EngineInterface_Update
          (int *param_1,int param_2,int param_3,int param_4,undefined4 param_5,float param_6,
          float param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10,double param_11,
          float param_12,uchar param_13)

{
  undefined4 uVar1;
  int *local_28;
  int local_24;
  int *local_20;
  int local_1c;
  
  local_28 = param_1;
  local_24 = param_2;
  if ((param_1 != (int *)0x0) && (param_2 != 0)) {
    (**(code **)(*param_1 + 0x364))();
  }
  local_20 = param_1;
  local_1c = param_2;
  uVar1 = EngineInterfaceImpl::Update
                    ((int)&local_28,param_3,param_4,param_6,param_7,CONCAT44(param_10,param_9),
                     param_11,param_12,param_13);
  if ((local_28 != (int *)0x0) && (local_24 != 0)) {
    (**(code **)(*local_28 + 0x368))();
  }
  return uVar1;
}

