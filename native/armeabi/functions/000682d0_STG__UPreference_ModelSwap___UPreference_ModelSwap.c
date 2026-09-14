/* 000682d0 | STG::UPreference_ModelSwap::~UPreference_ModelSwap */

/* STG::UPreference_ModelSwap::~UPreference_ModelSwap() */

UPreference_ModelSwap * __thiscall
STG::UPreference_ModelSwap::~UPreference_ModelSwap(UPreference_ModelSwap *this)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  *(int *)this = *(int *)(DAT_000683dc + 0x682e8) + 8;
  if (*(int *)(this + 0x9c) != 0) {
    if (*(void **)(this + 0x98) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x98));
    }
    *(undefined4 *)(this + 0x98) = 0;
    *(undefined4 *)(this + 0x9c) = 0;
  }
  if (*(int *)(this + 0x94) != 0) {
    if (*(void **)(this + 0x90) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x90));
    }
    *(undefined4 *)(this + 0x90) = 0;
    *(undefined4 *)(this + 0x94) = 0;
  }
  if (*(int *)(this + 0x8c) != 0) {
    if (*(void **)(this + 0x88) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x88));
    }
    *(undefined4 *)(this + 0x88) = 0;
    *(undefined4 *)(this + 0x8c) = 0;
  }
  iVar2 = *(int *)(this + 0x7c);
  *(int *)this = *(int *)(DAT_000683e0 + 0x68370) + 8;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + -4) * 0x1c + iVar2;
    if (iVar2 != iVar3) {
      do {
        puVar1 = (undefined4 *)(iVar3 + -0x1c);
        iVar3 = iVar3 + -0x1c;
        (**(code **)*puVar1)(iVar3);
        iVar2 = *(int *)(this + 0x7c);
      } while (iVar2 != iVar3);
    }
    operator_delete__((void *)(iVar2 + -8));
  }
  *(undefined4 *)(this + 0x7c) = 0;
  UPreferenceBase::~UPreferenceBase((UPreferenceBase *)this);
  return this;
}

