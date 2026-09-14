/* 0005f9a0 | STG::UPreference<STG::UStringBase<char,int>,true>::SetSelectedValueByName */

/* STG::UPreference<STG::UStringBase<char, int>,
   true>::SetSelectedValueByName(STG::UStringBase<char, int> const&) */

undefined4 __thiscall
STG::UPreference<STG::UStringBase<char,int>,true>::SetSelectedValueByName
          (UPreference<STG::UStringBase<char,int>,true> *this,UStringBase *param_1)

{
  size_t __n;
  int iVar1;
  uint uVar2;
  int unaff_EBX;
  undefined4 uVar3;
  size_t sVar4;
  size_t sVar5;
  UStringBase<char,int> local_3c [20];
  int local_28;
  void *local_24;
  int local_20;
  undefined4 uStack_14;
  
  uStack_14 = 0x5f9a9;
  FUN_0002e044();
  local_20 = **(int **)(unaff_EBX + 0x3c48f);
  UStringBase<char,int>::UStringBase(local_3c);
  uVar3 = 0;
  if (*(int *)(this + 0x80) != 0) {
    uVar2 = 0;
    do {
      (**(code **)(*(int *)this + 0x28))(this,uVar2,local_3c);
      sVar5 = local_28 - (int)local_24;
      sVar4 = *(int *)(param_1 + 0x14) - (int)*(void **)(param_1 + 0x18);
      __n = sVar5;
      if ((int)sVar4 <= (int)sVar5) {
        __n = sVar4;
      }
      iVar1 = memcmp(local_24,*(void **)(param_1 + 0x18),__n);
      if (((iVar1 == 0) && ((int)sVar4 <= (int)sVar5)) && ((int)sVar5 <= (int)sVar4)) {
        uVar3 = 1;
        (**(code **)(*(int *)this + 0x24))(this,uVar2);
        goto LAB_0005fa65;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(this + 0x80));
    uVar3 = 0;
  }
LAB_0005fa65:
  UStringBase<char,int>::~UStringBase(local_3c);
  if (local_20 == **(int **)(unaff_EBX + 0x3c48f)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002e000();
}

