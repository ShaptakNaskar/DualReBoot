/* 000745b8 | FUN_000745b8 */

undefined4 FUN_000745b8(int param_1,int param_2,undefined4 param_3,int param_4,undefined1 *param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if ((param_4 << 0x1f < 0) &&
     (iVar1 = FUN_000747cc(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(DAT_00074604 + 0x745d0)),
     iVar1 != 0)) {
    if ((*(int *)(param_2 + 0xc) == 0) ||
       (iVar1 = FUN_00073c1c(*(int *)(param_2 + 0xc),*(undefined4 *)(DAT_00074608 + 0x745e6),
                             *(undefined4 *)(DAT_0007460c + 0x745e8),0), iVar1 == 0)) {
      *param_5 = 1;
      uVar2 = 1;
    }
    else {
      *param_5 = 0;
      uVar2 = 1;
    }
  }
  return uVar2;
}

