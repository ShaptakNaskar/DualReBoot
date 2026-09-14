/* 00078818 | __aeabi_unwind_cpp_pr2 */

/* WARNING: Removing unreachable block (ram,0x000784b8) */
/* WARNING: Removing unreachable block (ram,0x0007851c) */

undefined4 __aeabi_unwind_cpp_pr2(uint param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  int local_38;
  int local_34;
  uint *local_30;
  undefined1 local_2c;
  undefined1 local_2b;
  
  local_30 = *(uint **)(param_2 + 0x4c) + 1;
  uVar7 = **(uint **)(param_2 + 0x4c);
  uVar10 = param_1 & 3;
  local_34 = uVar7 << 0x10;
  puVar8 = local_30 + (uVar7 >> 0x10 & 0xff);
  local_2b = (undefined1)(uVar7 >> 0x10);
  local_2c = 2;
  if (uVar10 == 2) {
    puVar8 = *(uint **)(param_2 + 0x38);
  }
  if ((*(uint *)(param_2 + 0x50) & 1) == 0) {
    iVar5 = param_2 + 0x58;
    bVar11 = false;
LAB_000787a4:
    do {
      while( true ) {
        uVar7 = *puVar8;
        if (uVar7 == 0) goto LAB_000787b0;
        uVar13 = puVar8[1];
        puVar4 = puVar8 + 2;
        uVar9 = (uVar13 & 0xfffffffe) + *(int *)(param_2 + 0x48);
        uVar2 = FUN_000783ec(param_3,0xf);
        if (uVar2 < uVar9) {
          bVar1 = false;
        }
        else if (uVar2 < uVar9 + (uVar7 & 0xfffffffe)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        uVar7 = uVar7 & 1 | (uVar13 & 1) << 1;
        if (uVar7 != 1) break;
        if (uVar10 == 0) {
          if (bVar1) {
            uVar7 = puVar8[3];
            if (uVar7 == 0xfffffffe) {
              return 9;
            }
            local_38 = iVar5;
            if (uVar7 != 0xffffffff) {
              if (uVar7 == 0) {
                uVar6 = 0;
              }
              else {
                uVar6 = *(undefined4 *)((int)puVar4 + uVar7 + 4);
              }
              iVar3 = __cxa_type_match(param_2,uVar6,*puVar4 >> 0x1f,&local_38);
              if (iVar3 == 0) {
                local_38 = 0;
              }
            }
            if (local_38 != 0) {
LAB_000786e4:
              uVar6 = FUN_000783ec(param_3,0xd);
              *(int *)(param_2 + 0x24) = local_38;
              *(uint **)(param_2 + 0x28) = puVar4;
              *(undefined4 *)(param_2 + 0x20) = uVar6;
              return 6;
            }
          }
        }
        else {
          iVar12 = *(int *)(param_2 + 0x20);
          iVar3 = FUN_000783ec(param_3,0xd);
          if ((iVar12 == iVar3) && (puVar4 == *(uint **)(param_2 + 0x28))) {
LAB_0007875c:
            uVar6 = FUN_00077fe4(puVar4);
            FUN_00078458(param_3,0xf,uVar6);
            uVar6 = 0;
            goto LAB_000787fc;
          }
        }
        puVar8 = puVar8 + 4;
      }
      if (uVar7 != 0) {
        if (uVar7 != 2) {
          return 9;
        }
        uVar7 = *puVar4 & 0x7fffffff;
        if (uVar10 == 0) {
          if ((bVar1) && ((param_1 & 8) == 0 || uVar7 == 0)) {
            uVar2 = 0;
            puVar14 = puVar4;
            do {
              uVar9 = uVar2;
              if (uVar9 == uVar7) goto LAB_000786e4;
              puVar14 = puVar14 + 1;
              uVar6 = 0;
              if (*puVar14 != 0) {
                uVar6 = *(undefined4 *)(*puVar14 + (int)puVar14);
              }
              local_38 = iVar5;
              iVar3 = __cxa_type_match(param_2,uVar6,0,&local_38);
              uVar2 = uVar9 + 1;
            } while (iVar3 == 0);
            if (uVar9 == uVar7) goto LAB_000786e4;
          }
        }
        else {
          iVar12 = *(int *)(param_2 + 0x20);
          iVar3 = FUN_000783ec(param_3,0xd);
          if ((iVar12 == iVar3) && (puVar4 == *(uint **)(param_2 + 0x28))) {
            *(undefined4 *)(param_2 + 0x30) = 4;
            *(uint *)(param_2 + 0x28) = uVar7;
            *(undefined4 *)(param_2 + 0x2c) = 0;
            *(uint **)(param_2 + 0x34) = puVar8 + 3;
            if (-1 < (int)*puVar4) {
              puVar4 = puVar4 + uVar7 + 1;
              goto LAB_0007875c;
            }
            bVar11 = true;
          }
        }
        if ((int)*puVar4 < 0) {
          puVar4 = puVar8 + 3;
        }
        puVar8 = puVar4 + uVar7 + 1;
        goto LAB_000787a4;
      }
      if (uVar10 == 0) {
        bVar1 = false;
      }
      puVar8 = puVar8 + 3;
    } while (!bVar1);
    FUN_00077fe4(puVar4);
    *(uint **)(param_2 + 0x38) = puVar8;
    iVar5 = __cxa_begin_cleanup(param_2);
    if (iVar5 == 0) {
      return 9;
    }
    uVar6 = 0xf;
  }
  else {
    bVar11 = false;
LAB_000787b0:
    iVar5 = __gnu_unwind_execute(param_3,&local_34);
    if (iVar5 != 0) {
      return 9;
    }
    if (!bVar11) {
      return 8;
    }
    uVar6 = FUN_000783ec(param_3,0xf);
    FUN_00078458(param_3,0xe,uVar6);
    uVar6 = 0xf;
  }
LAB_000787fc:
  FUN_00078458(param_3,uVar6);
  return 7;
}

