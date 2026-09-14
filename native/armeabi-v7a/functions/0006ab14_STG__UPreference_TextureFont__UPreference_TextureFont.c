/* 0006ab14 | STG::UPreference_TextureFont::UPreference_TextureFont */

/* STG::UPreference_TextureFont::UPreference_TextureFont() */

UPreference_TextureFont * __thiscall
STG::UPreference_TextureFont::UPreference_TextureFont(UPreference_TextureFont *this)

{
  int iVar1;
  
  UPreferenceBase::UPreferenceBase((UPreferenceBase *)this);
  iVar1 = DAT_0006ab54;
  *(undefined4 *)(this + 0x7c) = 0;
  iVar1 = *(int *)(iVar1 + 0x6ab38);
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  *(int *)this = iVar1 + 8;
  this[0x8c] = (UPreference_TextureFont)0x0;
  *(undefined4 *)(this + 0x88) = 0xffffffff;
  return this;
}

