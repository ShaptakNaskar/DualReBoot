/* 0002e5f8 | <EXTERNAL>::malloc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00080e80)(__size);
  return pvVar1;
}

