/* 00070a18 | std::__Named_exception::operator= */

/* std::__Named_exception::TEMPNAMEPLACEHOLDERVALUE(std::__Named_exception const&) */

__Named_exception * __thiscall
std::__Named_exception::operator=(__Named_exception *this,__Named_exception *param_1)

{
  size_t __n;
  __Named_exception *__dest;
  uint uVar1;
  char *__s;
  uint __size;
  __Named_exception *p_Var2;
  
  __s = *(char **)(param_1 + 0x104);
  p_Var2 = this + 4;
  __n = strlen(__s);
  __dest = *(__Named_exception **)(this + 0x104);
  __size = __n + 1;
  if (__dest == p_Var2) {
    uVar1 = 0x100;
  }
  else {
    uVar1 = *(uint *)(this + 4);
  }
  if (uVar1 < __size) {
    if (__dest != p_Var2) {
      free(__dest);
    }
    __dest = malloc(__size);
    *(__Named_exception **)(this + 0x104) = __dest;
    if (__dest == (__Named_exception *)0x0) {
      __n = 0xff;
      *(__Named_exception **)(this + 0x104) = p_Var2;
      __s = *(char **)(param_1 + 0x104);
      __dest = p_Var2;
    }
    else {
      __s = *(char **)(param_1 + 0x104);
      *(uint *)(this + 4) = __size;
    }
  }
  strncpy((char *)__dest,__s,__n);
  *(undefined1 *)(*(int *)(this + 0x104) + __n) = 0;
  return this;
}

