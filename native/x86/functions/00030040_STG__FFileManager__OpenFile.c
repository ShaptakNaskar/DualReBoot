/* 00030040 | STG::FFileManager::OpenFile */

/* STG::FFileManager::OpenFile(STG::FFileHash const&, STG::FFileBase::EAccess) const */

int __thiscall STG::FFileManager::OpenFile(undefined4 this,int param_1,undefined4 param_3)

{
  char *pcVar1;
  void *__src;
  int *piVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  void *__dest;
  uint __n;
  uint __n_00;
  undefined1 *puVar6;
  
  piVar2 = (int *)FUN_0002e044();
  iVar3 = (**(code **)(*piVar2 + 4))(piVar2,param_1,param_3);
  if (iVar3 != 0) {
    if ((string *)(iVar3 + 0x14) != (string *)(param_1 + 4)) {
      pcVar1 = *(char **)(param_1 + 0x14);
      puVar4 = *(undefined1 **)(iVar3 + 0x24);
      __src = *(void **)(param_1 + 0x18);
      __n_00 = (int)pcVar1 - (int)__src;
      __dest = *(void **)(iVar3 + 0x28);
      __n = (int)puVar4 - (int)__dest;
      if (__n < __n_00) {
        iVar5 = 0;
        if (__n != 0) {
          memmove(__dest,__src,__n);
          iVar5 = *(int *)(iVar3 + 0x24) - *(int *)(iVar3 + 0x28);
        }
        std::string::_M_append((string *)(iVar3 + 0x14),(char *)((int)__src + iVar5),pcVar1);
        *(undefined4 *)(iVar3 + 0x2c) = *(undefined4 *)(param_1 + 0x1c);
        return iVar3;
      }
      if (__n_00 != 0) {
        memmove(__dest,__src,__n_00);
        puVar4 = *(undefined1 **)(iVar3 + 0x24);
        __dest = *(void **)(iVar3 + 0x28);
      }
      puVar6 = (undefined1 *)(__n_00 + (int)__dest);
      if (puVar6 != puVar4) {
        *puVar6 = *puVar4;
        *(int *)(iVar3 + 0x24) = (int)(puVar6 + (*(int *)(iVar3 + 0x24) - (int)puVar4));
      }
    }
    *(undefined4 *)(iVar3 + 0x2c) = *(undefined4 *)(param_1 + 0x1c);
  }
  return iVar3;
}

