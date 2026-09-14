/* 0006b1d0 | STG::UTime::UTime */

/* STG::UTime::UTime() */

void __thiscall STG::UTime::UTime(UTime *this)

{
  int iVar1;
  int unaff_EBX;
  
  FUN_0002e044();
  *(int *)this = *(int *)(unaff_EBX + 0x30d37) + 8;
  iVar1 = *(int *)(unaff_EBX + 0x30d3b);
  *(undefined4 *)(this + 4) = 0;
  *(int *)(this + 8) = iVar1 + 8;
  InstallTimer(this,(IInternalTime *)0x0);
  clock_gettime(1,(timespec *)(this + 0xc));
  return;
}

