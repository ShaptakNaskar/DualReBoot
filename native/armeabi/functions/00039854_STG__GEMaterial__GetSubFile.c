/* 00039854 | STG::GEMaterial::GetSubFile */

/* STG::GEMaterial::GetSubFile(unsigned long, STG::FFileHash&) const */

undefined4 __thiscall STG::GEMaterial::GetSubFile(GEMaterial *this,ulong param_1,FFileHash *param_2)

{
  void *__dest;
  size_t __n;
  int iVar1;
  undefined1 *puVar2;
  char *__src;
  char *pcVar3;
  uint __n_00;
  
  iVar1 = *(int *)(this + param_1 * 0x20 + 0x88);
  if (iVar1 == -1) {
    return 0;
  }
  __src = *(char **)(this + param_1 * 0x20 + 0x84);
  pcVar3 = *(char **)(this + param_1 * 0x20 + 0x80);
  if (__src == pcVar3) {
    return 0;
  }
  if ((string *)(param_2 + 4) != (string *)(this + param_1 * 0x20 + 0x70)) {
    puVar2 = *(undefined1 **)(param_2 + 0x14);
    __dest = *(void **)(param_2 + 0x18);
    __n_00 = (int)pcVar3 - (int)__src;
    __n = (int)puVar2 - (int)__dest;
    if (__n < __n_00) {
      iVar1 = 0;
      if (__n != 0) {
        memmove(__dest,__src,__n);
        iVar1 = *(int *)(param_2 + 0x14) - *(int *)(param_2 + 0x18);
      }
      std::string::_M_append((string *)(param_2 + 4),__src + iVar1,pcVar3);
    }
    else {
      if (__n_00 != 0) {
        memmove(__dest,__src,__n_00);
        __dest = *(void **)(param_2 + 0x18);
        puVar2 = *(undefined1 **)(param_2 + 0x14);
      }
      if ((undefined1 *)((int)__dest + __n_00) != puVar2) {
        *(undefined1 *)((int)__dest + __n_00) = *puVar2;
        iVar1 = *(int *)(this + param_1 * 0x20 + 0x88);
        *(undefined1 **)(param_2 + 0x14) =
             (undefined1 *)((int)__dest + __n_00) + (*(int *)(param_2 + 0x14) - (int)puVar2);
        goto LAB_000398d8;
      }
    }
    *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(this + param_1 * 0x20 + 0x88);
    return 1;
  }
LAB_000398d8:
  *(int *)(param_2 + 0x1c) = iVar1;
  return 1;
}

