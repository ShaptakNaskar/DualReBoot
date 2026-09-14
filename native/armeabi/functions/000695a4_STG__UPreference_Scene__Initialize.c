/* 000695a4 | STG::UPreference_Scene::Initialize */

/* STG::UPreference_Scene::Initialize(STG::UPreference_Scene::InitData const&) */

void __thiscall STG::UPreference_Scene::Initialize(UPreference_Scene *this,InitData *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
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
  iVar5 = DAT_00069f8c + 0x695cc;
  if (iVar6 != *(int *)(this + 8)) {
    if (*(int *)(this + 8) != 0) {
      iVar4 = *(int *)(this + 4);
      if (iVar4 != 0) {
        iVar7 = *(int *)(iVar4 + -4) * 0x88 + iVar4;
        if (iVar4 != iVar7) {
          do {
            piVar1 = (int *)(iVar7 + -0x88);
            iVar7 = iVar7 + -0x88;
            (**(code **)(*piVar1 + 0x38))(iVar7);
            iVar4 = *(int *)(this + 4);
          } while (iVar4 != iVar7);
        }
        operator_delete__((void *)(iVar4 + -8));
      }
      *(undefined4 *)(this + 4) = 0;
    }
    *(int *)(this + 8) = iVar6;
    if (iVar6 != 0) {
      puVar2 = operator_new__(iVar6 * 0x88 + 8);
      iVar4 = iVar6 + -1;
      *puVar2 = 0x88;
      puVar2[1] = iVar6;
      if (iVar4 != -1) {
        iVar6 = *(int *)(iVar5 + DAT_00069fa0);
        pUVar3 = (UPreferenceBase *)(puVar2 + 2);
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
      *(UPreferenceBase **)(this + 4) = (UPreferenceBase *)(puVar2 + 2);
    }
  }
  iVar6 = *(int *)(param_1 + 4);
  if (iVar6 != *(int *)(this + 0x10)) {
    if (*(int *)(this + 0x10) != 0) {
      iVar4 = *(int *)(this + 0xc);
      if (iVar4 != 0) {
        iVar7 = *(int *)(iVar4 + -4) * 0x88 + iVar4;
        if (iVar4 != iVar7) {
          do {
            piVar1 = (int *)(iVar7 + -0x88);
            iVar7 = iVar7 + -0x88;
            (**(code **)(*piVar1 + 0x38))(iVar7);
            iVar4 = *(int *)(this + 0xc);
          } while (iVar4 != iVar7);
        }
        operator_delete__((void *)(iVar4 + -8));
      }
      *(undefined4 *)(this + 0xc) = 0;
    }
    *(int *)(this + 0x10) = iVar6;
    if (iVar6 != 0) {
      puVar2 = operator_new__(iVar6 * 0x88 + 8);
      iVar4 = iVar6 + -1;
      *puVar2 = 0x88;
      puVar2[1] = iVar6;
      if (iVar4 != -1) {
        iVar6 = *(int *)(iVar5 + DAT_00069f9c);
        pUVar3 = (UPreferenceBase *)(puVar2 + 2);
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
      *(UPreferenceBase **)(this + 0xc) = (UPreferenceBase *)(puVar2 + 2);
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
            piVar1 = (int *)(iVar7 + -0x8c);
            iVar7 = iVar7 + -0x8c;
            (**(code **)(*piVar1 + 0x38))(iVar7);
            iVar4 = *(int *)(this + 0x14);
          } while (iVar4 != iVar7);
        }
        operator_delete__((void *)(iVar4 + -8));
      }
      *(undefined4 *)(this + 0x14) = 0;
    }
    *(int *)(this + 0x18) = iVar6;
    if (iVar6 != 0) {
      puVar2 = operator_new__(iVar6 * 0x8c + 8);
      *puVar2 = 0x8c;
      puVar2[1] = iVar6;
      this_05 = (UPreference_TextureSwap *)(puVar2 + 2);
      while (iVar6 = iVar6 + -1, iVar6 != -1) {
        UPreference_TextureSwap::UPreference_TextureSwap(this_05);
        this_05 = this_05 + 0x8c;
      }
      *(UPreference_TextureSwap **)(this + 0x14) = (UPreference_TextureSwap *)(puVar2 + 2);
    }
  }
  iVar6 = *(int *)(param_1 + 0x10);
  if (iVar6 != *(int *)(this + 0x20)) {
    if (*(int *)(this + 0x20) != 0) {
      iVar4 = *(int *)(this + 0x1c);
      if (iVar4 != 0) {
        iVar7 = *(int *)(iVar4 + -4) * 0x90 + iVar4;
        if (iVar4 != iVar7) {
          do {
            piVar1 = (int *)(iVar7 + -0x90);
            iVar7 = iVar7 + -0x90;
            (**(code **)(*piVar1 + 0x38))(iVar7);
            iVar4 = *(int *)(this + 0x1c);
          } while (iVar4 != iVar7);
        }
        operator_delete__((void *)(iVar4 + -8));
      }
      *(undefined4 *)(this + 0x1c) = 0;
    }
    *(int *)(this + 0x20) = iVar6;
    if (iVar6 != 0) {
      puVar2 = operator_new__(iVar6 * 0x90 + 8);
      *puVar2 = 0x90;
      puVar2[1] = iVar6;
      this_04 = (UPreference_ModelToggle *)(puVar2 + 2);
      while (iVar6 = iVar6 + -1, iVar6 != -1) {
        UPreference_ModelToggle::UPreference_ModelToggle(this_04);
        this_04 = this_04 + 0x90;
      }
      *(UPreference_ModelToggle **)(this + 0x1c) = (UPreference_ModelToggle *)(puVar2 + 2);
    }
  }
  iVar6 = *(int *)(param_1 + 0x14);
  if (iVar6 != *(int *)(this + 0x48)) {
    if (*(int *)(this + 0x48) != 0) {
      iVar4 = *(int *)(this + 0x44);
      if (iVar4 != 0) {
        iVar7 = *(int *)(iVar4 + -4) * 0xa0 + iVar4;
        if (iVar4 != iVar7) {
          do {
            piVar1 = (int *)(iVar7 + -0xa0);
            iVar7 = iVar7 + -0xa0;
            (**(code **)(*piVar1 + 0x38))(iVar7);
            iVar4 = *(int *)(this + 0x44);
          } while (iVar4 != iVar7);
        }
        operator_delete__((void *)(iVar4 + -8));
      }
      *(undefined4 *)(this + 0x44) = 0;
    }
    *(int *)(this + 0x48) = iVar6;
    if (iVar6 != 0) {
      puVar2 = operator_new__(iVar6 * 0xa0 + 8);
      *puVar2 = 0xa0;
      puVar2[1] = iVar6;
      this_03 = (UPreference_ModelSwap *)(puVar2 + 2);
      while (iVar6 = iVar6 + -1, iVar6 != -1) {
        UPreference_ModelSwap::UPreference_ModelSwap(this_03);
        this_03 = this_03 + 0xa0;
      }
      *(UPreference_ModelSwap **)(this + 0x44) = (UPreference_ModelSwap *)(puVar2 + 2);
    }
  }
  iVar6 = *(int *)(param_1 + 0x18);
  if (iVar6 != *(int *)(this + 0x28)) {
    if (*(int *)(this + 0x28) != 0) {
      iVar4 = *(int *)(this + 0x24);
      if (iVar4 != 0) {
        iVar7 = *(int *)(iVar4 + -4) * 0x90 + iVar4;
        if (iVar4 != iVar7) {
          do {
            piVar1 = (int *)(iVar7 + -0x90);
            iVar7 = iVar7 + -0x90;
            (**(code **)(*piVar1 + 0x38))(iVar7);
            iVar4 = *(int *)(this + 0x24);
          } while (iVar4 != iVar7);
        }
        operator_delete__((void *)(iVar4 + -8));
      }
      *(undefined4 *)(this + 0x24) = 0;
    }
    *(int *)(this + 0x28) = iVar6;
    if (iVar6 != 0) {
      puVar2 = operator_new__(iVar6 * 0x90 + 8);
      *puVar2 = 0x90;
      puVar2[1] = iVar6;
      this_02 = (UPreference_TextureFont *)(puVar2 + 2);
      while (iVar6 = iVar6 + -1, iVar6 != -1) {
        UPreference_TextureFont::UPreference_TextureFont(this_02);
        this_02 = this_02 + 0x90;
      }
      *(UPreference_TextureFont **)(this + 0x24) = (UPreference_TextureFont *)(puVar2 + 2);
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
            piVar1 = (int *)(iVar7 + -0x98);
            iVar7 = iVar7 + -0x98;
            (**(code **)(*piVar1 + 0x38))(iVar7);
            iVar4 = *(int *)(this + 0x2c);
          } while (iVar4 != iVar7);
        }
        operator_delete__((void *)(iVar4 + -8));
      }
      *(undefined4 *)(this + 0x2c) = 0;
    }
    *(int *)(this + 0x30) = iVar6;
    if (iVar6 != 0) {
      puVar2 = operator_new__(iVar6 * 0x98 + 8);
      *puVar2 = 0x98;
      puVar2[1] = iVar6;
      this_01 = (UPreference_TextureGroup *)(puVar2 + 2);
      while (iVar6 = iVar6 + -1, iVar6 != -1) {
        UPreference_TextureGroup::UPreference_TextureGroup(this_01);
        this_01 = this_01 + 0x98;
      }
      *(UPreference_TextureGroup **)(this + 0x2c) = (UPreference_TextureGroup *)(puVar2 + 2);
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
            piVar1 = (int *)(iVar7 + -0x94);
            iVar7 = iVar7 + -0x94;
            (**(code **)(*piVar1 + 0x38))(iVar7);
            iVar4 = *(int *)(this + 0x34);
          } while (iVar4 != iVar7);
        }
        operator_delete__((void *)(iVar4 + -8));
      }
      *(undefined4 *)(this + 0x34) = 0;
    }
    *(int *)(this + 0x38) = iVar6;
    if (iVar6 != 0) {
      puVar2 = operator_new__(iVar6 * 0x94 + 8);
      *puVar2 = 0x94;
      puVar2[1] = iVar6;
      this_00 = (UPreference_FileChooser_Texture *)(puVar2 + 2);
      while (iVar6 = iVar6 + -1, iVar6 != -1) {
        UPreference_FileChooser_Texture::UPreference_FileChooser_Texture(this_00);
        this_00 = this_00 + 0x94;
      }
      *(UPreference_FileChooser_Texture **)(this + 0x34) =
           (UPreference_FileChooser_Texture *)(puVar2 + 2);
    }
  }
  iVar6 = *(int *)(param_1 + 0x20);
  if (iVar6 != *(int *)(this + 0x40)) {
    if (*(int *)(this + 0x40) != 0) {
      iVar4 = *(int *)(this + 0x3c);
      if (iVar4 != 0) {
        iVar7 = *(int *)(iVar4 + -4) * 0x88 + iVar4;
        if (iVar4 != iVar7) {
          do {
            piVar1 = (int *)(iVar7 + -0x88);
            iVar7 = iVar7 + -0x88;
            (**(code **)(*piVar1 + 0x38))(iVar7);
            iVar4 = *(int *)(this + 0x3c);
          } while (iVar4 != iVar7);
        }
        operator_delete__((void *)(iVar4 + -8));
      }
      *(undefined4 *)(this + 0x3c) = 0;
    }
    *(int *)(this + 0x40) = iVar6;
    if (iVar6 != 0) {
      puVar2 = operator_new__(iVar6 * 0x88 + 8);
      iVar4 = iVar6 + -1;
      *puVar2 = 0x88;
      puVar2[1] = iVar6;
      if (iVar4 != -1) {
        iVar6 = *(int *)(iVar5 + DAT_00069f98);
        pUVar3 = (UPreferenceBase *)(puVar2 + 2);
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
      *(UPreferenceBase **)(this + 0x3c) = (UPreferenceBase *)(puVar2 + 2);
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
            piVar1 = (int *)(iVar7 + -0x8c);
            iVar7 = iVar7 + -0x8c;
            (**(code **)(*piVar1 + 0x38))(iVar7);
            iVar4 = *(int *)(this + 0x4c);
          } while (iVar4 != iVar7);
        }
        operator_delete__((void *)(iVar4 + -8));
      }
      *(undefined4 *)(this + 0x4c) = 0;
    }
    *(int *)(this + 0x50) = iVar6;
    if (iVar6 != 0) {
      puVar2 = operator_new__(iVar6 * 0x8c + 8);
      iVar4 = iVar6 + -1;
      *puVar2 = 0x8c;
      puVar2[1] = iVar6;
      if (iVar4 != -1) {
        iVar6 = *(int *)(iVar5 + DAT_00069f94);
        pUVar3 = (UPreferenceBase *)(puVar2 + 2);
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
      *(UPreferenceBase **)(this + 0x4c) = (UPreferenceBase *)(puVar2 + 2);
    }
  }
  iVar6 = *(int *)(param_1 + 0x28);
  if (iVar6 != *(int *)(this + 0x58)) {
    if (*(int *)(this + 0x58) != 0) {
      iVar4 = *(int *)(this + 0x54);
      if (iVar4 != 0) {
        iVar7 = *(int *)(iVar4 + -4) * 0x88 + iVar4;
        if (iVar4 != iVar7) {
          do {
            piVar1 = (int *)(iVar7 + -0x88);
            iVar7 = iVar7 + -0x88;
            (**(code **)(*piVar1 + 0x38))(iVar7);
            iVar4 = *(int *)(this + 0x54);
          } while (iVar7 != iVar4);
        }
        operator_delete__((void *)(iVar4 + -8));
      }
      *(undefined4 *)(this + 0x54) = 0;
    }
    *(int *)(this + 0x58) = iVar6;
    if (iVar6 != 0) {
      puVar2 = operator_new__(iVar6 * 0x88 + 8);
      iVar4 = iVar6 + -1;
      *puVar2 = 0x88;
      puVar2[1] = iVar6;
      if (iVar4 != -1) {
        iVar5 = *(int *)(iVar5 + DAT_00069f90);
        pUVar3 = (UPreferenceBase *)(puVar2 + 2);
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
      *(UPreferenceBase **)(this + 0x54) = (UPreferenceBase *)(puVar2 + 2);
      InitializeAutoTimeOfDay();
      this[0x74] = (UPreference_Scene)0x1;
      return;
    }
  }
  InitializeAutoTimeOfDay();
  this[0x74] = (UPreference_Scene)0x1;
  return;
}

