/* 000543fc | STG::USerialize::Save */

/* STG::USerialize::Save(STG::FFileBase*, STG::GETextureFontContainer const&) */

void STG::USerialize::Save(FFileBase *param_1,GETextureFontContainer *param_2)

{
  GETextureFont *pGVar1;
  uint uVar2;
  int iVar3;
  undefined4 local_1c [2];
  
  local_1c[0] = 1;
  FFileBase::Write(param_1,(uchar *)local_1c,4);
  local_1c[0] = *(undefined4 *)param_2;
  FFileBase::Write(param_1,(uchar *)local_1c,4);
  local_1c[0] = *(undefined4 *)(param_2 + 8);
  FFileBase::Write(param_1,(uchar *)local_1c,4);
  if (*(int *)param_2 != 0) {
    uVar2 = 0;
    do {
      iVar3 = uVar2 * 4;
      uVar2 = uVar2 + 1;
      Save(param_1,*(GEFont **)(*(int *)(param_2 + 4) + iVar3));
    } while (uVar2 < *(uint *)param_2);
  }
  if (*(int *)(param_2 + 8) != 0) {
    iVar3 = 0;
    uVar2 = 0;
    do {
      uVar2 = uVar2 + 1;
      pGVar1 = (GETextureFont *)(*(int *)(param_2 + 0xc) + iVar3);
      iVar3 = iVar3 + 0x30;
      Save(param_1,pGVar1);
    } while (uVar2 < *(uint *)(param_2 + 8));
  }
  return;
}

