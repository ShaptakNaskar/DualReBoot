/* 00071af0 | STG::UPreference_FileChooser_Texture::UPreference_FileChooser_Texture */

/* STG::UPreference_FileChooser_Texture::UPreference_FileChooser_Texture() */

void __thiscall
STG::UPreference_FileChooser_Texture::UPreference_FileChooser_Texture
          (UPreference_FileChooser_Texture *this)

{
  int iVar1;
  int unaff_EBX;
  
  FUN_0002e044();
  UPreference_FileChooser::UPreference_FileChooser((UPreference_FileChooser *)this);
  iVar1 = *(int *)((int)DWORD_ARRAY_00028b54 + unaff_EBX + 0x18df);
  *(undefined4 *)(this + 0x88) = 0;
  *(int *)this = iVar1 + 8;
  *(undefined4 *)(this + 0x8c) = 0;
  *(undefined4 *)(this + 0x90) = 0;
  return;
}

