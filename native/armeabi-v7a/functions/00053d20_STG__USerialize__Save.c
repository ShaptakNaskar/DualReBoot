/* 00053d20 | STG::USerialize::Save */

/* STG::USerialize::Save(STG::FFileBase*, STG::GECameraSet const&) */

void STG::USerialize::Save(FFileBase *param_1,GECameraSet *param_2)

{
  uint uVar1;
  undefined4 local_1c [2];
  
  local_1c[0] = 1;
  FFileBase::Write(param_1,(uchar *)local_1c,4);
  Save<char,int>(param_1,(UStringBase *)(param_2 + 0x210));
  local_1c[0] = *(undefined4 *)(param_2 + 0x234);
  FFileBase::Write(param_1,(uchar *)local_1c,4);
  local_1c[0] = *(undefined4 *)(param_2 + 0x240);
  FFileBase::Write(param_1,(uchar *)local_1c,4);
  local_1c[0] = *(undefined4 *)(param_2 + 0x244);
  FFileBase::Write(param_1,(uchar *)local_1c,4);
  if (*(int *)(param_2 + 0x234) != 0) {
    uVar1 = 0;
    do {
      local_1c[0] = *(undefined4 *)(*(int *)(param_2 + 0x230) + uVar1 * 4);
      uVar1 = uVar1 + 1;
      FFileBase::Write(param_1,(uchar *)local_1c,4);
    } while (uVar1 < *(uint *)(param_2 + 0x234));
  }
  if (*(int *)(param_2 + 0x240) != 0) {
    uVar1 = 0;
    do {
      local_1c[0] = *(undefined4 *)(*(int *)(param_2 + 0x238) + uVar1 * 4);
      uVar1 = uVar1 + 1;
      FFileBase::Write(param_1,(uchar *)local_1c,4);
    } while (uVar1 < *(uint *)(param_2 + 0x240));
  }
  return;
}

