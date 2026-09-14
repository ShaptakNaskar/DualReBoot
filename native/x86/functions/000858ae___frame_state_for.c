/* 000858ae | __frame_state_for */

int __frame_state_for(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_14c [19];
  int local_100;
  undefined4 local_ec;
  undefined4 local_e4;
  undefined4 local_cc [37];
  undefined4 local_38;
  undefined2 local_34;
  int local_2c;
  undefined2 local_18;
  undefined4 local_10;
  
  puVar3 = local_14c;
  for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_100 = param_1 + 1;
  local_ec = 0x40000000;
  iVar2 = FUN_000853d5();
  if ((iVar2 == 0) && (iVar2 = 0, local_2c != 2)) {
    do {
      cVar1 = (char)local_cc[iVar2 * 2 + 1];
      *(char *)(param_2 + 0x5c + iVar2) = cVar1;
      if ((cVar1 == '\x01') || (cVar1 == '\x02')) {
        *(undefined4 *)(param_2 + 0x10 + iVar2 * 4) = local_cc[iVar2 * 2];
      }
      else {
        *(undefined4 *)(param_2 + 0x10 + iVar2 * 4) = 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != 0x12);
    *(undefined4 *)(param_2 + 8) = local_38;
    *(undefined2 *)(param_2 + 0x58) = local_34;
    *(undefined2 *)(param_2 + 0x5a) = local_18;
    *(undefined4 *)(param_2 + 0xc) = local_e4;
    *(undefined4 *)(param_2 + 4) = local_10;
  }
  else {
    param_2 = 0;
  }
  return param_2;
}

