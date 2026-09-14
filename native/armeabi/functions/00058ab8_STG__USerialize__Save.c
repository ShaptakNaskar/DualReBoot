/* 00058ab8 | STG::USerialize::Save */

/* STG::USerialize::Save(STG::FFileBase*, STG::GETextureFont const&) */

void STG::USerialize::Save(FFileBase *param_1,GETextureFont *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  GETextureFont local_2f;
  undefined2 local_2e;
  uint local_2c [2];
  
  local_2c[0] = 3;
  FFileBase::Write(param_1,(uchar *)local_2c,4);
  Save(param_1,(FFileHash *)param_2);
  local_2c[0] = *(uint *)(param_2 + 0x20);
  FFileBase::Write(param_1,(uchar *)local_2c,4);
  local_2f = param_2[0x28];
  FFileBase::Write(param_1,(uchar *)&local_2f,1);
  local_2c[0] = *(uint *)(param_2 + 0x2c);
  FFileBase::Write(param_1,(uchar *)local_2c,4);
  if (*(int *)(param_2 + 0x20) != 0) {
    iVar5 = 0;
    uVar6 = 0;
    do {
      iVar4 = *(int *)(param_2 + 0x24) + iVar5;
      uVar1 = *(int *)(iVar4 + 0x24) - *(int *)(iVar4 + 0x28) >> 1;
      local_2c[0] = uVar1;
      FFileBase::Write(param_1,(uchar *)local_2c,4);
      if (uVar1 != 0) {
        iVar2 = *(int *)(iVar4 + 0x28);
        if ((uint)(*(int *)(iVar4 + 0x24) - iVar2) >> 1 == 0) {
LAB_00058c3c:
                    /* WARNING: Subroutine does not return */
          std::__stl_throw_out_of_range((char *)((int)&DAT_00058c48 + DAT_00058c48));
        }
        uVar3 = 0;
        while( true ) {
          local_2e = *(undefined2 *)(iVar2 + uVar3 * 2);
          uVar3 = uVar3 + 1;
          FFileBase::Write(param_1,(uchar *)&local_2e,2);
          if (uVar1 == uVar3) break;
          iVar2 = *(int *)(iVar4 + 0x28);
          if ((uint)(*(int *)(iVar4 + 0x24) - iVar2 >> 1) <= uVar3) goto LAB_00058c3c;
        }
      }
      uVar6 = uVar6 + 1;
      iVar5 = iVar5 + 0x2c;
    } while (uVar6 < *(uint *)(param_2 + 0x20));
  }
  local_2f = param_2[0x29];
  FFileBase::Write(param_1,(uchar *)&local_2f,1);
  local_2c[0]._0_1_ = param_2[0x2a];
  FFileBase::Write(param_1,(uchar *)local_2c,1);
  local_2c[0] = CONCAT31(local_2c[0]._1_3_,param_2[0x2b]);
  FFileBase::Write(param_1,(uchar *)local_2c,1);
  return;
}

