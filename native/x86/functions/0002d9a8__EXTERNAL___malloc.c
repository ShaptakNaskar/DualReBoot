/* 0002d9a8 | <EXTERNAL>::malloc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_0009c074)();
  return pvVar1;
}

