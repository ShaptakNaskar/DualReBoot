/* 00064a84 | STG::UPreference_Scene::Initialize */

/* STG::UPreference_Scene::Initialize(STG::UPreference_Scene::InitData const&) */

void __thiscall STG::UPreference_Scene::Initialize(UPreference_Scene *this,InitData *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  UPreferenceBase *pUVar3;
  int iVar4;
  UPreference_FileChooser_Texture *this_00;
  UPreference_TextureGroup *this_01;
  UPreference_TextureFont *this_02;
  UPreference_ModelSwap *this_03;
  UPreference_ModelToggle *this_04;
  UPreference_TextureSwap *this_05;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = *(int *)param_1;
  iVar5 = DAT_00065484 + 0x64aac;
  if (iVar6 != *(int *)(this + 8)) {
    if (*(int *)(this + 8) != 0) {
      iVar4 = *(int *)(this + 4);
      if (iVar4 != 0) {
        iVar7 = iVar4 + *(int *)(iVar4 + -4) * 0x88;
        if (iVar4 != iVar7) {
          do {
            iVar2 = iVar7 + -0x88;
            (**(code **)(*(int *)(iVar7 + -0x88) + 0x38))(iVar2);
            iVar4 = *(int *)(this + 4);
            iVar7 = iVar2;
          } while (iVar4 != iVar2);
        }
        operator_delete__((void *)(iVar4 + -8));
      }
      *(undefined4 *)(this + 4) = 0;
    }
    *(int *)(this + 8) = iVar6;
    if (iVar6 != 0) {
      iVar4 = iVar6 + -1;
      puVar1 = operator_new__(iVar6 * 0x88 + 8);
      puVar1[1] = iVar6;
      *puVar1 = 0x88;
      if (iVar4 != -1) {
        iVar6 = *(int *)(iVar5 + DAT_00065498);
        pUVar3 = (UPreferenceBase *)(puVar1 + 2);
        do {
          iVar4 = iVar4 + -1;
          UPreferenceBase::UPreferenceBase(pUVar3);
          *(undefined4 *)(pUVar3 + 0x7c) = 0;
          *(undefined4 *)(pUVar3 + 0x80) = 0;
          *(undefined4 *)(pUVar3 + 0x84) = 0;
          *(int *)pUVar3 = iVar6 + 8;
          pUVar3 = pUVar3 + 0x88;
        } while (iVar4 != -1);
      }
      *(UPreferenceBase **)(this + 4) = (UPreferenceBase *)(puVar1 + 2);
    }
  }
  iVar6 = *(int *)(param_1 + 4);
  if (iVar6 != *(int *)(this + 0x10)) {
    if (*(int *)(this + 0x10) != 0) {
      iVar4 = *(int *)(this + 0xc);
      if (iVar4 != 0) {
        iVar7 = iVar4 + *(int *)(iVar4 + -4) * 0x88;
        if (iVar4 != iVar7) {
          do {
            iVar2 = iVar7 + -0x88;
            (**(code **)(*(int *)(iVar7 + -0x88) + 0x38))(iVar2);
            iVar4 = *(int *)(this + 0xc);
            iVar7 = iVar2;
          } while (iVar4 != iVar2);
        }
        operator_delete__((void *)(iVar4 + -8));
      }
      *(undefined4 *)(this + 0xc) = 0;
    }
    *(int *)(this + 0x10) = iVar6;
    if (iVar6 != 0) {
      iVar4 = iVar6 + -1;
      puVar1 = operator_new__(iVar6 * 0x88 + 8);
      puVar1[1] = iVar6;
      *puVar1 = 0x88;
      if (iVar4 != -1) {
        iVar6 = *(int *)(iVar5 + DAT_00065494);
        pUVar3 = (UPreferenceBase *)(puVar1 + 2);
        do {
          iVar4 = iVar4 + -1;
          UPreferenceBase::UPreferenceBase(pUVar3);
          *(undefined4 *)(pUVar3 + 0x7c) = 0;
          *(undefined4 *)(pUVar3 + 0x80) = 0;
          *(undefined4 *)(pUVar3 + 0x84) = 0;
          *(int *)pUVar3 = iVar6 + 8;
          pUVar3 = pUVar3 + 0x88;
        } while (iVar4 != -1);
      }
      *(UPreferenceBase **)(this + 0xc) = (UPreferenceBase *)(puVar1 + 2);
    }
  }
  iVar6 = *(int *)(param_1 + 8);
  if (iVar6 != *(int *)(this + 0x18)) {
    if (*(int *)(this + 0x18) != 0) {
      iVar4 = *(int *)(this + 0x14);
      if (iVar4 != 0) {
        iVar7 = *(int *)(iVar4 + -4) * 0x8c + iVar4;
        if (iVar4 != iVar7) {
          do {
            iVar2 = iVar7 + -0x8c;
            (**(code **)(*(int *)(iVar7 + -0x8c) + 0x38))(iVar2);
            iVar4 = *(int *)(this + 0x14);
            iVar7 = iVar2;
          } while (iVar4 != iVar2);
        }
        operator_delete__((void *)(iVar4 + -8));
      }
      *(undefined4 *)(this + 0x14) = 0;
    }
    *(int *)(this + 0x18) = iVar6;
    if (iVar6 != 0) {
      puVar1 = operator_new__(iVar6 * 0x8c + 8);
      *puVar1 = 0x8c;
      puVar1[1] = iVar6;
      this_05 = (UPreference_TextureSwap *)(puVar1 + 2);
      while (iVar6 = iVar6 + -1, iVar6 != -1) {
        UPreference_TextureSwap::UPreference_TextureSwap(this_05);
        this_05 = this_05 + 0x8c;
      }
      *(UPreference_TextureSwap **)(this + 0x14) = (UPreference_TextureSwap *)(puVar1 + 2);
    }
  }
  iVar6 = *(int *)(param_1 + 0x10);
  if (iVar6 != *(int *)(this + 0x20)) {
    if (*(int *)(this + 0x20) != 0) {
      iVar4 = *(int *)(this + 0x1c);
      if (iVar4 != 0) {
        iVar7 = iVar4 + *(int *)(iVar4 + -4) * 0x90;
        if (iVar4 != iVar7) {
          do {
            iVar2 = iVar7 + -0x90;
            (**(code **)(*(int *)(iVar7 + -0x90) + 0x38))(iVar2);
            iVar4 = *(int *)(this + 0x1c);
            iVar7 = iVar2;
          } while (iVar4 != iVar2);
        }
        operator_delete__((void *)(iVar4 + -8));
      }
      *(undefined4 *)(this + 0x1c) = 0;
    }
    *(int *)(this + 0x20) = iVar6;
    if (iVar6 != 0) {
      puVar1 = operator_new__(iVar6 * 0x90 + 8);
      puVar1[1] = iVar6;
      *puVar1 = 0x90;
      this_04 = (UPreference_ModelToggle *)(puVar1 + 2);
      while (iVar6 = iVar6 + -1, iVar6 != -1) {
        UPreference_ModelToggle::UPreference_ModelToggle(this_04);
        this_04 = this_04 + 0x90;
      }
      *(UPreference_ModelToggle **)(this + 0x1c) = (UPreference_ModelToggle *)(puVar1 + 2);
    }
  }
  iVar6 = *(int *)(param_1 + 0x14);
  if (iVar6 != *(int *)(this + 0x48)) {
    if (*(int *)(this + 0x48) != 0) {
      iVar4 = *(int *)(this + 0x44);
      if (iVar4 != 0) {
        iVar7 = iVar4 + *(int *)(iVar4 + -4) * 0xa0;
        if (iVar4 != iVar7) {
          do {
            iVar2 = iVar7 + -0xa0;
            (**(code **)(*(int *)(iVar7 + -0xa0) + 0x38))(iVar2);
            iVar4 = *(int *)(this + 0x44);
            iVar7 = iVar2;
          } while (iVar4 != iVar2);
        }
        operator_delete__((void *)(iVar4 + -8));
      }
      *(undefined4 *)(this + 0x44) = 0;
    }
    *(int *)(this + 0x48) = iVar6;
    if (iVar6 != 0) {
      puVar1 = operator_new__(iVar6 * 0xa0 + 8);
      puVar1[1] = iVar6;
      *puVar1 = 0xa0;
      this_03 = (UPreference_ModelSwap *)(puVar1 + 2);
      while (iVar6 = iVar6 + -1, iVar6 != -1) {
        UPreference_ModelSwap::UPreference_ModelSwap(this_03);
        this_03 = this_03 + 0xa0;
      }
      *(UPreference_ModelSwap **)(this + 0x44) = (UPreference_ModelSwap *)(puVar1 + 2);
    }
  }
  iVar6 = *(int *)(param_1 + 0x18);
  if (iVar6 != *(int *)(this + 0x28)) {
    if (*(int *)(this + 0x28) != 0) {
      iVar4 = *(int *)(this + 0x24);
      if (iVar4 != 0) {
        iVar7 = iVar4 + *(int *)(iVar4 + -4) * 0x90;
        if (iVar4 != iVar7) {
          do {
            iVar2 = iVar7 + -0x90;
            (**(code **)(*(int *)(iVar7 + -0x90) + 0x38))(iVar2);
            iVar4 = *(int *)(this + 0x24);
            iVar7 = iVar2;
          } while (iVar4 != iVar2);
        }
        operator_delete__((void *)(iVar4 + -8));
      }
      *(undefined4 *)(this + 0x24) = 0;
    }
    *(int *)(this + 0x28) = iVar6;
    if (iVar6 != 0) {
      puVar1 = operator_new__(iVar6 * 0x90 + 8);
      puVar1[1] = iVar6;
      *puVar1 = 0x90;
      this_02 = (UPreference_TextureFont *)(puVar1 + 2);
      while (iVar6 = iVar6 + -1, iVar6 != -1) {
        UPreference_TextureFont::UPreference_TextureFont(this_02);
        this_02 = this_02 + 0x90;
      }
      *(UPreference_TextureFont **)(this + 0x24) = (UPreference_TextureFont *)(puVar1 + 2);
    }
  }
  iVar6 = *(int *)(param_1 + 0xc);
  if (iVar6 != *(int *)(this + 0x30)) {
    if (*(int *)(this + 0x30) != 0) {
      iVar4 = *(int *)(this + 0x2c);
      if (iVar4 != 0) {
        iVar7 = *(int *)(iVar4 + -4) * 0x98 + iVar4;
        if (iVar4 != iVar7) {
          do {
            iVar2 = iVar7 + -0x98;
            (**(code **)(*(int *)(iVar7 + -0x98) + 0x38))(iVar2);
            iVar4 = *(int *)(this + 0x2c);
            iVar7 = iVar2;
          } while (iVar4 != iVar2);
        }
        operator_delete__((void *)(iVar4 + -8));
      }
      *(undefined4 *)(this + 0x2c) = 0;
    }
    *(int *)(this + 0x30) = iVar6;
    if (iVar6 != 0) {
      puVar1 = operator_new__(iVar6 * 0x98 + 8);
      *puVar1 = 0x98;
      puVar1[1] = iVar6;
      this_01 = (UPreference_TextureGroup *)(puVar1 + 2);
      while (iVar6 = iVar6 + -1, iVar6 != -1) {
        UPreference_TextureGroup::UPreference_TextureGroup(this_01);
        this_01 = this_01 + 0x98;
      }
      *(UPreference_TextureGroup **)(this + 0x2c) = (UPreference_TextureGroup *)(puVar1 + 2);
    }
  }
  iVar6 = *(int *)(param_1 + 0x1c);
  if (iVar6 != *(int *)(this + 0x38)) {
    if (*(int *)(this + 0x38) != 0) {
      iVar4 = *(int *)(this + 0x34);
      if (iVar4 != 0) {
        iVar7 = *(int *)(iVar4 + -4) * 0x94 + iVar4;
        if (iVar4 != iVar7) {
          do {
            iVar2 = iVar7 + -0x94;
            (**(code **)(*(int *)(iVar7 + -0x94) + 0x38))(iVar2);
            iVar4 = *(int *)(this + 0x34);
            iVar7 = iVar2;
          } while (iVar4 != iVar2);
        }
        operator_delete__((void *)(iVar4 + -8));
      }
      *(undefined4 *)(this + 0x34) = 0;
    }
    *(int *)(this + 0x38) = iVar6;
    if (iVar6 != 0) {
      puVar1 = operator_new__(iVar6 * 0x94 + 8);
      *puVar1 = 0x94;
      puVar1[1] = iVar6;
      this_00 = (UPreference_FileChooser_Texture *)(puVar1 + 2);
      while (iVar6 = iVar6 + -1, iVar6 != -1) {
        UPreference_FileChooser_Texture::UPreference_FileChooser_Texture(this_00);
        this_00 = this_00 + 0x94;
      }
      *(UPreference_FileChooser_Texture **)(this + 0x34) =
           (UPreference_FileChooser_Texture *)(puVar1 + 2);
    }
  }
  iVar6 = *(int *)(param_1 + 0x20);
  if (iVar6 != *(int *)(this + 0x40)) {
    if (*(int *)(this + 0x40) != 0) {
      iVar4 = *(int *)(this + 0x3c);
      if (iVar4 != 0) {
        iVar7 = iVar4 + *(int *)(iVar4 + -4) * 0x88;
        if (iVar4 != iVar7) {
          do {
            iVar2 = iVar7 + -0x88;
            (**(code **)(*(int *)(iVar7 + -0x88) + 0x38))(iVar2);
            iVar4 = *(int *)(this + 0x3c);
            iVar7 = iVar2;
          } while (iVar4 != iVar2);
        }
        operator_delete__((void *)(iVar4 + -8));
      }
      *(undefined4 *)(this + 0x3c) = 0;
    }
    *(int *)(this + 0x40) = iVar6;
    if (iVar6 != 0) {
      iVar4 = iVar6 + -1;
      puVar1 = operator_new__(iVar6 * 0x88 + 8);
      puVar1[1] = iVar6;
      *puVar1 = 0x88;
      if (iVar4 != -1) {
        iVar6 = *(int *)(iVar5 + DAT_00065490);
        pUVar3 = (UPreferenceBase *)(puVar1 + 2);
        do {
          iVar4 = iVar4 + -1;
          UPreferenceBase::UPreferenceBase(pUVar3);
          *(undefined4 *)(pUVar3 + 0x7c) = 0;
          *(undefined4 *)(pUVar3 + 0x80) = 0;
          *(undefined4 *)(pUVar3 + 0x84) = 0;
          *(int *)pUVar3 = iVar6 + 8;
          pUVar3 = pUVar3 + 0x88;
        } while (iVar4 != -1);
      }
      *(UPreferenceBase **)(this + 0x3c) = (UPreferenceBase *)(puVar1 + 2);
    }
  }
  iVar6 = *(int *)(param_1 + 0x24);
  if (iVar6 != *(int *)(this + 0x50)) {
    if (*(int *)(this + 0x50) != 0) {
      iVar4 = *(int *)(this + 0x4c);
      if (iVar4 != 0) {
        iVar7 = *(int *)(iVar4 + -4) * 0x8c + iVar4;
        if (iVar4 != iVar7) {
          do {
            iVar2 = iVar7 + -0x8c;
            (**(code **)(*(int *)(iVar7 + -0x8c) + 0x38))(iVar2);
            iVar4 = *(int *)(this + 0x4c);
            iVar7 = iVar2;
          } while (iVar4 != iVar2);
        }
        operator_delete__((void *)(iVar4 + -8));
      }
      *(undefined4 *)(this + 0x4c) = 0;
    }
    *(int *)(this + 0x50) = iVar6;
    if (iVar6 != 0) {
      iVar4 = iVar6 + -1;
      puVar1 = operator_new__(iVar6 * 0x8c + 8);
      *puVar1 = 0x8c;
      puVar1[1] = iVar6;
      if (iVar4 != -1) {
        iVar6 = *(int *)(iVar5 + DAT_0006548c);
        pUVar3 = (UPreferenceBase *)(puVar1 + 2);
        do {
          iVar4 = iVar4 + -1;
          UPreferenceBase::UPreferenceBase(pUVar3);
          *(undefined4 *)(pUVar3 + 0x7c) = 0;
          *(undefined4 *)(pUVar3 + 0x80) = 0;
          *(undefined4 *)(pUVar3 + 0x84) = 0;
          *(int *)pUVar3 = iVar6 + 8;
          pUVar3[0x88] = (UPreferenceBase)0x0;
          pUVar3 = pUVar3 + 0x8c;
        } while (iVar4 != -1);
      }
      *(UPreferenceBase **)(this + 0x4c) = (UPreferenceBase *)(puVar1 + 2);
    }
  }
  iVar6 = *(int *)(param_1 + 0x28);
  if (iVar6 != *(int *)(this + 0x58)) {
    if (*(int *)(this + 0x58) != 0) {
      iVar4 = *(int *)(this + 0x54);
      if (iVar4 != 0) {
        iVar7 = iVar4 + *(int *)(iVar4 + -4) * 0x88;
        if (iVar4 != iVar7) {
          do {
            iVar2 = iVar7 + -0x88;
            (**(code **)(*(int *)(iVar7 + -0x88) + 0x38))(iVar2);
            iVar4 = *(int *)(this + 0x54);
            iVar7 = iVar2;
          } while (iVar2 != iVar4);
        }
        operator_delete__((void *)(iVar4 + -8));
      }
      *(undefined4 *)(this + 0x54) = 0;
    }
    *(int *)(this + 0x58) = iVar6;
    if (iVar6 != 0) {
      iVar4 = iVar6 + -1;
      puVar1 = operator_new__(iVar6 * 0x88 + 8);
      puVar1[1] = iVar6;
      *puVar1 = 0x88;
      if (iVar4 != -1) {
        iVar5 = *(int *)(iVar5 + DAT_00065488);
        pUVar3 = (UPreferenceBase *)(puVar1 + 2);
        do {
          iVar4 = iVar4 + -1;
          UPreferenceBase::UPreferenceBase(pUVar3);
          *(undefined4 *)(pUVar3 + 0x7c) = 0;
          *(undefined4 *)(pUVar3 + 0x80) = 0;
          *(undefined4 *)(pUVar3 + 0x84) = 0;
          *(int *)pUVar3 = iVar5 + 8;
          pUVar3 = pUVar3 + 0x88;
        } while (iVar4 != -1);
      }
      *(UPreferenceBase **)(this + 0x54) = (UPreferenceBase *)(puVar1 + 2);
      InitializeAutoTimeOfDay();
      this[0x74] = (UPreference_Scene)0x1;
      return;
    }
  }
  InitializeAutoTimeOfDay();
  this[0x74] = (UPreference_Scene)0x1;
  return;
}

