/* 00065b94 | STG::UPreference_String::PrintValue */

/* STG::UPreference_String::PrintValue(unsigned long, STG::UStringBase<char, int>&) const */

void __thiscall
STG::UPreference_String::PrintValue(UPreference_String *this,ulong param_1,UStringBase *param_2)

{
  void *__dest;
  size_t __n;
  int iVar1;
  undefined1 *puVar2;
  uint __n_00;
  void *__src;
  char *pcVar3;
  
  iVar1 = param_1 * 0x1c + *(int *)(this + 0x7c);
  if ((string *)(param_2 + 4) != (string *)(iVar1 + 4)) {
    __src = *(void **)(iVar1 + 0x18);
    pcVar3 = *(char **)(iVar1 + 0x14);
    __dest = *(void **)(param_2 + 0x18);
    puVar2 = *(undefined1 **)(param_2 + 0x14);
    __n_00 = (int)pcVar3 - (int)__src;
    __n = (int)puVar2 - (int)__dest;
    if (__n < __n_00) {
      iVar1 = 0;
      if (__n != 0) {
        memmove(__dest,__src,__n);
        iVar1 = *(int *)(param_2 + 0x14) - *(int *)(param_2 + 0x18);
      }
      std::string::_M_append((string *)(param_2 + 4),(char *)((int)__src + iVar1),pcVar3);
      return;
    }
    if (__n_00 != 0) {
      memmove(__dest,__src,__n_00);
      __dest = *(void **)(param_2 + 0x18);
      puVar2 = *(undefined1 **)(param_2 + 0x14);
    }
    if ((undefined1 *)((int)__dest + __n_00) != puVar2) {
      *(undefined1 *)((int)__dest + __n_00) = *puVar2;
      *(undefined1 **)(param_2 + 0x14) =
           (undefined1 *)((int)__dest + __n_00) + (*(int *)(param_2 + 0x14) - (int)puVar2);
      return;
    }
  }
  return;
}

