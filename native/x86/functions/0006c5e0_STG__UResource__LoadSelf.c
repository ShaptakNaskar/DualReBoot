/* 0006c5e0 | STG::UResource::LoadSelf */

/* STG::UResource::LoadSelf(STG::FFileHash const&) */

char __thiscall STG::UResource::LoadSelf(UResource *this,FFileHash *param_1)

{
  char *pcVar1;
  int *piVar2;
  void *__src;
  char *pcVar3;
  char cVar4;
  int iVar5;
  undefined1 *puVar6;
  uint __n;
  uint __n_00;
  undefined1 *puVar7;
  int unaff_EBX;
  int local_20 [4];
  void *__dest;
  
  FUN_0002e044();
  pcVar1 = *(char **)(unaff_EBX + 0x2f86b);
  piVar2 = *(int **)(&DAT_0002f86f + unaff_EBX);
  if (*pcVar1 == '\0') {
    iVar5 = FUN_00080eb0(pcVar1);
    if (iVar5 != 0) {
      iVar5 = *(int *)(unaff_EBX + 0x2f84b) + 8;
      piVar2[6] = (int)(piVar2 + 2);
      piVar2[1] = iVar5;
      piVar2[8] = iVar5;
      piVar2[0xd] = (int)(piVar2 + 9);
      piVar2[0xe] = (int)(piVar2 + 9);
      iVar5 = *(int *)(unaff_EBX + 0x2f873);
      piVar2[7] = (int)(piVar2 + 2);
      *piVar2 = iVar5 + 8;
      *(undefined1 *)(piVar2 + 2) = 0;
      *(undefined1 *)(piVar2 + 9) = 0;
      piVar2[0xf] = 0;
      piVar2[0x10] = 0;
      FUN_00080f40(pcVar1);
      __cxa_atexit(*(undefined4 *)(unaff_EBX + 0x2f87b),piVar2,*(undefined4 *)(unaff_EBX + 0x2f877))
      ;
    }
  }
  local_20[0] = (**(code **)*piVar2)(piVar2,param_1,0);
  cVar4 = (**(code **)(*(int *)this + 0x10))(this,local_20[0]);
  if ((local_20[0] != 0) && (cVar4 != '\0')) {
    if ((string *)(this + 0xc) != (string *)(param_1 + 4)) {
      puVar6 = *(undefined1 **)(this + 0x1c);
      __src = *(void **)(param_1 + 0x18);
      pcVar3 = *(char **)(param_1 + 0x14);
      __n_00 = (int)pcVar3 - (int)__src;
      __dest = *(void **)(this + 0x20);
      __n = (int)puVar6 - (int)__dest;
      if (__n < __n_00) {
        iVar5 = 0;
        if (__n != 0) {
          memmove(__dest,__src,__n);
          iVar5 = *(int *)(this + 0x1c) - *(int *)(this + 0x20);
        }
        std::string::_M_append((string *)(this + 0xc),(char *)(iVar5 + (int)__src),pcVar3);
        *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x1c);
        goto LAB_0006c650;
      }
      if (__n_00 != 0) {
        memmove(__dest,__src,__n_00);
        puVar6 = *(undefined1 **)(this + 0x1c);
        __dest = *(void **)(this + 0x20);
      }
      puVar7 = (undefined1 *)((int)__dest + __n_00);
      if (puVar7 != puVar6) {
        *puVar7 = *puVar6;
        *(undefined1 **)(this + 0x1c) = puVar7 + (*(int *)(this + 0x1c) - (int)puVar6);
      }
    }
    *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x1c);
  }
LAB_0006c650:
  if (*pcVar1 == '\0') {
    iVar5 = FUN_00080eb0(pcVar1);
    if (iVar5 != 0) {
      iVar5 = *(int *)(unaff_EBX + 0x2f84b) + 8;
      piVar2[6] = (int)(piVar2 + 2);
      piVar2[1] = iVar5;
      piVar2[8] = iVar5;
      piVar2[0xd] = (int)(piVar2 + 9);
      piVar2[0xe] = (int)(piVar2 + 9);
      iVar5 = *(int *)(unaff_EBX + 0x2f873);
      piVar2[7] = (int)(piVar2 + 2);
      *piVar2 = iVar5 + 8;
      *(undefined1 *)(piVar2 + 2) = 0;
      *(undefined1 *)(piVar2 + 9) = 0;
      piVar2[0xf] = 0;
      piVar2[0x10] = 0;
      FUN_00080f40(pcVar1);
      __cxa_atexit(*(undefined4 *)(unaff_EBX + 0x2f87b),piVar2,*(undefined4 *)(unaff_EBX + 0x2f877))
      ;
    }
  }
  (**(code **)(*piVar2 + 8))(piVar2,local_20);
  return cVar4;
}

