/* 0005e260 | STG::USerialize::Save */

/* STG::USerialize::Save(STG::FFileBase*, STG::GEVertexBuffer const&) */

void STG::USerialize::Save(FFileBase *param_1,GEVertexBuffer *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_2c;
  int local_28;
  undefined1 local_24 [4];
  int local_20 [3];
  undefined4 uStack_14;
  
  uStack_14 = 0x5e269;
  FUN_0002e044();
  local_20[0] = 2;
  FFileBase::Write(param_1,(uchar *)local_20,4);
  iVar1 = *(int *)(param_2 + 0xa4);
  local_20[0] = iVar1;
  FFileBase::Write(param_1,(uchar *)local_20,4);
  if (iVar1 != 0) {
    iVar3 = 0;
    do {
      iVar2 = *(int *)(param_2 + iVar3 * 4 + 0x88);
      iVar3 = iVar3 + 1;
      GEVertexBuffer::HasComponent(param_2,iVar2,&local_2c,&local_28,local_24);
      local_20[0] = iVar2;
      FFileBase::Write(param_1,(uchar *)local_20,4);
      local_20[0] = local_2c;
      FFileBase::Write(param_1,(uchar *)local_20,4);
      local_20[0] = local_28;
      FFileBase::Write(param_1,(uchar *)local_20,4);
    } while (iVar3 != iVar1);
  }
  local_20[0] = *(int *)(param_2 + 8);
  FFileBase::Write(param_1,(uchar *)local_20,4);
  local_20[0] = *(int *)(param_2 + 0x10);
  FFileBase::Write(param_1,(uchar *)local_20,4);
  local_20[0] = *(int *)(param_2 + 0xc);
  FFileBase::Write(param_1,(uchar *)local_20,4);
  FFileBase::Write(param_1,*(uchar **)(param_2 + 0x14),
                   *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0xc));
  return;
}

