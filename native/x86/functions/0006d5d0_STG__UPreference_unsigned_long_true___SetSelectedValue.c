/* 0006d5d0 | STG::UPreference<unsigned_long,true>::SetSelectedValue */

/* STG::UPreference<unsigned long, true>::SetSelectedValue(unsigned long const&) */

undefined4 __thiscall
STG::UPreference<unsigned_long,true>::SetSelectedValue
          (UPreference<unsigned_long,true> *this,ulong *param_1)

{
  ulong uVar1;
  int iVar2;
  
  if (*(int *)(this + 0x80) != 0) {
    iVar2 = 0;
    uVar1 = **(ulong **)(this + 0x7c);
    while( true ) {
      if (*param_1 == uVar1) {
        (**(code **)(*(int *)this + 0x24))(this,iVar2);
        return 1;
      }
      iVar2 = iVar2 + 1;
      if (iVar2 == *(int *)(this + 0x80)) break;
      uVar1 = (*(ulong **)(this + 0x7c))[iVar2];
    }
  }
  return 0;
}

