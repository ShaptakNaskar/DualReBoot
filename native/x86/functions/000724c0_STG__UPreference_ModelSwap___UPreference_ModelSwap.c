/* 000724c0 | STG::UPreference_ModelSwap::~UPreference_ModelSwap */

/* STG::UPreference_ModelSwap::~UPreference_ModelSwap() */

void __thiscall STG::UPreference_ModelSwap::~UPreference_ModelSwap(UPreference_ModelSwap *this)

{
  undefined4 *puVar1;
  int unaff_EBX;
  undefined4 *puVar2;
  
  FUN_0002e044();
  *(int *)this = *(int *)((int)DWORD_ARRAY_00028b54 + unaff_EBX + 0xf1f) + 8;
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
  *(int *)this = *(int *)((int)DWORD_ARRAY_00028b54 + unaff_EBX + 0xed3) + 8;
  puVar1 = *(undefined4 **)(this + 0x7c);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = puVar1 + puVar1[-1] * 7;
    if (puVar1 != puVar2) {
      do {
        puVar2 = puVar2 + -7;
        (**(code **)*puVar2)(puVar2);
        puVar1 = *(undefined4 **)(this + 0x7c);
      } while (puVar1 != puVar2);
    }
    operator_delete__(puVar1 + -1);
  }
  *(undefined4 *)(this + 0x7c) = 0;
  UPreferenceBase::~UPreferenceBase((UPreferenceBase *)this);
  return;
}

