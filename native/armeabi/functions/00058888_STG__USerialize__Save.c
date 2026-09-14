/* 00058888 | STG::USerialize::Save */

/* STG::USerialize::Save(STG::FFileBase*, STG::GEFont const&) */

void STG::USerialize::Save(FFileBase *param_1,GEFont *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  GEFont local_33;
  undefined2 local_32;
  undefined4 local_30;
  int local_2c [2];
  
  FFileBase::Write(param_1,(uchar *)local_2c,4);
  Save(param_1,(FFileHash *)(param_2 + 0x30));
  local_30 = *(undefined4 *)(param_2 + 0x50);
  FFileBase::Write(param_1,(uchar *)&local_30,4);
  local_32 = *(undefined2 *)(param_2 + 0x5c);
  FFileBase::Write(param_1,(uchar *)&local_32,2);
  local_33 = param_2[0x54];
  FFileBase::Write(param_1,(uchar *)&local_33,1);
  if ((*(int *)(param_2 + 0x360) == 0) ||
     (local_2c[0] = *(int *)(param_2 + 0x364), local_2c[0] == 0)) {
    local_2c[0] = 0;
    FFileBase::Write(param_1,(uchar *)local_2c,4);
  }
  else {
    FFileBase::Write(param_1,(uchar *)local_2c,4);
    FFileBase::Write(param_1,*(uchar **)(param_2 + 0x360),*(ulong *)(param_2 + 0x364));
  }
  if (*(short *)(param_2 + 0x5c) != 0) {
    uVar2 = 0;
    do {
      iVar3 = *(int *)(param_2 + 0x58);
      iVar1 = iVar3 + uVar2 * 0x24;
      local_32 = *(undefined2 *)(iVar1 + 0x20);
      FFileBase::Write(param_1,(uchar *)&local_32,2);
      local_30 = *(undefined4 *)(iVar3 + uVar2 * 0x24);
      FFileBase::Write(param_1,(uchar *)&local_30,4);
      local_30 = *(undefined4 *)(iVar1 + 4);
      FFileBase::Write(param_1,(uchar *)&local_30,4);
      local_30 = *(undefined4 *)(iVar1 + 8);
      FFileBase::Write(param_1,(uchar *)&local_30,4);
      local_30 = *(undefined4 *)(iVar1 + 0xc);
      FFileBase::Write(param_1,(uchar *)&local_30,4);
      local_32 = *(undefined2 *)(iVar1 + 0x10);
      FFileBase::Write(param_1,(uchar *)&local_32,2);
      local_32 = *(undefined2 *)(iVar1 + 0x12);
      FFileBase::Write(param_1,(uchar *)&local_32,2);
      local_32 = *(undefined2 *)(iVar1 + 0x14);
      FFileBase::Write(param_1,(uchar *)&local_32,2);
      local_32 = *(undefined2 *)(iVar1 + 0x16);
      FFileBase::Write(param_1,(uchar *)&local_32,2);
      local_32 = *(undefined2 *)(iVar1 + 0x18);
      FFileBase::Write(param_1,(uchar *)&local_32,2);
      local_2c[0] = *(int *)(iVar1 + 0x1c);
      FFileBase::Write(param_1,(uchar *)local_2c,4);
      uVar2 = uVar2 + 1 & 0xffff;
    } while (uVar2 < *(ushort *)(param_2 + 0x5c));
  }
  return;
}

