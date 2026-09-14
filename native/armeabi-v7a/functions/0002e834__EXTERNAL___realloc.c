/* 0002e834 | <EXTERNAL>::realloc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_realloc_0007dff4)(__ptr);
  return pvVar1;
}

