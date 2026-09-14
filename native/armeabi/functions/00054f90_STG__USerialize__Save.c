/* 00054f90 | STG::USerialize::Save */

/* STG::USerialize::Save(STG::FFileBase*, STG::GEColor const&) */

void STG::USerialize::Save(FFileBase *param_1,GEColor *param_2)

{
  undefined4 local_14;
  
  local_14 = *(undefined4 *)param_2;
  FFileBase::Write(param_1,(uchar *)&local_14,4);
  local_14 = *(undefined4 *)(param_2 + 4);
  FFileBase::Write(param_1,(uchar *)&local_14,4);
  local_14 = *(undefined4 *)(param_2 + 8);
  FFileBase::Write(param_1,(uchar *)&local_14,4);
  local_14 = *(undefined4 *)(param_2 + 0xc);
  FFileBase::Write(param_1,(uchar *)&local_14,4);
  return;
}

