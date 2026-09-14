/* 00068aec | FUN_00068aec */

int * FUN_00068aec(int *param_1,char *param_2)

{
  size_t sVar1;
  uint uVar2;
  int *__dest;
  void *pvVar3;
  size_t __n;
  uint local_1c;
  
  __dest = param_1 + 1;
  *param_1 = *(int *)(DAT_00068bb0 + 0x68afc) + 8;
  param_1[5] = (int)__dest;
  param_1[6] = (int)__dest;
  sVar1 = strlen(param_2);
  __n = (int)(param_2 + sVar1) - (int)param_2;
  uVar2 = __n + 1;
  if (uVar2 != 0) {
    if (0x10 < uVar2) {
      local_1c = uVar2;
      if (uVar2 < 0x81) {
        __dest = (int *)std::__node_alloc::_M_allocate(&local_1c);
      }
      else {
        __dest = operator_new(uVar2);
      }
      param_1[6] = (int)__dest;
      param_1[5] = (int)__dest;
      param_1[1] = (int)((int)__dest + local_1c);
    }
    if (param_2 != param_2 + sVar1) {
      pvVar3 = memcpy(__dest,param_2,__n);
      __dest = (int *)((int)pvVar3 + __n);
    }
    param_1[5] = (int)__dest;
    *(undefined1 *)__dest = 0;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  std::__stl_throw_length_error((char *)(DAT_00068bb4 + 0x68ba4));
}

