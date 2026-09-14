/* 0005f8a0 | STG::UPreference<STG::UStringBase<char,int>,true>::IsValueValid */

/* STG::UPreference<STG::UStringBase<char, int>, true>::IsValueValid(STG::UStringBase<char, int>
   const&) const */

undefined4 __thiscall
STG::UPreference<STG::UStringBase<char,int>,true>::IsValueValid
          (UPreference<STG::UStringBase<char,int>,true> *this,UStringBase *param_1)

{
  size_t __n;
  int iVar1;
  int unaff_EBX;
  undefined4 uVar2;
  size_t sVar3;
  size_t sVar4;
  uint local_44;
  UStringBase<char,int> local_3c [20];
  int local_28;
  void *local_24;
  int local_20;
  undefined4 uStack_14;
  
  uStack_14 = 0x5f8a9;
  FUN_0002e044();
  local_20 = **(int **)(&DAT_0003c58f + unaff_EBX);
  UStringBase<char,int>::UStringBase(local_3c);
  uVar2 = 0;
  if (*(int *)(this + 0x80) != 0) {
    local_44 = 0;
    do {
      (**(code **)(*(int *)this + 0x28))(this,local_44,local_3c);
      sVar4 = local_28 - (int)local_24;
      sVar3 = *(int *)(param_1 + 0x14) - (int)*(void **)(param_1 + 0x18);
      __n = sVar4;
      if ((int)sVar3 <= (int)sVar4) {
        __n = sVar3;
      }
      iVar1 = memcmp(local_24,*(void **)(param_1 + 0x18),__n);
      if (((iVar1 == 0) && ((int)sVar3 <= (int)sVar4)) && ((int)sVar4 <= (int)sVar3)) {
        uVar2 = 1;
        goto LAB_0005f94f;
      }
      local_44 = local_44 + 1;
    } while (local_44 < *(uint *)(this + 0x80));
    uVar2 = 0;
  }
LAB_0005f94f:
  UStringBase<char,int>::~UStringBase(local_3c);
  if (local_20 == **(int **)(&DAT_0003c58f + unaff_EBX)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002e000();
}

