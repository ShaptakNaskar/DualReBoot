/* 0006fb6c | STG::UPreference_TextureSwap::UPreference_TextureSwap */

/* STG::UPreference_TextureSwap::UPreference_TextureSwap() */

UPreference_TextureSwap * __thiscall
STG::UPreference_TextureSwap::UPreference_TextureSwap(UPreference_TextureSwap *this)

{
  int iVar1;
  
  UPreferenceBase::UPreferenceBase((UPreferenceBase *)this);
  iVar1 = DAT_0006fba8;
  *(undefined4 *)(this + 0x7c) = 0;
  iVar1 = *(int *)(iVar1 + 0x6fb8c);
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  *(int *)this = iVar1 + 8;
  *(undefined4 *)(this + 0x88) = 0xffffffff;
  return this;
}

