/* 00064a00 | STG::USerialize::Save */

/* STG::USerialize::Save(STG::FFileBase*, STG::UPreference_Environment const&) */

void STG::USerialize::Save(FFileBase *param_1,UPreference_Environment *param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  int unaff_EBX;
  uint uVar4;
  int iVar5;
  uint local_34;
  int local_30;
  uint local_28;
  uchar local_24 [16];
  undefined4 uStack_14;
  
  uStack_14 = 0x64a09;
  FUN_0002e044();
  builtin_memcpy(local_24,"PREFENVI",8);
  FFileBase::Write(param_1,local_24,8);
  local_28 = 2;
  FFileBase::Write(param_1,(uchar *)&local_28,4);
  Save<char,int>(param_1,(UStringBase *)(param_2 + 4));
  Save<char,int>(param_1,(UStringBase *)(param_2 + 0x20));
  Save<char,int>(param_1,(UStringBase *)(param_2 + 0x3c));
  local_28 = (**(code **)(*(int *)param_2 + 0x18))(param_2);
  FFileBase::Write(param_1,(uchar *)&local_28,4);
  local_30 = 0;
  local_34 = 0;
  do {
    uVar2 = (**(code **)(*(int *)param_2 + 0x18))(param_2);
    if (uVar2 <= local_34) {
      return;
    }
    iVar5 = local_30 + *(int *)(param_2 + 0x7c);
    uVar2 = *(int *)(iVar5 + 0x14) - *(int *)(iVar5 + 0x18);
    local_28 = uVar2;
    FFileBase::Write(param_1,(uchar *)&local_28,4);
    if (uVar2 != 0) {
      iVar3 = *(int *)(iVar5 + 0x18);
      if (iVar3 == *(int *)(iVar5 + 0x14)) {
LAB_00064b7f:
                    /* WARNING: Subroutine does not return */
        std::__stl_throw_out_of_range
                  ("_ZN3STG10USerialize4LoadEPKNS_9FFileBaseERNS_13GETextureFontE" +
                   unaff_EBX + 0x21);
      }
      uVar4 = 0;
      while( true ) {
        puVar1 = (undefined1 *)(iVar3 + uVar4);
        uVar4 = uVar4 + 1;
        local_24[0] = *puVar1;
        FFileBase::Write(param_1,local_24,1);
        if (uVar2 == uVar4) break;
        iVar3 = *(int *)(iVar5 + 0x18);
        if ((uint)(*(int *)(iVar5 + 0x14) - iVar3) <= uVar4) goto LAB_00064b7f;
      }
    }
    local_34 = local_34 + 1;
    local_30 = local_30 + 0x1c;
  } while( true );
}

