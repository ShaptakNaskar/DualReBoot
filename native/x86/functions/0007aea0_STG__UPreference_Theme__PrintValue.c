/* 0007aea0 | STG::UPreference_Theme::PrintValue */

/* STG::UPreference_Theme::PrintValue(unsigned long, STG::UStringBase<char, int>&) const */

void __thiscall
STG::UPreference_Theme::PrintValue(UPreference_Theme *this,ulong param_1,UStringBase *param_2)

{
  char *pcVar1;
  size_t sVar2;
  int unaff_EBX;
  int iVar3;
  string *this_00;
  
  iVar3 = param_1 * 0x38 + *(int *)(this + 0x7c);
  FUN_0002e044();
  if (*(undefined1 **)(param_2 + 0x18) != *(undefined1 **)(param_2 + 0x14)) {
    **(undefined1 **)(param_2 + 0x18) = 0;
    *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(param_2 + 0x18);
  }
  pcVar1 = *(char **)(iVar3 + 0x18);
  this_00 = (string *)(param_2 + 4);
  sVar2 = strlen(pcVar1);
  std::string::_M_append(this_00,pcVar1,pcVar1 + sVar2);
  std::string::_M_append(this_00,(char *)(unaff_EBX + 0xc4f4),(char *)(unaff_EBX + 0xc4f5));
  pcVar1 = *(char **)(iVar3 + 0x34);
  sVar2 = strlen(pcVar1);
  std::string::_M_append(this_00,pcVar1,pcVar1 + sVar2);
  return;
}

