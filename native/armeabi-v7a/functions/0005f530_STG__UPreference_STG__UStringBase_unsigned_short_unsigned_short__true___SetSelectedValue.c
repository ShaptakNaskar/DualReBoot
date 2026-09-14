/* 0005f530 | STG::UPreference<STG::UStringBase<unsigned_short,unsigned_short>,true>::SetSelectedValue */

/* STG::UPreference<STG::UStringBase<unsigned short, unsigned short>,
   true>::SetSelectedValue(STG::UStringBase<unsigned short, unsigned short> const&) */

undefined4 __thiscall
STG::UPreference<STG::UStringBase<unsigned_short,unsigned_short>,true>::SetSelectedValue
          (UPreference<STG::UStringBase<unsigned_short,unsigned_short>,true> *this,
          UStringBase *param_1)

{
  int iVar1;
  short *psVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  short *psVar9;
  int iVar10;
  
  if (*(int *)(this + 0x80) != 0) {
    psVar9 = *(short **)(param_1 + 0x28);
    iVar3 = 0;
    iVar10 = *(int *)(this + 0x7c) + 4;
    iVar1 = *(int *)(param_1 + 0x24) - (int)psVar9 >> 1;
    iVar8 = iVar10;
    do {
      iVar5 = (iVar8 - *(int *)(this + 0x7c)) + iVar10;
      psVar4 = *(short **)(iVar5 + 0x20);
      iVar5 = *(int *)(iVar5 + 0x1c) - (int)psVar4 >> 1;
      iVar7 = iVar5;
      if (iVar1 <= iVar5) {
        iVar7 = iVar1;
      }
      if (iVar7 == 0) {
LAB_0005f5d8:
        if ((iVar5 <= iVar1) && (iVar1 <= iVar5)) {
          (**(code **)(*(int *)this + 0x24))(this);
          return 1;
        }
      }
      else if (*psVar9 == *psVar4) {
        iVar6 = 0;
        psVar2 = psVar9;
        do {
          iVar6 = iVar6 + 1;
          if (iVar7 == iVar6) goto LAB_0005f5d8;
          psVar2 = psVar2 + 1;
          psVar4 = psVar4 + 1;
        } while (*psVar2 == *psVar4);
      }
      iVar3 = iVar3 + 1;
      iVar8 = iVar8 + 0x2c;
    } while (iVar3 != *(int *)(this + 0x80));
  }
  return 0;
}

