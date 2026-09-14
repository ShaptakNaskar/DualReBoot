/* 00067a4c | STG::UPreference_FileChooser_Texture::UPreference_FileChooser_Texture */

/* STG::UPreference_FileChooser_Texture::UPreference_FileChooser_Texture() */

UPreference_FileChooser_Texture * __thiscall
STG::UPreference_FileChooser_Texture::UPreference_FileChooser_Texture
          (UPreference_FileChooser_Texture *this)

{
  int iVar1;
  
  UPreference_FileChooser::UPreference_FileChooser((UPreference_FileChooser *)this);
  iVar1 = DAT_00067a80;
  *(undefined4 *)(this + 0x88) = 0;
  *(int *)this = *(int *)(iVar1 + 0x67a6c) + 8;
  *(undefined4 *)(this + 0x8c) = 0;
  *(undefined4 *)(this + 0x90) = 0;
  return this;
}

