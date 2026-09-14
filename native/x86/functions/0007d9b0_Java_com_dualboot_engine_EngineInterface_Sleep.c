/* 0007d9b0 | Java_com_dualboot_engine_EngineInterface_Sleep */

void Java_com_dualboot_engine_EngineInterface_Sleep
               (undefined4 param_1,undefined4 param_2,EngineInterfaceImpl *param_3,
               undefined4 param_4)

{
  undefined4 in_stack_ffffffec;
  
  FUN_0002e044();
  EngineInterfaceImpl::Sleep(param_3,CONCAT44(in_stack_ffffffec,param_4));
  return;
}

