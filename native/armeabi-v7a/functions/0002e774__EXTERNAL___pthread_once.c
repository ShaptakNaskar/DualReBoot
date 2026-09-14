/* 0002e774 | <EXTERNAL>::pthread_once */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_once(pthread_once_t *__once_control,__init_routine *__init_routine)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_once_0007dfb4)(__once_control);
  return iVar1;
}

