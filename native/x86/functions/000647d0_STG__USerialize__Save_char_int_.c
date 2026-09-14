/* 000647d0 | STG::USerialize::Save<char,int> */

/* void STG::USerialize::Save<char, int>(STG::FFileBase*, STG::UStringBase<char, int> const&) */

void STG::USerialize::Save<char,int>(FFileBase *param_1,UStringBase *param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  int unaff_EBX;
  uint uVar4;
  uint local_20 [3];
  undefined4 uStack_14;
  
  uStack_14 = 0x647d9;
  FUN_0002e044();
  uVar2 = *(int *)(param_2 + 0x14) - *(int *)(param_2 + 0x18);
  local_20[0] = uVar2;
  FFileBase::Write(param_1,(uchar *)local_20,4);
  if (uVar2 == 0) {
    return;
  }
  iVar3 = *(int *)(param_2 + 0x18);
  if (*(int *)(param_2 + 0x14) != iVar3) {
    uVar4 = 0;
    do {
      puVar1 = (undefined1 *)(iVar3 + uVar4);
      uVar4 = uVar4 + 1;
      local_20[0] = CONCAT31(local_20[0]._1_3_,*puVar1);
      FFileBase::Write(param_1,(uchar *)local_20,1);
      if (uVar4 == uVar2) {
        return;
      }
      iVar3 = *(int *)(param_2 + 0x18);
    } while (uVar4 < (uint)(*(int *)(param_2 + 0x14) - iVar3));
  }
                    /* WARNING: Subroutine does not return */
  std::__stl_throw_out_of_range
            ("_ZTIN3STG11UPreferenceINS_23UPreference_Theme_EntryELb1EEE" + unaff_EBX + 0x24);
}

