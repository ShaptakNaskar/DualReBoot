/* 0002dd38 | <EXTERNAL>::difftime */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double difftime(time_t __time1,time_t __time0)

{
  longdouble lVar1;
  
  lVar1 = (longdouble)(*(code *)PTR_difftime_0009c158)();
  return (double)lVar1;
}

