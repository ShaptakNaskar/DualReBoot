/* 00062da8 | STG::UPreference_FileChooser_Texture::~UPreference_FileChooser_Texture */

/* STG::UPreference_FileChooser_Texture::~UPreference_FileChooser_Texture() */

UPreference_FileChooser_Texture * __thiscall
STG::UPreference_FileChooser_Texture::~UPreference_FileChooser_Texture
          (UPreference_FileChooser_Texture *this)

{
  *(int *)this = *(int *)(DAT_00062dcc + 0x62db8) + 8;
  UPreference_FileChooser::~UPreference_FileChooser((UPreference_FileChooser *)this);
  return this;
}

