/* 0006a99c | STG::UPreference_TextureFont::GetShouldReflect */

/* STG::UPreference_TextureFont::GetShouldReflect() const */

UPreference_TextureFont __thiscall
STG::UPreference_TextureFont::GetShouldReflect(UPreference_TextureFont *this)

{
  UPreference_TextureFont UVar1;
  int iVar2;
  
  iVar2 = UPreferenceBase::GetShouldReflect((UPreferenceBase *)this);
  UVar1 = (UPreference_TextureFont)0x0;
  if (iVar2 != 0) {
    UVar1 = this[0x8c];
  }
  return UVar1;
}

