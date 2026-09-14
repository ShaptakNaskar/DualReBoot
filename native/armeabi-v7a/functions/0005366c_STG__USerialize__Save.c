/* 0005366c | STG::USerialize::Save */

/* STG::USerialize::Save(STG::FFileBase*, STG::UPreference_CameraSet const&) */

void STG::USerialize::Save(FFileBase *param_1,UPreference_CameraSet *param_2)

{
  uint uVar1;
  UStringBase *pUVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  undefined4 local_2c;
  uchar local_28 [12];
  
  builtin_memcpy(local_28,"PREFCAMS",8);
  iVar4 = 0;
  FFileBase::Write(param_1,local_28,8);
  local_2c = 1;
  FFileBase::Write(param_1,(uchar *)&local_2c,4);
  uVar3 = 0;
  Save<char,int>(param_1,(UStringBase *)(param_2 + 4));
  Save<char,int>(param_1,(UStringBase *)(param_2 + 0x20));
  Save<char,int>(param_1,(UStringBase *)(param_2 + 0x3c));
  local_2c = (**(code **)(*(int *)param_2 + 0x18))(param_2);
  FFileBase::Write(param_1,(uchar *)&local_2c,4);
  while( true ) {
    uVar1 = (**(code **)(*(int *)param_2 + 0x18))(param_2);
    bVar5 = uVar1 <= uVar3;
    uVar3 = uVar3 + 1;
    if (bVar5) break;
    pUVar2 = (UStringBase *)(*(int *)(param_2 + 0x7c) + iVar4);
    iVar4 = iVar4 + 0x1c;
    Save<char,int>(param_1,pUVar2);
  }
  return;
}

