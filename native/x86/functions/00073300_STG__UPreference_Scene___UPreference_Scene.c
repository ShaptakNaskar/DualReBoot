/* 00073300 | STG::UPreference_Scene::~UPreference_Scene */

/* STG::UPreference_Scene::~UPreference_Scene() */

void __thiscall STG::UPreference_Scene::~UPreference_Scene(UPreference_Scene *this)

{
  int *piVar1;
  undefined4 *puVar2;
  int unaff_EBX;
  int *piVar3;
  undefined4 *puVar4;
  
  FUN_0002e044();
  *(int *)this = *(int *)((int)DWORD_ARRAY_00028b54 + unaff_EBX + 0xe7) + 8;
  if (*(int *)(this + 0x70) != 0) {
    puVar2 = *(undefined4 **)(this + 0x6c);
    if (puVar2 != (undefined4 *)0x0) {
      puVar4 = puVar2 + puVar2[-1] * 7;
      if (puVar2 != puVar4) {
        do {
          puVar4 = puVar4 + -7;
          (**(code **)*puVar4)(puVar4);
          puVar2 = *(undefined4 **)(this + 0x6c);
        } while (puVar2 != puVar4);
      }
      operator_delete__(puVar2 + -1);
    }
    *(undefined4 *)(this + 0x6c) = 0;
    *(undefined4 *)(this + 0x70) = 0;
  }
  if (*(int *)(this + 0x68) != 0) {
    puVar2 = *(undefined4 **)(this + 100);
    if (puVar2 != (undefined4 *)0x0) {
      puVar4 = puVar2 + puVar2[-1] * 7;
      if (puVar2 != puVar4) {
        do {
          puVar4 = puVar4 + -7;
          (**(code **)*puVar4)(puVar4);
          puVar2 = *(undefined4 **)(this + 100);
        } while (puVar2 != puVar4);
      }
      operator_delete__(puVar2 + -1);
    }
    *(undefined4 *)(this + 100) = 0;
    *(undefined4 *)(this + 0x68) = 0;
  }
  if (*(int *)(this + 0x60) != 0) {
    piVar1 = *(int **)(this + 0x5c);
    if (piVar1 != (int *)0x0) {
      piVar3 = piVar1 + piVar1[-1] * 0x23;
      if (piVar1 != piVar3) {
        do {
          piVar3 = piVar3 + -0x23;
          (**(code **)(*piVar3 + 0x38))(piVar3);
          piVar1 = *(int **)(this + 0x5c);
        } while (piVar1 != piVar3);
      }
      operator_delete__(piVar1 + -1);
    }
    *(undefined4 *)(this + 0x5c) = 0;
    *(undefined4 *)(this + 0x60) = 0;
  }
  if (*(int *)(this + 0x58) != 0) {
    piVar1 = *(int **)(this + 0x54);
    if (piVar1 != (int *)0x0) {
      piVar3 = piVar1 + piVar1[-1] * 0x22;
      if (piVar1 != piVar3) {
        do {
          piVar3 = piVar3 + -0x22;
          (**(code **)(*piVar3 + 0x38))(piVar3);
          piVar1 = *(int **)(this + 0x54);
        } while (piVar1 != piVar3);
      }
      operator_delete__(piVar1 + -1);
    }
    *(undefined4 *)(this + 0x54) = 0;
    *(undefined4 *)(this + 0x58) = 0;
  }
  if (*(int *)(this + 0x50) != 0) {
    piVar1 = *(int **)(this + 0x4c);
    if (piVar1 != (int *)0x0) {
      piVar3 = piVar1 + piVar1[-1] * 0x23;
      if (piVar1 != piVar3) {
        do {
          piVar3 = piVar3 + -0x23;
          (**(code **)(*piVar3 + 0x38))(piVar3);
          piVar1 = *(int **)(this + 0x4c);
        } while (piVar1 != piVar3);
      }
      operator_delete__(piVar1 + -1);
    }
    *(undefined4 *)(this + 0x4c) = 0;
    *(undefined4 *)(this + 0x50) = 0;
  }
  if (*(int *)(this + 0x48) != 0) {
    piVar1 = *(int **)(this + 0x44);
    if (piVar1 != (int *)0x0) {
      piVar3 = piVar1 + piVar1[-1] * 0x28;
      if (piVar1 != piVar3) {
        do {
          piVar3 = piVar3 + -0x28;
          (**(code **)(*piVar3 + 0x38))(piVar3);
          piVar1 = *(int **)(this + 0x44);
        } while (piVar1 != piVar3);
      }
      operator_delete__(piVar1 + -1);
    }
    *(undefined4 *)(this + 0x44) = 0;
    *(undefined4 *)(this + 0x48) = 0;
  }
  if (*(int *)(this + 0x40) != 0) {
    piVar1 = *(int **)(this + 0x3c);
    if (piVar1 != (int *)0x0) {
      piVar3 = piVar1 + piVar1[-1] * 0x22;
      if (piVar1 != piVar3) {
        do {
          piVar3 = piVar3 + -0x22;
          (**(code **)(*piVar3 + 0x38))(piVar3);
          piVar1 = *(int **)(this + 0x3c);
        } while (piVar1 != piVar3);
      }
      operator_delete__(piVar1 + -1);
    }
    *(undefined4 *)(this + 0x3c) = 0;
    *(undefined4 *)(this + 0x40) = 0;
  }
  if (*(int *)(this + 0x38) != 0) {
    piVar1 = *(int **)(this + 0x34);
    if (piVar1 != (int *)0x0) {
      piVar3 = piVar1 + piVar1[-1] * 0x25;
      if (piVar1 != piVar3) {
        do {
          piVar3 = piVar3 + -0x25;
          (**(code **)(*piVar3 + 0x38))(piVar3);
          piVar1 = *(int **)(this + 0x34);
        } while (piVar1 != piVar3);
      }
      operator_delete__(piVar1 + -1);
    }
    *(undefined4 *)(this + 0x34) = 0;
    *(undefined4 *)(this + 0x38) = 0;
  }
  if (*(int *)(this + 0x30) != 0) {
    piVar1 = *(int **)(this + 0x2c);
    if (piVar1 != (int *)0x0) {
      piVar3 = piVar1 + piVar1[-1] * 0x26;
      if (piVar1 != piVar3) {
        do {
          piVar3 = piVar3 + -0x26;
          (**(code **)(*piVar3 + 0x38))(piVar3);
          piVar1 = *(int **)(this + 0x2c);
        } while (piVar1 != piVar3);
      }
      operator_delete__(piVar1 + -1);
    }
    *(undefined4 *)(this + 0x2c) = 0;
    *(undefined4 *)(this + 0x30) = 0;
  }
  if (*(int *)(this + 0x28) != 0) {
    piVar1 = *(int **)(this + 0x24);
    if (piVar1 != (int *)0x0) {
      piVar3 = piVar1 + piVar1[-1] * 0x24;
      if (piVar1 != piVar3) {
        do {
          piVar3 = piVar3 + -0x24;
          (**(code **)(*piVar3 + 0x38))(piVar3);
          piVar1 = *(int **)(this + 0x24);
        } while (piVar1 != piVar3);
      }
      operator_delete__(piVar1 + -1);
    }
    *(undefined4 *)(this + 0x24) = 0;
    *(undefined4 *)(this + 0x28) = 0;
  }
  if (*(int *)(this + 0x20) != 0) {
    piVar1 = *(int **)(this + 0x1c);
    if (piVar1 != (int *)0x0) {
      piVar3 = piVar1 + piVar1[-1] * 0x24;
      if (piVar1 != piVar3) {
        do {
          piVar3 = piVar3 + -0x24;
          (**(code **)(*piVar3 + 0x38))(piVar3);
          piVar1 = *(int **)(this + 0x1c);
        } while (piVar1 != piVar3);
      }
      operator_delete__(piVar1 + -1);
    }
    *(undefined4 *)(this + 0x1c) = 0;
    *(undefined4 *)(this + 0x20) = 0;
  }
  if (*(int *)(this + 0x18) != 0) {
    piVar1 = *(int **)(this + 0x14);
    if (piVar1 != (int *)0x0) {
      piVar3 = piVar1 + piVar1[-1] * 0x23;
      if (piVar1 != piVar3) {
        do {
          piVar3 = piVar3 + -0x23;
          (**(code **)(*piVar3 + 0x38))(piVar3);
          piVar1 = *(int **)(this + 0x14);
        } while (piVar1 != piVar3);
      }
      operator_delete__(piVar1 + -1);
    }
    *(undefined4 *)(this + 0x14) = 0;
    *(undefined4 *)(this + 0x18) = 0;
  }
  if (*(int *)(this + 0x10) != 0) {
    piVar1 = *(int **)(this + 0xc);
    if (piVar1 != (int *)0x0) {
      piVar3 = piVar1 + piVar1[-1] * 0x22;
      if (piVar1 != piVar3) {
        do {
          piVar3 = piVar3 + -0x22;
          (**(code **)(*piVar3 + 0x38))(piVar3);
          piVar1 = *(int **)(this + 0xc);
        } while (piVar1 != piVar3);
      }
      operator_delete__(piVar1 + -1);
    }
    *(undefined4 *)(this + 0xc) = 0;
    *(undefined4 *)(this + 0x10) = 0;
  }
  if (*(int *)(this + 8) != 0) {
    piVar1 = *(int **)(this + 4);
    if (piVar1 != (int *)0x0) {
      piVar3 = piVar1 + piVar1[-1] * 0x22;
      if (piVar1 != piVar3) {
        do {
          piVar3 = piVar3 + -0x22;
          (**(code **)(*piVar3 + 0x38))(piVar3);
          piVar1 = *(int **)(this + 4);
        } while (piVar1 != piVar3);
      }
      operator_delete__(piVar1 + -1);
    }
    *(undefined4 *)(this + 4) = 0;
    *(undefined4 *)(this + 8) = 0;
    return;
  }
  return;
}

