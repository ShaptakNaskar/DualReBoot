/* 00054640 | STG::USerialize::Save */

/* STG::USerialize::Save(STG::FFileBase*, STG::GETextureModifier const&) */

void STG::USerialize::Save(FFileBase *param_1,GETextureModifier *param_2)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uchar local_25;
  int local_24;
  
  iVar5 = *(int *)(param_2 + 0x20);
  if (iVar5 == 0) {
    local_24 = 8;
    FFileBase::Write(param_1,(uchar *)&local_24,4);
    local_24 = iVar5;
    FFileBase::Write(param_1,(uchar *)&local_24,4);
    Save(param_1,(GETextureSwapContainer *)param_2);
    Save(param_1,(GETextureFontContainer *)(param_2 + 0xc));
  }
  else {
    iVar3 = 0;
    iVar2 = 0;
    iVar4 = 0;
    do {
      pcVar1 = (char *)(*(int *)(param_2 + 0x1c) + iVar3);
      iVar6 = *(int *)(param_2 + 0x1c) + iVar3;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x68;
      if (((*pcVar1 != '\0') || (*(char *)(iVar6 + 1) != '\0')) || (*(char *)(iVar6 + 2) != '\0')) {
        iVar4 = iVar4 + 1;
      }
    } while (iVar2 != iVar5);
    local_24 = 8;
    FFileBase::Write(param_1,(uchar *)&local_24,4);
    local_24 = iVar4;
    FFileBase::Write(param_1,(uchar *)&local_24,4);
    Save(param_1,(GETextureSwapContainer *)param_2);
    iVar2 = 0;
    Save(param_1,(GETextureFontContainer *)(param_2 + 0xc));
    iVar3 = 0;
    do {
      iVar4 = *(int *)(param_2 + 0x1c) + iVar2;
      iVar3 = iVar3 + 1;
      local_25 = *(uchar *)(*(int *)(param_2 + 0x1c) + iVar2);
      iVar2 = iVar2 + 0x68;
      if (((local_25 != '\0') || (*(char *)(iVar4 + 1) != '\0')) || (*(char *)(iVar4 + 2) != '\0'))
      {
        FFileBase::Write(param_1,&local_25,1);
        local_25 = *(uchar *)(iVar4 + 1);
        FFileBase::Write(param_1,&local_25,1);
        local_25 = *(uchar *)(iVar4 + 2);
        FFileBase::Write(param_1,&local_25,1);
        local_24 = *(int *)(iVar4 + 4);
        FFileBase::Write(param_1,(uchar *)&local_24,4);
        local_24 = *(int *)(iVar4 + 8);
        FFileBase::Write(param_1,(uchar *)&local_24,4);
        local_24 = *(int *)(iVar4 + 0xc);
        FFileBase::Write(param_1,(uchar *)&local_24,4);
        local_24 = *(int *)(iVar4 + 0x10);
        FFileBase::Write(param_1,(uchar *)&local_24,4);
        Save(param_1,(GETimeOfDay *)(iVar4 + 0x14));
        local_25 = *(uchar *)(iVar4 + 0x1c);
        FFileBase::Write(param_1,&local_25,1);
        Save(param_1,(FFileHash *)(iVar4 + 0x28));
        Save(param_1,(FFileHash *)(iVar4 + 0x48));
        local_24 = *(int *)(iVar4 + 0x20);
        FFileBase::Write(param_1,(uchar *)&local_24,4);
        local_25 = *(uchar *)(iVar4 + 0x24);
        FFileBase::Write(param_1,&local_25,1);
      }
    } while (iVar3 != iVar5);
  }
  return;
}

