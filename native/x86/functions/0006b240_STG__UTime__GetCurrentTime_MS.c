/* 0006b240 | STG::UTime::GetCurrentTime_MS */

/* STG::UTime::GetCurrentTime_MS() const */

void STG::UTime::GetCurrentTime_MS(void)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong *in_stack_00000004;
  int in_stack_00000008;
  timespec local_24 [2];
  
  FUN_0002e044();
  clock_gettime(1,local_24);
  iVar3 = local_24[0].tv_sec - *(int *)(in_stack_00000008 + 0xc);
  iVar2 = local_24[0].tv_nsec - *(int *)(in_stack_00000008 + 0x10);
  if (iVar2 < 0) {
    iVar3 = iVar3 + -1;
    iVar2 = iVar2 + 1000000000;
  }
  lVar1 = __udivdi3(iVar2,iVar2 >> 0x1f,1000000,0);
  *in_stack_00000004 = (longlong)iVar3 * 1000 + lVar1;
  return;
}

