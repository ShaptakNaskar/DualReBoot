/* 00072c60 | STG::UPreference_ModelToggle::~UPreference_ModelToggle */

/* STG::UPreference_ModelToggle::~UPreference_ModelToggle() */

void __thiscall
STG::UPreference_ModelToggle::~UPreference_ModelToggle(UPreference_ModelToggle *this)

{
  int unaff_EBX;
  
  FUN_0002e044();
  *(int *)this = *(int *)((int)DWORD_ARRAY_00028b54 + unaff_EBX + 0x77b) + 8;
  if (*(int *)(this + 0x8c) != 0) {
    if (*(void **)(this + 0x88) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x88));
    }
    *(undefined4 *)(this + 0x88) = 0;
    *(undefined4 *)(this + 0x8c) = 0;
  }
  *(int *)this = *(int *)((int)DWORD_ARRAY_00028b54 + unaff_EBX + 0x75f) + 8;
  if (*(void **)(this + 0x7c) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x7c));
  }
  *(undefined4 *)(this + 0x7c) = 0;
  UPreferenceBase::~UPreferenceBase((UPreferenceBase *)this);
  return;
}

