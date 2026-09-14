/* 00085970 | _Unwind_RaiseException */

int _Unwind_RaiseException(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  byte bVar5;
  undefined8 uVar6;
  undefined4 unaff_retaddr;
  undefined4 local_1dc [32];
  undefined4 local_15c [18];
  undefined4 local_114;
  undefined4 local_110;
  int local_fc;
  code *local_34;
  undefined8 local_18;
  
  bVar5 = 0;
  local_18._4_4_ = 0x85987;
  local_18 = FUN_0002e044();
  FUN_0008567b(unaff_retaddr);
  puVar3 = local_1dc;
  puVar4 = local_15c;
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  while( true ) {
    uVar6 = FUN_000853d5();
    uVar2 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if ((int)uVar6 == 5) {
      return 5;
    }
    if ((int)uVar6 != 0) break;
    if (local_34 != (code *)0x0) {
      iVar1 = (*local_34)(1,1,*param_1,param_1[1],param_1,local_15c,uVar2,uVar2);
      if (iVar1 == 6) {
        param_1[3] = 0;
        iVar1 = _Unwind_GetCFA(local_15c);
        param_1[4] = iVar1 + (local_fc >> 0x1f);
        puVar3 = local_1dc;
        puVar4 = local_15c;
        for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
          puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
        }
        iVar1 = FUN_000857fb();
        if (iVar1 == 7) {
          iVar1 = FUN_00084391();
          FUN_0008596b(local_114,local_110,iVar1,iVar1);
          *(undefined4 *)(&stack0x00000000 + iVar1) = local_110;
          return (int)local_18;
        }
        return iVar1;
      }
      if (iVar1 != 8) {
        return 3;
      }
    }
    FUN_00084f0b();
  }
  return 3;
}

