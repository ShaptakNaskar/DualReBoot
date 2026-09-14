/* 0002e6a8 | <EXTERNAL>::gmtime_r */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

tm * gmtime_r(time_t *__timer,tm *__tp)

{
  tm *ptVar1;
  
  ptVar1 = (tm *)(*(code *)PTR_gmtime_r_0007df70)(__timer);
  return ptVar1;
}

