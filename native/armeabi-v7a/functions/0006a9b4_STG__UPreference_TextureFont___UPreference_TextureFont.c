/* 0006a9b4 | STG::UPreference_TextureFont::~UPreference_TextureFont */

/* STG::UPreference_TextureFont::~UPreference_TextureFont() */

UPreference_TextureFont * __thiscall
STG::UPreference_TextureFont::~UPreference_TextureFont(UPreference_TextureFont *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(this + 0x7c);
  *(int *)this = *(int *)(DAT_0006aa38 + 0x6a9d0) + 8;
  if (iVar1 != 0) {
    iVar3 = *(int *)(iVar1 + -4) * 0x2c + iVar1;
    if (iVar1 != iVar3) {
      do {
        iVar2 = iVar3 + -0x2c;
        (*(code *)**(undefined4 **)(iVar3 + -0x2c))(iVar2);
        iVar1 = *(int *)(this + 0x7c);
        iVar3 = iVar2;
      } while (iVar1 != iVar2);
    }
    operator_delete__((void *)(iVar1 + -8));
  }
  *(undefined4 *)(this + 0x7c) = 0;
  UPreferenceBase::~UPreferenceBase((UPreferenceBase *)this);
  return this;
}

