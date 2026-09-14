/* 000632c0 | STG::USerialize::Load */

/* STG::USerialize::Load(STG::FFileBase const*, STG::UPreference_Scene&) */

void STG::USerialize::Load(FFileBase *param_1,UPreference_Scene *param_2)

{
  UPreferenceBase *pUVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint *puVar5;
  int unaff_EBX;
  uint uVar6;
  UPreference_TextureGroup *pUVar7;
  int iVar8;
  ulong uVar9;
  uint uVar10;
  UPreference_TextureSwap *this;
  int *piVar11;
  UPreference_TextureFont *this_00;
  UPreference_ModelToggle *this_01;
  UPreference_ModelSwap *this_02;
  UPreference_FileChooser_Texture *this_03;
  uint local_98;
  uint local_90 [2];
  GETimeOfDay local_88 [8];
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58 [3];
  UStringBase<char,int> local_4c [28];
  UStringBase<char,int> local_30 [28];
  int local_14;
  
  local_14 = 0x632cb;
  FUN_0002e044();
  local_14 = **(int **)(unaff_EBX + 0x38b6d);
  FFileBase::Read(param_1,(uchar *)local_90,4);
  uVar10 = local_90[0];
  local_80 = 0;
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  local_70 = 0;
  local_6c = 0;
  local_68 = 0;
  local_64 = 0;
  local_60 = 0;
  local_5c = 0;
  local_58[0] = 0;
  FFileBase::Read(param_1,(uchar *)&local_80,4);
  FFileBase::Read(param_1,(uchar *)&local_7c,4);
  FFileBase::Read(param_1,(uchar *)&local_78,4);
  FFileBase::Read(param_1,(uchar *)&local_70,4);
  FFileBase::Read(param_1,(uchar *)&local_68,4);
  if ((((uVar10 < 2) || (FFileBase::Read(param_1,(uchar *)&local_74,4), uVar10 == 2)) ||
      (FFileBase::Read(param_1,(uchar *)&local_64,4), uVar10 == 3)) ||
     (((FFileBase::Read(param_1,(uchar *)&local_60,4), uVar10 < 6 ||
       (FFileBase::Read(param_1,(uchar *)&local_6c,4), uVar10 < 8)) ||
      (FFileBase::Read(param_1,(uchar *)&local_5c,4), uVar10 == 8)))) {
    local_80 = 1;
    local_7c = 1;
  }
  else {
    FFileBase::Read(param_1,(uchar *)local_58,4);
  }
  UPreference_Scene::Initialize(param_2,(InitData *)&local_80);
  FFileBase::Read(param_1,(uchar *)local_90,4);
  uVar6 = local_90[0];
  if (local_90[0] != *(uint *)(param_2 + 8)) {
    if (*(uint *)(param_2 + 8) == 0) {
      *(uint *)(param_2 + 8) = local_90[0];
    }
    else {
      piVar3 = *(int **)(param_2 + 4);
      if (piVar3 != (int *)0x0) {
        piVar11 = piVar3 + piVar3[-1] * 0x22;
        if (piVar3 != piVar11) {
          do {
            piVar11 = piVar11 + -0x22;
            (**(code **)(*piVar11 + 0x38))(piVar11);
            piVar3 = *(int **)(param_2 + 4);
          } while (piVar3 != piVar11);
        }
        operator_delete__(piVar3 + -1);
      }
      *(undefined4 *)(param_2 + 4) = 0;
      *(uint *)(param_2 + 8) = uVar6;
    }
    if (uVar6 != 0) {
      puVar5 = operator_new__(uVar6 * 0x88 + 4);
      *puVar5 = uVar6;
      pUVar1 = (UPreferenceBase *)(puVar5 + 1);
      while (uVar6 = uVar6 - 1, uVar6 != 0xffffffff) {
        UPreferenceBase::UPreferenceBase(pUVar1);
        iVar2 = *(int *)(unaff_EBX + 0x38c35);
        *(undefined4 *)(pUVar1 + 0x7c) = 0;
        *(undefined4 *)(pUVar1 + 0x80) = 0;
        *(undefined4 *)(pUVar1 + 0x84) = 0;
        *(int *)pUVar1 = iVar2 + 8;
        pUVar1 = pUVar1 + 0x88;
      }
      *(UPreferenceBase **)(param_2 + 4) = (UPreferenceBase *)(puVar5 + 1);
    }
  }
  if (local_90[0] != 0) {
    uVar6 = 0;
    iVar2 = 0;
    do {
      uVar6 = uVar6 + 1;
      Load(param_1,(UPreference_TimeOfDay *)(iVar2 + *(int *)(param_2 + 4)));
      iVar2 = iVar2 + 0x88;
    } while (uVar6 < local_90[0]);
  }
  FFileBase::Read(param_1,(uchar *)local_90,4);
  uVar6 = local_90[0];
  if (local_90[0] != *(uint *)(param_2 + 0x10)) {
    if (*(uint *)(param_2 + 0x10) == 0) {
      *(uint *)(param_2 + 0x10) = local_90[0];
    }
    else {
      piVar3 = *(int **)(param_2 + 0xc);
      if (piVar3 != (int *)0x0) {
        piVar11 = piVar3 + piVar3[-1] * 0x22;
        if (piVar3 != piVar11) {
          do {
            piVar11 = piVar11 + -0x22;
            (**(code **)(*piVar11 + 0x38))(piVar11);
            piVar3 = *(int **)(param_2 + 0xc);
          } while (piVar3 != piVar11);
        }
        operator_delete__(piVar3 + -1);
      }
      *(undefined4 *)(param_2 + 0xc) = 0;
      *(uint *)(param_2 + 0x10) = uVar6;
    }
    if (uVar6 != 0) {
      puVar5 = operator_new__(uVar6 * 0x88 + 4);
      *puVar5 = uVar6;
      pUVar1 = (UPreferenceBase *)(puVar5 + 1);
      while (uVar6 = uVar6 - 1, uVar6 != 0xffffffff) {
        UPreferenceBase::UPreferenceBase(pUVar1);
        iVar2 = *(int *)(unaff_EBX + 0x38c39);
        *(undefined4 *)(pUVar1 + 0x7c) = 0;
        *(undefined4 *)(pUVar1 + 0x80) = 0;
        *(undefined4 *)(pUVar1 + 0x84) = 0;
        *(int *)pUVar1 = iVar2 + 8;
        pUVar1 = pUVar1 + 0x88;
      }
      *(UPreferenceBase **)(param_2 + 0xc) = (UPreferenceBase *)(puVar5 + 1);
    }
  }
  if (local_90[0] != 0) {
    uVar6 = 0;
    iVar2 = 0;
    do {
      uVar6 = uVar6 + 1;
      Load(param_1,(UPreference_CameraSet *)(iVar2 + *(int *)(param_2 + 0xc)));
      iVar2 = iVar2 + 0x88;
    } while (uVar6 < local_90[0]);
  }
  FFileBase::Read(param_1,(uchar *)local_90,4);
  uVar6 = local_90[0];
  if (local_90[0] != *(uint *)(param_2 + 0x18)) {
    if (*(uint *)(param_2 + 0x18) == 0) {
      *(uint *)(param_2 + 0x18) = local_90[0];
    }
    else {
      piVar3 = *(int **)(param_2 + 0x14);
      if (piVar3 != (int *)0x0) {
        piVar11 = piVar3 + piVar3[-1] * 0x23;
        if (piVar3 != piVar11) {
          do {
            piVar11 = piVar11 + -0x23;
            (**(code **)(*piVar11 + 0x38))(piVar11);
            piVar3 = *(int **)(param_2 + 0x14);
          } while (piVar3 != piVar11);
        }
        operator_delete__(piVar3 + -1);
      }
      *(undefined4 *)(param_2 + 0x14) = 0;
      *(uint *)(param_2 + 0x18) = uVar6;
    }
    if (uVar6 != 0) {
      puVar5 = operator_new__(uVar6 * 0x8c + 4);
      *puVar5 = uVar6;
      this = (UPreference_TextureSwap *)(puVar5 + 1);
      while (uVar6 = uVar6 - 1, uVar6 != 0xffffffff) {
        UPreference_TextureSwap::UPreference_TextureSwap(this);
        this = this + 0x8c;
      }
      *(UPreference_TextureSwap **)(param_2 + 0x14) = (UPreference_TextureSwap *)(puVar5 + 1);
    }
  }
  if (local_90[0] != 0) {
    uVar6 = 0;
    do {
      iVar2 = uVar6 * 0x8c;
      uVar6 = uVar6 + 1;
      Load(param_1,(UPreference_TextureSwap *)(iVar2 + *(int *)(param_2 + 0x14)));
    } while (uVar6 < local_90[0]);
  }
  FFileBase::Read(param_1,(uchar *)local_90,4);
  uVar6 = local_90[0];
  if (local_90[0] != *(uint *)(param_2 + 0x20)) {
    if (*(uint *)(param_2 + 0x20) == 0) {
      *(uint *)(param_2 + 0x20) = local_90[0];
    }
    else {
      piVar3 = *(int **)(param_2 + 0x1c);
      if (piVar3 != (int *)0x0) {
        piVar11 = piVar3 + piVar3[-1] * 0x24;
        if (piVar3 != piVar11) {
          do {
            piVar11 = piVar11 + -0x24;
            (**(code **)(*piVar11 + 0x38))(piVar11);
            piVar3 = *(int **)(param_2 + 0x1c);
          } while (piVar3 != piVar11);
        }
        operator_delete__(piVar3 + -1);
      }
      *(undefined4 *)(param_2 + 0x1c) = 0;
      *(uint *)(param_2 + 0x20) = uVar6;
    }
    if (uVar6 != 0) {
      puVar5 = operator_new__(uVar6 * 0x90 + 4);
      *puVar5 = uVar6;
      this_01 = (UPreference_ModelToggle *)(puVar5 + 1);
      while (uVar6 = uVar6 - 1, uVar6 != 0xffffffff) {
        UPreference_ModelToggle::UPreference_ModelToggle(this_01);
        this_01 = this_01 + 0x90;
      }
      *(UPreference_ModelToggle **)(param_2 + 0x1c) = (UPreference_ModelToggle *)(puVar5 + 1);
    }
  }
  if (local_90[0] != 0) {
    uVar6 = 0;
    iVar2 = 0;
    do {
      uVar6 = uVar6 + 1;
      Load(param_1,(UPreference_ModelToggle *)(iVar2 + *(int *)(param_2 + 0x1c)));
      iVar2 = iVar2 + 0x90;
    } while (uVar6 < local_90[0]);
  }
  FFileBase::Read(param_1,(uchar *)local_90,4);
  uVar6 = local_90[0];
  if (local_90[0] != *(uint *)(param_2 + 0x28)) {
    if (*(uint *)(param_2 + 0x28) == 0) {
      *(uint *)(param_2 + 0x28) = local_90[0];
    }
    else {
      piVar3 = *(int **)(param_2 + 0x24);
      if (piVar3 != (int *)0x0) {
        piVar11 = piVar3 + piVar3[-1] * 0x24;
        if (piVar3 != piVar11) {
          do {
            piVar11 = piVar11 + -0x24;
            (**(code **)(*piVar11 + 0x38))(piVar11);
            piVar3 = *(int **)(param_2 + 0x24);
          } while (piVar3 != piVar11);
        }
        operator_delete__(piVar3 + -1);
      }
      *(undefined4 *)(param_2 + 0x24) = 0;
      *(uint *)(param_2 + 0x28) = uVar6;
    }
    if (uVar6 != 0) {
      puVar5 = operator_new__(uVar6 * 0x90 + 4);
      *puVar5 = uVar6;
      this_00 = (UPreference_TextureFont *)(puVar5 + 1);
      while (uVar6 = uVar6 - 1, uVar6 != 0xffffffff) {
        UPreference_TextureFont::UPreference_TextureFont(this_00);
        this_00 = this_00 + 0x90;
      }
      *(UPreference_TextureFont **)(param_2 + 0x24) = (UPreference_TextureFont *)(puVar5 + 1);
    }
  }
  if (local_90[0] != 0) {
    uVar6 = 0;
    iVar2 = 0;
    do {
      uVar6 = uVar6 + 1;
      Load(param_1,(UPreference_TextureFont *)(iVar2 + *(int *)(param_2 + 0x24)));
      iVar2 = iVar2 + 0x90;
    } while (uVar6 < local_90[0]);
  }
  if (uVar10 < 2) {
LAB_00063e08:
    if (3 < uVar10 - 5) goto LAB_00063e18;
  }
  else {
    FFileBase::Read(param_1,(uchar *)local_90,4);
    uVar6 = local_90[0];
    if (local_90[0] != *(uint *)(param_2 + 0x30)) {
      if (*(uint *)(param_2 + 0x30) != 0) {
        piVar3 = *(int **)(param_2 + 0x2c);
        if (piVar3 != (int *)0x0) {
          piVar11 = piVar3 + piVar3[-1] * 0x26;
          if (piVar3 != piVar11) {
            do {
              piVar11 = piVar11 + -0x26;
              (**(code **)(*piVar11 + 0x38))(piVar11);
              piVar3 = *(int **)(param_2 + 0x2c);
            } while (piVar3 != piVar11);
          }
          operator_delete__(piVar3 + -1);
        }
        *(undefined4 *)(param_2 + 0x2c) = 0;
      }
      *(uint *)(param_2 + 0x30) = uVar6;
      if (uVar6 != 0) {
        puVar5 = operator_new__(uVar6 * 0x98 + 4);
        *puVar5 = uVar6;
        pUVar7 = (UPreference_TextureGroup *)(puVar5 + 1);
        while (uVar6 = uVar6 - 1, uVar6 != 0xffffffff) {
          UPreference_TextureGroup::UPreference_TextureGroup(pUVar7);
          pUVar7 = pUVar7 + 0x98;
        }
        *(UPreference_TextureGroup **)(param_2 + 0x2c) = (UPreference_TextureGroup *)(puVar5 + 1);
      }
    }
    if (local_90[0] != 0) {
      uVar6 = 0;
      do {
        iVar2 = uVar6 * 0x98;
        uVar6 = uVar6 + 1;
        Load(param_1,(UPreference_TextureGroup *)(iVar2 + *(int *)(param_2 + 0x2c)));
      } while (uVar6 < local_90[0]);
    }
    uVar6 = *(uint *)(param_2 + 0x30);
    if (uVar6 != 0) {
      local_98 = 0;
      do {
        pUVar7 = (UPreference_TextureGroup *)(local_98 * 0x98 + *(int *)(param_2 + 0x2c));
        if (*(int *)(pUVar7 + 0x94) != 0) {
          uVar9 = 0;
          do {
            uVar6 = uVar9 + 1;
            UPreference_TextureGroup::SetChild
                      (pUVar7,uVar9,
                       (UPreference_TextureSwap *)
                       (*(int *)(*(int *)(pUVar7 + 0x88) + uVar9 * 4) * 0x8c +
                       *(int *)(param_2 + 0x14)));
            uVar9 = uVar6;
          } while (uVar6 < *(uint *)(pUVar7 + 0x94));
          uVar6 = *(uint *)(param_2 + 0x30);
        }
        local_98 = local_98 + 1;
      } while (local_98 < uVar6);
    }
    if (uVar10 == 2) goto LAB_00063e08;
    FFileBase::Read(param_1,(uchar *)local_90,4);
    uVar6 = local_90[0];
    if (local_90[0] != *(uint *)(param_2 + 0x38)) {
      if (*(uint *)(param_2 + 0x38) != 0) {
        piVar3 = *(int **)(param_2 + 0x34);
        if (piVar3 != (int *)0x0) {
          piVar11 = piVar3 + piVar3[-1] * 0x25;
          if (piVar3 != piVar11) {
            do {
              piVar11 = piVar11 + -0x25;
              (**(code **)(*piVar11 + 0x38))(piVar11);
              piVar3 = *(int **)(param_2 + 0x34);
            } while (piVar3 != piVar11);
          }
          operator_delete__(piVar3 + -1);
        }
        *(undefined4 *)(param_2 + 0x34) = 0;
      }
      *(uint *)(param_2 + 0x38) = uVar6;
      if (uVar6 != 0) {
        puVar5 = operator_new__(uVar6 * 0x94 + 4);
        *puVar5 = uVar6;
        this_03 = (UPreference_FileChooser_Texture *)(puVar5 + 1);
        while (uVar6 = uVar6 - 1, uVar6 != 0xffffffff) {
          UPreference_FileChooser_Texture::UPreference_FileChooser_Texture(this_03);
          this_03 = this_03 + 0x94;
        }
        *(UPreference_FileChooser_Texture **)(param_2 + 0x34) =
             (UPreference_FileChooser_Texture *)(puVar5 + 1);
      }
    }
    if (local_90[0] != 0) {
      uVar6 = 0;
      do {
        iVar2 = uVar6 * 0x94;
        uVar6 = uVar6 + 1;
        Load(param_1,(UPreference_FileChooser_Texture *)(iVar2 + *(int *)(param_2 + 0x34)));
      } while (uVar6 < local_90[0]);
    }
    if (uVar10 == 3) goto LAB_00063e08;
    FFileBase::Read(param_1,(uchar *)local_90,4);
    uVar6 = local_90[0];
    if (local_90[0] != *(uint *)(param_2 + 0x40)) {
      if (*(uint *)(param_2 + 0x40) != 0) {
        piVar3 = *(int **)(param_2 + 0x3c);
        if (piVar3 != (int *)0x0) {
          piVar11 = piVar3 + piVar3[-1] * 0x22;
          if (piVar3 != piVar11) {
            do {
              piVar11 = piVar11 + -0x22;
              (**(code **)(*piVar11 + 0x38))(piVar11);
              piVar3 = *(int **)(param_2 + 0x3c);
            } while (piVar3 != piVar11);
          }
          operator_delete__(piVar3 + -1);
        }
        *(undefined4 *)(param_2 + 0x3c) = 0;
      }
      *(uint *)(param_2 + 0x40) = uVar6;
      if (uVar6 != 0) {
        puVar5 = operator_new__(uVar6 * 0x88 + 4);
        *puVar5 = uVar6;
        pUVar1 = (UPreferenceBase *)(puVar5 + 1);
        while (uVar6 = uVar6 - 1, uVar6 != 0xffffffff) {
          UPreferenceBase::UPreferenceBase(pUVar1);
          iVar2 = *(int *)(GECameraSet::~GECameraSet + unaff_EBX + 1);
          *(undefined4 *)(pUVar1 + 0x7c) = 0;
          *(undefined4 *)(pUVar1 + 0x80) = 0;
          *(undefined4 *)(pUVar1 + 0x84) = 0;
          *(int *)pUVar1 = iVar2 + 8;
          pUVar1 = pUVar1 + 0x88;
        }
        *(UPreferenceBase **)(param_2 + 0x3c) = (UPreferenceBase *)(puVar5 + 1);
      }
    }
    if (local_90[0] != 0) {
      uVar6 = 0;
      iVar2 = 0;
      do {
        uVar6 = uVar6 + 1;
        Load(param_1,(UPreference_Theme *)(iVar2 + *(int *)(param_2 + 0x3c)));
        iVar2 = iVar2 + 0x88;
      } while (uVar6 < local_90[0]);
    }
    if (uVar10 < 6) goto LAB_00063e08;
    FFileBase::Read(param_1,(uchar *)local_90,4);
    uVar6 = local_90[0];
    if (local_90[0] != *(uint *)(param_2 + 0x48)) {
      if (*(uint *)(param_2 + 0x48) != 0) {
        piVar3 = *(int **)(param_2 + 0x44);
        if (piVar3 != (int *)0x0) {
          piVar11 = piVar3 + piVar3[-1] * 0x28;
          if (piVar3 != piVar11) {
            do {
              piVar11 = piVar11 + -0x28;
              (**(code **)(*piVar11 + 0x38))(piVar11);
              piVar3 = *(int **)(param_2 + 0x44);
            } while (piVar3 != piVar11);
          }
          operator_delete__(piVar3 + -1);
        }
        *(undefined4 *)(param_2 + 0x44) = 0;
      }
      *(uint *)(param_2 + 0x48) = uVar6;
      if (uVar6 != 0) {
        puVar5 = operator_new__(uVar6 * 0xa0 + 4);
        *puVar5 = uVar6;
        this_02 = (UPreference_ModelSwap *)(puVar5 + 1);
        while (uVar6 = uVar6 - 1, uVar6 != 0xffffffff) {
          UPreference_ModelSwap::UPreference_ModelSwap(this_02);
          this_02 = this_02 + 0xa0;
        }
        *(UPreference_ModelSwap **)(param_2 + 0x44) = (UPreference_ModelSwap *)(puVar5 + 1);
      }
    }
    if (local_90[0] != 0) {
      uVar6 = 0;
      iVar2 = 0;
      do {
        uVar6 = uVar6 + 1;
        Load(param_1,(UPreference_ModelSwap *)(iVar2 + *(int *)(param_2 + 0x44)));
        iVar2 = iVar2 + 0xa0;
      } while (uVar6 < local_90[0]);
    }
    if (uVar10 < 8) goto LAB_00063e08;
    FFileBase::Read(param_1,(uchar *)local_90,4);
    uVar6 = local_90[0];
    if (local_90[0] != *(uint *)(param_2 + 0x50)) {
      if (*(uint *)(param_2 + 0x50) != 0) {
        piVar3 = *(int **)(param_2 + 0x4c);
        if (piVar3 != (int *)0x0) {
          piVar11 = piVar3 + piVar3[-1] * 0x23;
          if (piVar3 != piVar11) {
            do {
              piVar11 = piVar11 + -0x23;
              (**(code **)(*piVar11 + 0x38))(piVar11);
              piVar3 = *(int **)(param_2 + 0x4c);
            } while (piVar3 != piVar11);
          }
          operator_delete__(piVar3 + -1);
        }
        *(undefined4 *)(param_2 + 0x4c) = 0;
      }
      *(uint *)(param_2 + 0x50) = uVar6;
      if (uVar6 != 0) {
        puVar5 = operator_new__(uVar6 * 0x8c + 4);
        *puVar5 = uVar6;
        pUVar1 = (UPreferenceBase *)(puVar5 + 1);
        while (uVar6 = uVar6 - 1, uVar6 != 0xffffffff) {
          UPreferenceBase::UPreferenceBase(pUVar1);
          iVar2 = *(int *)(unaff_EBX + 0x38c3d);
          *(undefined4 *)(pUVar1 + 0x7c) = 0;
          *(undefined4 *)(pUVar1 + 0x80) = 0;
          *(undefined4 *)(pUVar1 + 0x84) = 0;
          pUVar1[0x88] = (UPreferenceBase)0x0;
          *(int *)pUVar1 = iVar2 + 8;
          pUVar1 = pUVar1 + 0x8c;
        }
        *(UPreferenceBase **)(param_2 + 0x4c) = (UPreferenceBase *)(puVar5 + 1);
      }
    }
    if (local_90[0] != 0) {
      uVar6 = 0;
      do {
        iVar2 = uVar6 * 0x8c;
        uVar6 = uVar6 + 1;
        Load(param_1,(UPreference_IAB *)(iVar2 + *(int *)(param_2 + 0x4c)));
      } while (uVar6 < local_90[0]);
    }
    if (uVar10 != 8) {
      FFileBase::Read(param_1,(uchar *)local_90,4);
      uVar6 = local_90[0];
      if (local_90[0] != *(uint *)(param_2 + 0x58)) {
        if (*(uint *)(param_2 + 0x58) != 0) {
          piVar3 = *(int **)(param_2 + 0x54);
          if (piVar3 != (int *)0x0) {
            piVar11 = piVar3 + piVar3[-1] * 0x22;
            if (piVar3 != piVar11) {
              do {
                piVar11 = piVar11 + -0x22;
                (**(code **)(*piVar11 + 0x38))(piVar11);
                piVar3 = *(int **)(param_2 + 0x54);
              } while (piVar3 != piVar11);
            }
            operator_delete__(piVar3 + -1);
          }
          *(undefined4 *)(param_2 + 0x54) = 0;
        }
        *(uint *)(param_2 + 0x58) = uVar6;
        if (uVar6 != 0) {
          puVar5 = operator_new__(uVar6 * 0x88 + 4);
          *puVar5 = uVar6;
          pUVar1 = (UPreferenceBase *)(puVar5 + 1);
          while (uVar6 = uVar6 - 1, uVar6 != 0xffffffff) {
            UPreferenceBase::UPreferenceBase(pUVar1);
            iVar2 = *(int *)(unaff_EBX + 0x38c45);
            *(undefined4 *)(pUVar1 + 0x7c) = 0;
            *(undefined4 *)(pUVar1 + 0x80) = 0;
            *(undefined4 *)(pUVar1 + 0x84) = 0;
            *(int *)pUVar1 = iVar2 + 8;
            pUVar1 = pUVar1 + 0x88;
          }
          *(UPreferenceBase **)(param_2 + 0x54) = (UPreferenceBase *)(puVar5 + 1);
        }
      }
      if (local_90[0] != 0) {
        uVar6 = 0;
        iVar2 = 0;
        do {
          uVar6 = uVar6 + 1;
          Load(param_1,(UPreference_Environment *)(iVar2 + *(int *)(param_2 + 0x54)));
          iVar2 = iVar2 + 0x88;
        } while (uVar6 < local_90[0]);
      }
      goto LAB_00063e08;
    }
  }
  FFileBase::Read(param_1,(uchar *)local_90,4);
  if (local_90[0] != 0) {
    uVar6 = 0;
    do {
      uVar6 = uVar6 + 1;
      GETimeOfDay::GETimeOfDay(local_88);
      Load(param_1,local_88);
    } while (uVar6 < local_90[0]);
  }
LAB_00063e18:
  if (uVar10 < 7) {
    UPreference_Scene::InitializeAutoTimeOfDay(param_2);
  }
  else {
    iVar2 = *(int *)(param_2 + 0x38);
    if (iVar2 != 0) {
      iVar8 = 0;
      do {
        FFileBase::Read(param_1,(uchar *)local_90,4);
        iVar4 = iVar8 * 0x94;
        iVar8 = iVar8 + 1;
        *(uint *)(iVar4 + *(int *)(param_2 + 0x34) + 0x88) = local_90[0];
      } while (iVar8 != iVar2);
    }
    UPreference_Scene::InitializeAutoTimeOfDay(param_2);
    if (9 < uVar10) {
      FFileBase::Read(param_1,(uchar *)local_90,4);
      UPreference_Scene::InitializeMultiPrefs(param_2,local_90[0]);
      if (local_90[0] != 0) {
        uVar9 = 0;
        do {
          UStringBase<char,int>::UStringBase(local_4c);
          UStringBase<char,int>::UStringBase(local_30);
          Load<char,int>(param_1,(UStringBase *)local_4c);
          Load<char,int>(param_1,(UStringBase *)local_30);
          uVar10 = uVar9 + 1;
          UPreference_Scene::SetMultiPref
                    (param_2,uVar9,(UStringBase *)local_4c,(UStringBase *)local_30);
          UStringBase<char,int>::~UStringBase(local_30);
          UStringBase<char,int>::~UStringBase(local_4c);
          uVar9 = uVar10;
        } while (uVar10 < local_90[0]);
      }
    }
  }
  if (local_14 == **(int **)(unaff_EBX + 0x38b6d)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002e000();
}

