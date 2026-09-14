/* 0002e520 | <EXTERNAL>::strlen */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_00080e38)(__s);
  return sVar1;
}

