/* 00083310 | FUN_00083310 */

void * FUN_00083310(void *param_1,uint param_2,uint *param_3)

{
  void *__dest;
  uint uVar1;
  
  FUN_0002e044();
  uVar1 = *param_3;
  if ((param_2 < 0x81) || (uVar1 < 0x81)) {
    __dest = param_1;
    if ((param_2 + 7 & 0xfffffff8) != (uVar1 + 7 & 0xfffffff8)) {
      __dest = (void *)FUN_000830d0(param_3);
      uVar1 = param_2;
      if (*param_3 <= param_2) {
        uVar1 = *param_3;
      }
      memcpy(__dest,param_1,uVar1);
      FUN_00083150(param_1,param_2);
    }
  }
  else {
    __dest = realloc(param_1,uVar1);
  }
  return __dest;
}

