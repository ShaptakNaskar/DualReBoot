/* 00082330 | FUN_00082330 */

void __regparm3 FUN_00082330(int param_1,void *param_2)

{
  size_t sVar1;
  void *pvVar2;
  undefined1 *__dest;
  size_t __n;
  undefined8 uVar3;
  
  uVar3 = FUN_0002e044();
  *(int *)(param_1 + 0x10) = (int)uVar3;
  *(int *)(param_1 + 0x14) = (int)uVar3;
  sVar1 = strlen((char *)((ulonglong)uVar3 >> 0x20));
  __n = (int)(sVar1 + (int)param_2) - (int)param_2;
  FUN_000822b0(param_1,__n + 1);
  __dest = *(undefined1 **)(param_1 + 0x14);
  if (param_2 != (void *)(sVar1 + (int)param_2)) {
    pvVar2 = memcpy(__dest,param_2,__n);
    __dest = (undefined1 *)((int)pvVar2 + __n);
  }
  *(undefined1 **)(param_1 + 0x10) = __dest;
  *__dest = 0;
  return;
}

