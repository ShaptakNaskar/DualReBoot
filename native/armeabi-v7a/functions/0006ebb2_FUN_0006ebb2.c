/* 0006ebb2 | FUN_0006ebb2 */

void * FUN_0006ebb2(void *param_1,int param_2,char *param_3)

{
  size_t sVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  
  sVar1 = strlen(param_3);
  pvVar4 = (void *)((int)param_1 + param_2);
  pvVar3 = param_1;
  do {
    pvVar2 = memmem(pvVar3,(int)pvVar4 - (int)pvVar3,param_3,sVar1);
    if (pvVar2 == (void *)0x0) {
      return (void *)0x0;
    }
    pvVar3 = (void *)((int)pvVar2 + sVar1);
  } while ((pvVar2 != param_1) && (*(char *)((int)pvVar2 + -1) != '\n'));
  pvVar3 = memchr(pvVar3,0x3a,(int)pvVar4 - (int)pvVar3);
  if (pvVar3 == (void *)0x0) {
    pvVar4 = (void *)0x0;
  }
  else if (*(char *)((int)pvVar3 + 1) == ' ') {
    pvVar3 = (void *)((int)pvVar3 + 2);
    pvVar2 = memchr(pvVar3,10,(int)pvVar4 - (int)pvVar3);
    if (pvVar2 == (void *)0x0) {
      pvVar2 = pvVar4;
    }
    sVar1 = (int)pvVar2 - (int)pvVar3;
    pvVar4 = malloc(sVar1 + 1);
    if (pvVar4 != (void *)0x0) {
      memcpy(pvVar4,pvVar3,sVar1);
      *(undefined1 *)((int)pvVar4 + sVar1) = 0;
    }
  }
  else {
    pvVar4 = (void *)0x0;
  }
  return pvVar4;
}

