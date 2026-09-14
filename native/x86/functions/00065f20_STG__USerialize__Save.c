/* 00065f20 | STG::USerialize::Save */

/* STG::USerialize::Save(STG::FFileBase*, STG::GETextureFont const&) */

void STG::USerialize::Save(FFileBase *param_1,GETextureFont *param_2)

{
  int iVar1;
  int unaff_EBX;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint local_30;
  GETextureFont local_23;
  undefined2 local_22;
  uint local_20 [3];
  undefined4 uStack_14;
  
  uStack_14 = 0x65f29;
  FUN_0002e044();
  local_20[0] = 3;
  FFileBase::Write(param_1,(uchar *)local_20,4);
  Save(param_1,(FFileHash *)param_2);
  local_20[0] = *(uint *)(param_2 + 0x20);
  FFileBase::Write(param_1,(uchar *)local_20,4);
  local_23 = param_2[0x28];
  FFileBase::Write(param_1,(uchar *)&local_23,1);
  local_20[0] = *(uint *)(param_2 + 0x2c);
  FFileBase::Write(param_1,(uchar *)local_20,4);
  if (*(int *)(param_2 + 0x20) != 0) {
    local_30 = 0;
    do {
      iVar4 = local_30 * 0x2c + *(int *)(param_2 + 0x24);
      uVar2 = *(int *)(iVar4 + 0x24) - *(int *)(iVar4 + 0x28) >> 1;
      local_20[0] = uVar2;
      FFileBase::Write(param_1,(uchar *)local_20,4);
      if (uVar2 != 0) {
        iVar1 = *(int *)(iVar4 + 0x28);
        if ((uint)(*(int *)(iVar4 + 0x24) - iVar1) >> 1 == 0) {
LAB_0006611f:
                    /* WARNING: Subroutine does not return */
          std::__stl_throw_out_of_range
                    ("_ZN3STG10USerialize4SaveEPNS_9FFileBaseERKNS_10GESkeleton8BoneAnimE" +
                     unaff_EBX + 0x15);
        }
        uVar3 = 0;
        while( true ) {
          local_22 = *(undefined2 *)(iVar1 + uVar3 * 2);
          uVar3 = uVar3 + 1;
          FFileBase::Write(param_1,(uchar *)&local_22,2);
          if (uVar2 == uVar3) break;
          iVar1 = *(int *)(iVar4 + 0x28);
          if ((uint)(*(int *)(iVar4 + 0x24) - iVar1 >> 1) <= uVar3) goto LAB_0006611f;
        }
      }
      local_30 = local_30 + 1;
    } while (local_30 < *(uint *)(param_2 + 0x20));
  }
  local_23 = param_2[0x29];
  FFileBase::Write(param_1,(uchar *)&local_23,1);
  local_20[0]._0_1_ = param_2[0x2a];
  FFileBase::Write(param_1,(uchar *)local_20,1);
  local_20[0] = CONCAT31(local_20[0]._1_3_,param_2[0x2b]);
  FFileBase::Write(param_1,(uchar *)local_20,1);
  return;
}

