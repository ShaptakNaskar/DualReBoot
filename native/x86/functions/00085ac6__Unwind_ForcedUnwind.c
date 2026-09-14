/* 00085ac6 | _Unwind_ForcedUnwind */

int __regparm2
_Unwind_ForcedUnwind
          (undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 *puVar2;
  undefined4 *puVar3;
  byte bVar4;
  undefined4 local_11c [32];
  undefined4 local_9c [18];
  undefined4 local_54;
  undefined4 local_50;
  int local_18;
  undefined4 local_14;
  
  bVar4 = 0;
  local_14 = param_2;
  FUN_0008567b();
  puVar2 = local_11c;
  puVar3 = local_9c;
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  *(undefined4 *)(param_3 + 0xc) = param_4;
  *(undefined4 *)(param_3 + 0x10) = param_5;
  iVar1 = FUN_0008573d();
  if (iVar1 != 7) {
    return iVar1;
  }
  iVar1 = FUN_00084391();
  FUN_0008596b(local_54,local_50,extraout_ECX,extraout_ECX);
  *(undefined4 *)(&stack0x00000000 + iVar1) = local_50;
  return local_18;
}

