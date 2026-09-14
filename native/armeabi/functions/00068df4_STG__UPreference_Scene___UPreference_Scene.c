/* 00068df4 | STG::UPreference_Scene::~UPreference_Scene */

/* STG::UPreference_Scene::~UPreference_Scene() */

UPreference_Scene * __thiscall STG::UPreference_Scene::~UPreference_Scene(UPreference_Scene *this)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  *(int *)this = *(int *)(DAT_00069470 + 0x68e08) + 8;
  if (*(int *)(this + 0x70) != 0) {
    iVar3 = *(int *)(this + 0x6c);
    if (iVar3 != 0) {
      iVar4 = *(int *)(iVar3 + -4) * 0x1c + iVar3;
      if (iVar3 != iVar4) {
        do {
          puVar2 = (undefined4 *)(iVar4 + -0x1c);
          iVar4 = iVar4 + -0x1c;
          (**(code **)*puVar2)(iVar4);
          iVar3 = *(int *)(this + 0x6c);
        } while (iVar3 != iVar4);
      }
      operator_delete__((void *)(iVar3 + -8));
    }
    *(undefined4 *)(this + 0x6c) = 0;
    *(undefined4 *)(this + 0x70) = 0;
  }
  if (*(int *)(this + 0x68) != 0) {
    iVar3 = *(int *)(this + 100);
    if (iVar3 != 0) {
      iVar4 = *(int *)(iVar3 + -4) * 0x1c + iVar3;
      if (iVar3 != iVar4) {
        do {
          puVar2 = (undefined4 *)(iVar4 + -0x1c);
          iVar4 = iVar4 + -0x1c;
          (**(code **)*puVar2)(iVar4);
          iVar3 = *(int *)(this + 100);
        } while (iVar3 != iVar4);
      }
      operator_delete__((void *)(iVar3 + -8));
    }
    *(undefined4 *)(this + 100) = 0;
    *(undefined4 *)(this + 0x68) = 0;
  }
  if (*(int *)(this + 0x60) != 0) {
    iVar3 = *(int *)(this + 0x5c);
    if (iVar3 != 0) {
      iVar4 = *(int *)(iVar3 + -4) * 0x8c + iVar3;
      if (iVar3 != iVar4) {
        do {
          piVar1 = (int *)(iVar4 + -0x8c);
          iVar4 = iVar4 + -0x8c;
          (**(code **)(*piVar1 + 0x38))(iVar4);
          iVar3 = *(int *)(this + 0x5c);
        } while (iVar3 != iVar4);
      }
      operator_delete__((void *)(iVar3 + -8));
    }
    *(undefined4 *)(this + 0x5c) = 0;
    *(undefined4 *)(this + 0x60) = 0;
  }
  if (*(int *)(this + 0x58) != 0) {
    iVar3 = *(int *)(this + 0x54);
    if (iVar3 != 0) {
      iVar4 = *(int *)(iVar3 + -4) * 0x88 + iVar3;
      if (iVar3 != iVar4) {
        do {
          piVar1 = (int *)(iVar4 + -0x88);
          iVar4 = iVar4 + -0x88;
          (**(code **)(*piVar1 + 0x38))(iVar4);
          iVar3 = *(int *)(this + 0x54);
        } while (iVar3 != iVar4);
      }
      operator_delete__((void *)(iVar3 + -8));
    }
    *(undefined4 *)(this + 0x54) = 0;
    *(undefined4 *)(this + 0x58) = 0;
  }
  if (*(int *)(this + 0x50) != 0) {
    iVar3 = *(int *)(this + 0x4c);
    if (iVar3 != 0) {
      iVar4 = *(int *)(iVar3 + -4) * 0x8c + iVar3;
      if (iVar3 != iVar4) {
        do {
          piVar1 = (int *)(iVar4 + -0x8c);
          iVar4 = iVar4 + -0x8c;
          (**(code **)(*piVar1 + 0x38))(iVar4);
          iVar3 = *(int *)(this + 0x4c);
        } while (iVar3 != iVar4);
      }
      operator_delete__((void *)(iVar3 + -8));
    }
    *(undefined4 *)(this + 0x4c) = 0;
    *(undefined4 *)(this + 0x50) = 0;
  }
  if (*(int *)(this + 0x48) != 0) {
    iVar3 = *(int *)(this + 0x44);
    if (iVar3 != 0) {
      iVar4 = *(int *)(iVar3 + -4) * 0xa0 + iVar3;
      if (iVar3 != iVar4) {
        do {
          piVar1 = (int *)(iVar4 + -0xa0);
          iVar4 = iVar4 + -0xa0;
          (**(code **)(*piVar1 + 0x38))(iVar4);
          iVar3 = *(int *)(this + 0x44);
        } while (iVar3 != iVar4);
      }
      operator_delete__((void *)(iVar3 + -8));
    }
    *(undefined4 *)(this + 0x44) = 0;
    *(undefined4 *)(this + 0x48) = 0;
  }
  if (*(int *)(this + 0x40) != 0) {
    iVar3 = *(int *)(this + 0x3c);
    if (iVar3 != 0) {
      iVar4 = *(int *)(iVar3 + -4) * 0x88 + iVar3;
      if (iVar3 != iVar4) {
        do {
          piVar1 = (int *)(iVar4 + -0x88);
          iVar4 = iVar4 + -0x88;
          (**(code **)(*piVar1 + 0x38))(iVar4);
          iVar3 = *(int *)(this + 0x3c);
        } while (iVar3 != iVar4);
      }
      operator_delete__((void *)(iVar3 + -8));
    }
    *(undefined4 *)(this + 0x3c) = 0;
    *(undefined4 *)(this + 0x40) = 0;
  }
  if (*(int *)(this + 0x38) != 0) {
    iVar3 = *(int *)(this + 0x34);
    if (iVar3 != 0) {
      iVar4 = *(int *)(iVar3 + -4) * 0x94 + iVar3;
      if (iVar3 != iVar4) {
        do {
          piVar1 = (int *)(iVar4 + -0x94);
          iVar4 = iVar4 + -0x94;
          (**(code **)(*piVar1 + 0x38))(iVar4);
          iVar3 = *(int *)(this + 0x34);
        } while (iVar3 != iVar4);
      }
      operator_delete__((void *)(iVar3 + -8));
    }
    *(undefined4 *)(this + 0x34) = 0;
    *(undefined4 *)(this + 0x38) = 0;
  }
  if (*(int *)(this + 0x30) != 0) {
    iVar3 = *(int *)(this + 0x2c);
    if (iVar3 != 0) {
      iVar4 = *(int *)(iVar3 + -4) * 0x98 + iVar3;
      if (iVar3 != iVar4) {
        do {
          piVar1 = (int *)(iVar4 + -0x98);
          iVar4 = iVar4 + -0x98;
          (**(code **)(*piVar1 + 0x38))(iVar4);
          iVar3 = *(int *)(this + 0x2c);
        } while (iVar3 != iVar4);
      }
      operator_delete__((void *)(iVar3 + -8));
    }
    *(undefined4 *)(this + 0x2c) = 0;
    *(undefined4 *)(this + 0x30) = 0;
  }
  if (*(int *)(this + 0x28) != 0) {
    iVar3 = *(int *)(this + 0x24);
    if (iVar3 != 0) {
      iVar4 = *(int *)(iVar3 + -4) * 0x90 + iVar3;
      if (iVar3 != iVar4) {
        do {
          piVar1 = (int *)(iVar4 + -0x90);
          iVar4 = iVar4 + -0x90;
          (**(code **)(*piVar1 + 0x38))(iVar4);
          iVar3 = *(int *)(this + 0x24);
        } while (iVar3 != iVar4);
      }
      operator_delete__((void *)(iVar3 + -8));
    }
    *(undefined4 *)(this + 0x24) = 0;
    *(undefined4 *)(this + 0x28) = 0;
  }
  if (*(int *)(this + 0x20) != 0) {
    iVar3 = *(int *)(this + 0x1c);
    if (iVar3 != 0) {
      iVar4 = *(int *)(iVar3 + -4) * 0x90 + iVar3;
      if (iVar3 != iVar4) {
        do {
          piVar1 = (int *)(iVar4 + -0x90);
          iVar4 = iVar4 + -0x90;
          (**(code **)(*piVar1 + 0x38))(iVar4);
          iVar3 = *(int *)(this + 0x1c);
        } while (iVar3 != iVar4);
      }
      operator_delete__((void *)(iVar3 + -8));
    }
    *(undefined4 *)(this + 0x1c) = 0;
    *(undefined4 *)(this + 0x20) = 0;
  }
  if (*(int *)(this + 0x18) != 0) {
    iVar3 = *(int *)(this + 0x14);
    if (iVar3 != 0) {
      iVar4 = *(int *)(iVar3 + -4) * 0x8c + iVar3;
      if (iVar3 != iVar4) {
        do {
          piVar1 = (int *)(iVar4 + -0x8c);
          iVar4 = iVar4 + -0x8c;
          (**(code **)(*piVar1 + 0x38))(iVar4);
          iVar3 = *(int *)(this + 0x14);
        } while (iVar3 != iVar4);
      }
      operator_delete__((void *)(iVar3 + -8));
    }
    *(undefined4 *)(this + 0x14) = 0;
    *(undefined4 *)(this + 0x18) = 0;
  }
  if (*(int *)(this + 0x10) != 0) {
    iVar3 = *(int *)(this + 0xc);
    if (iVar3 != 0) {
      iVar4 = *(int *)(iVar3 + -4) * 0x88 + iVar3;
      if (iVar3 != iVar4) {
        do {
          piVar1 = (int *)(iVar4 + -0x88);
          iVar4 = iVar4 + -0x88;
          (**(code **)(*piVar1 + 0x38))(iVar4);
          iVar3 = *(int *)(this + 0xc);
        } while (iVar3 != iVar4);
      }
      operator_delete__((void *)(iVar3 + -8));
    }
    *(undefined4 *)(this + 0xc) = 0;
    *(undefined4 *)(this + 0x10) = 0;
  }
  if (*(int *)(this + 8) != 0) {
    iVar3 = *(int *)(this + 4);
    if (iVar3 != 0) {
      iVar4 = *(int *)(iVar3 + -4) * 0x88 + iVar3;
      if (iVar3 != iVar4) {
        do {
          piVar1 = (int *)(iVar4 + -0x88);
          iVar4 = iVar4 + -0x88;
          (**(code **)(*piVar1 + 0x38))(iVar4);
          iVar3 = *(int *)(this + 4);
        } while (iVar3 != iVar4);
      }
      operator_delete__((void *)(iVar3 + -8));
    }
    *(undefined4 *)(this + 4) = 0;
    *(undefined4 *)(this + 8) = 0;
    return this;
  }
  return this;
}

