/* 0006b420 | STG::UTime::GetStartTime_US */

/* STG::UTime::GetStartTime_US() const */

void __thiscall STG::UTime::GetStartTime_US(UTime *this)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = FUN_0002e044();
  iVar1 = *(int *)(iVar3 + 0xc);
  lVar2 = __udivdi3(*(int *)(iVar3 + 0x10),*(int *)(iVar3 + 0x10) >> 0x1f,1000,0);
  *(longlong *)this = (longlong)iVar1 * 1000000 + lVar2;
  return;
}

