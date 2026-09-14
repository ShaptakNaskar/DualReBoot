/* 0002e678 | <EXTERNAL>::difftime */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double difftime(time_t __time1,time_t __time0)

{
  undefined4 uVar1;
  undefined4 extraout_s1;
  
  uVar1 = (*(code *)PTR_difftime_0007df60)(__time1);
  return (double)CONCAT44(extraout_s1,uVar1);
}

