/* 000726f0 | Java_com_dualboot_engine_EngineInterface_AddBitmapData */

undefined4
Java_com_dualboot_engine_EngineInterface_AddBitmapData
          (int *param_1,int param_2,int param_3,_jstring *param_4,_jobject *param_5,int param_6,
          int param_7,int param_8)

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
  uVar1 = EngineInterfaceImpl::AddBitmapData
                    ((EngineInterfaceImpl *)&local_28,param_3,param_4,param_5,param_6,param_7,
                     param_8);
  if ((local_28 != (int *)0x0) && (local_24 != 0)) {
    (**(code **)(*local_28 + 0x368))();
  }
  return uVar1;
}

