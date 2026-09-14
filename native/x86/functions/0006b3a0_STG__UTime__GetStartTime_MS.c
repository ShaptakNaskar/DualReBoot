/* 0006b3a0 | STG::UTime::GetStartTime_MS */

/* STG::UTime::GetStartTime_MS() const */

void __thiscall STG::UTime::GetStartTime_MS(UTime *this)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = FUN_0002e044();
  iVar1 = *(int *)(iVar3 + 0xc);
  lVar2 = __udivdi3(*(int *)(iVar3 + 0x10),*(int *)(iVar3 + 0x10) >> 0x1f,1000000,0);
  *(longlong *)this = (longlong)iVar1 * 1000 + lVar2;
  return;
}

