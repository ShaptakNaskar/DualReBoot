/* 00073b40 | STG::UPreference_Scene::Initialize */

/* STG::UPreference_Scene::Initialize(STG::UPreference_Scene::InitData const&) */

void __thiscall STG::UPreference_Scene::Initialize(UPreference_Scene *this,InitData *param_1)

{
  UPreferenceBase *pUVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int unaff_EBX;
  int *piVar5;
  UPreference_FileChooser_Texture *this_00;
  UPreference_TextureGroup *this_01;
  UPreference_TextureFont *this_02;
  UPreference_ModelSwap *this_03;
  UPreference_ModelToggle *this_04;
  UPreference_TextureSwap *this_05;
  
  FUN_0002e044();
  iVar2 = *(int *)param_1;
  if (iVar2 != *(int *)(this + 8)) {
    if (*(int *)(this + 8) != 0) {
      piVar4 = *(int **)(this + 4);
      if (piVar4 != (int *)0x0) {
        piVar5 = piVar4 + piVar4[-1] * 0x22;
        if (piVar4 != piVar5) {
          do {
            piVar5 = piVar5 + -0x22;
            (**(code **)(*piVar5 + 0x38))(piVar5);
            piVar4 = *(int **)(this + 4);
          } while (piVar4 != piVar5);
        }
        operator_delete__(piVar4 + -1);
      }
      *(undefined4 *)(this + 4) = 0;
    }
    *(int *)(this + 8) = iVar2;
    if (iVar2 != 0) {
      piVar4 = operator_new__(iVar2 * 0x88 + 4);
      *piVar4 = iVar2;
      pUVar1 = (UPreferenceBase *)(piVar4 + 1);
      while (iVar2 = iVar2 + -1, iVar2 != -1) {
        UPreferenceBase::UPreferenceBase(pUVar1);
        iVar3 = *(int *)((int)DWORD_ARRAY_00027b38 + unaff_EBX + 0x87f);
        *(undefined4 *)(pUVar1 + 0x7c) = 0;
        *(undefined4 *)(pUVar1 + 0x80) = 0;
        *(undefined4 *)(pUVar1 + 0x84) = 0;
        *(int *)pUVar1 = iVar3 + 8;
        pUVar1 = pUVar1 + 0x88;
      }
      *(UPreferenceBase **)(this + 4) = (UPreferenceBase *)(piVar4 + 1);
    }
  }
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 != *(int *)(this + 0x10)) {
    if (*(int *)(this + 0x10) != 0) {
      piVar4 = *(int **)(this + 0xc);
      if (piVar4 != (int *)0x0) {
        piVar5 = piVar4 + piVar4[-1] * 0x22;
        if (piVar4 != piVar5) {
          do {
            piVar5 = piVar5 + -0x22;
            (**(code **)(*piVar5 + 0x38))(piVar5);
            piVar4 = *(int **)(this + 0xc);
          } while (piVar4 != piVar5);
        }
        operator_delete__(piVar4 + -1);
      }
      *(undefined4 *)(this + 0xc) = 0;
    }
    *(int *)(this + 0x10) = iVar2;
    if (iVar2 != 0) {
      piVar4 = operator_new__(iVar2 * 0x88 + 4);
      *piVar4 = iVar2;
      pUVar1 = (UPreferenceBase *)(piVar4 + 1);
      while (iVar2 = iVar2 + -1, iVar2 != -1) {
        UPreferenceBase::UPreferenceBase(pUVar1);
        iVar3 = *(int *)((int)DWORD_ARRAY_00027b38 + unaff_EBX + 0x883);
        *(undefined4 *)(pUVar1 + 0x7c) = 0;
        *(undefined4 *)(pUVar1 + 0x80) = 0;
        *(undefined4 *)(pUVar1 + 0x84) = 0;
        *(int *)pUVar1 = iVar3 + 8;
        pUVar1 = pUVar1 + 0x88;
      }
      *(UPreferenceBase **)(this + 0xc) = (UPreferenceBase *)(piVar4 + 1);
    }
  }
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 != *(int *)(this + 0x18)) {
    if (*(int *)(this + 0x18) != 0) {
      piVar4 = *(int **)(this + 0x14);
      if (piVar4 != (int *)0x0) {
        piVar5 = piVar4 + piVar4[-1] * 0x23;
        if (piVar4 != piVar5) {
          do {
            piVar5 = piVar5 + -0x23;
            (**(code **)(*piVar5 + 0x38))(piVar5);
            piVar4 = *(int **)(this + 0x14);
          } while (piVar4 != piVar5);
        }
        operator_delete__(piVar4 + -1);
      }
      *(undefined4 *)(this + 0x14) = 0;
    }
    *(int *)(this + 0x18) = iVar2;
    if (iVar2 != 0) {
      piVar4 = operator_new__(iVar2 * 0x8c + 4);
      *piVar4 = iVar2;
      this_05 = (UPreference_TextureSwap *)(piVar4 + 1);
      while (iVar2 = iVar2 + -1, iVar2 != -1) {
        UPreference_TextureSwap::UPreference_TextureSwap(this_05);
        this_05 = this_05 + 0x8c;
      }
      *(UPreference_TextureSwap **)(this + 0x14) = (UPreference_TextureSwap *)(piVar4 + 1);
    }
  }
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 != *(int *)(this + 0x20)) {
    if (*(int *)(this + 0x20) != 0) {
      piVar4 = *(int **)(this + 0x1c);
      if (piVar4 != (int *)0x0) {
        piVar5 = piVar4 + piVar4[-1] * 0x24;
        if (piVar4 != piVar5) {
          do {
            piVar5 = piVar5 + -0x24;
            (**(code **)(*piVar5 + 0x38))(piVar5);
            piVar4 = *(int **)(this + 0x1c);
          } while (piVar4 != piVar5);
        }
        operator_delete__(piVar4 + -1);
      }
      *(undefined4 *)(this + 0x1c) = 0;
    }
    *(int *)(this + 0x20) = iVar2;
    if (iVar2 != 0) {
      piVar4 = operator_new__(iVar2 * 0x90 + 4);
      *piVar4 = iVar2;
      this_04 = (UPreference_ModelToggle *)(piVar4 + 1);
      while (iVar2 = iVar2 + -1, iVar2 != -1) {
        UPreference_ModelToggle::UPreference_ModelToggle(this_04);
        this_04 = this_04 + 0x90;
      }
      *(UPreference_ModelToggle **)(this + 0x1c) = (UPreference_ModelToggle *)(piVar4 + 1);
    }
  }
  iVar2 = *(int *)(param_1 + 0x14);
  if (iVar2 != *(int *)(this + 0x48)) {
    if (*(int *)(this + 0x48) != 0) {
      piVar4 = *(int **)(this + 0x44);
      if (piVar4 != (int *)0x0) {
        piVar5 = piVar4 + piVar4[-1] * 0x28;
        if (piVar4 != piVar5) {
          do {
            piVar5 = piVar5 + -0x28;
            (**(code **)(*piVar5 + 0x38))(piVar5);
            piVar4 = *(int **)(this + 0x44);
          } while (piVar4 != piVar5);
        }
        operator_delete__(piVar4 + -1);
      }
      *(undefined4 *)(this + 0x44) = 0;
    }
    *(int *)(this + 0x48) = iVar2;
    if (iVar2 != 0) {
      piVar4 = operator_new__(iVar2 * 0xa0 + 4);
      *piVar4 = iVar2;
      this_03 = (UPreference_ModelSwap *)(piVar4 + 1);
      while (iVar2 = iVar2 + -1, iVar2 != -1) {
        UPreference_ModelSwap::UPreference_ModelSwap(this_03);
        this_03 = this_03 + 0xa0;
      }
      *(UPreference_ModelSwap **)(this + 0x44) = (UPreference_ModelSwap *)(piVar4 + 1);
    }
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (iVar2 != *(int *)(this + 0x28)) {
    if (*(int *)(this + 0x28) != 0) {
      piVar4 = *(int **)(this + 0x24);
      if (piVar4 != (int *)0x0) {
        piVar5 = piVar4 + piVar4[-1] * 0x24;
        if (piVar4 != piVar5) {
          do {
            piVar5 = piVar5 + -0x24;
            (**(code **)(*piVar5 + 0x38))(piVar5);
            piVar4 = *(int **)(this + 0x24);
          } while (piVar4 != piVar5);
        }
        operator_delete__(piVar4 + -1);
      }
      *(undefined4 *)(this + 0x24) = 0;
    }
    *(int *)(this + 0x28) = iVar2;
    if (iVar2 != 0) {
      piVar4 = operator_new__(iVar2 * 0x90 + 4);
      *piVar4 = iVar2;
      this_02 = (UPreference_TextureFont *)(piVar4 + 1);
      while (iVar2 = iVar2 + -1, iVar2 != -1) {
        UPreference_TextureFont::UPreference_TextureFont(this_02);
        this_02 = this_02 + 0x90;
      }
      *(UPreference_TextureFont **)(this + 0x24) = (UPreference_TextureFont *)(piVar4 + 1);
    }
  }
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 != *(int *)(this + 0x30)) {
    if (*(int *)(this + 0x30) != 0) {
      piVar4 = *(int **)(this + 0x2c);
      if (piVar4 != (int *)0x0) {
        piVar5 = piVar4 + piVar4[-1] * 0x26;
        if (piVar4 != piVar5) {
          do {
            piVar5 = piVar5 + -0x26;
            (**(code **)(*piVar5 + 0x38))(piVar5);
            piVar4 = *(int **)(this + 0x2c);
          } while (piVar4 != piVar5);
        }
        operator_delete__(piVar4 + -1);
      }
      *(undefined4 *)(this + 0x2c) = 0;
    }
    *(int *)(this + 0x30) = iVar2;
    if (iVar2 != 0) {
      piVar4 = operator_new__(iVar2 * 0x98 + 4);
      *piVar4 = iVar2;
      this_01 = (UPreference_TextureGroup *)(piVar4 + 1);
      while (iVar2 = iVar2 + -1, iVar2 != -1) {
        UPreference_TextureGroup::UPreference_TextureGroup(this_01);
        this_01 = this_01 + 0x98;
      }
      *(UPreference_TextureGroup **)(this + 0x2c) = (UPreference_TextureGroup *)(piVar4 + 1);
    }
  }
  iVar2 = *(int *)(param_1 + 0x1c);
  if (iVar2 != *(int *)(this + 0x38)) {
    if (*(int *)(this + 0x38) != 0) {
      piVar4 = *(int **)(this + 0x34);
      if (piVar4 != (int *)0x0) {
        piVar5 = piVar4 + piVar4[-1] * 0x25;
        if (piVar4 != piVar5) {
          do {
            piVar5 = piVar5 + -0x25;
            (**(code **)(*piVar5 + 0x38))(piVar5);
            piVar4 = *(int **)(this + 0x34);
          } while (piVar4 != piVar5);
        }
        operator_delete__(piVar4 + -1);
      }
      *(undefined4 *)(this + 0x34) = 0;
    }
    *(int *)(this + 0x38) = iVar2;
    if (iVar2 != 0) {
      piVar4 = operator_new__(iVar2 * 0x94 + 4);
      *piVar4 = iVar2;
      this_00 = (UPreference_FileChooser_Texture *)(piVar4 + 1);
      while (iVar2 = iVar2 + -1, iVar2 != -1) {
        UPreference_FileChooser_Texture::UPreference_FileChooser_Texture(this_00);
        this_00 = this_00 + 0x94;
      }
      *(UPreference_FileChooser_Texture **)(this + 0x34) =
           (UPreference_FileChooser_Texture *)(piVar4 + 1);
    }
  }
  iVar2 = *(int *)(param_1 + 0x20);
  if (iVar2 != *(int *)(this + 0x40)) {
    if (*(int *)(this + 0x40) != 0) {
      piVar4 = *(int **)(this + 0x3c);
      if (piVar4 != (int *)0x0) {
        piVar5 = piVar4 + piVar4[-1] * 0x22;
        if (piVar4 != piVar5) {
          do {
            piVar5 = piVar5 + -0x22;
            (**(code **)(*piVar5 + 0x38))(piVar5);
            piVar4 = *(int **)(this + 0x3c);
          } while (piVar4 != piVar5);
        }
        operator_delete__(piVar4 + -1);
      }
      *(undefined4 *)(this + 0x3c) = 0;
    }
    *(int *)(this + 0x40) = iVar2;
    if (iVar2 != 0) {
      piVar4 = operator_new__(iVar2 * 0x88 + 4);
      *piVar4 = iVar2;
      pUVar1 = (UPreferenceBase *)(piVar4 + 1);
      while (iVar2 = iVar2 + -1, iVar2 != -1) {
        UPreferenceBase::UPreferenceBase(pUVar1);
        iVar3 = *(int *)((int)DWORD_ARRAY_00027b38 + unaff_EBX + 0x88b);
        *(undefined4 *)(pUVar1 + 0x7c) = 0;
        *(undefined4 *)(pUVar1 + 0x80) = 0;
        *(undefined4 *)(pUVar1 + 0x84) = 0;
        *(int *)pUVar1 = iVar3 + 8;
        pUVar1 = pUVar1 + 0x88;
      }
      *(UPreferenceBase **)(this + 0x3c) = (UPreferenceBase *)(piVar4 + 1);
    }
  }
  iVar2 = *(int *)(param_1 + 0x24);
  if (iVar2 != *(int *)(this + 0x50)) {
    if (*(int *)(this + 0x50) != 0) {
      piVar4 = *(int **)(this + 0x4c);
      if (piVar4 != (int *)0x0) {
        piVar5 = piVar4 + piVar4[-1] * 0x23;
        if (piVar4 != piVar5) {
          do {
            piVar5 = piVar5 + -0x23;
            (**(code **)(*piVar5 + 0x38))(piVar5);
            piVar4 = *(int **)(this + 0x4c);
          } while (piVar4 != piVar5);
        }
        operator_delete__(piVar4 + -1);
      }
      *(undefined4 *)(this + 0x4c) = 0;
    }
    *(int *)(this + 0x50) = iVar2;
    if (iVar2 != 0) {
      piVar4 = operator_new__(iVar2 * 0x8c + 4);
      *piVar4 = iVar2;
      pUVar1 = (UPreferenceBase *)(piVar4 + 1);
      while (iVar2 = iVar2 + -1, iVar2 != -1) {
        UPreferenceBase::UPreferenceBase(pUVar1);
        iVar3 = *(int *)((int)DWORD_ARRAY_00027b38 + unaff_EBX + 0x887);
        *(undefined4 *)(pUVar1 + 0x7c) = 0;
        *(undefined4 *)(pUVar1 + 0x80) = 0;
        *(undefined4 *)(pUVar1 + 0x84) = 0;
        pUVar1[0x88] = (UPreferenceBase)0x0;
        *(int *)pUVar1 = iVar3 + 8;
        pUVar1 = pUVar1 + 0x8c;
      }
      *(UPreferenceBase **)(this + 0x4c) = (UPreferenceBase *)(piVar4 + 1);
    }
  }
  iVar2 = *(int *)(param_1 + 0x28);
  if (iVar2 != *(int *)(this + 0x58)) {
    if (*(int *)(this + 0x58) != 0) {
      piVar4 = *(int **)(this + 0x54);
      if (piVar4 != (int *)0x0) {
        piVar5 = piVar4 + piVar4[-1] * 0x22;
        if (piVar4 != piVar5) {
          do {
            piVar5 = piVar5 + -0x22;
            (**(code **)(*piVar5 + 0x38))(piVar5);
            piVar4 = *(int **)(this + 0x54);
          } while (piVar4 != piVar5);
        }
        operator_delete__(piVar4 + -1);
      }
      *(undefined4 *)(this + 0x54) = 0;
    }
    *(int *)(this + 0x58) = iVar2;
    if (iVar2 != 0) {
      piVar4 = operator_new__(iVar2 * 0x88 + 4);
      *piVar4 = iVar2;
      pUVar1 = (UPreferenceBase *)(piVar4 + 1);
      while (iVar2 = iVar2 + -1, iVar2 != -1) {
        UPreferenceBase::UPreferenceBase(pUVar1);
        iVar3 = *(int *)((int)DWORD_ARRAY_00027b38 + unaff_EBX + 0x88f);
        *(undefined4 *)(pUVar1 + 0x7c) = 0;
        *(undefined4 *)(pUVar1 + 0x80) = 0;
        *(undefined4 *)(pUVar1 + 0x84) = 0;
        *(int *)pUVar1 = iVar3 + 8;
        pUVar1 = pUVar1 + 0x88;
      }
      *(UPreferenceBase **)(this + 0x54) = (UPreferenceBase *)(piVar4 + 1);
    }
  }
  InitializeAutoTimeOfDay(this);
  this[0x74] = (UPreference_Scene)0x1;
  return;
}

