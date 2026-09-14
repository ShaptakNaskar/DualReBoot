/* 0002f9d0 | std::string::_M_append */

/* std::string::_M_append(char const*, char const*) */

string * __thiscall std::string::_M_append(string *this,char *param_1,char *param_2)

{
  char *pcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  string *psVar9;
  char *pcVar10;
  string *psVar11;
  string *psVar12;
  string *psVar13;
  string *psVar14;
  uint uVar15;
  uint uVar16;
  string *psVar17;
  int unaff_EBX;
  char *pcVar18;
  string *local_34;
  string *local_24;
  string *local_20 [3];
  undefined4 uStack_14;
  
  uStack_14 = 0x2f9db;
  FUN_0002e044();
  if (param_1 == param_2) {
    return this;
  }
  psVar13 = (string *)(param_2 + -(int)param_1);
  psVar9 = *(string **)(this + 0x14);
  if (psVar9 == this) {
    local_24 = *(string **)(psVar9 + 0x10);
    psVar14 = psVar9 + (0x10 - (int)local_24);
  }
  else {
    local_24 = *(string **)(this + 0x10);
    psVar14 = (string *)(*(int *)this - (int)local_24);
  }
  if (psVar13 < psVar14) {
    pcVar10 = param_1 + 1;
    uVar15 = (int)param_2 - (int)pcVar10;
    if ((int)uVar15 < 1) goto LAB_0002fafc;
    uVar6 = uVar15 >> 4;
    pcVar18 = (char *)((int)local_24 + 1);
    uVar7 = uVar6 * 0x10;
    uVar16 = uVar15;
    if ((uVar6 == 0) ||
       (uVar15 < 0x10 || pcVar18 <= param_1 + 0x11 && pcVar10 <= (char *)((int)local_24 + 0x11))) {
LAB_0002fae0:
      do {
        uVar16 = uVar16 - 1;
        *pcVar18 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar18 = pcVar18 + 1;
      } while (0 < (int)uVar16);
    }
    else {
      iVar8 = 0;
      uVar16 = 0;
      do {
        pcVar1 = param_1 + iVar8 + 1;
        uVar3 = *(undefined4 *)(pcVar1 + 4);
        uVar4 = *(undefined4 *)(pcVar1 + 8);
        uVar5 = *(undefined4 *)(pcVar1 + 0xc);
        uVar16 = uVar16 + 1;
        puVar2 = (undefined4 *)((int)local_24 + 1 + iVar8);
        *puVar2 = *(undefined4 *)pcVar1;
        puVar2[1] = uVar3;
        puVar2[2] = uVar4;
        puVar2[3] = uVar5;
        iVar8 = iVar8 + 0x10;
      } while (uVar16 < uVar6);
      pcVar10 = pcVar10 + uVar7;
      pcVar18 = pcVar18 + uVar7;
      uVar16 = uVar15 + uVar6 * -0x10;
      if (uVar15 != uVar7) goto LAB_0002fae0;
    }
    local_24 = *(string **)(this + 0x10);
LAB_0002fafc:
    psVar13[(int)local_24] = (string)0x0;
    **(char **)(this + 0x10) = *param_1;
    *(string **)(this + 0x10) = psVar13 + *(int *)(this + 0x10);
    return this;
  }
  psVar14 = (string *)((int)local_24 - (int)psVar9);
  if ((string *)(-2 - (int)psVar14) < psVar13) {
                    /* WARNING: Subroutine does not return */
    __stl_throw_length_error((char *)(unaff_EBX + 0x57931));
  }
  psVar17 = psVar13;
  if (psVar13 <= psVar14) {
    psVar17 = psVar14;
  }
  psVar17 = psVar14 + 1 + (int)psVar17;
  if ((psVar17 == (string *)0xffffffff) || (psVar17 < psVar14)) {
    local_20[0] = (string *)0xfffffffe;
LAB_0002fd2d:
    local_24 = operator_new((uint)local_20[0]);
LAB_0002fd3b:
    local_34 = local_24 + (int)local_20[0];
    psVar9 = *(string **)(this + 0x14);
    psVar14 = (string *)(*(int *)(this + 0x10) - (int)psVar9);
  }
  else {
    if (psVar17 != (string *)0x0) {
      local_20[0] = psVar17;
      if ((string *)0x80 < psVar17) goto LAB_0002fd2d;
      local_24 = (string *)__node_alloc::_M_allocate((uint *)local_20);
      goto LAB_0002fd3b;
    }
    local_34 = (string *)0x0;
    local_24 = (string *)0x0;
  }
  psVar17 = local_24;
  if (0 < (int)psVar14) {
    uVar15 = (uint)psVar14 >> 4;
    psVar11 = (string *)(uVar15 * 0x10);
    psVar17 = psVar14;
    psVar12 = local_24;
    if ((uVar15 == 0) ||
       (psVar14 < (string *)0x10 || local_24 <= psVar9 + 0x10 && psVar9 <= local_24 + 0x10)) {
LAB_0002fc20:
      do {
        psVar17 = psVar17 + -1;
        *psVar12 = *psVar9;
        psVar9 = psVar9 + 1;
        psVar12 = psVar12 + 1;
      } while (0 < (int)psVar17);
    }
    else {
      iVar8 = 0;
      uVar16 = 0;
      do {
        psVar17 = psVar9 + iVar8;
        uVar3 = *(undefined4 *)(psVar17 + 4);
        uVar4 = *(undefined4 *)(psVar17 + 8);
        uVar5 = *(undefined4 *)(psVar17 + 0xc);
        uVar16 = uVar16 + 1;
        psVar12 = local_24 + iVar8;
        *(undefined4 *)psVar12 = *(undefined4 *)psVar17;
        *(undefined4 *)(psVar12 + 4) = uVar3;
        *(undefined4 *)(psVar12 + 8) = uVar4;
        *(undefined4 *)(psVar12 + 0xc) = uVar5;
        iVar8 = iVar8 + 0x10;
      } while (uVar16 < uVar15);
      psVar9 = psVar9 + (int)psVar11;
      psVar17 = psVar14 + uVar15 * -0x10;
      psVar12 = local_24 + (int)psVar11;
      if (psVar14 != psVar11) goto LAB_0002fc20;
    }
    psVar17 = local_24 + (int)psVar14;
  }
  if ((int)psVar13 < 1) goto LAB_0002fcd6;
  uVar15 = (uint)psVar13 >> 4;
  psVar12 = (string *)(uVar15 * 0x10);
  psVar14 = psVar17;
  psVar9 = psVar13;
  if ((uVar15 == 0) ||
     (psVar13 < (string *)0x10 || psVar17 <= (string *)(param_1 + 0x10) && param_1 <= psVar17 + 0x10
     )) {
LAB_0002fcc0:
    do {
      psVar9 = psVar9 + -1;
      *psVar14 = (string)*param_1;
      param_1 = param_1 + 1;
      psVar14 = psVar14 + 1;
    } while (0 < (int)psVar9);
  }
  else {
    iVar8 = 0;
    uVar16 = 0;
    do {
      pcVar10 = param_1 + iVar8;
      uVar3 = *(undefined4 *)(pcVar10 + 4);
      uVar4 = *(undefined4 *)(pcVar10 + 8);
      uVar5 = *(undefined4 *)(pcVar10 + 0xc);
      uVar16 = uVar16 + 1;
      psVar9 = psVar17 + iVar8;
      *(undefined4 *)psVar9 = *(undefined4 *)pcVar10;
      *(undefined4 *)(psVar9 + 4) = uVar3;
      *(undefined4 *)(psVar9 + 8) = uVar4;
      *(undefined4 *)(psVar9 + 0xc) = uVar5;
      iVar8 = iVar8 + 0x10;
    } while (uVar16 < uVar15);
    param_1 = param_1 + (int)psVar12;
    psVar14 = psVar17 + (int)psVar12;
    psVar9 = psVar13 + uVar15 * -0x10;
    if (psVar13 != psVar12) goto LAB_0002fcc0;
  }
  psVar17 = psVar17 + (int)psVar13;
LAB_0002fcd6:
  *psVar17 = (string)0x0;
  psVar9 = *(string **)(this + 0x14);
  if ((this != psVar9) && (psVar9 != (string *)0x0)) {
    if ((uint)(*(int *)this - (int)psVar9) < 0x81) {
      __node_alloc::_M_deallocate(psVar9,*(int *)this - (int)psVar9);
    }
    else {
      operator_delete(psVar9);
    }
  }
  *(string **)this = local_34;
  *(string **)(this + 0x10) = psVar17;
  *(string **)(this + 0x14) = local_24;
  return this;
}

