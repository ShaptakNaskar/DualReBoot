/* 00079d80 | STG::UPreference_TextureFont::GetShouldReflect */

/* STG::UPreference_TextureFont::GetShouldReflect() const */

UPreference_TextureFont __thiscall
STG::UPreference_TextureFont::GetShouldReflect(UPreference_TextureFont *this)

{
  char cVar1;
  UPreference_TextureFont UVar2;
  
  FUN_0002e044();
  cVar1 = UPreferenceBase::GetShouldReflect((UPreferenceBase *)this);
  UVar2 = (UPreference_TextureFont)0x0;
  if (cVar1 != '\0') {
    UVar2 = this[0x8c];
  }
  return UVar2;
}

