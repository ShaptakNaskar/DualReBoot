/* 000642e4 | STG::UPreference<bool,true>::SetSelectedValue */

/* STG::UPreference<bool, true>::SetSelectedValue(bool const&) */

undefined4 __thiscall
STG::UPreference<bool,true>::SetSelectedValue(UPreference<bool,true> *this,bool *param_1)

{
  int iVar1;
  char *pcVar2;
  
  if (*(int *)(this + 0x80) == 0) {
    return 0;
  }
  pcVar2 = *(char **)(this + 0x7c);
  if ((bool)*pcVar2 == *param_1) {
    iVar1 = 0;
  }
  else {
    iVar1 = 0;
    do {
      iVar1 = iVar1 + 1;
      if (iVar1 == *(int *)(this + 0x80)) {
        return 0;
      }
      pcVar2 = pcVar2 + 1;
    } while ((bool)*pcVar2 != *param_1);
  }
  (**(code **)(*(int *)this + 0x24))(this,iVar1);
  return 1;
}

