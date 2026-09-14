/* 0008603b | FUN_0008603b */

char __regparm3 FUN_0008603b(int param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  char *extraout_ECX;
  char *pcVar4;
  char *pcVar5;
  undefined1 local_10 [4];
  
  uVar2 = 0xffffffff;
  pcVar5 = (char *)(param_1 + 9);
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar5 = (char *)(param_1 + uVar2 + 9);
  if (3 < *(byte *)(param_1 + 8)) {
    if (*(char *)(param_1 + 9 + uVar2) != '\x04') {
      return -1;
    }
    if (*(char *)(param_1 + 10 + uVar2) != '\0') {
      return -1;
    }
    pcVar5 = (char *)(param_1 + uVar2 + 0xb);
  }
  cVar1 = '\0';
  if (*(char *)(param_1 + 9) == 'z') {
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 < '\0');
    do {
      pcVar3 = pcVar5;
      pcVar5 = pcVar3 + 1;
    } while (*pcVar3 < '\0');
    pcVar3 = pcVar3 + 2;
    if (*(byte *)(param_1 + 8) != 1) {
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar3 = pcVar5;
      } while (cVar1 < '\0');
    }
    pcVar5 = (char *)(param_1 + 10);
    do {
      pcVar4 = pcVar3;
      pcVar3 = pcVar4 + 1;
    } while (*pcVar4 < '\0');
    for (; cVar1 = *pcVar5, cVar1 != 'R'; pcVar5 = pcVar5 + 1) {
      if (cVar1 == 'P') {
        pcVar3 = (char *)FUN_00085f3a(pcVar3 + 1,local_10,pcVar4,pcVar4);
        pcVar4 = extraout_ECX;
      }
      else {
        if (cVar1 != 'L') {
          return '\0';
        }
        pcVar3 = pcVar3 + 1;
      }
    }
    cVar1 = *pcVar3;
  }
  return cVar1;
}

