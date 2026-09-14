/* 00081020 | FUN_00081020 */

undefined4 FUN_00081020(int param_1,uint param_2,int param_3,int param_4,int param_5,int param_6)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  int local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  
  if (((param_5 == 0) || (param_1 != 1)) || (param_6 == 0)) {
    return 3;
  }
  bVar1 = param_3 == 0x432b2b00;
  bVar2 = param_4 == 0x474e5543;
  if ((param_2 & 1) == 0) {
    if ((param_2 & 2) == 0) {
      return 3;
    }
    if ((param_2 & 4) != 0) {
      if (bVar1 && bVar2) {
        local_28 = *(int *)(param_5 + -0x14);
        local_20 = *(undefined4 *)(param_5 + -0x10);
        local_1c = *(undefined4 *)(param_5 + -0xc);
        local_18 = *(undefined4 *)(param_5 + -8);
        local_24 = local_28 >> 0x1f;
        local_14 = *(undefined4 *)(param_5 + -4);
        FUN_00080b90(param_5,&local_28);
      }
      else {
        FUN_00080570(&local_28,param_2,0,param_5,param_6);
        if (local_10 != 6) {
                    /* WARNING: Subroutine does not return */
          FUN_000803f0(param_5);
        }
      }
      FUN_00080af0(param_5,param_6,&local_28);
      FUN_00080bb0(param_5,param_6,&local_28);
      return 7;
    }
    FUN_00080570(&local_28,param_2,bVar1 && bVar2,param_5,param_6);
    if (local_10 == 6) {
      FUN_00080af0(param_5,param_6,&local_28);
      FUN_00080ba0(param_5);
      return 7;
    }
  }
  else {
    FUN_00080570(&local_28,param_2,bVar1 && bVar2,param_5,param_6);
    if (local_10 == 6) {
      if (!bVar1 || !bVar2) {
        return 6;
      }
      *(int *)(param_5 + -0x14) = local_28;
      *(undefined4 *)(param_5 + -0x10) = local_20;
      *(undefined4 *)(param_5 + -0xc) = local_1c;
      *(undefined4 *)(param_5 + -8) = local_18;
      *(undefined4 *)(param_5 + -4) = local_14;
      FUN_00080b80(param_5,param_6,&local_28);
      return 6;
    }
  }
  uVar3 = FUN_00080b70(param_5,param_6);
  return uVar3;
}

