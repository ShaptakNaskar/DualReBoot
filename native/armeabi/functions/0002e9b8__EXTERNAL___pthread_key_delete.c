/* 0002e9b8 | <EXTERNAL>::pthread_key_delete */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_key_delete(pthread_key_t __key)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_key_delete_00080fc0)(__key);
  return iVar1;
}

