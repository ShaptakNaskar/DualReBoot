/* 0002e910 | <EXTERNAL>::localtime_r */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

tm * localtime_r(time_t *__timer,tm *__tp)

{
  tm *ptVar1;
  
  ptVar1 = (tm *)(*(code *)PTR_localtime_r_00080f88)(__timer);
  return ptVar1;
}

