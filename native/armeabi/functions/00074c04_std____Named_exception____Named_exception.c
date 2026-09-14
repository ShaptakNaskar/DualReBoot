/* 00074c04 | std::__Named_exception::__Named_exception */

/* std::__Named_exception::__Named_exception(std::string const&) */

__Named_exception * __thiscall
std::__Named_exception::__Named_exception(__Named_exception *this,string *param_1)

{
  size_t __n;
  __Named_exception *__dest;
  uint __size;
  char *__s;
  
  FUN_00075b70();
  __s = *(char **)(param_1 + 0x14);
  *(int *)this = *(int *)(DAT_00074c80 + 0x74c1a) + 8;
  __n = strlen(__s);
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
      __s = *(char **)(param_1 + 0x14);
    }
    else {
      *(uint *)(this + 4) = __size;
      __s = *(char **)(param_1 + 0x14);
    }
  }
  strncpy((char *)__dest,__s,__n);
  *(undefined1 *)(*(int *)(this + 0x104) + __n) = 0;
  return this;
}

