/* 00030160 | STG::UStringBase<char,int>::Find_FromEnd */

/* STG::UStringBase<char, int>::Find_FromEnd(STG::UStringBase<char, int> const&,
   STG::UStringBase<char, int>&, STG::UStringBase<char, int>&) const */

undefined4 __thiscall
STG::UStringBase<char,int>::Find_FromEnd
          (UStringBase<char,int> *this,UStringBase *param_1,UStringBase *param_2,
          UStringBase *param_3)

{
  char *pcVar1;
  char cVar2;
  char *__s;
  char *__src;
  char *pcVar3;
  char *pcVar4;
  string *psVar5;
  string *psVar6;
  size_t sVar7;
  uint uVar8;
  undefined4 uVar9;
  char *pcVar10;
  void *pvVar11;
  undefined1 *puVar12;
  int iVar13;
  int iVar14;
  char *pcVar15;
  uint uVar16;
  char *pcVar17;
  uint uVar18;
  undefined1 *puVar19;
  int unaff_EBX;
  void *__src_00;
  bool bVar20;
  char *local_68;
  uint local_60 [4];
  string *local_50 [4];
  string *local_40;
  string *local_3c;
  string *local_30 [4];
  string *local_20;
  string *local_1c;
  int local_14;
  
  local_14 = 0x3016b;
  FUN_0002e044();
  __s = *(char **)(param_1 + 0x18);
  local_14 = **(int **)(unaff_EBX + 0x6bccd);
  sVar7 = strlen(__s);
  __src = *(char **)(this + 0x18);
  uVar8 = *(int *)(this + 0x14) - (int)__src;
  if (sVar7 <= uVar8) {
    pcVar1 = __src + uVar8;
    pcVar15 = pcVar1;
    if (sVar7 != 0) {
      pcVar15 = __src;
      if (__src != pcVar1) {
        pcVar17 = __s + sVar7;
        pcVar10 = pcVar1;
        if (__s != pcVar17) {
          if (__s != pcVar17 + -1) {
            local_68 = pcVar1 + -1;
            do {
              for (; pcVar10 = local_68 + 1, pcVar3 = pcVar17 + -1, pcVar4 = local_68,
                  *local_68 == pcVar17[-1]; local_68 = local_68 + -1) {
                while( true ) {
                  pcVar15 = pcVar1;
                  if (__src == pcVar4) goto LAB_00030290;
                  if (pcVar4[-1] != pcVar3[-1]) break;
                  if (__s == pcVar3 + -1) goto LAB_00030739;
                  pcVar3 = pcVar3 + -1;
                  pcVar4 = pcVar4 + -1;
                }
              }
              bVar20 = __src != local_68;
              pcVar15 = pcVar1;
              local_68 = local_68 + -1;
            } while (bVar20);
            goto LAB_00030290;
          }
          cVar2 = pcVar1[-1];
          while (cVar2 != pcVar17[-1]) {
            pcVar15 = pcVar1;
            if (__src == pcVar10 + -1) goto LAB_00030290;
            cVar2 = pcVar10[-2];
            pcVar10 = pcVar10 + -1;
          }
        }
LAB_00030739:
        pcVar15 = pcVar10 + ((int)__s - (int)pcVar17);
      }
LAB_00030290:
      if (pcVar1 == pcVar15) goto LAB_000301c3;
    }
    uVar16 = (int)pcVar15 - (int)__src;
    if (uVar16 != 0xffffffff) {
      if (uVar16 <= uVar8) {
        uVar8 = uVar16;
      }
      sVar7 = (int)(__src + uVar8) - (int)__src;
      iVar14 = *(int *)(param_1 + 0x14);
      uVar18 = sVar7 + 1;
      local_40 = (string *)local_50;
      local_3c = (string *)local_50;
      if (uVar18 == 0) {
LAB_00030538:
                    /* WARNING: Subroutine does not return */
        std::__stl_throw_length_error((char *)(unaff_EBX + 0x571a1));
      }
      if (0x10 < uVar18) {
        local_60[0] = uVar18;
        if (uVar18 < 0x81) {
          local_40 = (string *)std::__node_alloc::_M_allocate(local_60);
        }
        else {
          local_40 = operator_new(uVar18);
        }
        local_50[0] = local_40 + local_60[0];
      }
      local_3c = local_40;
      if (__src != __src + uVar8) {
        pvVar11 = memcpy(local_40,__src,sVar7);
        local_40 = (string *)((int)pvVar11 + sVar7);
      }
      *local_40 = (string)0x0;
      psVar6 = local_3c;
      psVar5 = local_40;
      if ((string *)(param_2 + 4) != (string *)local_50) {
        puVar12 = *(undefined1 **)(param_2 + 0x14);
        uVar8 = (int)local_40 - (int)local_3c;
        pvVar11 = *(void **)(param_2 + 0x18);
        uVar18 = (int)puVar12 - (int)pvVar11;
        if (uVar18 < uVar8) {
          iVar13 = 0;
          if (uVar18 != 0) {
            memmove(pvVar11,local_3c,uVar18);
            iVar13 = *(int *)(param_2 + 0x14) - *(int *)(param_2 + 0x18);
          }
          std::string::_M_append((string *)(param_2 + 4),(char *)(psVar6 + iVar13),(char *)psVar5);
        }
        else {
          if (uVar8 != 0) {
            memmove(pvVar11,local_3c,uVar8);
            puVar12 = *(undefined1 **)(param_2 + 0x14);
            pvVar11 = *(void **)(param_2 + 0x18);
          }
          puVar19 = (undefined1 *)((int)pvVar11 + uVar8);
          if (puVar19 != puVar12) {
            *puVar19 = *puVar12;
            *(undefined1 **)(param_2 + 0x14) = puVar19 + (*(int *)(param_2 + 0x14) - (int)puVar12);
          }
        }
      }
      if ((local_3c != (string *)local_50) && (local_3c != (string *)0x0)) {
        if ((uint)((int)local_50[0] - (int)local_3c) < 0x81) {
          std::__node_alloc::_M_deallocate(local_3c,(int)local_50[0] - (int)local_3c);
        }
        else {
          operator_delete(local_3c);
        }
      }
      uVar16 = (iVar14 - (int)__s) + uVar16;
      iVar14 = *(int *)(this + 0x18);
      local_20 = (string *)local_30;
      local_1c = (string *)local_30;
      if ((uint)(*(int *)(this + 0x14) - iVar14) < uVar16) {
                    /* WARNING: Subroutine does not return */
        std::__stl_throw_out_of_range((char *)(unaff_EBX + 0x571a1));
      }
      pvVar11 = (void *)((*(int *)(this + 0x14) - iVar14) + iVar14);
      __src_00 = (void *)(uVar16 + iVar14);
      sVar7 = (int)pvVar11 - (int)__src_00;
      uVar8 = sVar7 + 1;
      if (uVar8 == 0) goto LAB_00030538;
      if (0x10 < uVar8) {
        local_60[0] = uVar8;
        if (uVar8 < 0x81) {
          local_20 = (string *)std::__node_alloc::_M_allocate(local_60);
        }
        else {
          local_20 = operator_new(uVar8);
        }
        local_30[0] = local_20 + local_60[0];
      }
      local_1c = local_20;
      if (pvVar11 != __src_00) {
        pvVar11 = memcpy(local_20,__src_00,sVar7);
        local_20 = (string *)((int)pvVar11 + sVar7);
      }
      *local_20 = (string)0x0;
      psVar6 = local_1c;
      psVar5 = local_20;
      if ((string *)(param_3 + 4) != (string *)local_30) {
        uVar16 = (int)local_20 - (int)local_1c;
        puVar12 = *(undefined1 **)(param_3 + 0x14);
        pvVar11 = *(void **)(param_3 + 0x18);
        uVar8 = (int)puVar12 - (int)pvVar11;
        if (uVar8 < uVar16) {
          iVar14 = 0;
          if (uVar8 != 0) {
            memmove(pvVar11,local_1c,uVar8);
            iVar14 = *(int *)(param_3 + 0x14) - *(int *)(param_3 + 0x18);
          }
          std::string::_M_append((string *)(param_3 + 4),(char *)(psVar6 + iVar14),(char *)psVar5);
        }
        else {
          if (uVar16 != 0) {
            memmove(pvVar11,local_1c,uVar16);
            puVar12 = *(undefined1 **)(param_3 + 0x14);
            pvVar11 = *(void **)(param_3 + 0x18);
          }
          puVar19 = (undefined1 *)(uVar16 + (int)pvVar11);
          if (puVar12 != puVar19) {
            *puVar19 = *puVar12;
            *(undefined1 **)(param_3 + 0x14) = puVar19 + (*(int *)(param_3 + 0x14) - (int)puVar12);
          }
        }
      }
      uVar9 = 1;
      if ((local_1c != (string *)local_30) && (local_1c != (string *)0x0)) {
        if ((uint)((int)local_30[0] - (int)local_1c) < 0x81) {
          std::__node_alloc::_M_deallocate(local_1c,(int)local_30[0] - (int)local_1c);
          uVar9 = 1;
        }
        else {
          operator_delete(local_1c);
          uVar9 = 1;
        }
      }
      goto LAB_000301eb;
    }
  }
LAB_000301c3:
  if (*(undefined1 **)(param_2 + 0x18) != *(undefined1 **)(param_2 + 0x14)) {
    **(undefined1 **)(param_2 + 0x18) = 0;
    *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(param_2 + 0x18);
  }
  uVar9 = 0;
  if (*(undefined1 **)(param_3 + 0x18) != *(undefined1 **)(param_3 + 0x14)) {
    **(undefined1 **)(param_3 + 0x18) = 0;
    *(undefined4 *)(param_3 + 0x14) = *(undefined4 *)(param_3 + 0x18);
  }
LAB_000301eb:
  if (local_14 == **(int **)(unaff_EBX + 0x6bccd)) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002e000();
}

