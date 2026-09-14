/* 00076548 | operator.new */

void * operator_new(uint param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)((int)&DAT_00076554 + DAT_00076554))(param_1);
  return pvVar1;
}

