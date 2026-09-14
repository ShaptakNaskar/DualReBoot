/* 00055980 | STG::USerialize::Save */

/* STG::USerialize::Save(STG::FFileBase*, STG::GEAnimationCurve const&) */

void STG::USerialize::Save(FFileBase *param_1,GEAnimationCurve *param_2)

{
  uchar local_28 [4];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_28[0] = '\x02';
  local_28[1] = '\0';
  local_28[2] = '\0';
  local_28[3] = '\0';
  FFileBase::Write(param_1,local_28,4);
  local_20 = *(undefined4 *)param_2;
  uStack_1c = *(undefined4 *)(param_2 + 4);
  FFileBase::Write(param_1,(uchar *)&local_20,8);
  local_20 = *(undefined4 *)(param_2 + 8);
  uStack_1c = *(undefined4 *)(param_2 + 0xc);
  FFileBase::Write(param_1,(uchar *)&local_20,8);
  local_20 = *(undefined4 *)(param_2 + 0x10);
  uStack_1c = *(undefined4 *)(param_2 + 0x14);
  FFileBase::Write(param_1,(uchar *)&local_20,8);
  local_20 = *(undefined4 *)(param_2 + 0x18);
  uStack_1c = *(undefined4 *)(param_2 + 0x1c);
  FFileBase::Write(param_1,(uchar *)&local_20,8);
  local_24 = *(undefined4 *)(param_2 + 0x20);
  FFileBase::Write(param_1,(uchar *)&local_24,4);
  local_24 = *(undefined4 *)(param_2 + 0x24);
  FFileBase::Write(param_1,(uchar *)&local_24,4);
  local_24 = *(undefined4 *)(param_2 + 0x28);
  FFileBase::Write(param_1,(uchar *)&local_24,4);
  local_24 = *(undefined4 *)(param_2 + 0x2c);
  FFileBase::Write(param_1,(uchar *)&local_24,4);
  return;
}

