/* 00067900 | STG::UPreference_FileChooser_Texture::~UPreference_FileChooser_Texture */

/* STG::UPreference_FileChooser_Texture::~UPreference_FileChooser_Texture() */

UPreference_FileChooser_Texture * __thiscall
STG::UPreference_FileChooser_Texture::~UPreference_FileChooser_Texture
          (UPreference_FileChooser_Texture *this)

{
  *(int *)this = *(int *)(DAT_00067924 + 0x67910) + 8;
  UPreference_FileChooser::~UPreference_FileChooser((UPreference_FileChooser *)this);
  return this;
}

