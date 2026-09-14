/* 0005dc9c | STG::UTime::GetStartTime_US */

/* STG::UTime::GetStartTime_US() const */

void STG::UTime::GetStartTime_US(void)

{
  longlong lVar1;
  longlong *in_r0;
  int in_r1;
  int iVar2;
  
  iVar2 = *(int *)(in_r1 + 0xc);
  lVar1 = __aeabi_uldivmod(*(int *)(in_r1 + 0x10),*(int *)(in_r1 + 0x10) >> 0x1f,1000,0);
  *in_r0 = (longlong)iVar2 * 1000000 + lVar1;
  return;
}

