/* 000682c0 | STG::USerialize::Load */

/* STG::USerialize::Load(STG::FFileBase const*, STG::GETextureModifier&) */

void STG::USerialize::Load(FFileBase *param_1,GETextureModifier *param_2)

{
  FFileHash *pFVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  int unaff_EBX;
  uchar *puVar5;
  uint local_90;
  uchar local_71;
  uchar local_70 [4];
  ulong local_6c;
  uchar local_68 [4];
  ulong local_64;
  uint local_60 [2];
  GETimeOfDay local_58 [8];
  UStringBase<char,int> local_50 [28];
  UStringBase<char,int> local_34 [20];
  int local_20;
  uchar *local_1c;
  undefined4 local_18;
  int local_14;
  
  local_14 = 0x682cb;
  FUN_0002e044();
  local_14 = **(int **)(unaff_EBX + 0x33b6d);
  FFileBase::Read(param_1,(uchar *)local_60,4);
  uVar2 = local_60[0];
  if (local_60[0] < 7) {
    FFileBase::Read(param_1,(uchar *)&local_6c,4);
    FFileBase::Read(param_1,local_68,4);
    if ((2 < uVar2) && (Load(param_1,(GETextureSwapContainer *)param_2), 4 < uVar2)) {
      Load(param_1,(GETextureFontContainer *)(param_2 + 0xc));
    }
    GETextureModifier::Initialize(param_2,local_6c);
    *(undefined4 *)(param_2 + 0x24) = 0;
    if (local_6c != 0) {
      local_90 = 0;
      do {
        UStringBase<char,int>::UStringBase(local_50);
        FFileBase::Read(param_1,(uchar *)&local_64,4);
        Load<char,int>(param_1,(UStringBase *)local_50);
        if (uVar2 < 2) {
LAB_00068619:
          local_70[0] = 0xff;
          local_70[1] = 0xff;
          local_70[2] = 0xff;
          local_70[3] = 0xff;
        }
        else {
          FFileBase::Read(param_1,(uchar *)local_60,4);
          FFileBase::ReadSkip(param_1,local_60[0]);
          if (uVar2 == 2) goto LAB_00068619;
          FFileBase::Read(param_1,&local_71,1);
          FFileBase::Read(param_1,(uchar *)local_60,4);
          FFileBase::Read(param_1,(uchar *)local_60,4);
          if (uVar2 == 3) goto LAB_00068619;
          GETimeOfDay::GETimeOfDay(local_58);
          FFileBase::Read(param_1,&local_71,1);
          Load(param_1,local_58);
          if (uVar2 == 4) goto LAB_00068619;
          FFileBase::Read(param_1,&local_71,1);
          FFileBase::Read(param_1,(uchar *)local_60,4);
          local_70[0] = 0xff;
          local_70[1] = 0xff;
          local_70[2] = 0xff;
          local_70[3] = 0xff;
          if (uVar2 == 6) {
            FFileBase::Read(param_1,&local_71,1);
            FFileBase::Read(param_1,local_70,4);
          }
        }
        pFVar1 = *(FFileHash **)(param_2 + 0x24);
        *(FFileHash **)(param_2 + 0x24) = pFVar1 + 1;
        UStringBase<char,int>::UStringBase(local_34);
        local_18 = 0xffffffff;
        UStringBase<char,int>::operator=(local_34,(UStringBase *)local_50);
        local_18 = UStringBaseHash_Internal(local_1c,local_20 - (int)local_1c);
        GETextureModifier::InitializeTexture((ulong)param_2,pFVar1,(ulong)local_34);
        UStringBase<char,int>::~UStringBase(local_34);
        pcVar3 = (char *)((int)pFVar1 * 0x68 + *(int *)(param_2 + 0x1c));
        if (((*pcVar3 == '\0') && (pcVar3[1] == '\0')) && (pcVar3[2] == '\0')) {
          *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + -1;
        }
        FFileBase::ReadSkip(param_1,local_64);
        UStringBase<char,int>::~UStringBase(local_50);
        local_90 = local_90 + 1;
      } while (local_90 < local_6c);
    }
  }
  else {
    FFileBase::Read(param_1,(uchar *)local_60,4);
    GETextureModifier::Initialize(param_2,local_60[0]);
    Load(param_1,(GETextureSwapContainer *)param_2);
    Load(param_1,(GETextureFontContainer *)(param_2 + 0xc));
    if (local_60[0] != 0) {
      uVar4 = 0;
      do {
        while( true ) {
          puVar5 = (uchar *)(uVar4 * 0x68 + *(int *)(param_2 + 0x1c));
          FFileBase::Read(param_1,puVar5,1);
          FFileBase::Read(param_1,puVar5 + 1,1);
          FFileBase::Read(param_1,puVar5 + 2,1);
          FFileBase::Read(param_1,puVar5 + 4,4);
          FFileBase::Read(param_1,puVar5 + 8,4);
          FFileBase::Read(param_1,puVar5 + 0xc,4);
          FFileBase::Read(param_1,puVar5 + 0x10,4);
          Load(param_1,(GETimeOfDay *)(puVar5 + 0x14));
          FFileBase::Read(param_1,puVar5 + 0x1c,1);
          Load(param_1,(FFileHash *)(puVar5 + 0x28));
          Load(param_1,(FFileHash *)(puVar5 + 0x48));
          if (uVar2 == 7) break;
          FFileBase::Read(param_1,puVar5 + 0x20,4);
          FFileBase::Read(param_1,puVar5 + 0x24,1);
          uVar4 = uVar4 + 1;
          if (local_60[0] <= uVar4) goto LAB_000684d0;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < local_60[0]);
    }
  }
LAB_000684d0:
  if (local_14 != **(int **)(unaff_EBX + 0x33b6d)) {
                    /* WARNING: Subroutine does not return */
    FUN_0002e000();
  }
  return;
}

