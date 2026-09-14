/* 00082160 | std::__Named_exception::operator= */

/* std::__Named_exception::TEMPNAMEPLACEHOLDERVALUE(std::__Named_exception const&) */

__Named_exception * __thiscall
std::__Named_exception::operator=(__Named_exception *this,__Named_exception *param_1)

{
  __Named_exception *p_Var1;
  uint __size;
  __Named_exception *__dest;
  uint uVar2;
  int extraout_EDX;
  char *__s;
  size_t local_20;
  
  FUN_0002e044();
  __s = *(char **)(extraout_EDX + 0x104);
  local_20 = strlen(__s);
  p_Var1 = this + 4;
  __size = local_20 + 1;
  __dest = *(__Named_exception **)(this + 0x104);
  uVar2 = 0x100;
  if (__dest != p_Var1) {
    uVar2 = *(uint *)(this + 4);
  }
  if (uVar2 < __size) {
    if (__dest != p_Var1) {
      free(__dest);
    }
    __dest = malloc(__size);
    *(__Named_exception **)(this + 0x104) = __dest;
    if (__dest == (__Named_exception *)0x0) {
      *(__Named_exception **)(this + 0x104) = p_Var1;
      local_20 = 0xff;
      __s = *(char **)(param_1 + 0x104);
      __dest = p_Var1;
    }
    else {
      *(uint *)(this + 4) = __size;
      __s = *(char **)(param_1 + 0x104);
    }
  }
  strncpy((char *)__dest,__s,local_20);
  *(undefined1 *)(*(int *)(this + 0x104) + local_20) = 0;
  return this;
}

