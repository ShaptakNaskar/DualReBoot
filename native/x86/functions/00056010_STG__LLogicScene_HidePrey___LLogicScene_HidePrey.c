/* 00056010 | STG::LLogicScene_HidePrey::~LLogicScene_HidePrey */

/* STG::LLogicScene_HidePrey::~LLogicScene_HidePrey() */

void __thiscall STG::LLogicScene_HidePrey::~LLogicScene_HidePrey(LLogicScene_HidePrey *this)

{
  undefined4 *puVar1;
  int unaff_EBX;
  undefined4 *puVar2;
  
  FUN_0002e044();
  *(int *)this = *(int *)(unaff_EBX + 0x45ec3) + 8;
  if (*(int *)(this + 0x48) != 0) {
    if (*(void **)(this + 0x44) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x44));
    }
    *(undefined4 *)(this + 0x44) = 0;
    *(undefined4 *)(this + 0x48) = 0;
  }
  if (*(int *)(this + 0x40) != 0) {
    if (*(void **)(this + 0x3c) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x3c));
    }
    *(undefined4 *)(this + 0x3c) = 0;
    *(undefined4 *)(this + 0x40) = 0;
  }
  if (*(int *)(this + 0x34) != 0) {
    if (*(void **)(this + 0x30) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x30));
    }
    *(undefined4 *)(this + 0x30) = 0;
    *(undefined4 *)(this + 0x34) = 0;
  }
  if (*(int *)(this + 0x24) != 0) {
    if (*(void **)(this + 0x20) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x20));
    }
    *(undefined4 *)(this + 0x20) = 0;
    *(undefined4 *)(this + 0x24) = 0;
  }
  if (*(int *)(this + 0x1c) != 0) {
    if (*(void **)(this + 0x18) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x18));
    }
    *(undefined4 *)(this + 0x18) = 0;
    *(undefined4 *)(this + 0x1c) = 0;
  }
  if (*(int *)(this + 0x14) != 0) {
    puVar1 = *(undefined4 **)(this + 0x10);
    if (puVar1 != (undefined4 *)0x0) {
      puVar2 = puVar1 + puVar1[-1] * 7;
      if (puVar1 != puVar2) {
        do {
          puVar2 = puVar2 + -7;
          (**(code **)*puVar2)(puVar2);
          puVar1 = *(undefined4 **)(this + 0x10);
        } while (puVar1 != puVar2);
      }
      operator_delete__(puVar1 + -1);
    }
    *(undefined4 *)(this + 0x10) = 0;
    *(undefined4 *)(this + 0x14) = 0;
  }
  if (*(int *)(this + 0xc) != 0) {
    puVar1 = *(undefined4 **)(this + 8);
    if (puVar1 != (undefined4 *)0x0) {
      puVar2 = puVar1 + puVar1[-1] * 7;
      if (puVar1 != puVar2) {
        do {
          puVar2 = puVar2 + -7;
          (**(code **)*puVar2)(puVar2);
          puVar1 = *(undefined4 **)(this + 8);
        } while (puVar1 != puVar2);
      }
      operator_delete__(puVar1 + -1);
    }
    *(undefined4 *)(this + 8) = 0;
    *(undefined4 *)(this + 0xc) = 0;
  }
  *(int *)this = *(int *)(unaff_EBX + 0x45ebf) + 8;
  return;
}

