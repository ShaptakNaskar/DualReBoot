/* 0007e040 | Java_com_dualboot_engine_EngineInterface_LoadFile */

undefined4
Java_com_dualboot_engine_EngineInterface_LoadFile
          (int *param_1,int param_2,int param_3,_jobject *param_4,_jstring *param_5)

{
  undefined4 uVar1;
  int *local_20;
  int local_1c;
  int *local_18;
  int local_14;
  
  FUN_0002e044();
  local_20 = param_1;
  local_1c = param_2;
  if ((param_1 != (int *)0x0) && (param_2 != 0)) {
    (**(code **)(*param_1 + 0x364))(param_1,param_2);
  }
  local_18 = param_1;
  local_14 = param_2;
  uVar1 = EngineInterfaceImpl::LoadFile((EngineInterfaceImpl *)&local_20,param_3,param_4,param_5);
  if ((local_20 != (int *)0x0) && (local_1c != 0)) {
    (**(code **)(*local_20 + 0x368))(local_20,local_1c);
  }
  return uVar1;
}

