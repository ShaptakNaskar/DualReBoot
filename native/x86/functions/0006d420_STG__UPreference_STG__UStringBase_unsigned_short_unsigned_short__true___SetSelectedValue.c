/* 0006d420 | STG::UPreference<STG::UStringBase<unsigned_short,unsigned_short>,true>::SetSelectedValue */

/* STG::UPreference<STG::UStringBase<unsigned short, unsigned short>,
   true>::SetSelectedValue(STG::UStringBase<unsigned short, unsigned short> const&) */

undefined4 __thiscall
STG::UPreference<STG::UStringBase<unsigned_short,unsigned_short>,true>::SetSelectedValue
          (UPreference<STG::UStringBase<unsigned_short,unsigned_short>,true> *this,
          UStringBase *param_1)

{
  short *psVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int local_18;
  
  if (*(int *)(this + 0x80) == 0) {
    return 0;
  }
  psVar1 = *(short **)(param_1 + 0x28);
  local_18 = 0;
  iVar5 = *(int *)(param_1 + 0x24) - (int)psVar1 >> 1;
  piVar6 = (int *)(*(int *)(this + 0x7c) + 0x24);
  do {
    psVar2 = (short *)piVar6[1];
    iVar7 = *piVar6 - (int)psVar2 >> 1;
    iVar4 = iVar5;
    if (iVar7 <= iVar5) {
      iVar4 = iVar7;
    }
    if (iVar4 == 0) {
LAB_0006d4ad:
      if ((iVar7 <= iVar5) && (iVar5 <= iVar7)) {
        (**(code **)(*(int *)this + 0x24))(this,local_18);
        return 1;
      }
    }
    else if (*psVar1 == *psVar2) {
      iVar3 = 0;
      do {
        iVar3 = iVar3 + 1;
        if (iVar4 == iVar3) goto LAB_0006d4ad;
      } while (psVar1[iVar3] == psVar2[iVar3]);
    }
    local_18 = local_18 + 1;
    piVar6 = piVar6 + 0xb;
    if (local_18 == *(int *)(this + 0x80)) {
      return 0;
    }
  } while( true );
}

