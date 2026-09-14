/* 000566fc | STG::USerialize::Save */

/* STG::USerialize::Save(STG::FFileBase*, STG::GESkeleton::Animation const&) */

void STG::USerialize::Save(FFileBase *param_1,Animation *param_2)

{
  int iVar1;
  uint uVar2;
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
    iVar1 = 0;
    uVar2 = 0;
    do {
      uVar2 = uVar2 + 1;
      Save(param_1,(BoneAnim *)(*(int *)param_2 + iVar1));
      iVar1 = iVar1 + 0x18;
    } while (uVar2 < *(uint *)(param_2 + 4));
  }
  local_1c = *(undefined4 *)(param_2 + 0xc);
  FFileBase::Write(param_1,(uchar *)&local_1c,4);
  if (*(int *)(param_2 + 0xc) != 0) {
    uVar2 = 0;
    do {
      Save(param_1,(MMatrix *)(*(int *)(param_2 + 8) + uVar2 * 0x40));
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_2 + 0xc));
  }
  local_1c = *(undefined4 *)(param_2 + 0x14);
  FFileBase::Write(param_1,(uchar *)&local_1c,4);
  if (*(int *)(param_2 + 0x14) != 0) {
    uVar2 = 0;
    do {
      Save(param_1,(MMatrix *)(*(int *)(param_2 + 0x10) + uVar2 * 0x40));
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_2 + 0x14));
  }
  local_1c = *(undefined4 *)(param_2 + 0x2c);
  FFileBase::Write(param_1,(uchar *)&local_1c,4);
  if (*(int *)(param_2 + 0x2c) != 0) {
    uVar2 = 0;
    do {
      local_1c = *(undefined4 *)(*(int *)(param_2 + 0x28) + uVar2 * 4);
      uVar2 = uVar2 + 1;
      FFileBase::Write(param_1,(uchar *)&local_1c,4);
    } while (uVar2 < *(uint *)(param_2 + 0x2c));
  }
  local_1c = *(undefined4 *)(param_2 + 0x34);
  FFileBase::Write(param_1,(uchar *)&local_1c,4);
  if (*(int *)(param_2 + 0x34) != 0) {
    uVar2 = 0;
    do {
      local_1c = *(undefined4 *)(*(int *)(param_2 + 0x30) + uVar2 * 4);
      uVar2 = uVar2 + 1;
      FFileBase::Write(param_1,(uchar *)&local_1c,4);
    } while (uVar2 < *(uint *)(param_2 + 0x34));
  }
  return;
}

