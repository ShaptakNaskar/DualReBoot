/* 0007eee0 | FUN_0007eee0 */

int FUN_0007eee0(int param_1)

{
  int __fd;
  ssize_t sVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_0002e044();
  __fd = open((char *)uVar4,0);
  if (__fd < 0) {
    iVar3 = -1;
  }
  else {
    iVar3 = 0;
    do {
      while( true ) {
        if (param_1 <= iVar3) goto LAB_0007ef57;
        sVar1 = read(__fd,(void *)((int)((ulonglong)uVar4 >> 0x20) + iVar3),param_1 - iVar3);
        if (sVar1 < 0) break;
        if (sVar1 == 0) goto LAB_0007ef57;
        iVar3 = iVar3 + sVar1;
      }
      piVar2 = (int *)__errno();
    } while (*piVar2 == 4);
    if (iVar3 == 0) {
      iVar3 = -1;
    }
LAB_0007ef57:
    close(__fd);
  }
  return iVar3;
}

