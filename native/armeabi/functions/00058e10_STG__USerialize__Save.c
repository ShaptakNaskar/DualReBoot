/* 00058e10 | STG::USerialize::Save */

/* STG::USerialize::Save(STG::FFileBase*, STG::GETextureSwapContainer const&) */

void STG::USerialize::Save(FFileBase *param_1,GETextureSwapContainer *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 local_1c [2];
  
  local_1c[0] = 2;
  FFileBase::Write(param_1,(uchar *)local_1c,4);
  local_1c[0] = *(undefined4 *)(param_2 + 8);
  FFileBase::Write(param_1,(uchar *)local_1c,4);
  if (*(int *)(param_2 + 8) != 0) {
    iVar1 = 0;
    uVar2 = 0;
    do {
      uVar2 = uVar2 + 1;
      Save(param_1,(GETextureSwap *)(*(int *)(param_2 + 4) + iVar1));
      iVar1 = iVar1 + 0x34;
    } while (uVar2 < *(uint *)(param_2 + 8));
  }
  return;
}

