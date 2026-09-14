/* 0005f6a0 | STG::UPreference<unsigned_long,true>::SetSelectedValue */

/* STG::UPreference<unsigned long, true>::SetSelectedValue(unsigned long const&) */

undefined4 __thiscall
STG::UPreference<unsigned_long,true>::SetSelectedValue
          (UPreference<unsigned_long,true> *this,ulong *param_1)

{
  int iVar1;
  ulong *puVar2;
  
  if (*(int *)(this + 0x80) == 0) {
    return 0;
  }
  puVar2 = *(ulong **)(this + 0x7c);
  if (*param_1 == *puVar2) {
    iVar1 = 0;
  }
  else {
    iVar1 = 0;
    do {
      iVar1 = iVar1 + 1;
      if (iVar1 == *(int *)(this + 0x80)) {
        return 0;
      }
      puVar2 = puVar2 + 1;
    } while (*puVar2 != *param_1);
  }
  (**(code **)(*(int *)this + 0x24))(this,iVar1);
  return 1;
}

