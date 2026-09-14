/* 00030348 | STG::UStringBase<char,int>::Find_FromEnd */

/* WARNING: Removing unreachable block (ram,0x00030604) */
/* STG::UStringBase<char, int>::Find_FromEnd(STG::UStringBase<char, int> const&,
   STG::UStringBase<char, int>&, STG::UStringBase<char, int>&) const */

void __thiscall
STG::UStringBase<char,int>::Find_FromEnd
          (UStringBase<char,int> *this,UStringBase *param_1,UStringBase *param_2,
          UStringBase *param_3)

{
  uint uVar1;
  string *psVar2;
  string *psVar3;
  size_t sVar4;
  undefined4 uVar5;
  char *pcVar6;
  void *pvVar7;
  char *__src;
  undefined1 *puVar8;
  char *pcVar9;
  uint uVar10;
  char *pcVar11;
  uint uVar12;
  int iVar13;
  char *pcVar14;
  int *piVar15;
  char *__s;
  int iVar16;
  void *pvVar17;
  char *pcVar18;
  bool bVar19;
  char *local_80;
  char *local_7c;
  uint local_60;
  string *local_5c [4];
  string *local_4c;
  string *local_48;
  string *local_44 [4];
  string *local_34;
  string *local_30;
  int local_2c;
  
  __s = *(char **)(param_1 + 0x18);
  piVar15 = *(int **)(DAT_000308d0 + 0x30368);
  local_2c = *piVar15;
  sVar4 = strlen(__s);
  __src = *(char **)(this + 0x18);
  uVar12 = *(int *)(this + 0x14) - (int)__src;
  if (sVar4 <= uVar12) {
    pcVar18 = __src + uVar12;
    if (sVar4 == 0) {
      uVar10 = (int)pcVar18 - (int)__src;
    }
    else {
      pcVar9 = __src;
      if (__src != pcVar18) {
        pcVar6 = __s + sVar4;
        local_80 = pcVar18;
        if (__s != pcVar6) {
          pcVar9 = pcVar18;
          if (__s != pcVar6 + -1) {
            local_7c = pcVar18 + -1;
            do {
              for (; local_80[-1] == pcVar6[-1]; local_80 = local_80 + -1) {
                if (__src == local_7c) goto LAB_00030488;
                pcVar11 = pcVar6 + -1;
                pcVar14 = local_7c;
                while (pcVar11 = pcVar11 + -1, pcVar14[-1] == *pcVar11) {
                  if (pcVar14 == __s + (1 - (int)pcVar6) + (int)local_80) goto LAB_0003086c;
                  pcVar14 = pcVar14 + -1;
                  if (__src == pcVar14) goto LAB_00030488;
                }
                local_7c = local_7c + -1;
              }
              bVar19 = __src != local_7c;
              local_7c = local_7c + -1;
              local_80 = local_80 + -1;
            } while (bVar19);
            goto LAB_00030488;
          }
          if (pcVar18[-1] != pcVar6[-1]) {
            pcVar11 = pcVar18 + -1;
            do {
              local_80 = local_80 + -1;
              if (__src == local_80) goto LAB_00030488;
              pcVar11 = pcVar11 + -1;
            } while (*pcVar11 != pcVar6[-1]);
          }
        }
LAB_0003086c:
        pcVar9 = local_80 + ((int)__s - (int)pcVar6);
      }
LAB_00030488:
      if (pcVar18 == pcVar9) goto LAB_00030390;
      uVar10 = (int)pcVar9 - (int)__src;
    }
    if (uVar10 != 0xffffffff) {
      uVar1 = uVar10;
      if (uVar12 < uVar10) {
        uVar1 = uVar12;
      }
      iVar16 = *(int *)(param_1 + 0x14);
      sVar4 = (int)(__src + uVar1) - (int)__src;
      uVar12 = sVar4 + 1;
      local_4c = (string *)local_5c;
      local_48 = (string *)local_5c;
      if (uVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__stl_throw_length_error((char *)(DAT_000308d4 + 0x30718));
      }
      if (0x10 < uVar12) {
        local_60 = uVar12;
        if (uVar12 < 0x81) {
          local_4c = (string *)std::__node_alloc::_M_allocate(&local_60);
        }
        else {
          local_4c = operator_new(uVar12);
        }
        local_5c[0] = local_4c + local_60;
      }
      local_48 = local_4c;
      if (__src != __src + uVar1) {
        pvVar7 = memcpy(local_4c,__src,sVar4);
        local_4c = (string *)((int)pvVar7 + sVar4);
      }
      *local_4c = (string)0x0;
      psVar3 = local_48;
      psVar2 = local_4c;
      if ((string *)(param_2 + 4) != (string *)local_5c) {
        puVar8 = *(undefined1 **)(param_2 + 0x14);
        pvVar7 = *(void **)(param_2 + 0x18);
        uVar12 = (int)local_4c - (int)local_48;
        sVar4 = (int)puVar8 - (int)pvVar7;
        if (sVar4 < uVar12) {
          iVar13 = 0;
          if (sVar4 != 0) {
            memmove(pvVar7,local_48,sVar4);
            iVar13 = *(int *)(param_2 + 0x14) - *(int *)(param_2 + 0x18);
          }
          std::string::_M_append((string *)(param_2 + 4),(char *)(psVar3 + iVar13),(char *)psVar2);
        }
        else {
          if (uVar12 != 0) {
            memmove(pvVar7,local_48,uVar12);
            pvVar7 = *(void **)(param_2 + 0x18);
            puVar8 = *(undefined1 **)(param_2 + 0x14);
          }
          if ((undefined1 *)((int)pvVar7 + uVar12) != puVar8) {
            *(undefined1 *)((int)pvVar7 + uVar12) = *puVar8;
            *(undefined1 **)(param_2 + 0x14) =
                 (undefined1 *)((int)pvVar7 + uVar12) + (*(int *)(param_2 + 0x14) - (int)puVar8);
          }
        }
      }
      if ((local_48 != (string *)local_5c) && (local_48 != (string *)0x0)) {
        if ((uint)((int)local_5c[0] - (int)local_48) < 0x81) {
          std::__node_alloc::_M_deallocate(local_48,(int)local_5c[0] - (int)local_48);
        }
        else {
          operator_delete(local_48);
        }
      }
      iVar13 = *(int *)(this + 0x18);
      uVar10 = uVar10 + (iVar16 - (int)__s);
      local_34 = (string *)local_44;
      local_30 = (string *)local_44;
      if ((uint)(*(int *)(this + 0x14) - iVar13) < uVar10) {
                    /* WARNING: Subroutine does not return */
        std::__stl_throw_out_of_range((char *)(DAT_000308dc + 0x308c4));
      }
      pvVar7 = (void *)(iVar13 + uVar10);
      pvVar17 = (void *)(iVar13 + (*(int *)(this + 0x14) - iVar13));
      sVar4 = (int)pvVar17 - (int)pvVar7;
      uVar12 = sVar4 + 1;
      if (uVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__stl_throw_length_error((char *)(DAT_000308d8 + 0x30724));
      }
      if (0x10 < uVar12) {
        local_60 = uVar12;
        if (uVar12 < 0x81) {
          local_34 = (string *)std::__node_alloc::_M_allocate(&local_60);
        }
        else {
          local_34 = operator_new(uVar12);
        }
        local_44[0] = local_34 + local_60;
      }
      local_30 = local_34;
      if (pvVar7 != pvVar17) {
        pvVar7 = memcpy(local_34,pvVar7,sVar4);
        local_34 = (string *)((int)pvVar7 + sVar4);
      }
      *local_34 = (string)0x0;
      psVar3 = local_30;
      psVar2 = local_34;
      if ((string *)(param_3 + 4) != (string *)local_44) {
        puVar8 = *(undefined1 **)(param_3 + 0x14);
        pvVar7 = *(void **)(param_3 + 0x18);
        uVar12 = (int)local_34 - (int)local_30;
        sVar4 = (int)puVar8 - (int)pvVar7;
        if (sVar4 < uVar12) {
          iVar16 = 0;
          if (sVar4 != 0) {
            memmove(pvVar7,local_30,sVar4);
            iVar16 = *(int *)(param_3 + 0x14) - *(int *)(param_3 + 0x18);
          }
          std::string::_M_append((string *)(param_3 + 4),(char *)(psVar3 + iVar16),(char *)psVar2);
        }
        else {
          if (uVar12 != 0) {
            memmove(pvVar7,local_30,uVar12);
            pvVar7 = *(void **)(param_3 + 0x18);
            puVar8 = *(undefined1 **)(param_3 + 0x14);
          }
          if (puVar8 != (undefined1 *)((int)pvVar7 + uVar12)) {
            *(undefined1 *)((int)pvVar7 + uVar12) = *puVar8;
            *(undefined1 **)(param_3 + 0x14) =
                 (undefined1 *)((int)pvVar7 + uVar12) + (*(int *)(param_3 + 0x14) - (int)puVar8);
          }
        }
      }
      if ((local_30 == (string *)local_44) || (local_30 == (string *)0x0)) {
        uVar5 = 1;
      }
      else if ((uint)((int)local_44[0] - (int)local_30) < 0x81) {
        std::__node_alloc::_M_deallocate(local_30,(int)local_44[0] - (int)local_30);
        uVar5 = 1;
      }
      else {
        operator_delete(local_30);
        uVar5 = 1;
      }
      goto LAB_000303c8;
    }
  }
LAB_00030390:
  uVar5 = 0;
  if (*(undefined1 **)(param_2 + 0x18) != *(undefined1 **)(param_2 + 0x14)) {
    **(undefined1 **)(param_2 + 0x18) = 0;
    *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(param_2 + 0x18);
  }
  if (*(undefined1 **)(param_3 + 0x18) != *(undefined1 **)(param_3 + 0x14)) {
    **(undefined1 **)(param_3 + 0x18) = 0;
    *(undefined4 *)(param_3 + 0x14) = *(undefined4 *)(param_3 + 0x18);
  }
LAB_000303c8:
  if (local_2c == *piVar15) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

