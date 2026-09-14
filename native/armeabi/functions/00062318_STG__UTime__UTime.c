/* 00062318 | STG::UTime::UTime */

/* STG::UTime::UTime() */

UTime * __thiscall STG::UTime::UTime(UTime *this)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_00062368 + 0x62330;
  iVar1 = *(int *)(iVar2 + DAT_0006236c);
  *(undefined4 *)(this + 4) = 0;
  *(int *)this = iVar1 + 8;
  *(int *)(this + 8) = *(int *)(iVar2 + DAT_00062370) + 8;
  InstallTimer(this,(IInternalTime *)0x0);
  clock_gettime(1,(timespec *)(this + 0xc));
  return this;
}

