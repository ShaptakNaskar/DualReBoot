/* 0005dbcc | STG::UTime::GetCurrentTime_US */

/* STG::UTime::GetCurrentTime_US() const */

void STG::UTime::GetCurrentTime_US(void)

{
  longlong lVar1;
  longlong *in_r0;
  int in_r1;
  int iVar2;
  int iVar3;
  bool bVar4;
  timespec local_20;
  
  clock_gettime(1,&local_20);
  iVar2 = local_20.tv_nsec - *(int *)(in_r1 + 0x10);
  bVar4 = iVar2 < 0;
  if (bVar4) {
    iVar2 = iVar2 + 0x3b9ac000;
  }
  iVar3 = local_20.tv_sec - *(int *)(in_r1 + 0xc);
  if (bVar4) {
    iVar2 = iVar2 + 0xa00;
    iVar3 = iVar3 + -1;
  }
  lVar1 = __aeabi_uldivmod(iVar2,iVar2 >> 0x1f,1000,0);
  *in_r0 = (longlong)iVar3 * 1000000 + lVar1;
  return;
}

