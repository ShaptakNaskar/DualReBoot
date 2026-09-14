/* 00054894 | STG::USerialize::Save */

/* STG::USerialize::Save(STG::FFileBase*, STG::GEModel const&) */

void STG::USerialize::Save(FFileBase *param_1,GEModel *param_2)

{
  int iVar1;
  uint uVar2;
  GEModel local_21;
  undefined4 local_20;
  undefined4 local_1c [2];
  
  local_20 = 0x10;
  FFileBase::Write(param_1,(uchar *)&local_20,4);
  local_20 = *(undefined4 *)(param_2 + 0x30);
  FFileBase::Write(param_1,(uchar *)&local_20,4);
  local_20 = *(undefined4 *)(param_2 + 0x2c);
  FFileBase::Write(param_1,(uchar *)&local_20,4);
  local_20 = *(undefined4 *)(param_2 + 0x34);
  FFileBase::Write(param_1,(uchar *)&local_20,4);
  if (*(int *)(param_2 + 0x34) != 0) {
    uVar2 = 0;
    do {
      iVar1 = uVar2 * 4;
      uVar2 = uVar2 + 1;
      Save(param_1,*(GEVertexBuffer **)(*(int *)(param_2 + 0x7c) + iVar1));
    } while (uVar2 < *(uint *)(param_2 + 0x34));
  }
  if (*(int *)(param_2 + 0x30) != 0) {
    uVar2 = 0;
    do {
      Save(param_1,*(GEIndexBuffer **)(*(int *)(param_2 + 0x80) + uVar2 * 4));
      iVar1 = uVar2 * 4;
      uVar2 = uVar2 + 1;
      Save(param_1,*(GEMaterial **)(*(int *)(param_2 + 0x84) + iVar1));
    } while (uVar2 < *(uint *)(param_2 + 0x30));
  }
  Save(param_1,(MVector3 *)(param_2 + 0x54));
  Save(param_1,(MVector3 *)(param_2 + 0x60));
  Save(param_1,(MVector3 *)(param_2 + 0x6c));
  local_1c[0] = *(undefined4 *)(param_2 + 0x78);
  FFileBase::Write(param_1,(uchar *)local_1c,4);
  local_21 = param_2[0x9c];
  FFileBase::Write(param_1,(uchar *)&local_21,1);
  local_21 = param_2[0xa4];
  FFileBase::Write(param_1,(uchar *)&local_21,1);
  local_1c[0] = *(undefined4 *)(param_2 + 0xa0);
  FFileBase::Write(param_1,(uchar *)local_1c,4);
  local_21 = param_2[0xa5];
  FFileBase::Write(param_1,(uchar *)&local_21,1);
  local_21 = param_2[0xb0];
  FFileBase::Write(param_1,(uchar *)&local_21,1);
  Save(param_1,(MVector2 *)(param_2 + 0xa8));
  local_21 = param_2[0xc0];
  FFileBase::Write(param_1,(uchar *)&local_21,1);
  Save(param_1,(MVector3 *)(param_2 + 0xb4));
  local_21 = param_2[0xc1];
  FFileBase::Write(param_1,(uchar *)&local_21,1);
  Save(param_1,(GEColor *)(param_2 + 0x88));
  local_1c[0] = *(undefined4 *)(param_2 + 0x98);
  FFileBase::Write(param_1,(uchar *)local_1c,4);
  local_21 = param_2[0x9d];
  FFileBase::Write(param_1,(uchar *)&local_21,1);
  Save<char,int>(param_1,(UStringBase *)(param_2 + 0x38));
  local_21 = param_2[0xc4];
  FFileBase::Write(param_1,(uchar *)&local_21,1);
  local_21 = param_2[0xc5];
  FFileBase::Write(param_1,(uchar *)&local_21,1);
  return;
}

