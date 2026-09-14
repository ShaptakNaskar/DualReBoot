/* 0002def8 | <EXTERNAL>::pthread_setspecific */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_setspecific(pthread_key_t __key,void *__pointer)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_setspecific_0009c1c8)();
  return iVar1;
}

