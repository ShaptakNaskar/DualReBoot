/* 00064cc0 | STG::USerialize::Save */

/* STG::USerialize::Save(STG::FFileBase*, STG::UPreference_ModelSwap const&) */

void STG::USerialize::Save(FFileBase *param_1,UPreference_ModelSwap *param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  int iVar5;
  int unaff_EBX;
  uint uVar6;
  int iVar7;
  ulong local_48;
  int local_44;
  ulong *local_30;
  uint local_2c;
  ulong local_28;
  uchar local_24 [16];
  undefined4 uStack_14;
  
  uStack_14 = 0x64cc9;
  FUN_0002e044();
  builtin_memcpy(local_24,"PREFMSWP",8);
  FFileBase::Write(param_1,local_24,8);
  local_28 = 1;
  FFileBase::Write(param_1,(uchar *)&local_28,4);
  Save<char,int>(param_1,(UStringBase *)(param_2 + 4));
  Save<char,int>(param_1,(UStringBase *)(param_2 + 0x20));
  Save<char,int>(param_1,(UStringBase *)(param_2 + 0x3c));
  uVar2 = *(ulong *)(param_2 + 0x8c);
  uVar3 = (**(code **)(*(int *)param_2 + 0x18))(param_2);
  local_28 = uVar2;
  FFileBase::Write(param_1,(uchar *)&local_28,4);
  local_28 = uVar3;
  FFileBase::Write(param_1,(uchar *)&local_28,4);
  if (uVar3 != 0) {
    local_44 = 0;
    local_48 = 0;
    do {
      iVar7 = local_44 + *(int *)(param_2 + 0x7c);
      uVar4 = *(int *)(iVar7 + 0x14) - *(int *)(iVar7 + 0x18);
      local_28 = uVar4;
      FFileBase::Write(param_1,(uchar *)&local_28,4);
      if (uVar4 != 0) {
        iVar5 = *(int *)(iVar7 + 0x18);
        if (*(int *)(iVar7 + 0x14) == iVar5) {
LAB_00064ef5:
                    /* WARNING: Subroutine does not return */
          std::__stl_throw_out_of_range
                    ("_ZN3STG10USerialize4SaveEPNS_9FFileBaseERKNS_9FFileHashE" + unaff_EBX + 0x18);
        }
        uVar6 = 0;
        while( true ) {
          puVar1 = (undefined1 *)(iVar5 + uVar6);
          uVar6 = uVar6 + 1;
          local_24[0] = *puVar1;
          FFileBase::Write(param_1,local_24,1);
          if (uVar4 == uVar6) break;
          iVar5 = *(int *)(iVar7 + 0x18);
          if ((uint)(*(int *)(iVar7 + 0x14) - iVar5) <= uVar6) goto LAB_00064ef5;
        }
      }
      UPreference_ModelSwap::GetModelIndices(param_2,local_48,&local_30,&local_2c);
      local_28 = local_2c;
      FFileBase::Write(param_1,(uchar *)&local_28,4);
      if (local_2c != 0) {
        uVar4 = 0;
        do {
          local_28 = local_30[uVar4];
          uVar4 = uVar4 + 1;
          FFileBase::Write(param_1,(uchar *)&local_28,4);
        } while (uVar4 < local_2c);
      }
      local_48 = local_48 + 1;
      local_44 = local_44 + 0x1c;
    } while (local_48 != uVar3);
  }
  return;
}

