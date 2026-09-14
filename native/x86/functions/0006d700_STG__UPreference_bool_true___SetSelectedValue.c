/* 0006d700 | STG::UPreference<bool,true>::SetSelectedValue */

/* STG::UPreference<bool, true>::SetSelectedValue(bool const&) */

undefined4 __thiscall
STG::UPreference<bool,true>::SetSelectedValue(UPreference<bool,true> *this,bool *param_1)

{
  char cVar1;
  int iVar2;
  
  if (*(int *)(this + 0x80) != 0) {
    iVar2 = 0;
    cVar1 = **(char **)(this + 0x7c);
    while( true ) {
      if (*param_1 == (bool)cVar1) {
        (**(code **)(*(int *)this + 0x24))(this,iVar2);
        return 1;
      }
      iVar2 = iVar2 + 1;
      if (iVar2 == *(int *)(this + 0x80)) break;
      cVar1 = (*(char **)(this + 0x7c))[iVar2];
    }
  }
  return 0;
}

