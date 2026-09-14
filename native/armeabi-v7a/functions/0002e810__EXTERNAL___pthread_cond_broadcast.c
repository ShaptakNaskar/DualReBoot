/* 0002e810 | <EXTERNAL>::pthread_cond_broadcast */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_broadcast(pthread_cond_t *__cond)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_cond_broadcast_0007dfe8)(__cond);
  return iVar1;
}

