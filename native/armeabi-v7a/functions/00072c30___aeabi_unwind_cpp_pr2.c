/* 00072c30 | __aeabi_unwind_cpp_pr2 */

/* WARNING: Removing unreachable block (ram,0x000728d4) */
/* WARNING: Removing unreachable block (ram,0x0007293c) */

undefined4 __aeabi_unwind_cpp_pr2(uint param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  uint *puVar13;
  bool bVar14;
  int iStack_38;
  int iStack_34;
  uint *puStack_30;
  undefined1 uStack_2c;
  undefined1 uStack_2b;
  
  uVar9 = param_1 & 3;
  puStack_30 = *(uint **)(param_2 + 0x4c) + 1;
  uVar6 = **(uint **)(param_2 + 0x4c);
  iStack_34 = uVar6 << 0x10;
  uStack_2b = (undefined1)(uVar6 >> 0x10);
  puVar7 = puStack_30 + ((uVar6 & 0xffffff) >> 0x10);
  uStack_2c = 2;
  if (uVar9 == 2) {
    puVar7 = *(uint **)(param_2 + 0x38);
  }
  if ((*(uint *)(param_2 + 0x50) & 1) == 0) {
    iVar4 = param_2 + 0x58;
    bVar10 = false;
LAB_00072bbc:
    do {
      while( true ) {
        uVar6 = *puVar7;
        if (uVar6 == 0) goto LAB_00072bc8;
        puVar3 = puVar7 + 2;
        uVar12 = puVar7[1];
        uVar8 = (uVar12 & 0xfffffffe) + *(int *)(param_2 + 0x48);
        uVar1 = FUN_00072808(param_3,0xf);
        if (uVar1 < uVar8) {
          bVar14 = false;
        }
        else if (uVar1 < uVar8 + (uVar6 & 0xfffffffe)) {
          bVar14 = true;
        }
        else {
          bVar14 = false;
        }
        uVar6 = uVar6 & 1 | (uVar12 & 1) << 1;
        if (uVar6 != 1) break;
        if (uVar9 == 0) {
          if (bVar14) {
            uVar6 = puVar7[3];
            if (uVar6 == 0xfffffffe) {
              return 9;
            }
            iStack_38 = iVar4;
            if (uVar6 != 0xffffffff) {
              bVar14 = uVar6 != 0;
              if (bVar14) {
                uVar6 = (int)puVar3 + uVar6;
              }
              if (bVar14) {
                uVar5 = *(undefined4 *)(uVar6 + 4);
              }
              else {
                uVar5 = 0;
              }
              iVar2 = __cxa_type_match(param_2,uVar5,*puVar3 >> 0x1f,&iStack_38);
              if (iVar2 == 0) {
                iStack_38 = 0;
              }
            }
            if (iStack_38 != 0) {
LAB_00072afc:
              uVar5 = FUN_00072808(param_3,0xd);
              *(uint **)(param_2 + 0x28) = puVar3;
              *(int *)(param_2 + 0x24) = iStack_38;
              *(undefined4 *)(param_2 + 0x20) = uVar5;
              return 6;
            }
          }
        }
        else {
          iVar11 = *(int *)(param_2 + 0x20);
          iVar2 = FUN_00072808(param_3,0xd);
          if ((iVar11 == iVar2) && (puVar3 == *(uint **)(param_2 + 0x28))) {
LAB_00072b74:
            uVar5 = FUN_00072400(puVar3);
            FUN_00072874(param_3,0xf,uVar5);
            uVar5 = 0;
            goto LAB_00072c14;
          }
        }
        puVar7 = puVar7 + 4;
      }
      if (uVar6 != 0) {
        if (uVar6 != 2) {
          return 9;
        }
        uVar6 = *puVar3 & 0x7fffffff;
        if (uVar9 == 0) {
          if ((bVar14) && ((param_1 & 8) == 0 || uVar6 == 0)) {
            uVar1 = 0;
            puVar13 = puVar3;
            do {
              uVar8 = uVar1;
              if (uVar8 == uVar6) goto LAB_00072afc;
              puVar13 = puVar13 + 1;
              uVar5 = 0;
              if (*puVar13 != 0) {
                uVar5 = *(undefined4 *)(*puVar13 + (int)puVar13);
              }
              iStack_38 = iVar4;
              iVar2 = __cxa_type_match(param_2,uVar5,0,&iStack_38);
              uVar1 = uVar8 + 1;
            } while (iVar2 == 0);
            if (uVar8 == uVar6) goto LAB_00072afc;
          }
        }
        else {
          iVar11 = *(int *)(param_2 + 0x20);
          iVar2 = FUN_00072808(param_3,0xd);
          if ((iVar11 == iVar2) && (puVar3 == *(uint **)(param_2 + 0x28))) {
            *(uint *)(param_2 + 0x28) = uVar6;
            *(undefined4 *)(param_2 + 0x30) = 4;
            *(undefined4 *)(param_2 + 0x2c) = 0;
            *(uint **)(param_2 + 0x34) = puVar7 + 3;
            if (-1 < (int)*puVar3) {
              puVar3 = puVar3 + uVar6 + 1;
              goto LAB_00072b74;
            }
            bVar10 = true;
          }
        }
        if ((int)*puVar3 < 0) {
          puVar3 = puVar7 + 3;
        }
        puVar7 = puVar3 + uVar6 + 1;
        goto LAB_00072bbc;
      }
      if (uVar9 == 0) {
        bVar14 = false;
      }
      puVar7 = puVar7 + 3;
    } while (!bVar14);
    FUN_00072400(puVar3);
    *(uint **)(param_2 + 0x38) = puVar7;
    iVar4 = __cxa_begin_cleanup(param_2);
    if (iVar4 == 0) {
      return 9;
    }
    uVar5 = 0xf;
  }
  else {
    bVar10 = false;
LAB_00072bc8:
    iVar4 = __gnu_unwind_execute(param_3,&iStack_34);
    if (iVar4 != 0) {
      return 9;
    }
    if (!bVar10) {
      return 8;
    }
    uVar5 = FUN_00072808(param_3,0xf);
    FUN_00072874(param_3,0xe,uVar5);
    uVar5 = 0xf;
  }
LAB_00072c14:
  FUN_00072874(param_3,uVar5);
  return 7;
}

