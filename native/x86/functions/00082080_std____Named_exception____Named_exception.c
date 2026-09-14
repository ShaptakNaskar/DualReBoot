/* 00082080 | std::__Named_exception::__Named_exception */

/* std::__Named_exception::__Named_exception(std::__Named_exception const&) */

void __thiscall
std::__Named_exception::__Named_exception(__Named_exception *this,__Named_exception *param_1)

{
  uint __size;
  size_t __n;
  __Named_exception *__dest;
  int unaff_EBX;
  
  FUN_0002e044();
  FUN_00083a20(this);
  *(int *)this = *(int *)(
                         "_ZTSN3STG13UResourceListINS_9GETextureENS_13GETextureListENS_26GETextureList_CreateParamsEEE"
                         + unaff_EBX + 10) + 8;
  __n = strlen(*(char **)(param_1 + 0x104));
  __size = __n + 1;
  if (__size < 0x101) {
    __dest = this + 4;
    *(__Named_exception **)(this + 0x104) = __dest;
  }
  else {
    __dest = malloc(__size);
    *(__Named_exception **)(this + 0x104) = __dest;
    if (__dest == (__Named_exception *)0x0) {
      __dest = this + 4;
      __n = 0xff;
      *(__Named_exception **)(this + 0x104) = __dest;
    }
    else {
      *(uint *)(this + 4) = __size;
    }
  }
  strncpy((char *)__dest,*(char **)(param_1 + 0x104),__n);
  *(undefined1 *)(*(int *)(this + 0x104) + __n) = 0;
  return;
}

