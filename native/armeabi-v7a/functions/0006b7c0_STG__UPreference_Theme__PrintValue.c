/* 0006b7c0 | STG::UPreference_Theme::PrintValue */

/* STG::UPreference_Theme::PrintValue(unsigned long, STG::UStringBase<char, int>&) const */

void __thiscall
STG::UPreference_Theme::PrintValue(UPreference_Theme *this,ulong param_1,UStringBase *param_2)

{
  size_t sVar1;
  undefined1 *puVar2;
  string *this_00;
  int iVar3;
  char *pcVar4;
  bool bVar5;
  
  puVar2 = *(undefined1 **)(param_2 + 0x18);
  this_00 = (string *)(param_2 + 4);
  bVar5 = puVar2 != *(undefined1 **)(param_2 + 0x14);
  iVar3 = *(int *)(this + 0x7c) + param_1 * 0x38;
  if (bVar5) {
    *puVar2 = 0;
    puVar2 = *(undefined1 **)(param_2 + 0x18);
  }
  pcVar4 = *(char **)(iVar3 + 0x18);
  if (bVar5) {
    *(undefined1 **)(param_2 + 0x14) = puVar2;
  }
  sVar1 = strlen(pcVar4);
  std::string::_M_append(this_00,pcVar4,pcVar4 + sVar1);
  std::string::_M_append(this_00,(char *)(DAT_0006b840 + 0x6b81c),(char *)(DAT_0006b840 + 0x6b81d));
  pcVar4 = *(char **)(iVar3 + 0x34);
  sVar1 = strlen(pcVar4);
  std::string::_M_append(this_00,pcVar4,pcVar4 + sVar1);
  return;
}

