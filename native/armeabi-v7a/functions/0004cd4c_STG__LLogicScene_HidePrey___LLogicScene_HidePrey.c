/* 0004cd4c | STG::LLogicScene_HidePrey::~LLogicScene_HidePrey */

/* STG::LLogicScene_HidePrey::~LLogicScene_HidePrey() */

LLogicScene_HidePrey * __thiscall
STG::LLogicScene_HidePrey::~LLogicScene_HidePrey(LLogicScene_HidePrey *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = DAT_0004cf48 + 0x4cd64;
  *(int *)this = *(int *)(iVar3 + DAT_0004cf4c) + 8;
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
    iVar1 = *(int *)(this + 0x10);
    if (iVar1 != 0) {
      iVar4 = iVar1 + *(int *)(iVar1 + -4) * 0x1c;
      if (iVar1 != iVar4) {
        do {
          iVar2 = iVar4 + -0x1c;
          (*(code *)**(undefined4 **)(iVar4 + -0x1c))(iVar2);
          iVar1 = *(int *)(this + 0x10);
          iVar4 = iVar2;
        } while (iVar1 != iVar2);
      }
      operator_delete__((void *)(iVar1 + -8));
    }
    *(undefined4 *)(this + 0x10) = 0;
    *(undefined4 *)(this + 0x14) = 0;
  }
  if (*(int *)(this + 0xc) != 0) {
    iVar1 = *(int *)(this + 8);
    if (iVar1 != 0) {
      iVar4 = iVar1 + *(int *)(iVar1 + -4) * 0x1c;
      if (iVar1 != iVar4) {
        do {
          iVar2 = iVar4 + -0x1c;
          (*(code *)**(undefined4 **)(iVar4 + -0x1c))(iVar2);
          iVar1 = *(int *)(this + 8);
          iVar4 = iVar2;
        } while (iVar1 != iVar2);
      }
      operator_delete__((void *)(iVar1 + -8));
    }
    *(undefined4 *)(this + 8) = 0;
    *(undefined4 *)(this + 0xc) = 0;
    *(int *)this = *(int *)(iVar3 + DAT_0004cf50) + 8;
    return this;
  }
  *(int *)this = *(int *)(iVar3 + DAT_0004cf50) + 8;
  return this;
}

