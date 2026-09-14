/* 00062ef4 | STG::UPreference_FileChooser_Texture::UPreference_FileChooser_Texture */

/* STG::UPreference_FileChooser_Texture::UPreference_FileChooser_Texture() */

UPreference_FileChooser_Texture * __thiscall
STG::UPreference_FileChooser_Texture::UPreference_FileChooser_Texture
          (UPreference_FileChooser_Texture *this)

{
  int iVar1;
  
  UPreference_FileChooser::UPreference_FileChooser((UPreference_FileChooser *)this);
  iVar1 = DAT_00062f28;
  *(undefined4 *)(this + 0x88) = 0;
  iVar1 = *(int *)(iVar1 + 0x62f18);
  *(undefined4 *)(this + 0x8c) = 0;
  *(undefined4 *)(this + 0x90) = 0;
  *(int *)this = iVar1 + 8;
  return this;
}

