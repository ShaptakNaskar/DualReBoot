/* 000591b4 | STG::USerialize::Load */

/* STG::USerialize::Load(STG::FFileBase const*, STG::UPreference_Scene&) */

void STG::USerialize::Load(FFileBase *param_1,UPreference_Scene *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  UPreference_TimeOfDay *pUVar3;
  UPreference_CameraSet *pUVar4;
  UPreference_TextureSwap *pUVar5;
  UPreference_ModelToggle *pUVar6;
  UPreference_TextureFont *pUVar7;
  UPreference_TextureGroup *pUVar8;
  UPreference_FileChooser_Texture *pUVar9;
  UPreference_Theme *pUVar10;
  UPreference_ModelSwap *pUVar11;
  UPreference_IAB *pUVar12;
  UPreference_Environment *pUVar13;
  int iVar14;
  int *piVar15;
  int iVar16;
  int iVar17;
  ulong uVar18;
  uint uVar19;
  UPreferenceBase *pUVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  uint local_9c;
  GETimeOfDay aGStack_98 [8];
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  _String_base<char,std::allocator<char>> a_Stack_60 [24];
  int local_48;
  _String_base<char,std::allocator<char>> a_Stack_44 [24];
  int local_2c;
  
  iVar14 = DAT_0005a144 + 0x591d4;
  piVar15 = *(int **)(iVar14 + DAT_0005a148);
  local_2c = *piVar15;
  FFileBase::Read(param_1,(uchar *)&local_9c,4);
  uVar19 = local_9c;
  local_90 = 0;
  local_8c = 0;
  local_88 = 0;
  local_84 = 0;
  local_80 = 0;
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  local_70 = 0;
  local_6c = 0;
  local_68 = 0;
  FFileBase::Read(param_1,(uchar *)&local_90,4);
  FFileBase::Read(param_1,(uchar *)&local_8c,4);
  FFileBase::Read(param_1,(uchar *)&local_88,4);
  FFileBase::Read(param_1,(uchar *)&local_80,4);
  FFileBase::Read(param_1,(uchar *)&local_78,4);
  if ((((uVar19 < 2) || (FFileBase::Read(param_1,(uchar *)&local_84,4), uVar19 == 2)) ||
      (FFileBase::Read(param_1,(uchar *)&local_74,4), uVar19 == 3)) ||
     (((FFileBase::Read(param_1,(uchar *)&local_70,4), uVar19 < 6 ||
       (FFileBase::Read(param_1,(uchar *)&local_7c,4), uVar19 < 8)) ||
      (FFileBase::Read(param_1,(uchar *)&local_6c,4), uVar19 == 8)))) {
    local_90 = 1;
    local_8c = 1;
  }
  else {
    FFileBase::Read(param_1,(uchar *)&local_68,4);
  }
  UPreference_Scene::Initialize(param_2,(InitData *)&local_90);
  FFileBase::Read(param_1,(uchar *)&local_9c,4);
  uVar22 = local_9c;
  if (local_9c != *(uint *)(param_2 + 8)) {
    if (*(uint *)(param_2 + 8) != 0) {
      iVar1 = *(int *)(param_2 + 4);
      if (iVar1 != 0) {
        iVar21 = iVar1 + *(int *)(iVar1 + -4) * 0x88;
        if (iVar1 != iVar21) {
          do {
            iVar17 = iVar21 + -0x88;
            (**(code **)(*(int *)(iVar21 + -0x88) + 0x38))(iVar17);
            iVar1 = *(int *)(param_2 + 4);
            iVar21 = iVar17;
          } while (iVar1 != iVar17);
        }
        operator_delete__((void *)(iVar1 + -8));
      }
      *(undefined4 *)(param_2 + 4) = 0;
    }
    *(uint *)(param_2 + 8) = uVar22;
    if (uVar22 != 0) {
      iVar1 = uVar22 - 1;
      puVar2 = operator_new__(uVar22 * 0x88 + 8);
      puVar2[1] = uVar22;
      *puVar2 = 0x88;
      if (iVar1 != -1) {
        iVar21 = *(int *)(iVar14 + DAT_0005a154);
        pUVar20 = (UPreferenceBase *)(puVar2 + 2);
        do {
          iVar1 = iVar1 + -1;
          UPreferenceBase::UPreferenceBase(pUVar20);
          *(undefined4 *)(pUVar20 + 0x7c) = 0;
          *(undefined4 *)(pUVar20 + 0x80) = 0;
          *(undefined4 *)(pUVar20 + 0x84) = 0;
          *(int *)pUVar20 = iVar21 + 8;
          pUVar20 = pUVar20 + 0x88;
        } while (iVar1 != -1);
      }
      *(UPreferenceBase **)(param_2 + 4) = (UPreferenceBase *)(puVar2 + 2);
    }
  }
  if (local_9c != 0) {
    iVar1 = 0;
    uVar22 = 0;
    do {
      uVar22 = uVar22 + 1;
      pUVar3 = (UPreference_TimeOfDay *)(*(int *)(param_2 + 4) + iVar1);
      iVar1 = iVar1 + 0x88;
      Load(param_1,pUVar3);
    } while (uVar22 < local_9c);
  }
  FFileBase::Read(param_1,(uchar *)&local_9c,4);
  uVar22 = local_9c;
  if (local_9c != *(uint *)(param_2 + 0x10)) {
    if (*(uint *)(param_2 + 0x10) != 0) {
      iVar1 = *(int *)(param_2 + 0xc);
      if (iVar1 != 0) {
        iVar21 = iVar1 + *(int *)(iVar1 + -4) * 0x88;
        if (iVar1 != iVar21) {
          do {
            iVar17 = iVar21 + -0x88;
            (**(code **)(*(int *)(iVar21 + -0x88) + 0x38))(iVar17);
            iVar1 = *(int *)(param_2 + 0xc);
            iVar21 = iVar17;
          } while (iVar1 != iVar17);
        }
        operator_delete__((void *)(iVar1 + -8));
      }
      *(undefined4 *)(param_2 + 0xc) = 0;
    }
    *(uint *)(param_2 + 0x10) = uVar22;
    if (uVar22 != 0) {
      iVar1 = uVar22 - 1;
      puVar2 = operator_new__(uVar22 * 0x88 + 8);
      puVar2[1] = uVar22;
      *puVar2 = 0x88;
      if (iVar1 != -1) {
        iVar21 = *(int *)(iVar14 + DAT_0005a150);
        pUVar20 = (UPreferenceBase *)(puVar2 + 2);
        do {
          iVar1 = iVar1 + -1;
          UPreferenceBase::UPreferenceBase(pUVar20);
          *(undefined4 *)(pUVar20 + 0x7c) = 0;
          *(undefined4 *)(pUVar20 + 0x80) = 0;
          *(undefined4 *)(pUVar20 + 0x84) = 0;
          *(int *)pUVar20 = iVar21 + 8;
          pUVar20 = pUVar20 + 0x88;
        } while (iVar1 != -1);
      }
      *(UPreferenceBase **)(param_2 + 0xc) = (UPreferenceBase *)(puVar2 + 2);
    }
  }
  if (local_9c != 0) {
    iVar1 = 0;
    uVar22 = 0;
    do {
      uVar22 = uVar22 + 1;
      pUVar4 = (UPreference_CameraSet *)(*(int *)(param_2 + 0xc) + iVar1);
      iVar1 = iVar1 + 0x88;
      Load(param_1,pUVar4);
    } while (uVar22 < local_9c);
  }
  FFileBase::Read(param_1,(uchar *)&local_9c,4);
  uVar22 = local_9c;
  if (local_9c != *(uint *)(param_2 + 0x18)) {
    if (*(uint *)(param_2 + 0x18) != 0) {
      iVar1 = *(int *)(param_2 + 0x14);
      if (iVar1 != 0) {
        iVar21 = *(int *)(iVar1 + -4) * 0x8c + iVar1;
        if (iVar1 != iVar21) {
          do {
            iVar17 = iVar21 + -0x8c;
            (**(code **)(*(int *)(iVar21 + -0x8c) + 0x38))(iVar17);
            iVar1 = *(int *)(param_2 + 0x14);
            iVar21 = iVar17;
          } while (iVar1 != iVar17);
        }
        operator_delete__((void *)(iVar1 + -8));
      }
      *(undefined4 *)(param_2 + 0x14) = 0;
    }
    *(uint *)(param_2 + 0x18) = uVar22;
    if (uVar22 != 0) {
      puVar2 = operator_new__(uVar22 * 0x8c + 8);
      puVar2[1] = uVar22;
      *puVar2 = 0x8c;
      pUVar5 = (UPreference_TextureSwap *)(puVar2 + 2);
      while (uVar22 = uVar22 - 1, uVar22 != 0xffffffff) {
        UPreference_TextureSwap::UPreference_TextureSwap(pUVar5);
        pUVar5 = pUVar5 + 0x8c;
      }
      *(UPreference_TextureSwap **)(param_2 + 0x14) = (UPreference_TextureSwap *)(puVar2 + 2);
    }
  }
  if (local_9c != 0) {
    iVar1 = 0;
    uVar22 = 0;
    do {
      uVar22 = uVar22 + 1;
      pUVar5 = (UPreference_TextureSwap *)(*(int *)(param_2 + 0x14) + iVar1);
      iVar1 = iVar1 + 0x8c;
      Load(param_1,pUVar5);
    } while (uVar22 < local_9c);
  }
  FFileBase::Read(param_1,(uchar *)&local_9c,4);
  uVar22 = local_9c;
  if (local_9c != *(uint *)(param_2 + 0x20)) {
    if (*(uint *)(param_2 + 0x20) != 0) {
      iVar1 = *(int *)(param_2 + 0x1c);
      if (iVar1 != 0) {
        iVar21 = iVar1 + *(int *)(iVar1 + -4) * 0x90;
        if (iVar1 != iVar21) {
          do {
            iVar17 = iVar21 + -0x90;
            (**(code **)(*(int *)(iVar21 + -0x90) + 0x38))(iVar17);
            iVar1 = *(int *)(param_2 + 0x1c);
            iVar21 = iVar17;
          } while (iVar1 != iVar17);
        }
        operator_delete__((void *)(iVar1 + -8));
      }
      *(undefined4 *)(param_2 + 0x1c) = 0;
    }
    *(uint *)(param_2 + 0x20) = uVar22;
    if (uVar22 != 0) {
      puVar2 = operator_new__(uVar22 * 0x90 + 8);
      puVar2[1] = uVar22;
      *puVar2 = 0x90;
      pUVar6 = (UPreference_ModelToggle *)(puVar2 + 2);
      while (uVar22 = uVar22 - 1, uVar22 != 0xffffffff) {
        UPreference_ModelToggle::UPreference_ModelToggle(pUVar6);
        pUVar6 = pUVar6 + 0x90;
      }
      *(UPreference_ModelToggle **)(param_2 + 0x1c) = (UPreference_ModelToggle *)(puVar2 + 2);
    }
  }
  if (local_9c != 0) {
    iVar1 = 0;
    uVar22 = 0;
    do {
      uVar22 = uVar22 + 1;
      pUVar6 = (UPreference_ModelToggle *)(*(int *)(param_2 + 0x1c) + iVar1);
      iVar1 = iVar1 + 0x90;
      Load(param_1,pUVar6);
    } while (uVar22 < local_9c);
  }
  FFileBase::Read(param_1,(uchar *)&local_9c,4);
  uVar22 = local_9c;
  if (local_9c != *(uint *)(param_2 + 0x28)) {
    if (*(uint *)(param_2 + 0x28) != 0) {
      iVar1 = *(int *)(param_2 + 0x24);
      if (iVar1 != 0) {
        iVar21 = iVar1 + *(int *)(iVar1 + -4) * 0x90;
        if (iVar1 != iVar21) {
          do {
            iVar17 = iVar21 + -0x90;
            (**(code **)(*(int *)(iVar21 + -0x90) + 0x38))(iVar17);
            iVar1 = *(int *)(param_2 + 0x24);
            iVar21 = iVar17;
          } while (iVar1 != iVar17);
        }
        operator_delete__((void *)(iVar1 + -8));
      }
      *(undefined4 *)(param_2 + 0x24) = 0;
    }
    *(uint *)(param_2 + 0x28) = uVar22;
    if (uVar22 != 0) {
      puVar2 = operator_new__(uVar22 * 0x90 + 8);
      puVar2[1] = uVar22;
      *puVar2 = 0x90;
      pUVar7 = (UPreference_TextureFont *)(puVar2 + 2);
      while (uVar22 = uVar22 - 1, uVar22 != 0xffffffff) {
        UPreference_TextureFont::UPreference_TextureFont(pUVar7);
        pUVar7 = pUVar7 + 0x90;
      }
      *(UPreference_TextureFont **)(param_2 + 0x24) = (UPreference_TextureFont *)(puVar2 + 2);
    }
  }
  if (local_9c != 0) {
    iVar1 = 0;
    uVar22 = 0;
    do {
      uVar22 = uVar22 + 1;
      pUVar7 = (UPreference_TextureFont *)(*(int *)(param_2 + 0x24) + iVar1);
      iVar1 = iVar1 + 0x90;
      Load(param_1,pUVar7);
    } while (uVar22 < local_9c);
  }
  if (uVar19 < 2) {
LAB_00059c5c:
    if (3 < uVar19 - 5) goto LAB_00059c68;
  }
  else {
    FFileBase::Read(param_1,(uchar *)&local_9c,4);
    uVar22 = local_9c;
    if (local_9c != *(uint *)(param_2 + 0x30)) {
      if (*(uint *)(param_2 + 0x30) != 0) {
        iVar1 = *(int *)(param_2 + 0x2c);
        if (iVar1 != 0) {
          iVar21 = *(int *)(iVar1 + -4) * 0x98 + iVar1;
          if (iVar1 != iVar21) {
            do {
              iVar17 = iVar21 + -0x98;
              (**(code **)(*(int *)(iVar21 + -0x98) + 0x38))(iVar17);
              iVar1 = *(int *)(param_2 + 0x2c);
              iVar21 = iVar17;
            } while (iVar1 != iVar17);
          }
          operator_delete__((void *)(iVar1 + -8));
        }
        *(undefined4 *)(param_2 + 0x2c) = 0;
      }
      *(uint *)(param_2 + 0x30) = uVar22;
      if (uVar22 != 0) {
        puVar2 = operator_new__(uVar22 * 0x98 + 8);
        puVar2[1] = uVar22;
        *puVar2 = 0x98;
        pUVar8 = (UPreference_TextureGroup *)(puVar2 + 2);
        while (uVar22 = uVar22 - 1, uVar22 != 0xffffffff) {
          UPreference_TextureGroup::UPreference_TextureGroup(pUVar8);
          pUVar8 = pUVar8 + 0x98;
        }
        *(UPreference_TextureGroup **)(param_2 + 0x2c) = (UPreference_TextureGroup *)(puVar2 + 2);
      }
    }
    if (local_9c != 0) {
      iVar1 = 0;
      uVar22 = 0;
      do {
        uVar22 = uVar22 + 1;
        pUVar8 = (UPreference_TextureGroup *)(*(int *)(param_2 + 0x2c) + iVar1);
        iVar1 = iVar1 + 0x98;
        Load(param_1,pUVar8);
      } while (uVar22 < local_9c);
    }
    uVar22 = *(uint *)(param_2 + 0x30);
    if (uVar22 != 0) {
      iVar1 = 0;
      uVar23 = 0;
      do {
        pUVar8 = (UPreference_TextureGroup *)(*(int *)(param_2 + 0x2c) + iVar1);
        if (*(int *)(pUVar8 + 0x94) != 0) {
          uVar18 = 0;
          do {
            uVar22 = uVar18 + 1;
            UPreference_TextureGroup::SetChild
                      (pUVar8,uVar18,
                       (UPreference_TextureSwap *)
                       (*(int *)(*(int *)(pUVar8 + 0x88) + uVar18 * 4) * 0x8c +
                       *(int *)(param_2 + 0x14)));
            uVar18 = uVar22;
          } while (uVar22 < *(uint *)(pUVar8 + 0x94));
          uVar22 = *(uint *)(param_2 + 0x30);
        }
        uVar23 = uVar23 + 1;
        iVar1 = iVar1 + 0x98;
      } while (uVar23 < uVar22);
    }
    if (uVar19 == 2) goto LAB_00059c5c;
    FFileBase::Read(param_1,(uchar *)&local_9c,4);
    uVar22 = local_9c;
    if (local_9c != *(uint *)(param_2 + 0x38)) {
      if (*(uint *)(param_2 + 0x38) != 0) {
        iVar1 = *(int *)(param_2 + 0x34);
        if (iVar1 != 0) {
          iVar21 = *(int *)(iVar1 + -4) * 0x94 + iVar1;
          if (iVar1 != iVar21) {
            do {
              iVar17 = iVar21 + -0x94;
              (**(code **)(*(int *)(iVar21 + -0x94) + 0x38))(iVar17);
              iVar1 = *(int *)(param_2 + 0x34);
              iVar21 = iVar17;
            } while (iVar1 != iVar17);
          }
          operator_delete__((void *)(iVar1 + -8));
        }
        *(undefined4 *)(param_2 + 0x34) = 0;
      }
      *(uint *)(param_2 + 0x38) = uVar22;
      if (uVar22 != 0) {
        puVar2 = operator_new__(uVar22 * 0x94 + 8);
        puVar2[1] = uVar22;
        *puVar2 = 0x94;
        pUVar9 = (UPreference_FileChooser_Texture *)(puVar2 + 2);
        while (uVar22 = uVar22 - 1, uVar22 != 0xffffffff) {
          UPreference_FileChooser_Texture::UPreference_FileChooser_Texture(pUVar9);
          pUVar9 = pUVar9 + 0x94;
        }
        *(UPreference_FileChooser_Texture **)(param_2 + 0x34) =
             (UPreference_FileChooser_Texture *)(puVar2 + 2);
      }
    }
    if (local_9c != 0) {
      iVar1 = 0;
      uVar22 = 0;
      do {
        uVar22 = uVar22 + 1;
        pUVar9 = (UPreference_FileChooser_Texture *)(*(int *)(param_2 + 0x34) + iVar1);
        iVar1 = iVar1 + 0x94;
        Load(param_1,pUVar9);
      } while (uVar22 < local_9c);
    }
    if (uVar19 == 3) goto LAB_00059c5c;
    FFileBase::Read(param_1,(uchar *)&local_9c,4);
    uVar22 = local_9c;
    if (local_9c != *(uint *)(param_2 + 0x40)) {
      if (*(uint *)(param_2 + 0x40) != 0) {
        iVar1 = *(int *)(param_2 + 0x3c);
        if (iVar1 != 0) {
          iVar21 = iVar1 + *(int *)(iVar1 + -4) * 0x88;
          if (iVar1 != iVar21) {
            do {
              iVar17 = iVar21 + -0x88;
              (**(code **)(*(int *)(iVar21 + -0x88) + 0x38))(iVar17);
              iVar1 = *(int *)(param_2 + 0x3c);
              iVar21 = iVar17;
            } while (iVar1 != iVar17);
          }
          operator_delete__((void *)(iVar1 + -8));
        }
        *(undefined4 *)(param_2 + 0x3c) = 0;
      }
      *(uint *)(param_2 + 0x40) = uVar22;
      if (uVar22 != 0) {
        iVar1 = uVar22 - 1;
        puVar2 = operator_new__(uVar22 * 0x88 + 8);
        puVar2[1] = uVar22;
        *puVar2 = 0x88;
        if (iVar1 != -1) {
          iVar21 = *(int *)(iVar14 + DAT_0005a15c);
          pUVar20 = (UPreferenceBase *)(puVar2 + 2);
          do {
            iVar1 = iVar1 + -1;
            UPreferenceBase::UPreferenceBase(pUVar20);
            *(undefined4 *)(pUVar20 + 0x7c) = 0;
            *(undefined4 *)(pUVar20 + 0x80) = 0;
            *(undefined4 *)(pUVar20 + 0x84) = 0;
            *(int *)pUVar20 = iVar21 + 8;
            pUVar20 = pUVar20 + 0x88;
          } while (iVar1 != -1);
        }
        *(UPreferenceBase **)(param_2 + 0x3c) = (UPreferenceBase *)(puVar2 + 2);
      }
    }
    if (local_9c != 0) {
      iVar1 = 0;
      uVar22 = 0;
      do {
        uVar22 = uVar22 + 1;
        pUVar10 = (UPreference_Theme *)(*(int *)(param_2 + 0x3c) + iVar1);
        iVar1 = iVar1 + 0x88;
        Load(param_1,pUVar10);
      } while (uVar22 < local_9c);
    }
    if (uVar19 < 6) goto LAB_00059c5c;
    FFileBase::Read(param_1,(uchar *)&local_9c,4);
    uVar22 = local_9c;
    if (local_9c != *(uint *)(param_2 + 0x48)) {
      if (*(uint *)(param_2 + 0x48) != 0) {
        iVar1 = *(int *)(param_2 + 0x44);
        if (iVar1 != 0) {
          iVar21 = iVar1 + *(int *)(iVar1 + -4) * 0xa0;
          if (iVar1 != iVar21) {
            do {
              iVar17 = iVar21 + -0xa0;
              (**(code **)(*(int *)(iVar21 + -0xa0) + 0x38))(iVar17);
              iVar1 = *(int *)(param_2 + 0x44);
              iVar21 = iVar17;
            } while (iVar1 != iVar17);
          }
          operator_delete__((void *)(iVar1 + -8));
        }
        *(undefined4 *)(param_2 + 0x44) = 0;
      }
      *(uint *)(param_2 + 0x48) = uVar22;
      if (uVar22 != 0) {
        puVar2 = operator_new__(uVar22 * 0xa0 + 8);
        puVar2[1] = uVar22;
        *puVar2 = 0xa0;
        pUVar11 = (UPreference_ModelSwap *)(puVar2 + 2);
        while (uVar22 = uVar22 - 1, uVar22 != 0xffffffff) {
          UPreference_ModelSwap::UPreference_ModelSwap(pUVar11);
          pUVar11 = pUVar11 + 0xa0;
        }
        *(UPreference_ModelSwap **)(param_2 + 0x44) = (UPreference_ModelSwap *)(puVar2 + 2);
      }
    }
    if (local_9c != 0) {
      iVar1 = 0;
      uVar22 = 0;
      do {
        uVar22 = uVar22 + 1;
        pUVar11 = (UPreference_ModelSwap *)(*(int *)(param_2 + 0x44) + iVar1);
        iVar1 = iVar1 + 0xa0;
        Load(param_1,pUVar11);
      } while (uVar22 < local_9c);
    }
    if (uVar19 < 8) goto LAB_00059c5c;
    FFileBase::Read(param_1,(uchar *)&local_9c,4);
    uVar22 = local_9c;
    if (local_9c != *(uint *)(param_2 + 0x50)) {
      if (*(uint *)(param_2 + 0x50) != 0) {
        iVar1 = *(int *)(param_2 + 0x4c);
        if (iVar1 != 0) {
          iVar21 = *(int *)(iVar1 + -4) * 0x8c + iVar1;
          if (iVar1 != iVar21) {
            do {
              iVar17 = iVar21 + -0x8c;
              (**(code **)(*(int *)(iVar21 + -0x8c) + 0x38))(iVar17);
              iVar1 = *(int *)(param_2 + 0x4c);
              iVar21 = iVar17;
            } while (iVar1 != iVar17);
          }
          operator_delete__((void *)(iVar1 + -8));
        }
        *(undefined4 *)(param_2 + 0x4c) = 0;
      }
      *(uint *)(param_2 + 0x50) = uVar22;
      if (uVar22 != 0) {
        iVar1 = uVar22 - 1;
        puVar2 = operator_new__(uVar22 * 0x8c + 8);
        *puVar2 = 0x8c;
        puVar2[1] = uVar22;
        if (iVar1 != -1) {
          iVar21 = *(int *)(iVar14 + DAT_0005a160);
          pUVar20 = (UPreferenceBase *)(puVar2 + 2);
          do {
            iVar1 = iVar1 + -1;
            UPreferenceBase::UPreferenceBase(pUVar20);
            *(undefined4 *)(pUVar20 + 0x7c) = 0;
            *(undefined4 *)(pUVar20 + 0x80) = 0;
            *(undefined4 *)(pUVar20 + 0x84) = 0;
            *(int *)pUVar20 = iVar21 + 8;
            pUVar20[0x88] = (UPreferenceBase)0x0;
            pUVar20 = pUVar20 + 0x8c;
          } while (iVar1 != -1);
        }
        *(UPreferenceBase **)(param_2 + 0x4c) = (UPreferenceBase *)(puVar2 + 2);
      }
    }
    if (local_9c != 0) {
      iVar1 = 0;
      uVar22 = 0;
      do {
        uVar22 = uVar22 + 1;
        pUVar12 = (UPreference_IAB *)(*(int *)(param_2 + 0x4c) + iVar1);
        iVar1 = iVar1 + 0x8c;
        Load(param_1,pUVar12);
      } while (uVar22 < local_9c);
    }
    if (uVar19 != 8) {
      FFileBase::Read(param_1,(uchar *)&local_9c,4);
      uVar22 = local_9c;
      if (local_9c != *(uint *)(param_2 + 0x58)) {
        if (*(uint *)(param_2 + 0x58) != 0) {
          iVar1 = *(int *)(param_2 + 0x54);
          if (iVar1 != 0) {
            iVar21 = iVar1 + *(int *)(iVar1 + -4) * 0x88;
            if (iVar1 != iVar21) {
              do {
                iVar17 = iVar21 + -0x88;
                (**(code **)(*(int *)(iVar21 + -0x88) + 0x38))(iVar17);
                iVar1 = *(int *)(param_2 + 0x54);
                iVar21 = iVar17;
              } while (iVar17 != iVar1);
            }
            operator_delete__((void *)(iVar1 + -8));
          }
          *(undefined4 *)(param_2 + 0x54) = 0;
        }
        *(uint *)(param_2 + 0x58) = uVar22;
        if (uVar22 != 0) {
          iVar1 = uVar22 - 1;
          puVar2 = operator_new__(uVar22 * 0x88 + 8);
          puVar2[1] = uVar22;
          *puVar2 = 0x88;
          if (iVar1 != -1) {
            iVar21 = *(int *)(iVar14 + DAT_0005a158);
            pUVar20 = (UPreferenceBase *)(puVar2 + 2);
            do {
              iVar1 = iVar1 + -1;
              UPreferenceBase::UPreferenceBase(pUVar20);
              *(undefined4 *)(pUVar20 + 0x7c) = 0;
              *(undefined4 *)(pUVar20 + 0x80) = 0;
              *(undefined4 *)(pUVar20 + 0x84) = 0;
              *(int *)pUVar20 = iVar21 + 8;
              pUVar20 = pUVar20 + 0x88;
            } while (iVar1 != -1);
          }
          *(UPreferenceBase **)(param_2 + 0x54) = (UPreferenceBase *)(puVar2 + 2);
        }
      }
      if (local_9c != 0) {
        iVar1 = 0;
        uVar22 = 0;
        do {
          uVar22 = uVar22 + 1;
          pUVar13 = (UPreference_Environment *)(*(int *)(param_2 + 0x54) + iVar1);
          iVar1 = iVar1 + 0x88;
          Load(param_1,pUVar13);
        } while (uVar22 < local_9c);
      }
      goto LAB_00059c5c;
    }
  }
  FFileBase::Read(param_1,(uchar *)&local_9c,4);
  if (local_9c != 0) {
    uVar22 = 0;
    do {
      uVar22 = uVar22 + 1;
      GETimeOfDay::GETimeOfDay(aGStack_98);
      Load(param_1,aGStack_98);
    } while (uVar22 < local_9c);
  }
LAB_00059c68:
  if (uVar19 < 7) {
    UPreference_Scene::InitializeAutoTimeOfDay();
  }
  else {
    iVar1 = *(int *)(param_2 + 0x38);
    if (iVar1 != 0) {
      iVar21 = 0;
      iVar17 = 0;
      do {
        iVar17 = iVar17 + 1;
        FFileBase::Read(param_1,(uchar *)&local_9c,4);
        iVar16 = *(int *)(param_2 + 0x34) + iVar21;
        iVar21 = iVar21 + 0x94;
        *(uint *)(iVar16 + 0x88) = local_9c;
      } while (iVar17 != iVar1);
    }
    UPreference_Scene::InitializeAutoTimeOfDay();
    if (9 < uVar19) {
      FFileBase::Read(param_1,(uchar *)&local_9c,4);
      UPreference_Scene::InitializeMultiPrefs(param_2,local_9c);
      if (local_9c != 0) {
        iVar14 = *(int *)(iVar14 + DAT_0005a14c) + 8;
        uVar18 = 0;
        do {
          UStringBase<char,int>::UStringBase((UStringBase<char,int> *)&local_64);
          UStringBase<char,int>::UStringBase((UStringBase<char,int> *)&local_48);
          Load<char,int>(param_1,(UStringBase *)&local_64);
          Load<char,int>(param_1,(UStringBase *)&local_48);
          uVar19 = uVar18 + 1;
          UPreference_Scene::SetMultiPref
                    (param_2,uVar18,(UStringBase *)&local_64,(UStringBase *)&local_48);
          local_48 = iVar14;
          std::priv::_String_base<char,std::allocator<char>>::_M_deallocate_block(a_Stack_44);
          local_64 = iVar14;
          std::priv::_String_base<char,std::allocator<char>>::_M_deallocate_block(a_Stack_60);
          uVar18 = uVar19;
        } while (uVar19 < local_9c);
      }
    }
  }
  if (local_2c == *piVar15) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

