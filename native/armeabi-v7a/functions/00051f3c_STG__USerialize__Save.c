/* 00051f3c | STG::USerialize::Save */

/* STG::USerialize::Save(STG::FFileBase*, STG::GESkeleton::Animation const&) */

void STG::USerialize::Save(FFileBase *param_1,Animation *param_2)

{
  BoneAnim *pBVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_1c;
  
  local_1c = 1;
  FFileBase::Write(param_1,(uchar *)&local_1c,4);
  local_1c = *(undefined4 *)(param_2 + 0x78);
  FFileBase::Write(param_1,(uchar *)&local_1c,4);
  local_1c = *(undefined4 *)(param_2 + 0x7c);
  FFileBase::Write(param_1,(uchar *)&local_1c,4);
  local_1c = *(undefined4 *)(param_2 + 0x80);
  FFileBase::Write(param_1,(uchar *)&local_1c,4);
  Save(param_1,(MMatrix *)(param_2 + 0x38));
  local_1c = *(undefined4 *)(param_2 + 4);
  FFileBase::Write(param_1,(uchar *)&local_1c,4);
  if (*(int *)(param_2 + 4) != 0) {
    iVar2 = 0;
    uVar3 = 0;
    do {
      uVar3 = uVar3 + 1;
      pBVar1 = (BoneAnim *)(*(int *)param_2 + iVar2);
      iVar2 = iVar2 + 0x18;
      Save(param_1,pBVar1);
    } while (uVar3 < *(uint *)(param_2 + 4));
  }
  local_1c = *(undefined4 *)(param_2 + 0xc);
  FFileBase::Write(param_1,(uchar *)&local_1c,4);
  if (*(int *)(param_2 + 0xc) != 0) {
    uVar3 = 0;
    do {
      iVar2 = uVar3 * 0x40;
      uVar3 = uVar3 + 1;
      Save(param_1,(MMatrix *)(*(int *)(param_2 + 8) + iVar2));
    } while (uVar3 < *(uint *)(param_2 + 0xc));
  }
  local_1c = *(undefined4 *)(param_2 + 0x14);
  FFileBase::Write(param_1,(uchar *)&local_1c,4);
  if (*(int *)(param_2 + 0x14) != 0) {
    uVar3 = 0;
    do {
      iVar2 = uVar3 * 0x40;
      uVar3 = uVar3 + 1;
      Save(param_1,(MMatrix *)(*(int *)(param_2 + 0x10) + iVar2));
    } while (uVar3 < *(uint *)(param_2 + 0x14));
  }
  local_1c = *(undefined4 *)(param_2 + 0x2c);
  FFileBase::Write(param_1,(uchar *)&local_1c,4);
  if (*(int *)(param_2 + 0x2c) != 0) {
    uVar3 = 0;
    do {
      local_1c = *(undefined4 *)(*(int *)(param_2 + 0x28) + uVar3 * 4);
      uVar3 = uVar3 + 1;
      FFileBase::Write(param_1,(uchar *)&local_1c,4);
    } while (uVar3 < *(uint *)(param_2 + 0x2c));
  }
  local_1c = *(undefined4 *)(param_2 + 0x34);
  FFileBase::Write(param_1,(uchar *)&local_1c,4);
  if (*(int *)(param_2 + 0x34) != 0) {
    uVar3 = 0;
    do {
      local_1c = *(undefined4 *)(*(int *)(param_2 + 0x30) + uVar3 * 4);
      uVar3 = uVar3 + 1;
      FFileBase::Write(param_1,(uchar *)&local_1c,4);
    } while (uVar3 < *(uint *)(param_2 + 0x34));
  }
  return;
}

