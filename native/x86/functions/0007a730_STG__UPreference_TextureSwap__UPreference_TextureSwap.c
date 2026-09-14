/* 0007a730 | STG::UPreference_TextureSwap::UPreference_TextureSwap */

/* STG::UPreference_TextureSwap::UPreference_TextureSwap() */

void __thiscall STG::UPreference_TextureSwap::UPreference_TextureSwap(UPreference_TextureSwap *this)

{
  int iVar1;
  int unaff_EBX;
  
  FUN_0002e044();
  UPreferenceBase::UPreferenceBase((UPreferenceBase *)this);
  iVar1 = *(int *)("_ZNK3STG11UPreferenceINS_11UStringBaseIciEELb1EE12IsValueValidERKS2_" +
                  unaff_EBX + 0x44);
  *(undefined4 *)(this + 0x7c) = 0;
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  *(int *)this = iVar1 + 8;
  *(undefined4 *)(this + 0x88) = 0xffffffff;
  return;
}

