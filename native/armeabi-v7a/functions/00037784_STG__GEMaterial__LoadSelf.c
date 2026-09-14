/* 00037784 | STG::GEMaterial::LoadSelf */

/* STG::GEMaterial::LoadSelf(STG::FFileHash const&) */

int __thiscall STG::GEMaterial::LoadSelf(GEMaterial *this,FFileHash *param_1)

{
  int iVar1;
  int iVar2;
  void *__dest;
  undefined1 *puVar3;
  int iVar4;
  size_t __n;
  int *piVar5;
  int iVar6;
  uint *puVar7;
  uint __n_00;
  void *__src;
  char *pcVar8;
  int aiStack_2c [2];
  
  iVar6 = DAT_0005eaa4 + 0x5e848;
  puVar7 = *(uint **)(iVar6 + DAT_0005eaa8);
  if (((*puVar7 & 1) == 0) && (iVar1 = thunk_FUN_0007004c(puVar7), iVar1 != 0)) {
    piVar5 = *(int **)(iVar6 + DAT_0005eaac);
    iVar2 = *(int *)(iVar6 + DAT_0005eab0);
    piVar5[0xd] = (int)(piVar5 + 9);
    piVar5[0xe] = (int)(piVar5 + 9);
    iVar1 = DAT_0005eab4;
    iVar2 = iVar2 + 8;
    piVar5[6] = (int)(piVar5 + 2);
    piVar5[1] = iVar2;
    piVar5[7] = (int)(piVar5 + 2);
    piVar5[8] = iVar2;
    *(undefined1 *)(piVar5 + 2) = 0;
    *(undefined1 *)(piVar5 + 9) = 0;
    iVar1 = *(int *)(iVar6 + iVar1);
    piVar5[0xf] = 0;
    piVar5[0x10] = 0;
    *piVar5 = iVar1 + 8;
    thunk_FUN_000700b0(puVar7);
    __aeabi_atexit(piVar5,*(undefined4 *)(iVar6 + DAT_0005eab8),
                   *(undefined4 *)(iVar6 + DAT_0005eabc));
  }
  else {
    piVar5 = *(int **)(iVar6 + DAT_0005eaac);
  }
  aiStack_2c[0] = (**(code **)*piVar5)(piVar5,param_1,0);
  iVar1 = (**(code **)(*(int *)this + 0x10))(this);
  if ((aiStack_2c[0] != 0) && (iVar1 != 0)) {
    if ((string *)(this + 0xc) != (string *)(param_1 + 4)) {
      __src = *(void **)(param_1 + 0x18);
      pcVar8 = *(char **)(param_1 + 0x14);
      puVar3 = *(undefined1 **)(this + 0x1c);
      __dest = *(void **)(this + 0x20);
      __n_00 = (int)pcVar8 - (int)__src;
      __n = (int)puVar3 - (int)__dest;
      if (__n < __n_00) {
        iVar2 = 0;
        if (__n != 0) {
          memmove(__dest,__src,__n);
          iVar2 = *(int *)(this + 0x1c) - *(int *)(this + 0x20);
        }
        std::string::_M_append((string *)(this + 0xc),(char *)((int)__src + iVar2),pcVar8);
        *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x1c);
        goto LAB_0005e8a4;
      }
      if (__n_00 != 0) {
        memmove(__dest,__src,__n_00);
        __dest = *(void **)(this + 0x20);
        puVar3 = *(undefined1 **)(this + 0x1c);
      }
      if ((undefined1 *)((int)__dest + __n_00) != puVar3) {
        *(undefined1 *)((int)__dest + __n_00) = *puVar3;
        *(undefined1 **)(this + 0x1c) =
             (undefined1 *)((int)__dest + __n_00) + (*(int *)(this + 0x1c) - (int)puVar3);
      }
    }
    *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x1c);
  }
LAB_0005e8a4:
  if (((*puVar7 & 1) == 0) && (iVar2 = thunk_FUN_0007004c(puVar7), iVar2 != 0)) {
    iVar4 = *(int *)(iVar6 + DAT_0005eab0);
    piVar5[0xd] = (int)(piVar5 + 9);
    piVar5[0xe] = (int)(piVar5 + 9);
    iVar2 = DAT_0005eab4;
    iVar4 = iVar4 + 8;
    piVar5[6] = (int)(piVar5 + 2);
    piVar5[7] = (int)(piVar5 + 2);
    piVar5[1] = iVar4;
    piVar5[8] = iVar4;
    *(undefined1 *)(piVar5 + 2) = 0;
    *(undefined1 *)(piVar5 + 9) = 0;
    iVar2 = *(int *)(iVar6 + iVar2);
    piVar5[0xf] = 0;
    piVar5[0x10] = 0;
    *piVar5 = iVar2 + 8;
    thunk_FUN_000700b0(puVar7);
    __aeabi_atexit(piVar5,*(undefined4 *)(iVar6 + DAT_0005eab8),
                   *(undefined4 *)(iVar6 + DAT_0005eabc));
  }
  (**(code **)(*piVar5 + 8))(piVar5,aiStack_2c);
  return iVar1;
}

