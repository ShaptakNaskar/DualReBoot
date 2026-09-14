/* 00079d2c | operator.new[] */

void * operator_new__(uint param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)((int)&DAT_00079d38 + DAT_00079d38))(param_1);
  return pvVar1;
}

