/* 000800c0 | FUN_000800c0 */

void FUN_000800c0(int *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int unaff_EBX;
  uint uVar5;
  undefined8 uVar6;
  
  uVar6 = FUN_0002e044();
  piVar4 = (int *)((ulonglong)uVar6 >> 0x20);
  iVar1 = param_1[4];
  cVar2 = FUN_00081700(piVar4,param_1[2]);
  if (cVar2 != '\0') {
    param_1[4] = (int)uVar6;
  }
  if ((((int)uVar6 == *param_1) && (param_1[4] != 0)) &&
     (cVar2 = FUN_00081700(piVar4,param_1[1]), cVar2 != '\0')) {
    if (param_1[5] == 0) {
      param_1[5] = param_1[4];
    }
    else if (param_1[5] != param_1[4]) {
      param_1[5] = -1;
    }
    param_1[4] = iVar1;
  }
  else {
    iVar3 = (**(code **)(*piVar4 + 0xc))(piVar4);
    if (iVar3 == 1) {
      FUN_000800c0(param_1);
    }
    else if (iVar3 == 2) {
      if (piVar4[3] != 0) {
        uVar5 = 0;
        do {
          if (((piVar4[uVar5 * 2 + 5] & 2U) != 0) && (FUN_000800c0(param_1), param_1[5] == -1))
          break;
          uVar5 = uVar5 + 1;
        } while (uVar5 < (uint)piVar4[3]);
      }
    }
    else if (iVar3 != 0) {
      __assert2(unaff_EBX + 0x7b9f,0x105,unaff_EBX + 0x8b2f,unaff_EBX + 0x7491);
    }
    param_1[4] = iVar1;
  }
  return;
}

