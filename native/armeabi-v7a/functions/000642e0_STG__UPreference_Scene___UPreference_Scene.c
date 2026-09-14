/* 000642e0 | STG::UPreference_Scene::~UPreference_Scene */

/* STG::UPreference_Scene::~UPreference_Scene() */

UPreference_Scene * __thiscall STG::UPreference_Scene::~UPreference_Scene(UPreference_Scene *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *(int *)this = *(int *)(DAT_0006495c + 0x642f8) + 8;
  if (*(int *)(this + 0x70) != 0) {
    iVar1 = *(int *)(this + 0x6c);
    if (iVar1 != 0) {
      iVar3 = iVar1 + *(int *)(iVar1 + -4) * 0x1c;
      if (iVar1 != iVar3) {
        do {
          iVar2 = iVar3 + -0x1c;
          (*(code *)**(undefined4 **)(iVar3 + -0x1c))(iVar2);
          iVar1 = *(int *)(this + 0x6c);
          iVar3 = iVar2;
        } while (iVar1 != iVar2);
      }
      operator_delete__((void *)(iVar1 + -8));
    }
    *(undefined4 *)(this + 0x6c) = 0;
    *(undefined4 *)(this + 0x70) = 0;
  }
  if (*(int *)(this + 0x68) != 0) {
    iVar1 = *(int *)(this + 100);
    if (iVar1 != 0) {
      iVar3 = iVar1 + *(int *)(iVar1 + -4) * 0x1c;
      if (iVar1 != iVar3) {
        do {
          iVar2 = iVar3 + -0x1c;
          (*(code *)**(undefined4 **)(iVar3 + -0x1c))(iVar2);
          iVar1 = *(int *)(this + 100);
          iVar3 = iVar2;
        } while (iVar1 != iVar2);
      }
      operator_delete__((void *)(iVar1 + -8));
    }
    *(undefined4 *)(this + 100) = 0;
    *(undefined4 *)(this + 0x68) = 0;
  }
  if (*(int *)(this + 0x60) != 0) {
    iVar1 = *(int *)(this + 0x5c);
    if (iVar1 != 0) {
      iVar3 = *(int *)(iVar1 + -4) * 0x8c + iVar1;
      if (iVar1 != iVar3) {
        do {
          iVar2 = iVar3 + -0x8c;
          (**(code **)(*(int *)(iVar3 + -0x8c) + 0x38))(iVar2);
          iVar1 = *(int *)(this + 0x5c);
          iVar3 = iVar2;
        } while (iVar1 != iVar2);
      }
      operator_delete__((void *)(iVar1 + -8));
    }
    *(undefined4 *)(this + 0x5c) = 0;
    *(undefined4 *)(this + 0x60) = 0;
  }
  if (*(int *)(this + 0x58) != 0) {
    iVar1 = *(int *)(this + 0x54);
    if (iVar1 != 0) {
      iVar3 = iVar1 + *(int *)(iVar1 + -4) * 0x88;
      if (iVar1 != iVar3) {
        do {
          iVar2 = iVar3 + -0x88;
          (**(code **)(*(int *)(iVar3 + -0x88) + 0x38))(iVar2);
          iVar1 = *(int *)(this + 0x54);
          iVar3 = iVar2;
        } while (iVar1 != iVar2);
      }
      operator_delete__((void *)(iVar1 + -8));
    }
    *(undefined4 *)(this + 0x54) = 0;
    *(undefined4 *)(this + 0x58) = 0;
  }
  if (*(int *)(this + 0x50) != 0) {
    iVar1 = *(int *)(this + 0x4c);
    if (iVar1 != 0) {
      iVar3 = *(int *)(iVar1 + -4) * 0x8c + iVar1;
      if (iVar1 != iVar3) {
        do {
          iVar2 = iVar3 + -0x8c;
          (**(code **)(*(int *)(iVar3 + -0x8c) + 0x38))(iVar2);
          iVar1 = *(int *)(this + 0x4c);
          iVar3 = iVar2;
        } while (iVar1 != iVar2);
      }
      operator_delete__((void *)(iVar1 + -8));
    }
    *(undefined4 *)(this + 0x4c) = 0;
    *(undefined4 *)(this + 0x50) = 0;
  }
  if (*(int *)(this + 0x48) != 0) {
    iVar1 = *(int *)(this + 0x44);
    if (iVar1 != 0) {
      iVar3 = iVar1 + *(int *)(iVar1 + -4) * 0xa0;
      if (iVar1 != iVar3) {
        do {
          iVar2 = iVar3 + -0xa0;
          (**(code **)(*(int *)(iVar3 + -0xa0) + 0x38))(iVar2);
          iVar1 = *(int *)(this + 0x44);
          iVar3 = iVar2;
        } while (iVar1 != iVar2);
      }
      operator_delete__((void *)(iVar1 + -8));
    }
    *(undefined4 *)(this + 0x44) = 0;
    *(undefined4 *)(this + 0x48) = 0;
  }
  if (*(int *)(this + 0x40) != 0) {
    iVar1 = *(int *)(this + 0x3c);
    if (iVar1 != 0) {
      iVar3 = iVar1 + *(int *)(iVar1 + -4) * 0x88;
      if (iVar1 != iVar3) {
        do {
          iVar2 = iVar3 + -0x88;
          (**(code **)(*(int *)(iVar3 + -0x88) + 0x38))(iVar2);
          iVar1 = *(int *)(this + 0x3c);
          iVar3 = iVar2;
        } while (iVar1 != iVar2);
      }
      operator_delete__((void *)(iVar1 + -8));
    }
    *(undefined4 *)(this + 0x3c) = 0;
    *(undefined4 *)(this + 0x40) = 0;
  }
  if (*(int *)(this + 0x38) != 0) {
    iVar1 = *(int *)(this + 0x34);
    if (iVar1 != 0) {
      iVar3 = *(int *)(iVar1 + -4) * 0x94 + iVar1;
      if (iVar1 != iVar3) {
        do {
          iVar2 = iVar3 + -0x94;
          (**(code **)(*(int *)(iVar3 + -0x94) + 0x38))(iVar2);
          iVar1 = *(int *)(this + 0x34);
          iVar3 = iVar2;
        } while (iVar1 != iVar2);
      }
      operator_delete__((void *)(iVar1 + -8));
    }
    *(undefined4 *)(this + 0x34) = 0;
    *(undefined4 *)(this + 0x38) = 0;
  }
  if (*(int *)(this + 0x30) != 0) {
    iVar1 = *(int *)(this + 0x2c);
    if (iVar1 != 0) {
      iVar3 = *(int *)(iVar1 + -4) * 0x98 + iVar1;
      if (iVar1 != iVar3) {
        do {
          iVar2 = iVar3 + -0x98;
          (**(code **)(*(int *)(iVar3 + -0x98) + 0x38))(iVar2);
          iVar1 = *(int *)(this + 0x2c);
          iVar3 = iVar2;
        } while (iVar1 != iVar2);
      }
      operator_delete__((void *)(iVar1 + -8));
    }
    *(undefined4 *)(this + 0x2c) = 0;
    *(undefined4 *)(this + 0x30) = 0;
  }
  if (*(int *)(this + 0x28) != 0) {
    iVar1 = *(int *)(this + 0x24);
    if (iVar1 != 0) {
      iVar3 = iVar1 + *(int *)(iVar1 + -4) * 0x90;
      if (iVar1 != iVar3) {
        do {
          iVar2 = iVar3 + -0x90;
          (**(code **)(*(int *)(iVar3 + -0x90) + 0x38))(iVar2);
          iVar1 = *(int *)(this + 0x24);
          iVar3 = iVar2;
        } while (iVar1 != iVar2);
      }
      operator_delete__((void *)(iVar1 + -8));
    }
    *(undefined4 *)(this + 0x24) = 0;
    *(undefined4 *)(this + 0x28) = 0;
  }
  if (*(int *)(this + 0x20) != 0) {
    iVar1 = *(int *)(this + 0x1c);
    if (iVar1 != 0) {
      iVar3 = iVar1 + *(int *)(iVar1 + -4) * 0x90;
      if (iVar1 != iVar3) {
        do {
          iVar2 = iVar3 + -0x90;
          (**(code **)(*(int *)(iVar3 + -0x90) + 0x38))(iVar2);
          iVar1 = *(int *)(this + 0x1c);
          iVar3 = iVar2;
        } while (iVar1 != iVar2);
      }
      operator_delete__((void *)(iVar1 + -8));
    }
    *(undefined4 *)(this + 0x1c) = 0;
    *(undefined4 *)(this + 0x20) = 0;
  }
  if (*(int *)(this + 0x18) != 0) {
    iVar1 = *(int *)(this + 0x14);
    if (iVar1 != 0) {
      iVar3 = *(int *)(iVar1 + -4) * 0x8c + iVar1;
      if (iVar1 != iVar3) {
        do {
          iVar2 = iVar3 + -0x8c;
          (**(code **)(*(int *)(iVar3 + -0x8c) + 0x38))(iVar2);
          iVar1 = *(int *)(this + 0x14);
          iVar3 = iVar2;
        } while (iVar1 != iVar2);
      }
      operator_delete__((void *)(iVar1 + -8));
    }
    *(undefined4 *)(this + 0x14) = 0;
    *(undefined4 *)(this + 0x18) = 0;
  }
  if (*(int *)(this + 0x10) != 0) {
    iVar1 = *(int *)(this + 0xc);
    if (iVar1 != 0) {
      iVar3 = iVar1 + *(int *)(iVar1 + -4) * 0x88;
      if (iVar1 != iVar3) {
        do {
          iVar2 = iVar3 + -0x88;
          (**(code **)(*(int *)(iVar3 + -0x88) + 0x38))(iVar2);
          iVar1 = *(int *)(this + 0xc);
          iVar3 = iVar2;
        } while (iVar1 != iVar2);
      }
      operator_delete__((void *)(iVar1 + -8));
    }
    *(undefined4 *)(this + 0xc) = 0;
    *(undefined4 *)(this + 0x10) = 0;
  }
  if (*(int *)(this + 8) != 0) {
    iVar1 = *(int *)(this + 4);
    if (iVar1 != 0) {
      iVar3 = iVar1 + *(int *)(iVar1 + -4) * 0x88;
      if (iVar1 != iVar3) {
        do {
          iVar2 = iVar3 + -0x88;
          (**(code **)(*(int *)(iVar3 + -0x88) + 0x38))(iVar2);
          iVar1 = *(int *)(this + 4);
          iVar3 = iVar2;
        } while (iVar1 != iVar2);
      }
      operator_delete__((void *)(iVar1 + -8));
    }
    *(undefined4 *)(this + 4) = 0;
    *(undefined4 *)(this + 8) = 0;
    return this;
  }
  return this;
}

