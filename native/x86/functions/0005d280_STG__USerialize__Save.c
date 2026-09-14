/* 0005d280 | STG::USerialize::Save */

/* STG::USerialize::Save(STG::FFileBase*, STG::GEAnimationTrack const&) */

void STG::USerialize::Save(FFileBase *param_1,GEAnimationTrack *param_2)

{
  GEAnimationCurve *pGVar1;
  int iVar2;
  uint uVar3;
  uchar local_2d;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 uStack_14;
  
  uStack_14 = 0x5d289;
  FUN_0002e044();
  local_28 = 5;
  FFileBase::Write(param_1,(uchar *)&local_28,4);
  local_2c = *(undefined4 *)param_2;
  FFileBase::Write(param_1,(uchar *)&local_2c,4);
  local_28 = *(undefined4 *)(param_2 + 0x14);
  FFileBase::Write(param_1,(uchar *)&local_28,4);
  local_24 = *(undefined4 *)(param_2 + 0x28);
  local_20 = *(undefined4 *)(param_2 + 0x2c);
  FFileBase::Write(param_1,(uchar *)&local_24,8);
  local_24 = *(undefined4 *)(param_2 + 0x30);
  local_20 = *(undefined4 *)(param_2 + 0x34);
  FFileBase::Write(param_1,(uchar *)&local_24,8);
  local_2d = *(int *)(param_2 + 4) < 0xc;
  FFileBase::Write(param_1,&local_2d,1);
  local_28 = *(undefined4 *)(param_2 + 4);
  FFileBase::Write(param_1,(uchar *)&local_28,4);
  local_24 = *(undefined4 *)(param_2 + 8);
  local_20 = *(undefined4 *)(param_2 + 0xc);
  FFileBase::Write(param_1,(uchar *)&local_24,8);
  if (*(int *)(param_2 + 0x14) != 0) {
    iVar2 = 0;
    uVar3 = 0;
    do {
      uVar3 = uVar3 + 1;
      pGVar1 = (GEAnimationCurve *)(*(int *)(param_2 + 0x10) + iVar2);
      iVar2 = iVar2 + 0x3c;
      Save(param_1,pGVar1);
    } while (uVar3 < *(uint *)(param_2 + 0x14));
    if (*(uint *)(param_2 + 0x14) != 0) {
      uVar3 = 0;
      iVar2 = 0;
      do {
        uVar3 = uVar3 + 1;
        local_20 = *(undefined4 *)(*(int *)(param_2 + 0x10) + 4 + iVar2);
        local_24 = *(undefined4 *)(*(int *)(param_2 + 0x10) + iVar2);
        FFileBase::Write(param_1,(uchar *)&local_24,8);
        local_20 = *(undefined4 *)(*(int *)(param_2 + 0x10) + 0x1c + iVar2);
        local_24 = *(undefined4 *)(*(int *)(param_2 + 0x10) + 0x18 + iVar2);
        iVar2 = iVar2 + 0x3c;
        FFileBase::Write(param_1,(uchar *)&local_24,8);
      } while (uVar3 < *(uint *)(param_2 + 0x14));
    }
  }
  return;
}

