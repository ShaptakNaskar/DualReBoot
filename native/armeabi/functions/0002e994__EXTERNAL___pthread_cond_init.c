/* 0002e994 | <EXTERNAL>::pthread_cond_init */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_init(pthread_cond_t *__cond,pthread_condattr_t *__cond_attr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_cond_init_00080fb4)(__cond);
  return iVar1;
}

