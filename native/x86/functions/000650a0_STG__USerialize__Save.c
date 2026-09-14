/* 000650a0 | STG::USerialize::Save */

/* STG::USerialize::Save(STG::FFileBase*, STG::UPreference_Scene const&) */

void STG::USerialize::Save(FFileBase *param_1,UPreference_Scene *param_2)

{
  UPreference_TimeOfDay *pUVar1;
  UPreference_CameraSet *pUVar2;
  UPreference_ModelToggle *pUVar3;
  UPreference_TextureFont *pUVar4;
  UPreference_Theme *pUVar5;
  UPreference_ModelSwap *pUVar6;
  UPreference_Environment *pUVar7;
  int iVar8;
  int unaff_EBX;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int local_34;
  uint local_30;
  uint local_20 [3];
  undefined4 uStack_14;
  
  uStack_14 = 0x650a9;
  FUN_0002e044();
  local_20[0] = 10;
  FFileBase::Write(param_1,(uchar *)local_20,4);
  local_20[0] = *(uint *)(param_2 + 8);
  FFileBase::Write(param_1,(uchar *)local_20,4);
  local_20[0] = *(uint *)(param_2 + 0x10);
  FFileBase::Write(param_1,(uchar *)local_20,4);
  local_20[0] = *(uint *)(param_2 + 0x18);
  FFileBase::Write(param_1,(uchar *)local_20,4);
  local_20[0] = *(uint *)(param_2 + 0x20);
  FFileBase::Write(param_1,(uchar *)local_20,4);
  local_20[0] = *(uint *)(param_2 + 0x28);
  FFileBase::Write(param_1,(uchar *)local_20,4);
  local_20[0] = *(uint *)(param_2 + 0x30);
  FFileBase::Write(param_1,(uchar *)local_20,4);
  local_20[0] = *(uint *)(param_2 + 0x38);
  FFileBase::Write(param_1,(uchar *)local_20,4);
  local_20[0] = *(uint *)(param_2 + 0x40);
  FFileBase::Write(param_1,(uchar *)local_20,4);
  local_20[0] = *(uint *)(param_2 + 0x48);
  FFileBase::Write(param_1,(uchar *)local_20,4);
  local_20[0] = *(uint *)(param_2 + 0x50);
  FFileBase::Write(param_1,(uchar *)local_20,4);
  local_20[0] = *(uint *)(param_2 + 0x58);
  FFileBase::Write(param_1,(uchar *)local_20,4);
  local_20[0] = *(uint *)(param_2 + 8);
  FFileBase::Write(param_1,(uchar *)local_20,4);
  if (*(int *)(param_2 + 8) != 0) {
    iVar12 = 0;
    uVar9 = 0;
    do {
      uVar9 = uVar9 + 1;
      pUVar1 = (UPreference_TimeOfDay *)(*(int *)(param_2 + 4) + iVar12);
      iVar12 = iVar12 + 0x88;
      Save(param_1,pUVar1);
    } while (uVar9 < *(uint *)(param_2 + 8));
  }
  local_20[0] = *(uint *)(param_2 + 0x10);
  FFileBase::Write(param_1,(uchar *)local_20,4);
  if (*(int *)(param_2 + 0x10) != 0) {
    iVar12 = 0;
    uVar9 = 0;
    do {
      uVar9 = uVar9 + 1;
      pUVar2 = (UPreference_CameraSet *)(*(int *)(param_2 + 0xc) + iVar12);
      iVar12 = iVar12 + 0x88;
      Save(param_1,pUVar2);
    } while (uVar9 < *(uint *)(param_2 + 0x10));
  }
  local_20[0] = *(uint *)(param_2 + 0x18);
  FFileBase::Write(param_1,(uchar *)local_20,4);
  if (*(int *)(param_2 + 0x18) != 0) {
    uVar9 = 0;
    do {
      iVar12 = uVar9 * 0x8c;
      uVar9 = uVar9 + 1;
      Save(param_1,(UPreference_TextureSwap *)(iVar12 + *(int *)(param_2 + 0x14)));
    } while (uVar9 < *(uint *)(param_2 + 0x18));
  }
  local_20[0] = *(uint *)(param_2 + 0x20);
  FFileBase::Write(param_1,(uchar *)local_20,4);
  if (*(int *)(param_2 + 0x20) != 0) {
    iVar12 = 0;
    uVar9 = 0;
    do {
      uVar9 = uVar9 + 1;
      pUVar3 = (UPreference_ModelToggle *)(*(int *)(param_2 + 0x1c) + iVar12);
      iVar12 = iVar12 + 0x90;
      Save(param_1,pUVar3);
    } while (uVar9 < *(uint *)(param_2 + 0x20));
  }
  local_20[0] = *(uint *)(param_2 + 0x28);
  FFileBase::Write(param_1,(uchar *)local_20,4);
  if (*(int *)(param_2 + 0x28) != 0) {
    iVar12 = 0;
    uVar9 = 0;
    do {
      uVar9 = uVar9 + 1;
      pUVar4 = (UPreference_TextureFont *)(*(int *)(param_2 + 0x24) + iVar12);
      iVar12 = iVar12 + 0x90;
      Save(param_1,pUVar4);
    } while (uVar9 < *(uint *)(param_2 + 0x28));
  }
  local_20[0] = *(uint *)(param_2 + 0x30);
  FFileBase::Write(param_1,(uchar *)local_20,4);
  if (*(int *)(param_2 + 0x30) != 0) {
    uVar9 = 0;
    do {
      iVar12 = uVar9 * 0x98;
      uVar9 = uVar9 + 1;
      Save(param_1,(UPreference_TextureGroup *)(iVar12 + *(int *)(param_2 + 0x2c)));
    } while (uVar9 < *(uint *)(param_2 + 0x30));
  }
  local_20[0] = *(uint *)(param_2 + 0x38);
  FFileBase::Write(param_1,(uchar *)local_20,4);
  if (*(int *)(param_2 + 0x38) != 0) {
    uVar9 = 0;
    do {
      iVar12 = uVar9 * 0x94;
      uVar9 = uVar9 + 1;
      Save(param_1,(UPreference_FileChooser_Texture *)(iVar12 + *(int *)(param_2 + 0x34)));
    } while (uVar9 < *(uint *)(param_2 + 0x38));
  }
  local_20[0] = *(uint *)(param_2 + 0x40);
  FFileBase::Write(param_1,(uchar *)local_20,4);
  if (*(int *)(param_2 + 0x40) != 0) {
    iVar12 = 0;
    uVar9 = 0;
    do {
      uVar9 = uVar9 + 1;
      pUVar5 = (UPreference_Theme *)(*(int *)(param_2 + 0x3c) + iVar12);
      iVar12 = iVar12 + 0x88;
      Save(param_1,pUVar5);
    } while (uVar9 < *(uint *)(param_2 + 0x40));
  }
  local_20[0] = *(uint *)(param_2 + 0x48);
  FFileBase::Write(param_1,(uchar *)local_20,4);
  if (*(int *)(param_2 + 0x48) != 0) {
    iVar12 = 0;
    uVar9 = 0;
    do {
      uVar9 = uVar9 + 1;
      pUVar6 = (UPreference_ModelSwap *)(*(int *)(param_2 + 0x44) + iVar12);
      iVar12 = iVar12 + 0xa0;
      Save(param_1,pUVar6);
    } while (uVar9 < *(uint *)(param_2 + 0x48));
  }
  local_20[0] = *(uint *)(param_2 + 0x50);
  FFileBase::Write(param_1,(uchar *)local_20,4);
  if (*(int *)(param_2 + 0x50) != 0) {
    uVar9 = 0;
    do {
      iVar12 = uVar9 * 0x8c;
      uVar9 = uVar9 + 1;
      Save(param_1,(UPreference_IAB *)(iVar12 + *(int *)(param_2 + 0x4c)));
    } while (uVar9 < *(uint *)(param_2 + 0x50));
  }
  local_20[0] = *(uint *)(param_2 + 0x58);
  FFileBase::Write(param_1,(uchar *)local_20,4);
  if (*(int *)(param_2 + 0x58) != 0) {
    iVar12 = 0;
    uVar9 = 0;
    do {
      uVar9 = uVar9 + 1;
      pUVar7 = (UPreference_Environment *)(*(int *)(param_2 + 0x54) + iVar12);
      iVar12 = iVar12 + 0x88;
      Save(param_1,pUVar7);
    } while (uVar9 < *(uint *)(param_2 + 0x58));
  }
  iVar12 = *(int *)(param_2 + 0x38);
  if (iVar12 != 0) {
    iVar10 = 0;
    do {
      iVar8 = iVar10 * 0x94;
      iVar10 = iVar10 + 1;
      local_20[0] = *(uint *)(iVar8 + *(int *)(param_2 + 0x34) + 0x88);
      FFileBase::Write(param_1,(uchar *)local_20,4);
    } while (iVar10 != iVar12);
  }
  local_20[0] = UPreference_Scene::GetNumMultiPrefs(param_2);
  FFileBase::Write(param_1,(uchar *)local_20,4);
  local_34 = 0;
  local_30 = 0;
  do {
    uVar9 = UPreference_Scene::GetNumMultiPrefs(param_2);
    if (uVar9 <= local_30) {
      return;
    }
    iVar12 = local_34 + *(int *)(param_2 + 100);
    uVar9 = *(int *)(iVar12 + 0x14) - *(int *)(iVar12 + 0x18);
    local_20[0] = uVar9;
    FFileBase::Write(param_1,(uchar *)local_20,4);
    if (uVar9 != 0) {
      iVar10 = *(int *)(iVar12 + 0x18);
      if (iVar10 == *(int *)(iVar12 + 0x14)) goto LAB_0006581d;
      uVar11 = 0;
      while( true ) {
        local_20[0] = CONCAT31(local_20[0]._1_3_,*(undefined1 *)(iVar10 + uVar11));
        uVar11 = uVar11 + 1;
        FFileBase::Write(param_1,(uchar *)local_20,1);
        if (uVar9 == uVar11) break;
        iVar10 = *(int *)(iVar12 + 0x18);
        if ((uint)(*(int *)(iVar12 + 0x14) - iVar10) <= uVar11) goto LAB_0006581d;
      }
    }
    iVar12 = local_34 + *(int *)(param_2 + 0x6c);
    uVar9 = *(int *)(iVar12 + 0x14) - *(int *)(iVar12 + 0x18);
    local_20[0] = uVar9;
    FFileBase::Write(param_1,(uchar *)local_20,4);
    if (uVar9 != 0) {
      iVar10 = *(int *)(iVar12 + 0x18);
      if (*(int *)(iVar12 + 0x14) == iVar10) {
LAB_0006581d:
                    /* WARNING: Subroutine does not return */
        std::__stl_throw_out_of_range("_ZTVN3STG21UPreference_TimeOfDayE" + unaff_EBX + 0x21);
      }
      uVar11 = 0;
      while( true ) {
        local_20[0] = CONCAT31(local_20[0]._1_3_,*(undefined1 *)(iVar10 + uVar11));
        uVar11 = uVar11 + 1;
        FFileBase::Write(param_1,(uchar *)local_20,1);
        if (uVar9 == uVar11) break;
        iVar10 = *(int *)(iVar12 + 0x18);
        if ((uint)(*(int *)(iVar12 + 0x14) - iVar10) <= uVar11) goto LAB_0006581d;
      }
    }
    local_30 = local_30 + 1;
    local_34 = local_34 + 0x1c;
  } while( true );
}

