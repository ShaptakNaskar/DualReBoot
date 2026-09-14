/* 0007d9e0 | StringHelperBase<STG::UStringBase<char,int>,char>::AcquireString */

/* StringHelperBase<STG::UStringBase<char, int>, char>::AcquireString(int) */

void StringHelperBase<STG::UStringBase<char,int>,char>::AcquireString(int param_1)

{
  int *piVar1;
  string *psVar2;
  char *__s;
  size_t sVar3;
  string *psVar4;
  void *pvVar5;
  undefined1 *puVar6;
  int iVar7;
  uint uVar8;
  size_t __n;
  uint __n_00;
  undefined1 *puVar9;
  int unaff_EBX;
  uint local_40 [4];
  int local_30;
  string *local_2c [4];
  string *local_1c;
  string *local_18;
  int local_14;
  
  local_14 = 0x7d9eb;
  FUN_0002e044();
  local_14 = **(int **)(
                       "_ZN3STG9GETexture13CompositeTextEPKNS_6GEFontERKNS_11UStringBaseIttEERKNS_13GEPixelFormat7EFormatEmmPKhRPh"
                       + unaff_EBX + 99);
  piVar1 = *(int **)param_1;
  if ((piVar1 != (int *)0x0) && (*(int *)(param_1 + 4) != 0)) {
    __s = (char *)(**(code **)(*piVar1 + 0x2a4))(piVar1,*(int *)(param_1 + 4),0);
    local_30 = *(int *)(
                       "_ZN3STG9GETexture13CompositeTextEPKNS_6GEFontERKNS_11UStringBaseIttEERKNS_13GEPixelFormat7EFormatEmmPKhRPh"
                       + unaff_EBX + 0x67);
    *(char **)(param_1 + 8) = __s;
    local_30 = local_30 + 8;
    local_1c = (string *)local_2c;
    local_18 = (string *)local_2c;
    sVar3 = strlen(__s);
    __n = (int)(__s + sVar3) - (int)__s;
    uVar8 = __n + 1;
    if (uVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      std::__stl_throw_length_error((char *)(unaff_EBX + 0x9921));
    }
    psVar4 = (string *)local_2c;
    if (0x10 < uVar8) {
      local_40[0] = uVar8;
      if (uVar8 < 0x81) {
        psVar4 = (string *)std::__node_alloc::_M_allocate(local_40);
      }
      else {
        psVar4 = operator_new(uVar8);
      }
      local_2c[0] = psVar4 + local_40[0];
      local_1c = psVar4;
      local_18 = psVar4;
    }
    if (__s != __s + sVar3) {
      pvVar5 = memcpy(psVar4,__s,__n);
      psVar4 = (string *)((int)pvVar5 + __n);
    }
    local_1c = psVar4;
    *psVar4 = (string)0x0;
    psVar2 = local_18;
    psVar4 = local_1c;
    if ((string *)(param_1 + 0x10) != (string *)local_2c) {
      puVar6 = *(undefined1 **)(param_1 + 0x20);
      __n_00 = (int)local_1c - (int)local_18;
      pvVar5 = *(void **)(param_1 + 0x24);
      uVar8 = (int)puVar6 - (int)pvVar5;
      if (uVar8 < __n_00) {
        iVar7 = 0;
        if (uVar8 != 0) {
          memmove(pvVar5,local_18,uVar8);
          iVar7 = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x24);
        }
        std::string::_M_append((string *)(param_1 + 0x10),(char *)(psVar2 + iVar7),(char *)psVar4);
      }
      else {
        if (__n_00 != 0) {
          memmove(pvVar5,local_18,__n_00);
          puVar6 = *(undefined1 **)(param_1 + 0x20);
          pvVar5 = *(void **)(param_1 + 0x24);
        }
        puVar9 = (undefined1 *)((int)pvVar5 + __n_00);
        if (puVar9 != puVar6) {
          *puVar9 = *puVar6;
          *(int *)(param_1 + 0x20) = (int)(puVar9 + (*(int *)(param_1 + 0x20) - (int)puVar6));
        }
      }
    }
    local_30 = *(int *)(
                       "_ZN3STG9GETexture13CompositeTextEPKNS_6GEFontERKNS_11UStringBaseIttEERKNS_13GEPixelFormat7EFormatEmmPKhRPh"
                       + unaff_EBX + 0x67) + 8;
    if ((local_18 != (string *)local_2c) && (local_18 != (string *)0x0)) {
      if ((uint)((int)local_2c[0] - (int)local_18) < 0x81) {
        std::__node_alloc::_M_deallocate(local_18,(int)local_2c[0] - (int)local_18);
      }
      else {
        operator_delete(local_18);
      }
    }
  }
  if (local_14 ==
      **(int **)(
                "_ZN3STG9GETexture13CompositeTextEPKNS_6GEFontERKNS_11UStringBaseIttEERKNS_13GEPixelFormat7EFormatEmmPKhRPh"
                + unaff_EBX + 99)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002e000();
}

