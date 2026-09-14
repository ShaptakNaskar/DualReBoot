/* 00072c40 | __aeabi_unwind_cpp_pr0 */

/* WARNING: Removing unreachable block (ram,0x000728ec) */
/* WARNING: Removing unreachable block (ram,0x00072938) */

undefined4 __aeabi_unwind_cpp_pr0(uint param_1,int param_2,undefined4 param_3)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  undefined4 uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  bool bVar14;
  int iStack_38;
  int iStack_34;
  uint *puStack_30;
  undefined1 uStack_2c;
  undefined1 uStack_2b;
  
  uVar9 = param_1 & 3;
  puStack_30 = (uint *)(*(int **)(param_2 + 0x4c) + 1);
  iStack_34 = **(int **)(param_2 + 0x4c) << 8;
  uStack_2b = 0;
  uStack_2c = 3;
  puVar7 = puStack_30;
  if (uVar9 == 2) {
    puVar7 = *(uint **)(param_2 + 0x38);
  }
  if ((*(uint *)(param_2 + 0x50) & 1) == 0) {
    iVar5 = param_2 + 0x58;
    bVar10 = false;
LAB_00072bbc:
    do {
      while( true ) {
        if (*puVar7 == 0) goto LAB_00072bc8;
        puVar4 = puVar7 + 1;
        uVar1 = *(ushort *)((int)puVar7 + 2);
        uVar11 = *puVar7;
        uVar8 = (uVar1 & 0xfffffffe) + *(int *)(param_2 + 0x48);
        uVar2 = FUN_00072808(param_3,0xf);
        if (uVar2 < uVar8) {
          bVar14 = false;
        }
        else if (uVar2 < uVar8 + ((ushort)uVar11 & 0xfffffffe)) {
          bVar14 = true;
        }
        else {
          bVar14 = false;
        }
        uVar11 = (ushort)uVar11 & 1 | (uVar1 & 1) << 1;
        if (uVar11 != 1) break;
        if (uVar9 == 0) {
          if (bVar14) {
            uVar11 = puVar7[2];
            if (uVar11 == 0xfffffffe) {
              return 9;
            }
            iStack_38 = iVar5;
            if (uVar11 != 0xffffffff) {
              bVar14 = uVar11 != 0;
              if (bVar14) {
                uVar11 = (int)puVar4 + uVar11;
              }
              if (bVar14) {
                uVar6 = *(undefined4 *)(uVar11 + 4);
              }
              else {
                uVar6 = 0;
              }
              iVar3 = __cxa_type_match(param_2,uVar6,*puVar4 >> 0x1f,&iStack_38);
              if (iVar3 == 0) {
                iStack_38 = 0;
              }
            }
            if (iStack_38 != 0) {
LAB_00072afc:
              uVar6 = FUN_00072808(param_3,0xd);
              *(uint **)(param_2 + 0x28) = puVar4;
              *(int *)(param_2 + 0x24) = iStack_38;
              *(undefined4 *)(param_2 + 0x20) = uVar6;
              return 6;
            }
          }
        }
        else {
          iVar12 = *(int *)(param_2 + 0x20);
          iVar3 = FUN_00072808(param_3,0xd);
          if ((iVar12 == iVar3) && (puVar4 == *(uint **)(param_2 + 0x28))) {
LAB_00072b74:
            uVar6 = FUN_00072400(puVar4);
            FUN_00072874(param_3,0xf,uVar6);
            uVar6 = 0;
            goto LAB_00072c14;
          }
        }
        puVar7 = puVar7 + 3;
      }
      if (uVar11 != 0) {
        if (uVar11 != 2) {
          return 9;
        }
        uVar11 = *puVar4 & 0x7fffffff;
        if (uVar9 == 0) {
          if ((bVar14) && ((param_1 & 8) == 0 || uVar11 == 0)) {
            uVar2 = 0;
            puVar13 = puVar4;
            do {
              uVar8 = uVar2;
              if (uVar8 == uVar11) goto LAB_00072afc;
              puVar13 = puVar13 + 1;
              uVar6 = 0;
              if (*puVar13 != 0) {
                uVar6 = *(undefined4 *)(*puVar13 + (int)puVar13);
              }
              iStack_38 = iVar5;
              iVar3 = __cxa_type_match(param_2,uVar6,0,&iStack_38);
              uVar2 = uVar8 + 1;
            } while (iVar3 == 0);
            if (uVar8 == uVar11) goto LAB_00072afc;
          }
        }
        else {
          iVar12 = *(int *)(param_2 + 0x20);
          iVar3 = FUN_00072808(param_3,0xd);
          if ((iVar12 == iVar3) && (puVar4 == *(uint **)(param_2 + 0x28))) {
            *(uint *)(param_2 + 0x28) = uVar11;
            *(undefined4 *)(param_2 + 0x30) = 4;
            *(undefined4 *)(param_2 + 0x2c) = 0;
            *(uint **)(param_2 + 0x34) = puVar7 + 2;
            if (-1 < (int)*puVar4) {
              puVar4 = puVar4 + uVar11 + 1;
              goto LAB_00072b74;
            }
            bVar10 = true;
          }
        }
        if ((int)*puVar4 < 0) {
          puVar4 = puVar7 + 2;
        }
        puVar7 = puVar4 + uVar11 + 1;
        goto LAB_00072bbc;
      }
      if (uVar9 == 0) {
        bVar14 = false;
      }
      puVar7 = puVar7 + 2;
    } while (!bVar14);
    FUN_00072400(puVar4);
    *(uint **)(param_2 + 0x38) = puVar7;
    iVar5 = __cxa_begin_cleanup(param_2);
    if (iVar5 == 0) {
      return 9;
    }
    uVar6 = 0xf;
  }
  else {
    bVar10 = false;
LAB_00072bc8:
    iVar5 = __gnu_unwind_execute(param_3,&iStack_34);
    if (iVar5 != 0) {
      return 9;
    }
    if (!bVar10) {
      return 8;
    }
    uVar6 = FUN_00072808(param_3,0xf);
    FUN_00072874(param_3,0xe,uVar6);
    uVar6 = 0xf;
  }
LAB_00072c14:
  FUN_00072874(param_3,uVar6);
  return 7;
}

