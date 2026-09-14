/* 000688b0 | STG::UPreference_ModelToggle::~UPreference_ModelToggle */

/* STG::UPreference_ModelToggle::~UPreference_ModelToggle() */

UPreference_ModelToggle * __thiscall
STG::UPreference_ModelToggle::~UPreference_ModelToggle(UPreference_ModelToggle *this)

{
  *(int *)this = *(int *)(DAT_00068928 + 0x688c4) + 8;
  if (*(int *)(this + 0x8c) != 0) {
    if (*(void **)(this + 0x88) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x88));
    }
    *(undefined4 *)(this + 0x88) = 0;
    *(undefined4 *)(this + 0x8c) = 0;
  }
  *(int *)this = *(int *)(DAT_0006892c + 0x68900) + 8;
  if (*(void **)(this + 0x7c) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x7c));
  }
  *(undefined4 *)(this + 0x7c) = 0;
  UPreferenceBase::~UPreferenceBase((UPreferenceBase *)this);
  return this;
}

