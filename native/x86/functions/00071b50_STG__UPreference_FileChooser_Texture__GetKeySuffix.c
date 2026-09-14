/* 00071b50 | STG::UPreference_FileChooser_Texture::GetKeySuffix */

/* STG::UPreference_FileChooser_Texture::GetKeySuffix(STG::UStringBase<char, int>&) const */

void __thiscall
STG::UPreference_FileChooser_Texture::GetKeySuffix
          (UPreference_FileChooser_Texture *this,UStringBase *param_1)

{
  uint *__s;
  uint uVar1;
  uint uVar2;
  int extraout_EDX;
  uint *puVar3;
  uint *puVar4;
  int unaff_EBX;
  
  FUN_0002e044();
  if (*(undefined1 **)(param_1 + 0x18) != *(undefined1 **)(param_1 + 0x14)) {
    **(undefined1 **)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x18);
  }
  if ((*(int *)(extraout_EDX + 0x8c) != 0) && (*(int *)(extraout_EDX + 0x90) != 0)) {
    __s = (uint *)((int)&__DT_REL[0x31b].r_info + unaff_EBX + 3);
    snprintf((char *)__s,0x40,(char *)((int)&__DT_SYMTAB[0x572].st_shndx + unaff_EBX + 1),
             *(int *)(extraout_EDX + 0x8c),*(int *)(extraout_EDX + 0x90));
    puVar4 = __s;
    do {
      puVar3 = puVar4;
      uVar1 = *puVar3 + 0xfefefeff & ~*puVar3;
      uVar2 = uVar1 & 0x80808080;
      puVar4 = puVar3 + 1;
    } while (uVar2 == 0);
    if ((uVar1 & 0x8080) == 0) {
      puVar4 = (uint *)((int)puVar3 + 6);
      uVar2 = uVar2 >> 0x10;
    }
    std::string::_M_append
              ((string *)(param_1 + 4),(char *)__s,
               (char *)((int)puVar4 + (-3 - (uint)CARRY1((byte)uVar2,(byte)uVar2))));
  }
  return;
}

