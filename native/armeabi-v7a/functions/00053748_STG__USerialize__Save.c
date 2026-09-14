/* 00053748 | STG::USerialize::Save */

/* STG::USerialize::Save(STG::FFileBase*, STG::UPreference_Scene const&) */

void STG::USerialize::Save(FFileBase *param_1,UPreference_Scene *param_2)

{
  undefined1 *puVar1;
  UPreference_TimeOfDay *pUVar2;
  UPreference_CameraSet *pUVar3;
  UPreference_TextureSwap *pUVar4;
  UPreference_ModelToggle *pUVar5;
  UPreference_TextureFont *pUVar6;
  UPreference_TextureGroup *pUVar7;
  UPreference_FileChooser_Texture *pUVar8;
  UPreference_Theme *pUVar9;
  UPreference_ModelSwap *pUVar10;
  UPreference_IAB *pUVar11;
  UPreference_Environment *pUVar12;
  UStringBase *pUVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
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
    iVar15 = 0;
    uVar18 = 0;
    do {
      uVar18 = uVar18 + 1;
      pUVar2 = (UPreference_TimeOfDay *)(*(int *)(param_2 + 4) + iVar15);
      iVar15 = iVar15 + 0x88;
      Save(param_1,pUVar2);
    } while (uVar18 < *(uint *)(param_2 + 8));
  }
  local_2c[0] = *(uint *)(param_2 + 0x10);
  FFileBase::Write(param_1,(uchar *)local_2c,4);
  if (*(int *)(param_2 + 0x10) != 0) {
    iVar15 = 0;
    uVar18 = 0;
    do {
      uVar18 = uVar18 + 1;
      pUVar3 = (UPreference_CameraSet *)(*(int *)(param_2 + 0xc) + iVar15);
      iVar15 = iVar15 + 0x88;
      Save(param_1,pUVar3);
    } while (uVar18 < *(uint *)(param_2 + 0x10));
  }
  local_2c[0] = *(uint *)(param_2 + 0x18);
  FFileBase::Write(param_1,(uchar *)local_2c,4);
  if (*(int *)(param_2 + 0x18) != 0) {
    iVar15 = 0;
    uVar18 = 0;
    do {
      uVar18 = uVar18 + 1;
      pUVar4 = (UPreference_TextureSwap *)(*(int *)(param_2 + 0x14) + iVar15);
      iVar15 = iVar15 + 0x8c;
      Save(param_1,pUVar4);
    } while (uVar18 < *(uint *)(param_2 + 0x18));
  }
  local_2c[0] = *(uint *)(param_2 + 0x20);
  FFileBase::Write(param_1,(uchar *)local_2c,4);
  if (*(int *)(param_2 + 0x20) != 0) {
    iVar15 = 0;
    uVar18 = 0;
    do {
      uVar18 = uVar18 + 1;
      pUVar5 = (UPreference_ModelToggle *)(*(int *)(param_2 + 0x1c) + iVar15);
      iVar15 = iVar15 + 0x90;
      Save(param_1,pUVar5);
    } while (uVar18 < *(uint *)(param_2 + 0x20));
  }
  local_2c[0] = *(uint *)(param_2 + 0x28);
  FFileBase::Write(param_1,(uchar *)local_2c,4);
  if (*(int *)(param_2 + 0x28) != 0) {
    iVar15 = 0;
    uVar18 = 0;
    do {
      uVar18 = uVar18 + 1;
      pUVar6 = (UPreference_TextureFont *)(*(int *)(param_2 + 0x24) + iVar15);
      iVar15 = iVar15 + 0x90;
      Save(param_1,pUVar6);
    } while (uVar18 < *(uint *)(param_2 + 0x28));
  }
  local_2c[0] = *(uint *)(param_2 + 0x30);
  FFileBase::Write(param_1,(uchar *)local_2c,4);
  if (*(int *)(param_2 + 0x30) != 0) {
    iVar15 = 0;
    uVar18 = 0;
    do {
      uVar18 = uVar18 + 1;
      pUVar7 = (UPreference_TextureGroup *)(*(int *)(param_2 + 0x2c) + iVar15);
      iVar15 = iVar15 + 0x98;
      Save(param_1,pUVar7);
    } while (uVar18 < *(uint *)(param_2 + 0x30));
  }
  local_2c[0] = *(uint *)(param_2 + 0x38);
  FFileBase::Write(param_1,(uchar *)local_2c,4);
  if (*(int *)(param_2 + 0x38) != 0) {
    iVar15 = 0;
    uVar18 = 0;
    do {
      uVar18 = uVar18 + 1;
      pUVar8 = (UPreference_FileChooser_Texture *)(*(int *)(param_2 + 0x34) + iVar15);
      iVar15 = iVar15 + 0x94;
      Save(param_1,pUVar8);
    } while (uVar18 < *(uint *)(param_2 + 0x38));
  }
  local_2c[0] = *(uint *)(param_2 + 0x40);
  FFileBase::Write(param_1,(uchar *)local_2c,4);
  if (*(int *)(param_2 + 0x40) != 0) {
    iVar15 = 0;
    uVar18 = 0;
    do {
      uVar18 = uVar18 + 1;
      pUVar9 = (UPreference_Theme *)(*(int *)(param_2 + 0x3c) + iVar15);
      iVar15 = iVar15 + 0x88;
      Save(param_1,pUVar9);
    } while (uVar18 < *(uint *)(param_2 + 0x40));
  }
  local_2c[0] = *(uint *)(param_2 + 0x48);
  FFileBase::Write(param_1,(uchar *)local_2c,4);
  if (*(int *)(param_2 + 0x48) != 0) {
    iVar15 = 0;
    uVar18 = 0;
    do {
      uVar18 = uVar18 + 1;
      pUVar10 = (UPreference_ModelSwap *)(*(int *)(param_2 + 0x44) + iVar15);
      iVar15 = iVar15 + 0xa0;
      Save(param_1,pUVar10);
    } while (uVar18 < *(uint *)(param_2 + 0x48));
  }
  local_2c[0] = *(uint *)(param_2 + 0x50);
  FFileBase::Write(param_1,(uchar *)local_2c,4);
  if (*(int *)(param_2 + 0x50) != 0) {
    iVar15 = 0;
    uVar18 = 0;
    do {
      uVar18 = uVar18 + 1;
      pUVar11 = (UPreference_IAB *)(*(int *)(param_2 + 0x4c) + iVar15);
      iVar15 = iVar15 + 0x8c;
      Save(param_1,pUVar11);
    } while (uVar18 < *(uint *)(param_2 + 0x50));
  }
  local_2c[0] = *(uint *)(param_2 + 0x58);
  FFileBase::Write(param_1,(uchar *)local_2c,4);
  if (*(int *)(param_2 + 0x58) != 0) {
    iVar15 = 0;
    uVar18 = 0;
    do {
      uVar18 = uVar18 + 1;
      pUVar12 = (UPreference_Environment *)(*(int *)(param_2 + 0x54) + iVar15);
      iVar15 = iVar15 + 0x88;
      Save(param_1,pUVar12);
    } while (uVar18 < *(uint *)(param_2 + 0x58));
  }
  iVar15 = *(int *)(param_2 + 0x38);
  if (iVar15 != 0) {
    iVar16 = 0;
    iVar19 = 0;
    do {
      iVar14 = *(int *)(param_2 + 0x34) + iVar16;
      iVar19 = iVar19 + 1;
      iVar16 = iVar16 + 0x94;
      local_2c[0] = *(uint *)(iVar14 + 0x88);
      FFileBase::Write(param_1,(uchar *)local_2c,4);
    } while (iVar19 != iVar15);
  }
  iVar16 = 0;
  local_2c[0] = UPreference_Scene::GetNumMultiPrefs(param_2);
  uVar18 = 0;
  FFileBase::Write(param_1,(uchar *)local_2c,4);
  iVar15 = UPreference_Scene::GetNumMultiPrefs(param_2);
  if (iVar15 != 0) {
    do {
      iVar15 = *(int *)(param_2 + 100) + iVar16;
      uVar20 = *(int *)(iVar15 + 0x14) - *(int *)(iVar15 + 0x18);
      local_2c[0] = uVar20;
      FFileBase::Write(param_1,(uchar *)local_2c,4);
      if (uVar20 != 0) {
        iVar19 = *(int *)(iVar15 + 0x18);
        if (iVar19 == *(int *)(iVar15 + 0x14)) {
LAB_00053d10:
                    /* WARNING: Subroutine does not return */
          std::__stl_throw_out_of_range((char *)((int)&DAT_00053d1c + DAT_00053d1c));
        }
        uVar17 = 0;
        while( true ) {
          puVar1 = (undefined1 *)(iVar19 + uVar17);
          uVar17 = uVar17 + 1;
          local_2c[0] = CONCAT31(local_2c[0]._1_3_,*puVar1);
          FFileBase::Write(param_1,(uchar *)local_2c,1);
          if (uVar20 == uVar17) break;
          iVar19 = *(int *)(iVar15 + 0x18);
          if ((uint)(*(int *)(iVar15 + 0x14) - iVar19) <= uVar17) goto LAB_00053d10;
        }
      }
      uVar18 = uVar18 + 1;
      pUVar13 = (UStringBase *)(*(int *)(param_2 + 0x6c) + iVar16);
      iVar16 = iVar16 + 0x1c;
      Save<char,int>(param_1,pUVar13);
      uVar20 = UPreference_Scene::GetNumMultiPrefs(param_2);
    } while (uVar18 < uVar20);
  }
  return;
}

