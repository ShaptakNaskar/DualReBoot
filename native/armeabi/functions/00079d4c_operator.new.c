/* 00079d4c | operator.new */

void * operator_new(uint param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)((int)&DAT_00079d58 + DAT_00079d58))(param_1);
  return pvVar1;
}

