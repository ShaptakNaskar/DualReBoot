/* 0004f4f4 | STG::LLogicScene_HidePrey::~LLogicScene_HidePrey */

/* STG::LLogicScene_HidePrey::~LLogicScene_HidePrey() */

LLogicScene_HidePrey * __thiscall
STG::LLogicScene_HidePrey::~LLogicScene_HidePrey(LLogicScene_HidePrey *this)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = DAT_0004f6f0 + 0x4f50c;
  *(int *)this = *(int *)(iVar3 + DAT_0004f6f4) + 8;
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
    iVar2 = *(int *)(this + 0x10);
    if (iVar2 != 0) {
      iVar4 = *(int *)(iVar2 + -4) * 0x1c + iVar2;
      if (iVar2 != iVar4) {
        do {
          puVar1 = (undefined4 *)(iVar4 + -0x1c);
          iVar4 = iVar4 + -0x1c;
          (**(code **)*puVar1)(iVar4);
          iVar2 = *(int *)(this + 0x10);
        } while (iVar2 != iVar4);
      }
      operator_delete__((void *)(iVar2 + -8));
    }
    *(undefined4 *)(this + 0x10) = 0;
    *(undefined4 *)(this + 0x14) = 0;
  }
  if (*(int *)(this + 0xc) != 0) {
    iVar2 = *(int *)(this + 8);
    if (iVar2 != 0) {
      iVar4 = *(int *)(iVar2 + -4) * 0x1c + iVar2;
      if (iVar2 != iVar4) {
        do {
          puVar1 = (undefined4 *)(iVar4 + -0x1c);
          iVar4 = iVar4 + -0x1c;
          (**(code **)*puVar1)(iVar4);
          iVar2 = *(int *)(this + 8);
        } while (iVar2 != iVar4);
      }
      operator_delete__((void *)(iVar2 + -8));
    }
    *(undefined4 *)(this + 8) = 0;
    *(undefined4 *)(this + 0xc) = 0;
    *(int *)this = *(int *)(iVar3 + DAT_0004f6f8) + 8;
    return this;
  }
  *(int *)this = *(int *)(iVar3 + DAT_0004f6f8) + 8;
  return this;
}

