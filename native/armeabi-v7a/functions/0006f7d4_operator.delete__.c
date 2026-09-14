/* 0006f7d4 | operator.delete[] */

/* operator delete[](void*) */

void operator_delete__(void *param_1)

{
  if (param_1 == (void *)0x0) {
    return;
  }
  (*(code *)(DAT_000765d4 + 0x765d8))();
  return;
}

