/* 00066200 | STG::USerialize::Save */

/* STG::USerialize::Save(STG::FFileBase*, STG::GETextureSwap const&) */

void STG::USerialize::Save(FFileBase *param_1,GETextureSwap *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int unaff_EBX;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint local_34;
  int local_30;
  GETextureSwap local_21;
  uint local_20 [3];
  undefined4 uStack_14;
  
  uStack_14 = 0x66209;
  FUN_0002e044();
  local_20[0] = 4;
  FFileBase::Write(param_1,(uchar *)local_20,4);
  Save<char,int>(param_1,(UStringBase *)param_2);
  local_20[0] = *(uint *)(param_2 + 0x1c);
  FFileBase::Write(param_1,(uchar *)local_20,4);
  local_21 = param_2[0x20];
  FFileBase::Write(param_1,(uchar *)&local_21,1);
  local_21 = param_2[0x21];
  FFileBase::Write(param_1,(uchar *)&local_21,1);
  if (*(int *)(param_2 + 0x1c) != 0) {
    local_30 = 0;
    local_34 = 0;
    do {
      iVar5 = local_30 + *(int *)(param_2 + 0x24);
      uVar3 = *(int *)(iVar5 + 0x14) - *(int *)(iVar5 + 0x18);
      local_20[0] = uVar3;
      FFileBase::Write(param_1,(uchar *)local_20,4);
      if (uVar3 != 0) {
        iVar2 = *(int *)(iVar5 + 0x18);
        if (iVar2 == *(int *)(iVar5 + 0x14)) {
LAB_000663e9:
                    /* WARNING: Subroutine does not return */
          std::__stl_throw_out_of_range
                    ("_ZN3STG10USerialize4LoadEPKNS_9FFileBaseERNS_13GEIndexBufferE" +
                     unaff_EBX + 0xe);
        }
        uVar4 = 0;
        while( true ) {
          puVar1 = (undefined1 *)(iVar2 + uVar4);
          uVar4 = uVar4 + 1;
          local_20[0] = CONCAT31(local_20[0]._1_3_,*puVar1);
          FFileBase::Write(param_1,(uchar *)local_20,1);
          if (uVar3 == uVar4) break;
          iVar2 = *(int *)(iVar5 + 0x18);
          if ((uint)(*(int *)(iVar5 + 0x14) - iVar2) <= uVar4) goto LAB_000663e9;
        }
      }
      Save(param_1,(FFileHash *)(local_34 * 0x20 + *(int *)(param_2 + 0x28)));
      Save(param_1,(GETimeOfDay *)(local_34 * 8 + *(int *)(param_2 + 0x2c)));
      local_20[0] = *(uint *)(*(int *)(param_2 + 0x30) + local_34 * 4);
      FFileBase::Write(param_1,(uchar *)local_20,4);
      local_34 = local_34 + 1;
      local_30 = local_30 + 0x1c;
    } while (local_34 < *(uint *)(param_2 + 0x1c));
  }
  return;
}

