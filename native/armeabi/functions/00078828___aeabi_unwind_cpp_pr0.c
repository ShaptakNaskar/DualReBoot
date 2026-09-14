/* 00078828 | __aeabi_unwind_cpp_pr0 */

/* WARNING: Removing unreachable block (ram,0x000784d0) */
/* WARNING: Removing unreachable block (ram,0x00078518) */

undefined4 __aeabi_unwind_cpp_pr0(uint param_1,int param_2,undefined4 param_3)

{
  ushort uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  undefined4 uVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  int iStack_38;
  int iStack_34;
  uint *puStack_30;
  undefined1 uStack_2c;
  undefined1 uStack_2b;
  
  puStack_30 = (uint *)(*(int **)(param_2 + 0x4c) + 1);
  uVar10 = param_1 & 3;
  iStack_34 = **(int **)(param_2 + 0x4c) << 8;
  uStack_2b = 0;
  uStack_2c = 3;
  puVar8 = puStack_30;
  if (uVar10 == 2) {
    puVar8 = *(uint **)(param_2 + 0x38);
  }
  if ((*(uint *)(param_2 + 0x50) & 1) == 0) {
    iVar6 = param_2 + 0x58;
    bVar11 = false;
LAB_000787a4:
    do {
      while( true ) {
        if (*puVar8 == 0) goto LAB_000787b0;
        uVar1 = *(ushort *)((int)puVar8 + 2);
        uVar12 = *puVar8;
        puVar5 = puVar8 + 1;
        uVar9 = (uVar1 & 0xfffffffe) + *(int *)(param_2 + 0x48);
        uVar3 = FUN_000783ec(param_3,0xf);
        if (uVar3 < uVar9) {
          bVar2 = false;
        }
        else if (uVar3 < uVar9 + ((ushort)uVar12 & 0xfffffffe)) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        uVar12 = (ushort)uVar12 & 1 | (uVar1 & 1) << 1;
        if (uVar12 != 1) break;
        if (uVar10 == 0) {
          if (bVar2) {
            uVar12 = puVar8[2];
            if (uVar12 == 0xfffffffe) {
              return 9;
            }
            iStack_38 = iVar6;
            if (uVar12 != 0xffffffff) {
              if (uVar12 == 0) {
                uVar7 = 0;
              }
              else {
                uVar7 = *(undefined4 *)((int)puVar5 + uVar12 + 4);
              }
              iVar4 = __cxa_type_match(param_2,uVar7,*puVar5 >> 0x1f,&iStack_38);
              if (iVar4 == 0) {
                iStack_38 = 0;
              }
            }
            if (iStack_38 != 0) {
LAB_000786e4:
              uVar7 = FUN_000783ec(param_3,0xd);
              *(int *)(param_2 + 0x24) = iStack_38;
              *(uint **)(param_2 + 0x28) = puVar5;
              *(undefined4 *)(param_2 + 0x20) = uVar7;
              return 6;
            }
          }
        }
        else {
          iVar13 = *(int *)(param_2 + 0x20);
          iVar4 = FUN_000783ec(param_3,0xd);
          if ((iVar13 == iVar4) && (puVar5 == *(uint **)(param_2 + 0x28))) {
LAB_0007875c:
            uVar7 = FUN_00077fe4(puVar5);
            FUN_00078458(param_3,0xf,uVar7);
            uVar7 = 0;
            goto LAB_000787fc;
          }
        }
        puVar8 = puVar8 + 3;
      }
      if (uVar12 != 0) {
        if (uVar12 != 2) {
          return 9;
        }
        uVar12 = *puVar5 & 0x7fffffff;
        if (uVar10 == 0) {
          if ((bVar2) && ((param_1 & 8) == 0 || uVar12 == 0)) {
            uVar3 = 0;
            puVar14 = puVar5;
            do {
              uVar9 = uVar3;
              if (uVar9 == uVar12) goto LAB_000786e4;
              puVar14 = puVar14 + 1;
              uVar7 = 0;
              if (*puVar14 != 0) {
                uVar7 = *(undefined4 *)(*puVar14 + (int)puVar14);
              }
              iStack_38 = iVar6;
              iVar4 = __cxa_type_match(param_2,uVar7,0,&iStack_38);
              uVar3 = uVar9 + 1;
            } while (iVar4 == 0);
            if (uVar9 == uVar12) goto LAB_000786e4;
          }
        }
        else {
          iVar13 = *(int *)(param_2 + 0x20);
          iVar4 = FUN_000783ec(param_3,0xd);
          if ((iVar13 == iVar4) && (puVar5 == *(uint **)(param_2 + 0x28))) {
            *(undefined4 *)(param_2 + 0x30) = 4;
            *(uint *)(param_2 + 0x28) = uVar12;
            *(undefined4 *)(param_2 + 0x2c) = 0;
            *(uint **)(param_2 + 0x34) = puVar8 + 2;
            if (-1 < (int)*puVar5) {
              puVar5 = puVar5 + uVar12 + 1;
              goto LAB_0007875c;
            }
            bVar11 = true;
          }
        }
        if ((int)*puVar5 < 0) {
          puVar5 = puVar8 + 2;
        }
        puVar8 = puVar5 + uVar12 + 1;
        goto LAB_000787a4;
      }
      if (uVar10 == 0) {
        bVar2 = false;
      }
      puVar8 = puVar8 + 2;
    } while (!bVar2);
    FUN_00077fe4(puVar5);
    *(uint **)(param_2 + 0x38) = puVar8;
    iVar6 = __cxa_begin_cleanup(param_2);
    if (iVar6 == 0) {
      return 9;
    }
    uVar7 = 0xf;
  }
  else {
    bVar11 = false;
LAB_000787b0:
    iVar6 = __gnu_unwind_execute(param_3,&iStack_34);
    if (iVar6 != 0) {
      return 9;
    }
    if (!bVar11) {
      return 8;
    }
    uVar7 = FUN_000783ec(param_3,0xf);
    FUN_00078458(param_3,0xe,uVar7);
    uVar7 = 0xf;
  }
LAB_000787fc:
  FUN_00078458(param_3,uVar7);
  return 7;
}

