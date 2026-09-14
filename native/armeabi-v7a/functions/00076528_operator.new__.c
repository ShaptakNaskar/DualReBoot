/* 00076528 | operator.new[] */

void * operator_new__(uint param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)((int)&DAT_00076534 + DAT_00076534))(param_1);
  return pvVar1;
}

