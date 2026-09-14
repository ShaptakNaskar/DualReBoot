/* 00071a30 | STG::UPreference_FileChooser_Texture::Initialize */

/* STG::UPreference_FileChooser_Texture::Initialize(unsigned long, unsigned long,
   STG::UStringBase<char, int> const&, STG::UStringBase<char, int> const&, STG::UStringBase<char,
   int> const&) */

void __thiscall
STG::UPreference_FileChooser_Texture::Initialize
          (UPreference_FileChooser_Texture *this,ulong param_1,ulong param_2,UStringBase *param_3,
          UStringBase *param_4,UStringBase *param_5)

{
  FUN_0002e044();
  *(ulong *)(this + 0x8c) = param_1;
  *(ulong *)(this + 0x90) = param_2;
  *(undefined4 *)(this + 0x88) = 0;
  UPreference_FileChooser::Initialize((UPreference_FileChooser *)this,param_3,param_4,param_5);
  return;
}

