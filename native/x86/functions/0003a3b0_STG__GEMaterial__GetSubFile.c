/* 0003a3b0 | STG::GEMaterial::GetSubFile */

/* STG::GEMaterial::GetSubFile(unsigned long, STG::FFileHash&) const */

undefined4 __thiscall STG::GEMaterial::GetSubFile(GEMaterial *this,ulong param_1,FFileHash *param_2)

{
  char *__src;
  char *pcVar1;
  undefined1 *puVar2;
  int iVar3;
  uint __n;
  int iVar4;
  undefined1 *puVar5;
  uint __n_00;
  undefined8 uVar6;
  void *__dest;
  
  uVar6 = FUN_0002e044();
  iVar4 = (int)((ulonglong)uVar6 >> 0x20);
  iVar3 = *(int *)(iVar4 + 0x28);
  if (iVar3 == -1) {
    return (int)uVar6;
  }
  __src = *(char **)(iVar4 + 0x24);
  pcVar1 = *(char **)(iVar4 + 0x20);
  if (__src == pcVar1) {
    return (int)uVar6;
  }
  if ((string *)(param_2 + 4) == (string *)(iVar4 + 0x10)) {
LAB_0003a445:
    *(int *)(param_2 + 0x1c) = iVar3;
  }
  else {
    puVar2 = *(undefined1 **)(param_2 + 0x14);
    __dest = *(void **)(param_2 + 0x18);
    __n_00 = (int)puVar2 - (int)__dest;
    __n = (int)pcVar1 - (int)__src;
    if (__n_00 < __n) {
      iVar3 = 0;
      if (__n_00 != 0) {
        memmove(__dest,__src,__n_00);
        iVar3 = *(int *)(param_2 + 0x14) - *(int *)(param_2 + 0x18);
      }
      std::string::_M_append((string *)(param_2 + 4),__src + iVar3,pcVar1);
    }
    else {
      if (__n != 0) {
        memmove(__dest,__src,__n);
        puVar2 = *(undefined1 **)(param_2 + 0x14);
        __dest = *(void **)(param_2 + 0x18);
      }
      puVar5 = (undefined1 *)((int)__dest + __n);
      if (puVar5 != puVar2) {
        *puVar5 = *puVar2;
        iVar3 = *(int *)(iVar4 + 0x28);
        *(undefined1 **)(param_2 + 0x14) = puVar5 + (*(int *)(param_2 + 0x14) - (int)puVar2);
        goto LAB_0003a445;
      }
    }
    *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(iVar4 + 0x28);
  }
  return 1;
}

