/* 00079f70 | STG::UPreference_TextureFont::UPreference_TextureFont */

/* STG::UPreference_TextureFont::UPreference_TextureFont() */

void __thiscall STG::UPreference_TextureFont::UPreference_TextureFont(UPreference_TextureFont *this)

{
  int iVar1;
  int unaff_EBX;
  
  FUN_0002e044();
  UPreferenceBase::UPreferenceBase((UPreferenceBase *)this);
  iVar1 = *(int *)("_ZN3STG10USerialize4LoadEPKNS_9FFileBaseERNS_9FFileHashE" + unaff_EBX + 0x13);
  *(undefined4 *)(this + 0x7c) = 0;
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  *(int *)this = iVar1 + 8;
  *(undefined4 *)(this + 0x88) = 0xffffffff;
  this[0x8c] = (UPreference_TextureFont)0x0;
  return;
}

