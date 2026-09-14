/* 0002e8a4 | <EXTERNAL>::mktime */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t mktime(tm *__tp)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_mktime_00080f64)(__tp);
  return tVar1;
}

