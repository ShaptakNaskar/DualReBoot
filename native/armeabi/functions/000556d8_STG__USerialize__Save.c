/* 000556d8 | STG::USerialize::Save */

/* STG::USerialize::Save(STG::FFileBase*, STG::GESkeleton::VertexGroup const&) */

void STG::USerialize::Save(FFileBase *param_1,VertexGroup *param_2)

{
  uint uVar1;
  undefined4 local_1c [2];
  
  local_1c[0] = 1;
  FFileBase::Write(param_1,(uchar *)local_1c,4);
  local_1c[0] = *(undefined4 *)(param_2 + 4);
  FFileBase::Write(param_1,(uchar *)local_1c,4);
  local_1c[0] = *(undefined4 *)(param_2 + 8);
  FFileBase::Write(param_1,(uchar *)local_1c,4);
  local_1c[0] = *(undefined4 *)(param_2 + 0xc);
  FFileBase::Write(param_1,(uchar *)local_1c,4);
  local_1c[0] = *(undefined4 *)(param_2 + 4);
  FFileBase::Write(param_1,(uchar *)local_1c,4);
  if (*(int *)(param_2 + 4) != 0) {
    uVar1 = 0;
    do {
      local_1c[0] = *(undefined4 *)(*(int *)param_2 + uVar1 * 4);
      uVar1 = uVar1 + 1;
      FFileBase::Write(param_1,(uchar *)local_1c,4);
    } while (uVar1 < *(uint *)(param_2 + 4));
  }
  return;
}

