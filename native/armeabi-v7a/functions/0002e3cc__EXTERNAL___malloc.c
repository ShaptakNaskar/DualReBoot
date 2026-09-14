/* 0002e3cc | <EXTERNAL>::malloc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_0007de7c)(__size);
  return pvVar1;
}

