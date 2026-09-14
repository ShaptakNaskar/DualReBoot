/* 00066400 | STG::USerialize::Save */

/* STG::USerialize::Save(STG::FFileBase*, STG::GETextureSwapContainer const&) */

void STG::USerialize::Save(FFileBase *param_1,GETextureSwapContainer *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 local_20 [3];
  undefined4 uStack_14;
  
  uStack_14 = 0x66409;
  FUN_0002e044();
  local_20[0] = 2;
  FFileBase::Write(param_1,(uchar *)local_20,4);
  local_20[0] = *(undefined4 *)(param_2 + 8);
  FFileBase::Write(param_1,(uchar *)local_20,4);
  if (*(int *)(param_2 + 8) != 0) {
    uVar2 = 0;
    do {
      iVar1 = uVar2 * 0x34;
      uVar2 = uVar2 + 1;
      Save(param_1,(GETextureSwap *)(iVar1 + *(int *)(param_2 + 4)));
    } while (uVar2 < *(uint *)(param_2 + 8));
  }
  return;
}

