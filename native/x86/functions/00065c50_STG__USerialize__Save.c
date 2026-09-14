/* 00065c50 | STG::USerialize::Save */

/* STG::USerialize::Save(STG::FFileBase*, STG::GEFont const&) */

void STG::USerialize::Save(FFileBase *param_1,GEFont *param_2)

{
  ushort uVar1;
  undefined4 *puVar2;
  GEFont local_27;
  undefined2 local_26;
  undefined4 local_24;
  int local_20 [3];
  undefined4 uStack_14;
  
  uStack_14 = 0x65c59;
  FUN_0002e044();
  local_20[0] = 5;
  FFileBase::Write(param_1,(uchar *)local_20,4);
  Save(param_1,(FFileHash *)(param_2 + 0x30));
  local_24 = *(undefined4 *)(param_2 + 0x50);
  FFileBase::Write(param_1,(uchar *)&local_24,4);
  local_26 = *(undefined2 *)(param_2 + 0x5c);
  FFileBase::Write(param_1,(uchar *)&local_26,2);
  local_27 = param_2[0x54];
  FFileBase::Write(param_1,(uchar *)&local_27,1);
  if ((*(int *)(param_2 + 0x360) == 0) ||
     (local_20[0] = *(int *)(param_2 + 0x364), local_20[0] == 0)) {
    local_20[0] = 0;
    FFileBase::Write(param_1,(uchar *)local_20,4);
  }
  else {
    FFileBase::Write(param_1,(uchar *)local_20,4);
    FFileBase::Write(param_1,*(uchar **)(param_2 + 0x360),*(ulong *)(param_2 + 0x364));
  }
  if (*(short *)(param_2 + 0x5c) != 0) {
    uVar1 = 0;
    do {
      puVar2 = (undefined4 *)((uint)uVar1 * 0x24 + *(int *)(param_2 + 0x58));
      local_26 = *(undefined2 *)(puVar2 + 8);
      FFileBase::Write(param_1,(uchar *)&local_26,2);
      local_24 = *puVar2;
      FFileBase::Write(param_1,(uchar *)&local_24,4);
      local_24 = puVar2[1];
      FFileBase::Write(param_1,(uchar *)&local_24,4);
      local_24 = puVar2[2];
      FFileBase::Write(param_1,(uchar *)&local_24,4);
      local_24 = puVar2[3];
      FFileBase::Write(param_1,(uchar *)&local_24,4);
      local_26 = *(undefined2 *)(puVar2 + 4);
      FFileBase::Write(param_1,(uchar *)&local_26,2);
      local_26 = *(undefined2 *)((int)puVar2 + 0x12);
      FFileBase::Write(param_1,(uchar *)&local_26,2);
      local_26 = *(undefined2 *)(puVar2 + 5);
      FFileBase::Write(param_1,(uchar *)&local_26,2);
      local_26 = *(undefined2 *)((int)puVar2 + 0x16);
      FFileBase::Write(param_1,(uchar *)&local_26,2);
      local_26 = *(undefined2 *)(puVar2 + 6);
      FFileBase::Write(param_1,(uchar *)&local_26,2);
      local_20[0] = puVar2[7];
      FFileBase::Write(param_1,(uchar *)local_20,4);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(ushort *)(param_2 + 0x5c));
  }
  return;
}

