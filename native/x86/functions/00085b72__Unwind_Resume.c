/* 00085b72 | _Unwind_Resume */

undefined8 _Unwind_Resume(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  byte bVar4;
  undefined4 unaff_retaddr;
  undefined4 local_11c [32];
  undefined4 local_9c [18];
  undefined4 local_54;
  undefined4 local_50;
  undefined8 local_18;
  
  bVar4 = 0;
  local_18._4_4_ = 0x85b89;
  local_18 = FUN_0002e044();
  FUN_0008567b(unaff_retaddr);
  puVar2 = local_11c;
  puVar3 = local_9c;
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    iVar1 = FUN_000857fb();
  }
  else {
    iVar1 = FUN_0008573d();
  }
  if (iVar1 != 7) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  iVar1 = FUN_00084391();
  FUN_0008596b(local_54,local_50,iVar1,iVar1);
  *(undefined4 *)(&stack0x00000000 + iVar1) = local_50;
  return local_18;
}

