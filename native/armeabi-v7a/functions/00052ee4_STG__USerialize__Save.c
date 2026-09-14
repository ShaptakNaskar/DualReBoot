/* 00052ee4 | STG::USerialize::Save */

/* STG::USerialize::Save(STG::FFileBase*, STG::UPreference_TextureGroup const&) */

void STG::USerialize::Save(FFileBase *param_1,UPreference_TextureGroup *param_2)

{
  uint uVar1;
  UStringBase *pUVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  int local_2c;
  uchar local_28 [12];
  
  builtin_memcpy(local_28,"PREFTGRP",8);
  FFileBase::Write(param_1,local_28,8);
  local_2c = 1;
  FFileBase::Write(param_1,(uchar *)&local_2c,4);
  Save<char,int>(param_1,(UStringBase *)(param_2 + 4));
  Save<char,int>(param_1,(UStringBase *)(param_2 + 0x20));
  Save<char,int>(param_1,(UStringBase *)(param_2 + 0x3c));
  local_2c = (**(code **)(*(int *)param_2 + 0x18))(param_2);
  FFileBase::Write(param_1,(uchar *)&local_2c,4);
  iVar5 = *(int *)(param_2 + 0x94);
  local_2c = iVar5;
  FFileBase::Write(param_1,(uchar *)&local_2c,4);
  if (iVar5 != 0) {
    iVar4 = 0;
    do {
      local_2c = *(int *)(*(int *)(param_2 + 0x88) + iVar4 * 4);
      iVar4 = iVar4 + 1;
      FFileBase::Write(param_1,(uchar *)&local_2c,4);
    } while (iVar4 != iVar5);
  }
  iVar5 = 0;
  uVar3 = 0;
  while( true ) {
    uVar1 = (**(code **)(*(int *)param_2 + 0x18))(param_2);
    bVar6 = uVar1 <= uVar3;
    uVar3 = uVar3 + 1;
    if (bVar6) break;
    pUVar2 = (UStringBase *)(*(int *)(param_2 + 0x7c) + iVar5);
    iVar5 = iVar5 + 0x1c;
    Save<char,int>(param_1,pUVar2);
  }
  return;
}

