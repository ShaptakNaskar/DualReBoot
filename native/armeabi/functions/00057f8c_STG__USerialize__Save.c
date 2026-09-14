/* 00057f8c | STG::USerialize::Save */

/* STG::USerialize::Save(STG::FFileBase*, STG::UPreference_Scene const&) */

void STG::USerialize::Save(FFileBase *param_1,UPreference_Scene *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint local_2c [2];
  
  local_2c[0] = 10;
  FFileBase::Write(param_1,(uchar *)local_2c,4);
  local_2c[0] = *(uint *)(param_2 + 8);
  FFileBase::Write(param_1,(uchar *)local_2c,4);
  local_2c[0] = *(uint *)(param_2 + 0x10);
  FFileBase::Write(param_1,(uchar *)local_2c,4);
  local_2c[0] = *(uint *)(param_2 + 0x18);
  FFileBase::Write(param_1,(uchar *)local_2c,4);
  local_2c[0] = *(uint *)(param_2 + 0x20);
  FFileBase::Write(param_1,(uchar *)local_2c,4);
  local_2c[0] = *(uint *)(param_2 + 0x28);
  FFileBase::Write(param_1,(uchar *)local_2c,4);
  local_2c[0] = *(uint *)(param_2 + 0x30);
  FFileBase::Write(param_1,(uchar *)local_2c,4);
  local_2c[0] = *(uint *)(param_2 + 0x38);
  FFileBase::Write(param_1,(uchar *)local_2c,4);
  local_2c[0] = *(uint *)(param_2 + 0x40);
  FFileBase::Write(param_1,(uchar *)local_2c,4);
  local_2c[0] = *(uint *)(param_2 + 0x48);
  FFileBase::Write(param_1,(uchar *)local_2c,4);
  local_2c[0] = *(uint *)(param_2 + 0x50);
  FFileBase::Write(param_1,(uchar *)local_2c,4);
  local_2c[0] = *(uint *)(param_2 + 0x58);
  FFileBase::Write(param_1,(uchar *)local_2c,4);
  local_2c[0] = *(uint *)(param_2 + 8);
  FFileBase::Write(param_1,(uchar *)local_2c,4);
  if (*(int *)(param_2 + 8) != 0) {
    iVar2 = 0;
    uVar5 = 0;
    do {
      uVar5 = uVar5 + 1;
      Save(param_1,(UPreference_TimeOfDay *)(*(int *)(param_2 + 4) + iVar2));
      iVar2 = iVar2 + 0x88;
    } while (uVar5 < *(uint *)(param_2 + 8));
  }
  local_2c[0] = *(uint *)(param_2 + 0x10);
  FFileBase::Write(param_1,(uchar *)local_2c,4);
  if (*(int *)(param_2 + 0x10) != 0) {
    iVar2 = 0;
    uVar5 = 0;
    do {
      uVar5 = uVar5 + 1;
      Save(param_1,(UPreference_CameraSet *)(*(int *)(param_2 + 0xc) + iVar2));
      iVar2 = iVar2 + 0x88;
    } while (uVar5 < *(uint *)(param_2 + 0x10));
  }
  local_2c[0] = *(uint *)(param_2 + 0x18);
  FFileBase::Write(param_1,(uchar *)local_2c,4);
  if (*(int *)(param_2 + 0x18) != 0) {
    iVar2 = 0;
    uVar5 = 0;
    do {
      uVar5 = uVar5 + 1;
      Save(param_1,(UPreference_TextureSwap *)(*(int *)(param_2 + 0x14) + iVar2));
      iVar2 = iVar2 + 0x8c;
    } while (uVar5 < *(uint *)(param_2 + 0x18));
  }
  local_2c[0] = *(uint *)(param_2 + 0x20);
  FFileBase::Write(param_1,(uchar *)local_2c,4);
  if (*(int *)(param_2 + 0x20) != 0) {
    iVar2 = 0;
    uVar5 = 0;
    do {
      uVar5 = uVar5 + 1;
      Save(param_1,(UPreference_ModelToggle *)(*(int *)(param_2 + 0x1c) + iVar2));
      iVar2 = iVar2 + 0x90;
    } while (uVar5 < *(uint *)(param_2 + 0x20));
  }
  local_2c[0] = *(uint *)(param_2 + 0x28);
  FFileBase::Write(param_1,(uchar *)local_2c,4);
  if (*(int *)(param_2 + 0x28) != 0) {
    iVar2 = 0;
    uVar5 = 0;
    do {
      uVar5 = uVar5 + 1;
      Save(param_1,(UPreference_TextureFont *)(*(int *)(param_2 + 0x24) + iVar2));
      iVar2 = iVar2 + 0x90;
    } while (uVar5 < *(uint *)(param_2 + 0x28));
  }
  local_2c[0] = *(uint *)(param_2 + 0x30);
  FFileBase::Write(param_1,(uchar *)local_2c,4);
  if (*(int *)(param_2 + 0x30) != 0) {
    iVar2 = 0;
    uVar5 = 0;
    do {
      uVar5 = uVar5 + 1;
      Save(param_1,(UPreference_TextureGroup *)(*(int *)(param_2 + 0x2c) + iVar2));
      iVar2 = iVar2 + 0x98;
    } while (uVar5 < *(uint *)(param_2 + 0x30));
  }
  local_2c[0] = *(uint *)(param_2 + 0x38);
  FFileBase::Write(param_1,(uchar *)local_2c,4);
  if (*(int *)(param_2 + 0x38) != 0) {
    iVar2 = 0;
    uVar5 = 0;
    do {
      uVar5 = uVar5 + 1;
      Save(param_1,(UPreference_FileChooser_Texture *)(*(int *)(param_2 + 0x34) + iVar2));
      iVar2 = iVar2 + 0x94;
    } while (uVar5 < *(uint *)(param_2 + 0x38));
  }
  local_2c[0] = *(uint *)(param_2 + 0x40);
  FFileBase::Write(param_1,(uchar *)local_2c,4);
  if (*(int *)(param_2 + 0x40) != 0) {
    iVar2 = 0;
    uVar5 = 0;
    do {
      uVar5 = uVar5 + 1;
      Save(param_1,(UPreference_Theme *)(*(int *)(param_2 + 0x3c) + iVar2));
      iVar2 = iVar2 + 0x88;
    } while (uVar5 < *(uint *)(param_2 + 0x40));
  }
  local_2c[0] = *(uint *)(param_2 + 0x48);
  FFileBase::Write(param_1,(uchar *)local_2c,4);
  if (*(int *)(param_2 + 0x48) != 0) {
    iVar2 = 0;
    uVar5 = 0;
    do {
      uVar5 = uVar5 + 1;
      Save(param_1,(UPreference_ModelSwap *)(*(int *)(param_2 + 0x44) + iVar2));
      iVar2 = iVar2 + 0xa0;
    } while (uVar5 < *(uint *)(param_2 + 0x48));
  }
  local_2c[0] = *(uint *)(param_2 + 0x50);
  FFileBase::Write(param_1,(uchar *)local_2c,4);
  if (*(int *)(param_2 + 0x50) != 0) {
    iVar2 = 0;
    uVar5 = 0;
    do {
      uVar5 = uVar5 + 1;
      Save(param_1,(UPreference_IAB *)(*(int *)(param_2 + 0x4c) + iVar2));
      iVar2 = iVar2 + 0x8c;
    } while (uVar5 < *(uint *)(param_2 + 0x50));
  }
  local_2c[0] = *(uint *)(param_2 + 0x58);
  FFileBase::Write(param_1,(uchar *)local_2c,4);
  if (*(int *)(param_2 + 0x58) != 0) {
    iVar2 = 0;
    uVar5 = 0;
    do {
      uVar5 = uVar5 + 1;
      Save(param_1,(UPreference_Environment *)(*(int *)(param_2 + 0x54) + iVar2));
      iVar2 = iVar2 + 0x88;
    } while (uVar5 < *(uint *)(param_2 + 0x58));
  }
  iVar2 = *(int *)(param_2 + 0x38);
  if (iVar2 != 0) {
    iVar3 = 0;
    iVar6 = 0;
    do {
      local_2c[0] = *(uint *)(*(int *)(param_2 + 0x34) + iVar3 + 0x88);
      iVar6 = iVar6 + 1;
      FFileBase::Write(param_1,(uchar *)local_2c,4);
      iVar3 = iVar3 + 0x94;
    } while (iVar6 != iVar2);
  }
  local_2c[0] = UPreference_Scene::GetNumMultiPrefs(param_2);
  FFileBase::Write(param_1,(uchar *)local_2c,4);
  iVar2 = UPreference_Scene::GetNumMultiPrefs(param_2);
  iVar3 = 0;
  uVar5 = 0;
  if (iVar2 != 0) {
    do {
      iVar2 = *(int *)(param_2 + 100) + iVar3;
      uVar7 = *(int *)(iVar2 + 0x14) - *(int *)(iVar2 + 0x18);
      local_2c[0] = uVar7;
      FFileBase::Write(param_1,(uchar *)local_2c,4);
      if (uVar7 != 0) {
        iVar6 = *(int *)(iVar2 + 0x18);
        if (iVar6 == *(int *)(iVar2 + 0x14)) {
LAB_00058554:
                    /* WARNING: Subroutine does not return */
          std::__stl_throw_out_of_range((char *)((int)&DAT_00058560 + DAT_00058560));
        }
        uVar4 = 0;
        while( true ) {
          puVar1 = (undefined1 *)(iVar6 + uVar4);
          uVar4 = uVar4 + 1;
          local_2c[0] = CONCAT31(local_2c[0]._1_3_,*puVar1);
          FFileBase::Write(param_1,(uchar *)local_2c,1);
          if (uVar7 == uVar4) break;
          iVar6 = *(int *)(iVar2 + 0x18);
          if ((uint)(*(int *)(iVar2 + 0x14) - iVar6) <= uVar4) goto LAB_00058554;
        }
      }
      uVar5 = uVar5 + 1;
      Save<char,int>(param_1,(UStringBase *)(*(int *)(param_2 + 0x6c) + iVar3));
      uVar7 = UPreference_Scene::GetNumMultiPrefs(param_2);
      iVar3 = iVar3 + 0x1c;
    } while (uVar5 < uVar7);
  }
  return;
}

