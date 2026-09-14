/* 000304f8 | std::string::_M_append */

/* std::string::_M_append(char const*, char const*) */

string * __thiscall std::string::_M_append(string *this,char *param_1,char *param_2)

{
  uint uVar1;
  char *pcVar2;
  string *psVar3;
  string *psVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  string *psVar10;
  string *psVar11;
  string *psVar12;
  string *psVar13;
  string *psVar14;
  char *pcVar15;
  char *pcVar16;
  bool bVar17;
  bool bVar18;
  string *local_34;
  string *local_2c [2];
  
  if (param_1 == param_2) {
    return this;
  }
  psVar13 = *(string **)(this + 0x14);
  psVar11 = (string *)(param_2 + -(int)param_1);
  if (psVar13 == this) {
    iVar8 = *(int *)(psVar13 + 0x10);
    psVar4 = psVar13 + (0x10 - iVar8);
  }
  else {
    iVar8 = *(int *)(this + 0x10);
    psVar4 = (string *)(*(int *)this - iVar8);
  }
  if (psVar4 <= psVar11) {
    psVar4 = (string *)(iVar8 - (int)psVar13);
    if ((string *)(-2 - (int)psVar4) < psVar11) {
                    /* WARNING: Subroutine does not return */
      __stl_throw_length_error((char *)(DAT_00030894 + 0x30858));
    }
    psVar3 = psVar4;
    if (psVar4 < psVar11) {
      psVar3 = psVar11;
    }
    psVar3 = psVar4 + 1 + (int)psVar3;
    if ((psVar3 == (string *)0xffffffff) || (psVar3 < psVar4)) {
      local_2c[0] = (string *)0xfffffffe;
LAB_00030808:
      psVar3 = operator_new((uint)local_2c[0]);
      psVar13 = *(string **)(this + 0x14);
      local_34 = psVar3 + (int)local_2c[0];
      psVar4 = (string *)(*(int *)(this + 0x10) - (int)psVar13);
    }
    else if (psVar3 == (string *)0x0) {
      psVar3 = (string *)0x0;
      local_34 = (string *)0x0;
    }
    else {
      local_2c[0] = psVar3;
      if ((string *)0x80 < psVar3) goto LAB_00030808;
      psVar3 = (string *)__node_alloc::_M_allocate((uint *)local_2c);
      psVar13 = *(string **)(this + 0x14);
      local_34 = psVar3 + (int)local_2c[0];
      psVar4 = (string *)(*(int *)(this + 0x10) - (int)psVar13);
    }
    psVar14 = psVar3;
    if (0 < (int)psVar4) {
      bVar18 = psVar3 + 4 <= psVar13;
      bVar17 = psVar13 == psVar3 + 4;
      if (!bVar18 || bVar17) {
        bVar18 = psVar13 + 4 <= psVar3;
        bVar17 = psVar3 == psVar13 + 4;
      }
      uVar6 = (uint)psVar4 >> 2;
      psVar14 = (string *)(uVar6 * 4);
      psVar12 = psVar3;
      psVar10 = psVar4;
      if (uVar6 == 0 ||
          ((psVar4 < (string *)0x4 || (((uint)psVar3 | (uint)psVar13) & 3) != 0) ||
          (!bVar18 || bVar17))) {
LAB_000306fc:
        do {
          psVar10 = psVar10 + -1;
          *psVar12 = *psVar13;
          psVar12 = psVar12 + 1;
          psVar13 = psVar13 + 1;
        } while (0 < (int)psVar10);
      }
      else {
        uVar7 = 0;
        psVar12 = psVar13;
        psVar10 = psVar3;
        do {
          uVar7 = uVar7 + 1;
          *(undefined4 *)psVar10 = *(undefined4 *)psVar12;
          psVar12 = psVar12 + 4;
          psVar10 = psVar10 + 4;
        } while (uVar7 < uVar6);
        psVar12 = psVar3 + (int)psVar14;
        psVar10 = psVar4 + uVar6 * -4;
        psVar13 = psVar13 + (int)psVar14;
        if (psVar4 != psVar14) goto LAB_000306fc;
      }
      psVar14 = psVar3 + (int)psVar4;
    }
    if ((int)psVar11 < 1) goto LAB_000307bc;
    bVar18 = psVar14 + 4 <= param_1;
    bVar17 = (string *)param_1 == psVar14 + 4;
    if (!bVar18 || bVar17) {
      bVar18 = (string *)(param_1 + 4) <= psVar14;
      bVar17 = psVar14 == (string *)(param_1 + 4);
    }
    uVar6 = (uint)psVar11 >> 2;
    psVar13 = (string *)(uVar6 * 4);
    psVar4 = psVar14;
    psVar12 = psVar11;
    if (uVar6 == 0 ||
        ((psVar11 < (string *)0x4 || (((uint)psVar14 | (uint)param_1) & 3) != 0) ||
        (!bVar18 || bVar17))) {
LAB_000307a4:
      do {
        psVar12 = psVar12 + -1;
        *psVar4 = (string)*param_1;
        psVar4 = psVar4 + 1;
        param_1 = (char *)(param_1 + 1);
      } while (0 < (int)psVar12);
    }
    else {
      uVar7 = 0;
      pcVar15 = param_1;
      do {
        uVar7 = uVar7 + 1;
        *(undefined4 *)psVar4 = *(undefined4 *)pcVar15;
        pcVar15 = pcVar15 + 4;
        psVar4 = psVar4 + 4;
      } while (uVar7 < uVar6);
      psVar4 = psVar14 + (int)psVar13;
      param_1 = (char *)(param_1 + (int)psVar13);
      psVar12 = psVar11 + uVar6 * -4;
      if (psVar11 != psVar13) goto LAB_000307a4;
    }
    psVar14 = psVar14 + (int)psVar11;
LAB_000307bc:
    *psVar14 = (string)0x0;
    psVar13 = *(string **)(this + 0x14);
    if ((this != psVar13) && (psVar13 != (string *)0x0)) {
      if ((uint)(*(int *)this - (int)psVar13) < 0x81) {
        __node_alloc::_M_deallocate(psVar13,*(int *)this - (int)psVar13);
        *(string **)(this + 0x10) = psVar14;
        *(string **)(this + 0x14) = psVar3;
        *(string **)this = local_34;
        return this;
      }
      operator_delete(psVar13);
    }
    *(string **)(this + 0x10) = psVar14;
    *(string **)(this + 0x14) = psVar3;
    *(string **)this = local_34;
    return this;
  }
  pcVar15 = param_1 + 1;
  uVar6 = (int)param_2 - (int)pcVar15;
  if ((int)uVar6 < 1) goto LAB_000305f4;
  pcVar5 = (char *)(iVar8 + 1);
  bVar18 = (char *)(iVar8 + 5) <= pcVar15;
  bVar17 = pcVar15 == (char *)(iVar8 + 5);
  if (!bVar18 || bVar17) {
    bVar18 = param_1 + 5 <= pcVar5;
    bVar17 = pcVar5 == param_1 + 5;
  }
  uVar1 = uVar6 >> 2;
  uVar7 = uVar1 * 4;
  if (uVar1 == 0 ||
      ((uVar6 < 4 || (((uint)pcVar5 | (uint)pcVar15) & 3) != 0) || (!bVar18 || bVar17))) {
LAB_000305dc:
    do {
      uVar6 = uVar6 - 1;
      *pcVar5 = *pcVar15;
      pcVar5 = pcVar5 + 1;
      pcVar15 = pcVar15 + 1;
    } while (0 < (int)uVar6);
  }
  else {
    pcVar16 = param_1 + -3;
    uVar9 = 0;
    pcVar2 = pcVar5;
    do {
      pcVar16 = pcVar16 + 4;
      uVar9 = uVar9 + 1;
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar16;
      pcVar2 = pcVar2 + 4;
    } while (uVar9 < uVar1);
    bVar17 = uVar6 != uVar7;
    uVar6 = uVar6 + uVar1 * -4;
    pcVar5 = pcVar5 + uVar7;
    pcVar15 = pcVar15 + uVar7;
    if (bVar17) goto LAB_000305dc;
  }
  iVar8 = *(int *)(this + 0x10);
LAB_000305f4:
  psVar11[iVar8] = (string)0x0;
  **(char **)(this + 0x10) = *param_1;
  *(string **)(this + 0x10) = psVar11 + *(int *)(this + 0x10);
  return this;
}

