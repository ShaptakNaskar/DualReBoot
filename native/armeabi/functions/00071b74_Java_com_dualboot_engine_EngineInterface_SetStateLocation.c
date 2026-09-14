/* 00071b74 | Java_com_dualboot_engine_EngineInterface_SetStateLocation */

undefined4
Java_com_dualboot_engine_EngineInterface_SetStateLocation
          (undefined4 param_1,undefined4 param_2,int *param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int *local_28;
  int local_24;
  int *local_20;
  int local_1c;
  
  local_28 = param_3;
  local_24 = param_4;
  uVar2 = CONCAT44(param_2,param_1);
  if ((param_3 != (int *)0x0) && (uVar2 = CONCAT44(param_2,param_1), param_4 != 0)) {
    uVar2 = (**(code **)(*param_3 + 0x364))();
  }
  local_20 = param_3;
  local_1c = param_4;
  uVar1 = EngineInterfaceImpl::SetStateLocation
                    ((EngineInterfaceImpl *)&local_28,param_5,(float)uVar2,
                     (float)((ulonglong)uVar2 >> 0x20));
  if ((local_28 != (int *)0x0) && (local_24 != 0)) {
    (**(code **)(*local_28 + 0x368))();
  }
  return uVar1;
}

