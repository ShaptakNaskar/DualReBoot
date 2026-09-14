/* 000646c8 | STG::UPreference_Uint32::~UPreference_Uint32 */

/* STG::UPreference_Uint32::~UPreference_Uint32() */

UPreference_Uint32 * __thiscall
STG::UPreference_Uint32::~UPreference_Uint32(UPreference_Uint32 *this)

{
  *(int *)this = *(int *)(DAT_00064710 + 0x646e0) + 8;
  if (*(void **)(this + 0x7c) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x7c));
  }
  *(undefined4 *)(this + 0x7c) = 0;
  UPreferenceBase::~UPreferenceBase((UPreferenceBase *)this);
  operator_delete(this);
  return this;
}

