/* 00058e90 | STG::USerialize::Save */

/* STG::USerialize::Save(STG::FFileBase*, STG::GETextureModifier const&) */

void STG::USerialize::Save(FFileBase *param_1,GETextureModifier *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uchar local_25;
  int local_24;
  
  iVar4 = *(int *)(param_2 + 0x20);
  if (iVar4 == 0) {
    local_24 = 8;
    FFileBase::Write(param_1,(uchar *)&local_24,4);
    local_24 = iVar4;
    FFileBase::Write(param_1,(uchar *)&local_24,4);
    Save(param_1,(GETextureSwapContainer *)param_2);
    Save(param_1,(GETextureFontContainer *)(param_2 + 0xc));
  }
  else {
    iVar2 = 0;
    iVar1 = 0;
    iVar3 = 0;
    do {
      iVar1 = iVar1 + 1;
      iVar5 = *(int *)(param_2 + 0x1c) + iVar2;
      if (((*(char *)(*(int *)(param_2 + 0x1c) + iVar2) != '\0') || (*(char *)(iVar5 + 1) != '\0'))
         || (*(char *)(iVar5 + 2) != '\0')) {
        iVar3 = iVar3 + 1;
      }
      iVar2 = iVar2 + 0x68;
    } while (iVar1 != iVar4);
    local_24 = 8;
    FFileBase::Write(param_1,(uchar *)&local_24,4);
    local_24 = iVar3;
    FFileBase::Write(param_1,(uchar *)&local_24,4);
    Save(param_1,(GETextureSwapContainer *)param_2);
    Save(param_1,(GETextureFontContainer *)(param_2 + 0xc));
    iVar1 = 0;
    iVar2 = 0;
    do {
      local_25 = *(uchar *)(*(int *)(param_2 + 0x1c) + iVar1);
      iVar3 = *(int *)(param_2 + 0x1c) + iVar1;
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x68;
      if (((local_25 != '\0') || (*(char *)(iVar3 + 1) != '\0')) || (*(char *)(iVar3 + 2) != '\0'))
      {
        FFileBase::Write(param_1,&local_25,1);
        local_25 = *(uchar *)(iVar3 + 1);
        FFileBase::Write(param_1,&local_25,1);
        local_25 = *(uchar *)(iVar3 + 2);
        FFileBase::Write(param_1,&local_25,1);
        local_24 = *(int *)(iVar3 + 4);
        FFileBase::Write(param_1,(uchar *)&local_24,4);
        local_24 = *(int *)(iVar3 + 8);
        FFileBase::Write(param_1,(uchar *)&local_24,4);
        local_24 = *(int *)(iVar3 + 0xc);
        FFileBase::Write(param_1,(uchar *)&local_24,4);
        local_24 = *(int *)(iVar3 + 0x10);
        FFileBase::Write(param_1,(uchar *)&local_24,4);
        Save(param_1,(GETimeOfDay *)(iVar3 + 0x14));
        local_25 = *(uchar *)(iVar3 + 0x1c);
        FFileBase::Write(param_1,&local_25,1);
        Save(param_1,(FFileHash *)(iVar3 + 0x28));
        Save(param_1,(FFileHash *)(iVar3 + 0x48));
        local_24 = *(int *)(iVar3 + 0x20);
        FFileBase::Write(param_1,(uchar *)&local_24,4);
        local_25 = *(uchar *)(iVar3 + 0x24);
        FFileBase::Write(param_1,&local_25,1);
      }
    } while (iVar2 != iVar4);
  }
  return;
}

