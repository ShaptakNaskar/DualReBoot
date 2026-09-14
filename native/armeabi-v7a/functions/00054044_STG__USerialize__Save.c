/* 00054044 | STG::USerialize::Save */

/* STG::USerialize::Save(STG::FFileBase*, STG::GEFont const&) */

void STG::USerialize::Save(FFileBase *param_1,GEFont *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  GEFont local_2b;
  undefined2 local_2a;
  undefined4 local_28;
  int local_24;
  
  local_24 = 5;
  FFileBase::Write(param_1,(uchar *)&local_24,4);
  Save(param_1,(FFileHash *)(param_2 + 0x30));
  local_28 = *(undefined4 *)(param_2 + 0x50);
  FFileBase::Write(param_1,(uchar *)&local_28,4);
  local_2a = *(undefined2 *)(param_2 + 0x5c);
  FFileBase::Write(param_1,(uchar *)&local_2a,2);
  local_2b = param_2[0x54];
  FFileBase::Write(param_1,(uchar *)&local_2b,1);
  if ((*(int *)(param_2 + 0x360) == 0) || (local_24 = *(int *)(param_2 + 0x364), local_24 == 0)) {
    local_24 = 0;
    FFileBase::Write(param_1,(uchar *)&local_24,4);
  }
  else {
    FFileBase::Write(param_1,(uchar *)&local_24,4);
    FFileBase::Write(param_1,*(uchar **)(param_2 + 0x360),*(ulong *)(param_2 + 0x364));
  }
  if (*(short *)(param_2 + 0x5c) != 0) {
    uVar2 = 0;
    do {
      puVar1 = (undefined4 *)(*(int *)(param_2 + 0x58) + uVar2 * 0x24);
      local_2a = *(undefined2 *)(puVar1 + 8);
      uVar2 = uVar2 + 1 & 0xffff;
      FFileBase::Write(param_1,(uchar *)&local_2a,2);
      local_28 = *puVar1;
      FFileBase::Write(param_1,(uchar *)&local_28,4);
      local_28 = puVar1[1];
      FFileBase::Write(param_1,(uchar *)&local_28,4);
      local_28 = puVar1[2];
      FFileBase::Write(param_1,(uchar *)&local_28,4);
      local_28 = puVar1[3];
      FFileBase::Write(param_1,(uchar *)&local_28,4);
      local_2a = *(undefined2 *)(puVar1 + 4);
      FFileBase::Write(param_1,(uchar *)&local_2a,2);
      local_2a = *(undefined2 *)((int)puVar1 + 0x12);
      FFileBase::Write(param_1,(uchar *)&local_2a,2);
      local_2a = *(undefined2 *)(puVar1 + 5);
      FFileBase::Write(param_1,(uchar *)&local_2a,2);
      local_2a = *(undefined2 *)((int)puVar1 + 0x16);
      FFileBase::Write(param_1,(uchar *)&local_2a,2);
      local_2a = *(undefined2 *)(puVar1 + 6);
      FFileBase::Write(param_1,(uchar *)&local_2a,2);
      local_24 = puVar1[7];
      FFileBase::Write(param_1,(uchar *)&local_24,4);
    } while (uVar2 < *(ushort *)(param_2 + 0x5c));
  }
  return;
}

