/* 0007cbe0 | Java_com_dualboot_engine_EngineInterface_Create */

undefined4 Java_com_dualboot_engine_EngineInterface_Create(int *param_1,int param_2)

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
  uVar1 = EngineInterfaceImpl::Create((int)&local_20);
  if ((local_20 != (int *)0x0) && (local_1c != 0)) {
    (**(code **)(*local_20 + 0x368))(local_20,local_1c);
  }
  return uVar1;
}

