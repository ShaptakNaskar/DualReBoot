/* 0005da04 | STG::USerialize::Load */

/* STG::USerialize::Load(STG::FFileBase const*, STG::UPreference_Scene&) */

void STG::USerialize::Load(FFileBase *param_1,UPreference_Scene *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  ulong uVar7;
  UPreferenceBase *pUVar8;
  int iVar9;
  uint uVar10;
  UPreference_TextureGroup *pUVar11;
  int iVar12;
  UPreference_ModelToggle *this;
  UPreference_TextureFont *this_00;
  UPreference_TextureSwap *this_01;
  UPreference_FileChooser_Texture *this_02;
  UPreference_ModelSwap *this_03;
  uint uVar13;
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
  
  iVar5 = DAT_0005e9cc + 0x5da1c;
  piVar6 = *(int **)(iVar5 + DAT_0005e9d0);
  local_2c = *piVar6;
  FFileBase::Read(param_1,(uchar *)&local_9c,4);
  uVar2 = local_9c;
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
  if ((((uVar2 < 2) || (FFileBase::Read(param_1,(uchar *)&local_84,4), uVar2 == 2)) ||
      (FFileBase::Read(param_1,(uchar *)&local_74,4), uVar2 == 3)) ||
     (((FFileBase::Read(param_1,(uchar *)&local_70,4), uVar2 < 6 ||
       (FFileBase::Read(param_1,(uchar *)&local_7c,4), uVar2 < 8)) ||
      (FFileBase::Read(param_1,(uchar *)&local_6c,4), uVar2 == 8)))) {
    local_90 = 1;
    local_8c = 1;
  }
  else {
    FFileBase::Read(param_1,(uchar *)&local_68,4);
  }
  UPreference_Scene::Initialize(param_2,(InitData *)&local_90);
  FFileBase::Read(param_1,(uchar *)&local_9c,4);
  uVar10 = local_9c;
  if (local_9c != *(uint *)(param_2 + 8)) {
    if (*(uint *)(param_2 + 8) != 0) {
      iVar3 = *(int *)(param_2 + 4);
      if (iVar3 != 0) {
        iVar9 = *(int *)(iVar3 + -4) * 0x88 + iVar3;
        if (iVar3 != iVar9) {
          do {
            piVar1 = (int *)(iVar9 + -0x88);
            iVar9 = iVar9 + -0x88;
            (**(code **)(*piVar1 + 0x38))(iVar9);
            iVar3 = *(int *)(param_2 + 4);
          } while (iVar3 != iVar9);
        }
        operator_delete__((void *)(iVar3 + -8));
      }
      *(undefined4 *)(param_2 + 4) = 0;
    }
    *(uint *)(param_2 + 8) = uVar10;
    if (uVar10 != 0) {
      puVar4 = operator_new__(uVar10 * 0x88 + 8);
      iVar3 = uVar10 - 1;
      *puVar4 = 0x88;
      puVar4[1] = uVar10;
      if (iVar3 != -1) {
        iVar9 = *(int *)(iVar5 + DAT_0005e9dc);
        pUVar8 = (UPreferenceBase *)(puVar4 + 2);
        do {
          iVar3 = iVar3 + -1;
          UPreferenceBase::UPreferenceBase(pUVar8);
          *(undefined4 *)(pUVar8 + 0x7c) = 0;
          *(undefined4 *)(pUVar8 + 0x80) = 0;
          *(undefined4 *)(pUVar8 + 0x84) = 0;
          *(int *)pUVar8 = iVar9 + 8;
          pUVar8 = pUVar8 + 0x88;
        } while (iVar3 != -1);
      }
      *(UPreferenceBase **)(param_2 + 4) = (UPreferenceBase *)(puVar4 + 2);
    }
  }
  if (local_9c != 0) {
    iVar3 = 0;
    uVar10 = 0;
    do {
      uVar10 = uVar10 + 1;
      Load(param_1,(UPreference_TimeOfDay *)(*(int *)(param_2 + 4) + iVar3));
      iVar3 = iVar3 + 0x88;
    } while (uVar10 < local_9c);
  }
  FFileBase::Read(param_1,(uchar *)&local_9c,4);
  uVar10 = local_9c;
  if (local_9c != *(uint *)(param_2 + 0x10)) {
    if (*(uint *)(param_2 + 0x10) != 0) {
      iVar3 = *(int *)(param_2 + 0xc);
      if (iVar3 != 0) {
        iVar9 = *(int *)(iVar3 + -4) * 0x88 + iVar3;
        if (iVar3 != iVar9) {
          do {
            piVar1 = (int *)(iVar9 + -0x88);
            iVar9 = iVar9 + -0x88;
            (**(code **)(*piVar1 + 0x38))(iVar9);
            iVar3 = *(int *)(param_2 + 0xc);
          } while (iVar3 != iVar9);
        }
        operator_delete__((void *)(iVar3 + -8));
      }
      *(undefined4 *)(param_2 + 0xc) = 0;
    }
    *(uint *)(param_2 + 0x10) = uVar10;
    if (uVar10 != 0) {
      puVar4 = operator_new__(uVar10 * 0x88 + 8);
      iVar3 = uVar10 - 1;
      *puVar4 = 0x88;
      puVar4[1] = uVar10;
      if (iVar3 != -1) {
        iVar9 = *(int *)(iVar5 + DAT_0005e9d8);
        pUVar8 = (UPreferenceBase *)(puVar4 + 2);
        do {
          iVar3 = iVar3 + -1;
          UPreferenceBase::UPreferenceBase(pUVar8);
          *(undefined4 *)(pUVar8 + 0x7c) = 0;
          *(undefined4 *)(pUVar8 + 0x80) = 0;
          *(undefined4 *)(pUVar8 + 0x84) = 0;
          *(int *)pUVar8 = iVar9 + 8;
          pUVar8 = pUVar8 + 0x88;
        } while (iVar3 != -1);
      }
      *(UPreferenceBase **)(param_2 + 0xc) = (UPreferenceBase *)(puVar4 + 2);
    }
  }
  if (local_9c != 0) {
    iVar3 = 0;
    uVar10 = 0;
    do {
      uVar10 = uVar10 + 1;
      Load(param_1,(UPreference_CameraSet *)(*(int *)(param_2 + 0xc) + iVar3));
      iVar3 = iVar3 + 0x88;
    } while (uVar10 < local_9c);
  }
  FFileBase::Read(param_1,(uchar *)&local_9c,4);
  uVar10 = local_9c;
  if (local_9c != *(uint *)(param_2 + 0x18)) {
    if (*(uint *)(param_2 + 0x18) != 0) {
      iVar3 = *(int *)(param_2 + 0x14);
      if (iVar3 != 0) {
        iVar9 = *(int *)(iVar3 + -4) * 0x8c + iVar3;
        if (iVar3 != iVar9) {
          do {
            piVar1 = (int *)(iVar9 + -0x8c);
            iVar9 = iVar9 + -0x8c;
            (**(code **)(*piVar1 + 0x38))(iVar9);
            iVar3 = *(int *)(param_2 + 0x14);
          } while (iVar3 != iVar9);
        }
        operator_delete__((void *)(iVar3 + -8));
      }
      *(undefined4 *)(param_2 + 0x14) = 0;
    }
    *(uint *)(param_2 + 0x18) = uVar10;
    if (uVar10 != 0) {
      puVar4 = operator_new__(uVar10 * 0x8c + 8);
      puVar4[1] = uVar10;
      *puVar4 = 0x8c;
      this_01 = (UPreference_TextureSwap *)(puVar4 + 2);
      while (uVar10 = uVar10 - 1, uVar10 != 0xffffffff) {
        UPreference_TextureSwap::UPreference_TextureSwap(this_01);
        this_01 = this_01 + 0x8c;
      }
      *(UPreference_TextureSwap **)(param_2 + 0x14) = (UPreference_TextureSwap *)(puVar4 + 2);
    }
  }
  if (local_9c != 0) {
    iVar3 = 0;
    uVar10 = 0;
    do {
      uVar10 = uVar10 + 1;
      Load(param_1,(UPreference_TextureSwap *)(*(int *)(param_2 + 0x14) + iVar3));
      iVar3 = iVar3 + 0x8c;
    } while (uVar10 < local_9c);
  }
  FFileBase::Read(param_1,(uchar *)&local_9c,4);
  uVar10 = local_9c;
  if (local_9c != *(uint *)(param_2 + 0x20)) {
    if (*(uint *)(param_2 + 0x20) != 0) {
      iVar3 = *(int *)(param_2 + 0x1c);
      if (iVar3 != 0) {
        iVar9 = *(int *)(iVar3 + -4) * 0x90 + iVar3;
        if (iVar3 != iVar9) {
          do {
            piVar1 = (int *)(iVar9 + -0x90);
            iVar9 = iVar9 + -0x90;
            (**(code **)(*piVar1 + 0x38))(iVar9);
            iVar3 = *(int *)(param_2 + 0x1c);
          } while (iVar3 != iVar9);
        }
        operator_delete__((void *)(iVar3 + -8));
      }
      *(undefined4 *)(param_2 + 0x1c) = 0;
    }
    *(uint *)(param_2 + 0x20) = uVar10;
    if (uVar10 != 0) {
      puVar4 = operator_new__(uVar10 * 0x90 + 8);
      puVar4[1] = uVar10;
      *puVar4 = 0x90;
      this = (UPreference_ModelToggle *)(puVar4 + 2);
      while (uVar10 = uVar10 - 1, uVar10 != 0xffffffff) {
        UPreference_ModelToggle::UPreference_ModelToggle(this);
        this = this + 0x90;
      }
      *(UPreference_ModelToggle **)(param_2 + 0x1c) = (UPreference_ModelToggle *)(puVar4 + 2);
    }
  }
  if (local_9c != 0) {
    iVar3 = 0;
    uVar10 = 0;
    do {
      uVar10 = uVar10 + 1;
      Load(param_1,(UPreference_ModelToggle *)(*(int *)(param_2 + 0x1c) + iVar3));
      iVar3 = iVar3 + 0x90;
    } while (uVar10 < local_9c);
  }
  FFileBase::Read(param_1,(uchar *)&local_9c,4);
  uVar10 = local_9c;
  if (local_9c != *(uint *)(param_2 + 0x28)) {
    if (*(uint *)(param_2 + 0x28) != 0) {
      iVar3 = *(int *)(param_2 + 0x24);
      if (iVar3 != 0) {
        iVar9 = *(int *)(iVar3 + -4) * 0x90 + iVar3;
        if (iVar3 != iVar9) {
          do {
            piVar1 = (int *)(iVar9 + -0x90);
            iVar9 = iVar9 + -0x90;
            (**(code **)(*piVar1 + 0x38))(iVar9);
            iVar3 = *(int *)(param_2 + 0x24);
          } while (iVar3 != iVar9);
        }
        operator_delete__((void *)(iVar3 + -8));
      }
      *(undefined4 *)(param_2 + 0x24) = 0;
    }
    *(uint *)(param_2 + 0x28) = uVar10;
    if (uVar10 != 0) {
      puVar4 = operator_new__(uVar10 * 0x90 + 8);
      puVar4[1] = uVar10;
      *puVar4 = 0x90;
      this_00 = (UPreference_TextureFont *)(puVar4 + 2);
      while (uVar10 = uVar10 - 1, uVar10 != 0xffffffff) {
        UPreference_TextureFont::UPreference_TextureFont(this_00);
        this_00 = this_00 + 0x90;
      }
      *(UPreference_TextureFont **)(param_2 + 0x24) = (UPreference_TextureFont *)(puVar4 + 2);
    }
  }
  if (local_9c != 0) {
    iVar3 = 0;
    uVar10 = 0;
    do {
      uVar10 = uVar10 + 1;
      Load(param_1,(UPreference_TextureFont *)(*(int *)(param_2 + 0x24) + iVar3));
      iVar3 = iVar3 + 0x90;
    } while (uVar10 < local_9c);
  }
  if (uVar2 < 2) {
LAB_0005e4ac:
    if (3 < uVar2 - 5) goto LAB_0005e4b8;
  }
  else {
    FFileBase::Read(param_1,(uchar *)&local_9c,4);
    uVar10 = local_9c;
    if (local_9c != *(uint *)(param_2 + 0x30)) {
      if (*(uint *)(param_2 + 0x30) != 0) {
        iVar3 = *(int *)(param_2 + 0x2c);
        if (iVar3 != 0) {
          iVar9 = *(int *)(iVar3 + -4) * 0x98 + iVar3;
          if (iVar3 != iVar9) {
            do {
              piVar1 = (int *)(iVar9 + -0x98);
              iVar9 = iVar9 + -0x98;
              (**(code **)(*piVar1 + 0x38))(iVar9);
              iVar3 = *(int *)(param_2 + 0x2c);
            } while (iVar3 != iVar9);
          }
          operator_delete__((void *)(iVar3 + -8));
        }
        *(undefined4 *)(param_2 + 0x2c) = 0;
      }
      *(uint *)(param_2 + 0x30) = uVar10;
      if (uVar10 != 0) {
        puVar4 = operator_new__(uVar10 * 0x98 + 8);
        puVar4[1] = uVar10;
        *puVar4 = 0x98;
        pUVar11 = (UPreference_TextureGroup *)(puVar4 + 2);
        while (uVar10 = uVar10 - 1, uVar10 != 0xffffffff) {
          UPreference_TextureGroup::UPreference_TextureGroup(pUVar11);
          pUVar11 = pUVar11 + 0x98;
        }
        *(UPreference_TextureGroup **)(param_2 + 0x2c) = (UPreference_TextureGroup *)(puVar4 + 2);
      }
    }
    if (local_9c != 0) {
      iVar3 = 0;
      uVar10 = 0;
      do {
        uVar10 = uVar10 + 1;
        Load(param_1,(UPreference_TextureGroup *)(*(int *)(param_2 + 0x2c) + iVar3));
        iVar3 = iVar3 + 0x98;
      } while (uVar10 < local_9c);
    }
    uVar10 = *(uint *)(param_2 + 0x30);
    if (uVar10 != 0) {
      iVar3 = 0;
      uVar13 = 0;
      do {
        pUVar11 = (UPreference_TextureGroup *)(*(int *)(param_2 + 0x2c) + iVar3);
        if (*(int *)(pUVar11 + 0x94) != 0) {
          uVar7 = 0;
          do {
            uVar10 = uVar7 + 1;
            UPreference_TextureGroup::SetChild
                      (pUVar11,uVar7,
                       (UPreference_TextureSwap *)
                       (*(int *)(*(int *)(pUVar11 + 0x88) + uVar7 * 4) * 0x8c +
                       *(int *)(param_2 + 0x14)));
            uVar7 = uVar10;
          } while (uVar10 < *(uint *)(pUVar11 + 0x94));
          uVar10 = *(uint *)(param_2 + 0x30);
        }
        uVar13 = uVar13 + 1;
        iVar3 = iVar3 + 0x98;
      } while (uVar13 < uVar10);
    }
    if (uVar2 == 2) goto LAB_0005e4ac;
    FFileBase::Read(param_1,(uchar *)&local_9c,4);
    uVar10 = local_9c;
    if (local_9c != *(uint *)(param_2 + 0x38)) {
      if (*(uint *)(param_2 + 0x38) != 0) {
        iVar3 = *(int *)(param_2 + 0x34);
        if (iVar3 != 0) {
          iVar9 = *(int *)(iVar3 + -4) * 0x94 + iVar3;
          if (iVar3 != iVar9) {
            do {
              piVar1 = (int *)(iVar9 + -0x94);
              iVar9 = iVar9 + -0x94;
              (**(code **)(*piVar1 + 0x38))(iVar9);
              iVar3 = *(int *)(param_2 + 0x34);
            } while (iVar3 != iVar9);
          }
          operator_delete__((void *)(iVar3 + -8));
        }
        *(undefined4 *)(param_2 + 0x34) = 0;
      }
      *(uint *)(param_2 + 0x38) = uVar10;
      if (uVar10 != 0) {
        puVar4 = operator_new__(uVar10 * 0x94 + 8);
        puVar4[1] = uVar10;
        *puVar4 = 0x94;
        this_02 = (UPreference_FileChooser_Texture *)(puVar4 + 2);
        while (uVar10 = uVar10 - 1, uVar10 != 0xffffffff) {
          UPreference_FileChooser_Texture::UPreference_FileChooser_Texture(this_02);
          this_02 = this_02 + 0x94;
        }
        *(UPreference_FileChooser_Texture **)(param_2 + 0x34) =
             (UPreference_FileChooser_Texture *)(puVar4 + 2);
      }
    }
    if (local_9c != 0) {
      iVar3 = 0;
      uVar10 = 0;
      do {
        uVar10 = uVar10 + 1;
        Load(param_1,(UPreference_FileChooser_Texture *)(*(int *)(param_2 + 0x34) + iVar3));
        iVar3 = iVar3 + 0x94;
      } while (uVar10 < local_9c);
    }
    if (uVar2 == 3) goto LAB_0005e4ac;
    FFileBase::Read(param_1,(uchar *)&local_9c,4);
    uVar10 = local_9c;
    if (local_9c != *(uint *)(param_2 + 0x40)) {
      if (*(uint *)(param_2 + 0x40) != 0) {
        iVar3 = *(int *)(param_2 + 0x3c);
        if (iVar3 != 0) {
          iVar9 = *(int *)(iVar3 + -4) * 0x88 + iVar3;
          if (iVar3 != iVar9) {
            do {
              piVar1 = (int *)(iVar9 + -0x88);
              iVar9 = iVar9 + -0x88;
              (**(code **)(*piVar1 + 0x38))(iVar9);
              iVar3 = *(int *)(param_2 + 0x3c);
            } while (iVar3 != iVar9);
          }
          operator_delete__((void *)(iVar3 + -8));
        }
        *(undefined4 *)(param_2 + 0x3c) = 0;
      }
      *(uint *)(param_2 + 0x40) = uVar10;
      if (uVar10 != 0) {
        puVar4 = operator_new__(uVar10 * 0x88 + 8);
        iVar3 = uVar10 - 1;
        *puVar4 = 0x88;
        puVar4[1] = uVar10;
        if (iVar3 != -1) {
          iVar9 = *(int *)(iVar5 + DAT_0005e9e4);
          pUVar8 = (UPreferenceBase *)(puVar4 + 2);
          do {
            iVar3 = iVar3 + -1;
            UPreferenceBase::UPreferenceBase(pUVar8);
            *(undefined4 *)(pUVar8 + 0x7c) = 0;
            *(undefined4 *)(pUVar8 + 0x80) = 0;
            *(undefined4 *)(pUVar8 + 0x84) = 0;
            *(int *)pUVar8 = iVar9 + 8;
            pUVar8 = pUVar8 + 0x88;
          } while (iVar3 != -1);
        }
        *(UPreferenceBase **)(param_2 + 0x3c) = (UPreferenceBase *)(puVar4 + 2);
      }
    }
    if (local_9c != 0) {
      iVar3 = 0;
      uVar10 = 0;
      do {
        uVar10 = uVar10 + 1;
        Load(param_1,(UPreference_Theme *)(*(int *)(param_2 + 0x3c) + iVar3));
        iVar3 = iVar3 + 0x88;
      } while (uVar10 < local_9c);
    }
    if (uVar2 < 6) goto LAB_0005e4ac;
    FFileBase::Read(param_1,(uchar *)&local_9c,4);
    uVar10 = local_9c;
    if (local_9c != *(uint *)(param_2 + 0x48)) {
      if (*(uint *)(param_2 + 0x48) != 0) {
        iVar3 = *(int *)(param_2 + 0x44);
        if (iVar3 != 0) {
          iVar9 = *(int *)(iVar3 + -4) * 0xa0 + iVar3;
          if (iVar3 != iVar9) {
            do {
              piVar1 = (int *)(iVar9 + -0xa0);
              iVar9 = iVar9 + -0xa0;
              (**(code **)(*piVar1 + 0x38))(iVar9);
              iVar3 = *(int *)(param_2 + 0x44);
            } while (iVar3 != iVar9);
          }
          operator_delete__((void *)(iVar3 + -8));
        }
        *(undefined4 *)(param_2 + 0x44) = 0;
      }
      *(uint *)(param_2 + 0x48) = uVar10;
      if (uVar10 != 0) {
        puVar4 = operator_new__(uVar10 * 0xa0 + 8);
        puVar4[1] = uVar10;
        *puVar4 = 0xa0;
        this_03 = (UPreference_ModelSwap *)(puVar4 + 2);
        while (uVar10 = uVar10 - 1, uVar10 != 0xffffffff) {
          UPreference_ModelSwap::UPreference_ModelSwap(this_03);
          this_03 = this_03 + 0xa0;
        }
        *(UPreference_ModelSwap **)(param_2 + 0x44) = (UPreference_ModelSwap *)(puVar4 + 2);
      }
    }
    if (local_9c != 0) {
      iVar3 = 0;
      uVar10 = 0;
      do {
        uVar10 = uVar10 + 1;
        Load(param_1,(UPreference_ModelSwap *)(*(int *)(param_2 + 0x44) + iVar3));
        iVar3 = iVar3 + 0xa0;
      } while (uVar10 < local_9c);
    }
    if (uVar2 < 8) goto LAB_0005e4ac;
    FFileBase::Read(param_1,(uchar *)&local_9c,4);
    uVar10 = local_9c;
    if (local_9c != *(uint *)(param_2 + 0x50)) {
      if (*(uint *)(param_2 + 0x50) != 0) {
        iVar3 = *(int *)(param_2 + 0x4c);
        if (iVar3 != 0) {
          iVar9 = *(int *)(iVar3 + -4) * 0x8c + iVar3;
          if (iVar3 != iVar9) {
            do {
              piVar1 = (int *)(iVar9 + -0x8c);
              iVar9 = iVar9 + -0x8c;
              (**(code **)(*piVar1 + 0x38))(iVar9);
              iVar3 = *(int *)(param_2 + 0x4c);
            } while (iVar3 != iVar9);
          }
          operator_delete__((void *)(iVar3 + -8));
        }
        *(undefined4 *)(param_2 + 0x4c) = 0;
      }
      *(uint *)(param_2 + 0x50) = uVar10;
      if (uVar10 != 0) {
        puVar4 = operator_new__(uVar10 * 0x8c + 8);
        iVar3 = uVar10 - 1;
        *puVar4 = 0x8c;
        puVar4[1] = uVar10;
        if (iVar3 != -1) {
          iVar9 = *(int *)(iVar5 + DAT_0005e9e8);
          pUVar8 = (UPreferenceBase *)(puVar4 + 2);
          do {
            iVar3 = iVar3 + -1;
            UPreferenceBase::UPreferenceBase(pUVar8);
            *(undefined4 *)(pUVar8 + 0x7c) = 0;
            *(undefined4 *)(pUVar8 + 0x80) = 0;
            *(undefined4 *)(pUVar8 + 0x84) = 0;
            *(int *)pUVar8 = iVar9 + 8;
            pUVar8[0x88] = (UPreferenceBase)0x0;
            pUVar8 = pUVar8 + 0x8c;
          } while (iVar3 != -1);
        }
        *(UPreferenceBase **)(param_2 + 0x4c) = (UPreferenceBase *)(puVar4 + 2);
      }
    }
    if (local_9c != 0) {
      iVar3 = 0;
      uVar10 = 0;
      do {
        uVar10 = uVar10 + 1;
        Load(param_1,(UPreference_IAB *)(*(int *)(param_2 + 0x4c) + iVar3));
        iVar3 = iVar3 + 0x8c;
      } while (uVar10 < local_9c);
    }
    if (uVar2 != 8) {
      FFileBase::Read(param_1,(uchar *)&local_9c,4);
      uVar10 = local_9c;
      if (local_9c != *(uint *)(param_2 + 0x58)) {
        if (*(uint *)(param_2 + 0x58) != 0) {
          iVar3 = *(int *)(param_2 + 0x54);
          if (iVar3 != 0) {
            iVar9 = *(int *)(iVar3 + -4) * 0x88 + iVar3;
            if (iVar3 != iVar9) {
              do {
                piVar1 = (int *)(iVar9 + -0x88);
                iVar9 = iVar9 + -0x88;
                (**(code **)(*piVar1 + 0x38))(iVar9);
                iVar3 = *(int *)(param_2 + 0x54);
              } while (iVar9 != iVar3);
            }
            operator_delete__((void *)(iVar3 + -8));
          }
          *(undefined4 *)(param_2 + 0x54) = 0;
        }
        *(uint *)(param_2 + 0x58) = uVar10;
        if (uVar10 != 0) {
          puVar4 = operator_new__(uVar10 * 0x88 + 8);
          iVar3 = uVar10 - 1;
          *puVar4 = 0x88;
          puVar4[1] = uVar10;
          if (iVar3 != -1) {
            iVar9 = *(int *)(iVar5 + DAT_0005e9e0);
            pUVar8 = (UPreferenceBase *)(puVar4 + 2);
            do {
              iVar3 = iVar3 + -1;
              UPreferenceBase::UPreferenceBase(pUVar8);
              *(undefined4 *)(pUVar8 + 0x7c) = 0;
              *(undefined4 *)(pUVar8 + 0x80) = 0;
              *(undefined4 *)(pUVar8 + 0x84) = 0;
              *(int *)pUVar8 = iVar9 + 8;
              pUVar8 = pUVar8 + 0x88;
            } while (iVar3 != -1);
          }
          *(UPreferenceBase **)(param_2 + 0x54) = (UPreferenceBase *)(puVar4 + 2);
        }
      }
      if (local_9c != 0) {
        iVar3 = 0;
        uVar10 = 0;
        do {
          uVar10 = uVar10 + 1;
          Load(param_1,(UPreference_Environment *)(*(int *)(param_2 + 0x54) + iVar3));
          iVar3 = iVar3 + 0x88;
        } while (uVar10 < local_9c);
      }
      goto LAB_0005e4ac;
    }
  }
  FFileBase::Read(param_1,(uchar *)&local_9c,4);
  if (local_9c != 0) {
    uVar10 = 0;
    do {
      GETimeOfDay::GETimeOfDay(aGStack_98);
      Load(param_1,aGStack_98);
      uVar10 = uVar10 + 1;
    } while (uVar10 < local_9c);
  }
LAB_0005e4b8:
  if (uVar2 < 7) {
    UPreference_Scene::InitializeAutoTimeOfDay();
  }
  else {
    iVar3 = *(int *)(param_2 + 0x38);
    if (iVar3 != 0) {
      iVar9 = 0;
      iVar12 = 0;
      do {
        FFileBase::Read(param_1,(uchar *)&local_9c,4);
        iVar12 = iVar12 + 1;
        *(uint *)(*(int *)(param_2 + 0x34) + iVar9 + 0x88) = local_9c;
        iVar9 = iVar9 + 0x94;
      } while (iVar12 != iVar3);
    }
    UPreference_Scene::InitializeAutoTimeOfDay();
    if (9 < uVar2) {
      FFileBase::Read(param_1,(uchar *)&local_9c,4);
      UPreference_Scene::InitializeMultiPrefs(param_2,local_9c);
      if (local_9c != 0) {
        uVar7 = 0;
        iVar5 = *(int *)(iVar5 + DAT_0005e9d4) + 8;
        do {
          UStringBase<char,int>::UStringBase((UStringBase<char,int> *)&local_64);
          UStringBase<char,int>::UStringBase((UStringBase<char,int> *)&local_48);
          Load<char,int>(param_1,(UStringBase *)&local_64);
          Load<char,int>(param_1,(UStringBase *)&local_48);
          UPreference_Scene::SetMultiPref
                    (param_2,uVar7,(UStringBase *)&local_64,(UStringBase *)&local_48);
          local_48 = iVar5;
          std::priv::_String_base<char,std::allocator<char>>::_M_deallocate_block(a_Stack_44);
          local_64 = iVar5;
          std::priv::_String_base<char,std::allocator<char>>::_M_deallocate_block(a_Stack_60);
          uVar7 = uVar7 + 1;
        } while (uVar7 < local_9c);
      }
    }
  }
  if (local_2c == *piVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

