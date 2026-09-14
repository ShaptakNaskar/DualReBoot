/* 00058c4c | STG::USerialize::Save */

/* STG::USerialize::Save(STG::FFileBase*, STG::GETextureFontContainer const&) */

void STG::USerialize::Save(FFileBase *param_1,GETextureFontContainer *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 local_1c [2];
  
  local_1c[0] = 1;
  FFileBase::Write(param_1,(uchar *)local_1c,4);
  local_1c[0] = *(undefined4 *)param_2;
  FFileBase::Write(param_1,(uchar *)local_1c,4);
  local_1c[0] = *(undefined4 *)(param_2 + 8);
  FFileBase::Write(param_1,(uchar *)local_1c,4);
  if (*(int *)param_2 != 0) {
    uVar1 = 0;
    do {
      Save(param_1,*(GEFont **)(*(int *)(param_2 + 4) + uVar1 * 4));
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)param_2);
  }
  if (*(int *)(param_2 + 8) != 0) {
    iVar2 = 0;
    uVar1 = 0;
    do {
      uVar1 = uVar1 + 1;
      Save(param_1,(GETextureFont *)(*(int *)(param_2 + 0xc) + iVar2));
      iVar2 = iVar2 + 0x30;
    } while (uVar1 < *(uint *)(param_2 + 8));
  }
  return;
}

