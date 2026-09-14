/* 0007fed0 | operator.delete */

/* operator delete(void*) */

void operator_delete(void *param_1)

{
  FUN_0002e044();
  if (param_1 != (void *)0x0) {
    free(param_1);
  }
  return;
}

