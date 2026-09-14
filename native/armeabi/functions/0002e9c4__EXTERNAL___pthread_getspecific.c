/* 0002e9c4 | <EXTERNAL>::pthread_getspecific */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * pthread_getspecific(pthread_key_t __key)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_pthread_getspecific_00080fc4)(__key);
  return pvVar1;
}

