/* 000544c4 | STG::USerialize::Save */

/* STG::USerialize::Save(STG::FFileBase*, STG::GETextureSwap const&) */

void STG::USerialize::Save(FFileBase *param_1,GETextureSwap *param_2)

{
  UStringBase *pUVar1;
  uint uVar2;
  int iVar3;
  GETextureSwap local_1d;
  undefined4 local_1c;
  
  local_1c = 4;
  FFileBase::Write(param_1,(uchar *)&local_1c,4);
  Save<char,int>(param_1,(UStringBase *)param_2);
  local_1c = *(undefined4 *)(param_2 + 0x1c);
  FFileBase::Write(param_1,(uchar *)&local_1c,4);
  local_1d = param_2[0x20];
  FFileBase::Write(param_1,(uchar *)&local_1d,1);
  local_1d = param_2[0x21];
  FFileBase::Write(param_1,(uchar *)&local_1d,1);
  if (*(int *)(param_2 + 0x1c) != 0) {
    iVar3 = 0;
    uVar2 = 0;
    do {
      pUVar1 = (UStringBase *)(*(int *)(param_2 + 0x24) + iVar3);
      iVar3 = iVar3 + 0x1c;
      Save<char,int>(param_1,pUVar1);
      Save(param_1,(FFileHash *)(*(int *)(param_2 + 0x28) + uVar2 * 0x20));
      Save(param_1,(GETimeOfDay *)(*(int *)(param_2 + 0x2c) + uVar2 * 8));
      local_1c = *(undefined4 *)(*(int *)(param_2 + 0x30) + uVar2 * 4);
      uVar2 = uVar2 + 1;
      FFileBase::Write(param_1,(uchar *)&local_1c,4);
    } while (uVar2 < *(uint *)(param_2 + 0x1c));
  }
  return;
}

