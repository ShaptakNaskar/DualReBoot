/* 0005dae8 | STG::UTime::UTime */

/* STG::UTime::UTime() */

UTime * __thiscall STG::UTime::UTime(UTime *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_0005db3c + 0x5db00;
  iVar2 = *(int *)(iVar1 + DAT_0005db40);
  *(undefined4 *)(this + 4) = 0;
  *(int *)this = iVar2 + 8;
  *(int *)(this + 8) = *(int *)(iVar1 + DAT_0005db44) + 8;
  InstallTimer(this,(IInternalTime *)0x0);
  clock_gettime(1,(timespec *)(this + 0xc));
  return this;
}

