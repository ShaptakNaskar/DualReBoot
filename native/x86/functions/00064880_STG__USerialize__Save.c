/* 00064880 | STG::USerialize::Save */

/* STG::USerialize::Save(STG::FFileBase*, STG::UPreference_FileChooser_Texture const&) */

void STG::USerialize::Save(FFileBase *param_1,UPreference_FileChooser_Texture *param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  int unaff_EBX;
  uint uVar4;
  uint local_28;
  uchar local_24 [16];
  undefined4 uStack_14;
  
  uStack_14 = 0x64889;
  FUN_0002e044();
  builtin_memcpy(local_24,"PREFFCTX",8);
  FFileBase::Write(param_1,local_24,8);
  local_28 = 1;
  FFileBase::Write(param_1,(uchar *)&local_28,4);
  uVar2 = *(int *)(param_2 + 0x18) - *(int *)(param_2 + 0x1c);
  local_28 = uVar2;
  FFileBase::Write(param_1,(uchar *)&local_28,4);
  if (uVar2 != 0) {
    iVar3 = *(int *)(param_2 + 0x1c);
    if (*(int *)(param_2 + 0x18) != iVar3) {
      uVar4 = 0;
      do {
        puVar1 = (undefined1 *)(iVar3 + uVar4);
        uVar4 = uVar4 + 1;
        local_24[0] = *puVar1;
        FFileBase::Write(param_1,local_24,1);
        if (uVar2 == uVar4) goto LAB_00064977;
        iVar3 = *(int *)(param_2 + 0x1c);
      } while (uVar4 < (uint)(*(int *)(param_2 + 0x18) - iVar3));
    }
                    /* WARNING: Subroutine does not return */
    std::__stl_throw_out_of_range
              ("_ZN3STG11UPreferenceINS_11GETimeOfDay6EPhaseELb1EED1Ev" + unaff_EBX + 0x12);
  }
LAB_00064977:
  Save<char,int>(param_1,(UStringBase *)(param_2 + 0x20));
  Save<char,int>(param_1,(UStringBase *)(param_2 + 0x3c));
  local_28 = *(uint *)(param_2 + 0x8c);
  FFileBase::Write(param_1,(uchar *)&local_28,4);
  local_28 = *(uint *)(param_2 + 0x90);
  FFileBase::Write(param_1,(uchar *)&local_28,4);
  return;
}

