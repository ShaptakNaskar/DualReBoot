/* 0002e9a0 | <EXTERNAL>::munmap */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int munmap(void *__addr,size_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_munmap_00080fb8)(__addr);
  return iVar1;
}

