/* 00066490 | STG::USerialize::Save */

/* STG::USerialize::Save(STG::FFileBase*, STG::GETextureModifier const&) */

void STG::USerialize::Save(FFileBase *param_1,GETextureModifier *param_2)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uchar *puVar6;
  uchar local_21;
  int local_20 [3];
  undefined4 uStack_14;
  
  uStack_14 = 0x66499;
  FUN_0002e044();
  iVar2 = *(int *)(param_2 + 0x20);
  if (iVar2 == 0) {
    local_20[0] = 8;
    FFileBase::Write(param_1,(uchar *)local_20,4);
    local_20[0] = 0;
    FFileBase::Write(param_1,(uchar *)local_20,4);
    Save(param_1,(GETextureSwapContainer *)param_2);
    Save(param_1,(GETextureFontContainer *)(param_2 + 0xc));
  }
  else {
    iVar4 = 0;
    iVar5 = 0;
    iVar3 = 0;
    do {
      pcVar1 = (char *)(*(int *)(param_2 + 0x1c) + iVar4);
      if (((*pcVar1 != '\0') || (pcVar1[1] != '\0')) || (pcVar1[2] != '\0')) {
        iVar5 = iVar5 + 1;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x68;
    } while (iVar3 != iVar2);
    local_20[0] = 8;
    FFileBase::Write(param_1,(uchar *)local_20,4);
    iVar3 = 0;
    local_20[0] = iVar5;
    FFileBase::Write(param_1,(uchar *)local_20,4);
    Save(param_1,(GETextureSwapContainer *)param_2);
    Save(param_1,(GETextureFontContainer *)(param_2 + 0xc));
    do {
      puVar6 = (uchar *)(iVar3 * 0x68 + *(int *)(param_2 + 0x1c));
      local_21 = *puVar6;
      if (((local_21 != '\0') || (puVar6[1] != '\0')) || (puVar6[2] != '\0')) {
        FFileBase::Write(param_1,&local_21,1);
        local_21 = puVar6[1];
        FFileBase::Write(param_1,&local_21,1);
        local_21 = puVar6[2];
        FFileBase::Write(param_1,&local_21,1);
        local_20[0] = *(int *)(puVar6 + 4);
        FFileBase::Write(param_1,(uchar *)local_20,4);
        local_20[0] = *(int *)(puVar6 + 8);
        FFileBase::Write(param_1,(uchar *)local_20,4);
        local_20[0] = *(int *)(puVar6 + 0xc);
        FFileBase::Write(param_1,(uchar *)local_20,4);
        local_20[0] = *(int *)(puVar6 + 0x10);
        FFileBase::Write(param_1,(uchar *)local_20,4);
        Save(param_1,(GETimeOfDay *)(puVar6 + 0x14));
        local_21 = puVar6[0x1c];
        FFileBase::Write(param_1,&local_21,1);
        Save(param_1,(FFileHash *)(puVar6 + 0x28));
        Save(param_1,(FFileHash *)(puVar6 + 0x48));
        local_20[0] = *(int *)(puVar6 + 0x20);
        FFileBase::Write(param_1,(uchar *)local_20,4);
        local_21 = puVar6[0x24];
        FFileBase::Write(param_1,&local_21,1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 != iVar2);
  }
  return;
}

