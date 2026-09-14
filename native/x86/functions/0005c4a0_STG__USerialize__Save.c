/* 0005c4a0 | STG::USerialize::Save */

/* STG::USerialize::Save(STG::FFileBase*, STG::GEAnimationCurve const&) */

void STG::USerialize::Save(FFileBase *param_1,GEAnimationCurve *param_2)

{
  uchar local_2c [4];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  FUN_0002e044();
  local_2c[0] = '\x02';
  local_2c[1] = '\0';
  local_2c[2] = '\0';
  local_2c[3] = '\0';
  FFileBase::Write(param_1,local_2c,4);
  local_20 = *(undefined4 *)(param_2 + 4);
  local_24 = *(undefined4 *)param_2;
  FFileBase::Write(param_1,(uchar *)&local_24,8);
  local_20 = *(undefined4 *)(param_2 + 0xc);
  local_24 = *(undefined4 *)(param_2 + 8);
  FFileBase::Write(param_1,(uchar *)&local_24,8);
  local_20 = *(undefined4 *)(param_2 + 0x14);
  local_24 = *(undefined4 *)(param_2 + 0x10);
  FFileBase::Write(param_1,(uchar *)&local_24,8);
  local_20 = *(undefined4 *)(param_2 + 0x1c);
  local_24 = *(undefined4 *)(param_2 + 0x18);
  FFileBase::Write(param_1,(uchar *)&local_24,8);
  local_28 = *(undefined4 *)(param_2 + 0x20);
  FFileBase::Write(param_1,(uchar *)&local_28,4);
  local_28 = *(undefined4 *)(param_2 + 0x24);
  FFileBase::Write(param_1,(uchar *)&local_28,4);
  local_28 = *(undefined4 *)(param_2 + 0x28);
  FFileBase::Write(param_1,(uchar *)&local_28,4);
  local_28 = *(undefined4 *)(param_2 + 0x2c);
  FFileBase::Write(param_1,(uchar *)&local_28,4);
  return;
}

