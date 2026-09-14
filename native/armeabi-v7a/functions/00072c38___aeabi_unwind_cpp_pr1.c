/* 00072c38 | __aeabi_unwind_cpp_pr1 */

/* WARNING: Removing unreachable block (ram,0x000728d4) */
/* WARNING: Removing unreachable block (ram,0x00072938) */

undefined4 __aeabi_unwind_cpp_pr1(uint param_1,int param_2,undefined4 param_3)

{
  ushort uVar1;
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
  uint *puVar13;
  bool bVar14;
  int local_38;
  int local_34;
  uint *local_30;
  undefined1 local_2c;
  undefined1 local_2b;
  
  uVar10 = param_1 & 3;
  local_30 = *(uint **)(param_2 + 0x4c) + 1;
  uVar7 = **(uint **)(param_2 + 0x4c);
  local_34 = uVar7 << 0x10;
  local_2b = (undefined1)(uVar7 >> 0x10);
  puVar8 = local_30 + ((uVar7 & 0xffffff) >> 0x10);
  local_2c = 2;
  if (uVar10 == 2) {
    puVar8 = *(uint **)(param_2 + 0x38);
  }
  if ((*(uint *)(param_2 + 0x50) & 1) == 0) {
    iVar5 = param_2 + 0x58;
    bVar11 = false;
LAB_00072bbc:
    do {
      while( true ) {
        if (*puVar8 == 0) goto LAB_00072bc8;
        puVar4 = puVar8 + 1;
        uVar1 = *(ushort *)((int)puVar8 + 2);
        uVar7 = *puVar8;
        uVar9 = (uVar1 & 0xfffffffe) + *(int *)(param_2 + 0x48);
        uVar2 = FUN_00072808(param_3,0xf);
        if (uVar2 < uVar9) {
          bVar14 = false;
        }
        else if (uVar2 < uVar9 + ((ushort)uVar7 & 0xfffffffe)) {
          bVar14 = true;
        }
        else {
          bVar14 = false;
        }
        uVar7 = (ushort)uVar7 & 1 | (uVar1 & 1) << 1;
        if (uVar7 != 1) break;
        if (uVar10 == 0) {
          if (bVar14) {
            uVar7 = puVar8[2];
            if (uVar7 == 0xfffffffe) {
              return 9;
            }
            local_38 = iVar5;
            if (uVar7 != 0xffffffff) {
              bVar14 = uVar7 != 0;
              if (bVar14) {
                uVar7 = (int)puVar4 + uVar7;
              }
              if (bVar14) {
                uVar6 = *(undefined4 *)(uVar7 + 4);
              }
              else {
                uVar6 = 0;
              }
              iVar3 = __cxa_type_match(param_2,uVar6,*puVar4 >> 0x1f,&local_38);
              if (iVar3 == 0) {
                local_38 = 0;
              }
            }
            if (local_38 != 0) {
LAB_00072afc:
              uVar6 = FUN_00072808(param_3,0xd);
              *(uint **)(param_2 + 0x28) = puVar4;
              *(int *)(param_2 + 0x24) = local_38;
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
        puVar8 = puVar8 + 3;
      }
      if (uVar7 != 0) {
        if (uVar7 != 2) {
          return 9;
        }
        uVar7 = *puVar4 & 0x7fffffff;
        if (uVar10 == 0) {
          if ((bVar14) && ((param_1 & 8) == 0 || uVar7 == 0)) {
            uVar2 = 0;
            puVar13 = puVar4;
            do {
              uVar9 = uVar2;
              if (uVar9 == uVar7) goto LAB_00072afc;
              puVar13 = puVar13 + 1;
              uVar6 = 0;
              if (*puVar13 != 0) {
                uVar6 = *(undefined4 *)(*puVar13 + (int)puVar13);
              }
              local_38 = iVar5;
              iVar3 = __cxa_type_match(param_2,uVar6,0,&local_38);
              uVar2 = uVar9 + 1;
            } while (iVar3 == 0);
            if (uVar9 == uVar7) goto LAB_00072afc;
          }
        }
        else {
          iVar12 = *(int *)(param_2 + 0x20);
          iVar3 = FUN_00072808(param_3,0xd);
          if ((iVar12 == iVar3) && (puVar4 == *(uint **)(param_2 + 0x28))) {
            *(uint *)(param_2 + 0x28) = uVar7;
            *(undefined4 *)(param_2 + 0x30) = 4;
            *(undefined4 *)(param_2 + 0x2c) = 0;
            *(uint **)(param_2 + 0x34) = puVar8 + 2;
            if (-1 < (int)*puVar4) {
              puVar4 = puVar4 + uVar7 + 1;
              goto LAB_00072b74;
            }
            bVar11 = true;
          }
        }
        if ((int)*puVar4 < 0) {
          puVar4 = puVar8 + 2;
        }
        puVar8 = puVar4 + uVar7 + 1;
        goto LAB_00072bbc;
      }
      if (uVar10 == 0) {
        bVar14 = false;
      }
      puVar8 = puVar8 + 2;
    } while (!bVar14);
    FUN_00072400(puVar4);
    *(uint **)(param_2 + 0x38) = puVar8;
    iVar5 = __cxa_begin_cleanup(param_2);
    if (iVar5 == 0) {
      return 9;
    }
    uVar6 = 0xf;
  }
  else {
    bVar11 = false;
LAB_00072bc8:
    iVar5 = __gnu_unwind_execute(param_3,&local_34);
    if (iVar5 != 0) {
      return 9;
    }
    if (!bVar11) {
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

