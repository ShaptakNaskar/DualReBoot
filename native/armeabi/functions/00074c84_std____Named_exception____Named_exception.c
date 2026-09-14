/* 00074c84 | std::__Named_exception::__Named_exception */

/* std::__Named_exception::__Named_exception(std::__Named_exception const&) */

__Named_exception * __thiscall
std::__Named_exception::__Named_exception(__Named_exception *this,__Named_exception *param_1)

{
  size_t __n;
  __Named_exception *__dest;
  uint __size;
  
  FUN_00075b70();
  *(int *)this = *(int *)(DAT_00074cf8 + 0x74c9a) + 8;
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
      *(__Named_exception **)(this + 0x104) = __dest;
      __n = 0xff;
    }
    else {
      *(uint *)(this + 4) = __size;
    }
  }
  strncpy((char *)__dest,*(char **)(param_1 + 0x104),__n);
  *(undefined1 *)(*(int *)(this + 0x104) + __n) = 0;
  return this;
}

