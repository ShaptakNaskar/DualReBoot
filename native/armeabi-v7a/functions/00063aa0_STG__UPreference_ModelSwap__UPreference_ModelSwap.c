/* 00063aa0 | STG::UPreference_ModelSwap::UPreference_ModelSwap */

/* STG::UPreference_ModelSwap::UPreference_ModelSwap() */

UPreference_ModelSwap * __thiscall
STG::UPreference_ModelSwap::UPreference_ModelSwap(UPreference_ModelSwap *this)

{
  int iVar1;
  
  UPreferenceBase::UPreferenceBase((UPreferenceBase *)this);
  iVar1 = DAT_00063aec;
  *(undefined4 *)(this + 0x7c) = 0;
  iVar1 = *(int *)(iVar1 + 0x63ac4);
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  *(int *)this = iVar1 + 8;
  *(undefined4 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x8c) = 0;
  *(undefined4 *)(this + 0x90) = 0;
  *(undefined4 *)(this + 0x94) = 0;
  *(undefined4 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0x9c) = 0;
  return this;
}

