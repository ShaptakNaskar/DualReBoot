/* 0002e91c | <EXTERNAL>::clock_gettime */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int clock_gettime(clockid_t __clock_id,timespec *__tp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_clock_gettime_00080f8c)(__clock_id);
  return iVar1;
}

