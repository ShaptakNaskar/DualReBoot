/* 0007431c | operator.new[] */

/* operator new[](unsigned int) */

void * operator_new__(uint param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new(param_1);
  return pvVar1;
}

