/* 00074de4 | FUN_00074de4 */

int FUN_00074de4(int param_1,char *param_2)

{
  size_t sVar1;
  undefined1 *__dest;
  void *pvVar2;
  size_t __n;
  
  *(int *)(param_1 + 0x10) = param_1;
  *(int *)(param_1 + 0x14) = param_1;
  sVar1 = strlen(param_2);
  __n = (int)(param_2 + sVar1) - (int)param_2;
  FUN_00074da8(param_1,__n + 1);
  __dest = *(undefined1 **)(param_1 + 0x14);
  if (param_2 != param_2 + sVar1) {
    pvVar2 = memcpy(__dest,param_2,__n);
    __dest = (undefined1 *)((int)pvVar2 + __n);
  }
  *(undefined1 **)(param_1 + 0x10) = __dest;
  *__dest = 0;
  return param_1;
}

