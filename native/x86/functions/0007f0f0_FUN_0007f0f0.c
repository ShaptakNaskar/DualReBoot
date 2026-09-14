/* 0007f0f0 | FUN_0007f0f0 */

int FUN_0007f0f0(void)

{
  int __fd;
  ssize_t sVar1;
  int *piVar2;
  int unaff_EBX;
  int iVar3;
  undefined1 local_120 [256];
  int local_20;
  undefined4 uStack_14;
  
  uStack_14 = 0x7f0f9;
  FUN_0002e044();
  local_20 = **(int **)("_ZN3STG18LLogicSceneWrapperD1Ev" + unaff_EBX + 0x16);
  __fd = open((char *)(unaff_EBX + 0x843d),0);
  if (__fd < 0) {
    iVar3 = -1;
  }
  else {
    iVar3 = 0;
    do {
      while( true ) {
        sVar1 = read(__fd,local_120,0x100);
        if (sVar1 < 0) break;
        if (sVar1 == 0) goto LAB_0007f169;
        iVar3 = iVar3 + sVar1;
      }
      piVar2 = (int *)__errno();
    } while (*piVar2 == 4);
LAB_0007f169:
    close(__fd);
  }
  if (local_20 == **(int **)("_ZN3STG18LLogicSceneWrapperD1Ev" + unaff_EBX + 0x16)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002e000();
}

