/* 0006f360 | STG::UPreference_String::PrintValue */

/* STG::UPreference_String::PrintValue(unsigned long, STG::UStringBase<char, int>&) const */

void __thiscall
STG::UPreference_String::PrintValue(UPreference_String *this,ulong param_1,UStringBase *param_2)

{
  char *pcVar1;
  void *__src;
  int iVar2;
  undefined1 *puVar3;
  uint __n;
  void *__dest;
  uint __n_00;
  undefined1 *puVar4;
  
  iVar2 = FUN_0002e044();
  if ((string *)(param_2 + 4) != (string *)(iVar2 + 4)) {
    pcVar1 = *(char **)(iVar2 + 0x14);
    __src = *(void **)(iVar2 + 0x18);
    puVar3 = *(undefined1 **)(param_2 + 0x14);
    __dest = *(void **)(param_2 + 0x18);
    __n_00 = (int)pcVar1 - (int)__src;
    __n = (int)puVar3 - (int)__dest;
    if (__n < __n_00) {
      iVar2 = 0;
      if (__n != 0) {
        memmove(__dest,__src,__n);
        iVar2 = *(int *)(param_2 + 0x14) - *(int *)(param_2 + 0x18);
      }
      std::string::_M_append((string *)(param_2 + 4),(char *)((int)__src + iVar2),pcVar1);
    }
    else {
      if (__n_00 != 0) {
        memmove(__dest,__src,__n_00);
        puVar3 = *(undefined1 **)(param_2 + 0x14);
        __dest = *(void **)(param_2 + 0x18);
      }
      puVar4 = (undefined1 *)(__n_00 + (int)__dest);
      if (puVar4 != puVar3) {
        *puVar4 = *puVar3;
        *(undefined1 **)(param_2 + 0x14) = puVar4 + (*(int *)(param_2 + 0x14) - (int)puVar3);
      }
    }
  }
  return;
}

