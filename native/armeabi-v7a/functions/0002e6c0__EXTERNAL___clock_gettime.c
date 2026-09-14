/* 0002e6c0 | <EXTERNAL>::clock_gettime */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int clock_gettime(clockid_t __clock_id,timespec *__tp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_clock_gettime_0007df78)(__clock_id);
  return iVar1;
}

