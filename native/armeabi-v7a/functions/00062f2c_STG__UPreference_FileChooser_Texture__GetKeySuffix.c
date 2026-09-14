/* 00062f2c | STG::UPreference_FileChooser_Texture::GetKeySuffix */

/* STG::UPreference_FileChooser_Texture::GetKeySuffix(STG::UStringBase<char, int>&) const */

void __thiscall
STG::UPreference_FileChooser_Texture::GetKeySuffix
          (UPreference_FileChooser_Texture *this,UStringBase *param_1)

{
  size_t sVar1;
  char *__s;
  
  if (*(undefined1 **)(param_1 + 0x18) != *(undefined1 **)(param_1 + 0x14)) {
    **(undefined1 **)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x18);
  }
  if ((*(int *)(this + 0x8c) != 0) && (*(int *)(this + 0x90) != 0)) {
    __s = (char *)(DAT_00062fb4 + 0x62f88);
    snprintf(__s,0x40,(char *)(DAT_00062fb8 + 0x62f94),*(int *)(this + 0x8c),*(int *)(this + 0x90));
    sVar1 = strlen(__s);
    std::string::_M_append((string *)(param_1 + 4),__s,__s + sVar1);
    return;
  }
  return;
}

