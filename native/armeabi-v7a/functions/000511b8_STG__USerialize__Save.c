/* 000511b8 | STG::USerialize::Save */

/* STG::USerialize::Save(STG::FFileBase*, STG::GEAnimationCurve const&) */

void STG::USerialize::Save(FFileBase *param_1,GEAnimationCurve *param_2)

{
  uchar local_30 [4];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  
  local_30[0] = '\x02';
  local_30[1] = '\0';
  local_30[2] = '\0';
  local_30[3] = '\0';
  FFileBase::Write(param_1,local_30,4);
  local_28 = *(undefined4 *)param_2;
  uStack_24 = *(undefined4 *)(param_2 + 4);
  FFileBase::Write(param_1,(uchar *)&local_28,8);
  local_28 = *(undefined4 *)(param_2 + 8);
  uStack_24 = *(undefined4 *)(param_2 + 0xc);
  FFileBase::Write(param_1,(uchar *)&local_28,8);
  local_28 = *(undefined4 *)(param_2 + 0x10);
  uStack_24 = *(undefined4 *)(param_2 + 0x14);
  FFileBase::Write(param_1,(uchar *)&local_28,8);
  local_28 = *(undefined4 *)(param_2 + 0x18);
  uStack_24 = *(undefined4 *)(param_2 + 0x1c);
  FFileBase::Write(param_1,(uchar *)&local_28,8);
  local_2c = *(undefined4 *)(param_2 + 0x20);
  FFileBase::Write(param_1,(uchar *)&local_2c,4);
  local_2c = *(undefined4 *)(param_2 + 0x24);
  FFileBase::Write(param_1,(uchar *)&local_2c,4);
  local_2c = *(undefined4 *)(param_2 + 0x28);
  FFileBase::Write(param_1,(uchar *)&local_2c,4);
  local_2c = *(undefined4 *)(param_2 + 0x2c);
  FFileBase::Write(param_1,(uchar *)&local_2c,4);
  return;
}

