/* 000718a0 | STG::UPreference_FileChooser_Texture::~UPreference_FileChooser_Texture */

/* STG::UPreference_FileChooser_Texture::~UPreference_FileChooser_Texture() */

void __thiscall
STG::UPreference_FileChooser_Texture::~UPreference_FileChooser_Texture
          (UPreference_FileChooser_Texture *this)

{
  int unaff_EBX;
  
  FUN_0002e044();
  *(int *)this = *(int *)((int)&__DT_REL[7].r_info + unaff_EBX + 2) + 8;
  UPreference_FileChooser::~UPreference_FileChooser((UPreference_FileChooser *)this);
  return;
}

