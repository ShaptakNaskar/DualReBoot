/* 00030a9c | STG::FFileManager::OpenFile */

/* STG::FFileManager::OpenFile(STG::FFileHash const&, STG::FFileBase::EAccess) const */

int STG::FFileManager::OpenFile(int *param_1,int param_2)

{
  int iVar1;
  void *__dest;
  size_t __n;
  int iVar2;
  undefined1 *puVar3;
  uint __n_00;
  void *__src;
  char *pcVar4;
  
  iVar1 = (**(code **)(*param_1 + 4))();
  if (iVar1 != 0) {
    if ((string *)(iVar1 + 0x14) != (string *)(param_2 + 4)) {
      __src = *(void **)(param_2 + 0x18);
      pcVar4 = *(char **)(param_2 + 0x14);
      puVar3 = *(undefined1 **)(iVar1 + 0x24);
      __dest = *(void **)(iVar1 + 0x28);
      __n_00 = (int)pcVar4 - (int)__src;
      __n = (int)puVar3 - (int)__dest;
      if (__n < __n_00) {
        iVar2 = 0;
        if (__n != 0) {
          memmove(__dest,__src,__n);
          iVar2 = *(int *)(iVar1 + 0x24) - *(int *)(iVar1 + 0x28);
        }
        std::string::_M_append((string *)(iVar1 + 0x14),(char *)((int)__src + iVar2),pcVar4);
        *(undefined4 *)(iVar1 + 0x2c) = *(undefined4 *)(param_2 + 0x1c);
        return iVar1;
      }
      if (__n_00 != 0) {
        memmove(__dest,__src,__n_00);
        __dest = *(void **)(iVar1 + 0x28);
        puVar3 = *(undefined1 **)(iVar1 + 0x24);
      }
      if ((undefined1 *)((int)__dest + __n_00) != puVar3) {
        *(undefined1 *)((int)__dest + __n_00) = *puVar3;
        *(undefined1 **)(iVar1 + 0x24) =
             (undefined1 *)((int)__dest + __n_00) + (*(int *)(iVar1 + 0x24) - (int)puVar3);
      }
    }
    *(undefined4 *)(iVar1 + 0x2c) = *(undefined4 *)(param_2 + 0x1c);
  }
  return iVar1;
}

