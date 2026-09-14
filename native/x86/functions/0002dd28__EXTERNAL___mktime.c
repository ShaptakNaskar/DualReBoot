/* 0002dd28 | <EXTERNAL>::mktime */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t mktime(tm *__tp)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_mktime_0009c154)();
  return tVar1;
}

