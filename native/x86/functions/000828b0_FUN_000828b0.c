/* 000828b0 | FUN_000828b0 */

void FUN_000828b0(undefined4 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_EBX;
  bool bVar5;
  
  iVar3 = FUN_0002e044();
  plVar1 = (longlong *)
           ("_ZN3STG10GERenderer10InitializeEv" + (iVar3 - 1U & 0xfffffff8) + unaff_EBX + 0xd);
  uVar4 = (undefined4)*plVar1;
  iVar3 = *(int *)((int)plVar1 + 4);
  do {
    *param_1 = uVar4;
    LOCK();
    lVar2 = *plVar1;
    bVar5 = CONCAT44(iVar3,uVar4) == lVar2;
    if (bVar5) {
      *plVar1 = CONCAT44(iVar3 + 1,param_1);
    }
    else {
      iVar3 = (int)((ulonglong)lVar2 >> 0x20);
      uVar4 = (undefined4)lVar2;
    }
    UNLOCK();
  } while (!bVar5);
  return;
}

