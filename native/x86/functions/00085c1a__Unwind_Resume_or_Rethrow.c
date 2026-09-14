/* 00085c1a | _Unwind_Resume_or_Rethrow */

undefined4 _Unwind_Resume_or_Rethrow(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  byte bVar5;
  undefined4 unaff_retaddr;
  undefined4 local_11c [32];
  undefined4 local_9c [18];
  undefined4 local_54;
  undefined4 local_50;
  undefined8 local_18;
  
  bVar5 = 0;
  local_18._4_4_ = 0x85c25;
  local_18 = FUN_0002e044();
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar1 = _Unwind_RaiseException(param_1);
    return uVar1;
  }
  FUN_0008567b(unaff_retaddr);
  puVar3 = local_11c;
  puVar4 = local_9c;
  for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  iVar2 = FUN_0008573d();
  if (iVar2 != 7) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  iVar2 = FUN_00084391();
  FUN_0008596b(local_54,local_50,iVar2,iVar2);
  *(undefined4 *)(&stack0x00000000 + iVar2) = local_50;
  return (undefined4)local_18;
}

