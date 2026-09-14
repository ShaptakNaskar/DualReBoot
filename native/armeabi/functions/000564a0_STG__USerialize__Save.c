/* 000564a0 | STG::USerialize::Save */

/* STG::USerialize::Save(STG::FFileBase*, STG::GEAnimationTrack const&) */

void STG::USerialize::Save(FFileBase *param_1,GEAnimationTrack *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  uchar local_31;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  
  local_2c = 5;
  FFileBase::Write(param_1,(uchar *)&local_2c,4);
  local_30 = *(undefined4 *)param_2;
  FFileBase::Write(param_1,(uchar *)&local_30,4);
  local_2c = *(undefined4 *)(param_2 + 0x14);
  FFileBase::Write(param_1,(uchar *)&local_2c,4);
  local_28 = *(undefined4 *)(param_2 + 0x28);
  uStack_24 = *(undefined4 *)(param_2 + 0x2c);
  FFileBase::Write(param_1,(uchar *)&local_28,8);
  local_28 = *(undefined4 *)(param_2 + 0x30);
  uStack_24 = *(undefined4 *)(param_2 + 0x34);
  FFileBase::Write(param_1,(uchar *)&local_28,8);
  local_31 = *(int *)(param_2 + 4) < 0xc;
  FFileBase::Write(param_1,&local_31,1);
  local_2c = *(undefined4 *)(param_2 + 4);
  FFileBase::Write(param_1,(uchar *)&local_2c,4);
  local_28 = *(undefined4 *)(param_2 + 8);
  uStack_24 = *(undefined4 *)(param_2 + 0xc);
  FFileBase::Write(param_1,(uchar *)&local_28,8);
  if (*(int *)(param_2 + 0x14) != 0) {
    uVar2 = 0;
    do {
      Save(param_1,(GEAnimationCurve *)(*(int *)(param_2 + 0x10) + uVar2 * 0x40));
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_2 + 0x14));
    if (*(uint *)(param_2 + 0x14) != 0) {
      uVar2 = 0;
      do {
        puVar1 = (undefined4 *)(*(int *)(param_2 + 0x10) + uVar2 * 0x40);
        local_28 = *puVar1;
        uStack_24 = puVar1[1];
        FFileBase::Write(param_1,(uchar *)&local_28,8);
        iVar3 = *(int *)(param_2 + 0x10) + uVar2 * 0x40;
        local_28 = *(undefined4 *)(iVar3 + 0x18);
        uStack_24 = *(undefined4 *)(iVar3 + 0x1c);
        FFileBase::Write(param_1,(uchar *)&local_28,8);
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(param_2 + 0x14));
    }
  }
  return;
}

