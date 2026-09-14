/* 00075710 | FUN_00075710 */

void * FUN_00075710(void *param_1,uint param_2,size_t *param_3)

{
  void *__dest;
  size_t __size;
  uint __n;
  
  __size = *param_3;
  if ((param_2 < 0x81) || (__size < 0x81)) {
    __dest = param_1;
    if ((param_2 + 7 & 0xfffffff8) != (__size + 7 & 0xfffffff8)) {
      __dest = (void *)FUN_00075624(param_3);
      __n = *param_3;
      if (param_2 < *param_3) {
        __n = param_2;
      }
      memcpy(__dest,param_1,__n);
      FUN_00075660(param_1,param_2);
    }
  }
  else {
    __dest = realloc(param_1,__size);
  }
  return __dest;
}

