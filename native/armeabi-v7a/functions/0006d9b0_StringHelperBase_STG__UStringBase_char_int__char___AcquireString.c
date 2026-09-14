/* 0006d9b0 | StringHelperBase<STG::UStringBase<char,int>,char>::AcquireString */

/* StringHelperBase<STG::UStringBase<char, int>, char>::AcquireString(int) */

void StringHelperBase<STG::UStringBase<char,int>,char>::AcquireString(int param_1)

{
  string *psVar1;
  int *piVar2;
  char *__s;
  size_t sVar3;
  uint uVar4;
  void *pvVar5;
  string *psVar6;
  int iVar7;
  undefined1 *puVar8;
  int *piVar9;
  int iVar10;
  size_t __n;
  uint local_4c;
  int local_48;
  string *local_44 [4];
  string *local_34;
  string *local_30;
  int local_2c;
  
  iVar10 = DAT_0006db94;
  piVar2 = *(int **)param_1;
  piVar9 = *(int **)(DAT_0006db90 + 0x6d9cc);
  local_2c = *piVar9;
  if ((piVar2 != (int *)0x0) && (*(int *)(param_1 + 4) != 0)) {
    __s = (char *)(**(code **)(*piVar2 + 0x2a4))(piVar2,*(int *)(param_1 + 4),0);
    iVar10 = *(int *)(iVar10 + 0x6da04);
    local_48 = iVar10 + 8;
    *(char **)(param_1 + 8) = __s;
    local_34 = (string *)local_44;
    local_30 = (string *)local_44;
    sVar3 = strlen(__s);
    __n = (int)(__s + sVar3) - (int)__s;
    uVar4 = __n + 1;
    if (uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      std::__stl_throw_length_error((char *)(DAT_0006db98 + 0x6db30));
    }
    psVar6 = (string *)local_44;
    if (0x10 < uVar4) {
      local_4c = uVar4;
      if (uVar4 < 0x81) {
        local_34 = (string *)std::__node_alloc::_M_allocate(&local_4c);
      }
      else {
        local_34 = operator_new(uVar4);
      }
      local_44[0] = local_34 + local_4c;
      psVar6 = local_34;
      local_30 = local_34;
    }
    if (__s != __s + sVar3) {
      pvVar5 = memcpy(psVar6,__s,__n);
      psVar6 = (string *)((int)pvVar5 + __n);
    }
    local_34 = psVar6;
    *psVar6 = (string)0x0;
    psVar1 = local_30;
    psVar6 = local_34;
    if ((string *)(param_1 + 0x10) != (string *)local_44) {
      puVar8 = *(undefined1 **)(param_1 + 0x20);
      pvVar5 = *(void **)(param_1 + 0x24);
      uVar4 = (int)local_34 - (int)local_30;
      sVar3 = (int)puVar8 - (int)pvVar5;
      if (sVar3 < uVar4) {
        iVar7 = 0;
        if (sVar3 != 0) {
          memmove(pvVar5,local_30,sVar3);
          iVar7 = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x24);
        }
        std::string::_M_append((string *)(param_1 + 0x10),(char *)(psVar1 + iVar7),(char *)psVar6);
      }
      else {
        if (uVar4 != 0) {
          memmove(pvVar5,local_30,uVar4);
          pvVar5 = *(void **)(param_1 + 0x24);
          puVar8 = *(undefined1 **)(param_1 + 0x20);
        }
        if ((undefined1 *)((int)pvVar5 + uVar4) != puVar8) {
          *(undefined1 *)((int)pvVar5 + uVar4) = *puVar8;
          *(undefined1 **)(param_1 + 0x20) =
               (undefined1 *)((int)pvVar5 + uVar4) + (*(int *)(param_1 + 0x20) - (int)puVar8);
        }
      }
    }
    local_48 = iVar10 + 8;
    if ((local_30 != (string *)local_44) && (local_30 != (string *)0x0)) {
      if ((uint)((int)local_44[0] - (int)local_30) < 0x81) {
        std::__node_alloc::_M_deallocate(local_30,(int)local_44[0] - (int)local_30);
      }
      else {
        operator_delete(local_30);
      }
    }
  }
  if (local_2c == *piVar9) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

