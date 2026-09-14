/* 00077ffc | FUN_00077ffc */

undefined4 FUN_00077ffc(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  int local_2c [2];
  
  iVar8 = DAT_000781b4 + 0x78010;
  uVar9 = param_2 - 2;
  if (*(int *)(iVar8 + DAT_000781b8) == 0) {
    iVar2 = *(int *)(iVar8 + DAT_000781c0);
    local_2c[0] = *(int *)(iVar8 + DAT_000781bc) - iVar2 >> 3;
LAB_00078058:
    if (local_2c[0] != 0) {
      iVar7 = local_2c[0] + -1;
      iVar11 = 0;
      iVar12 = iVar7;
      while( true ) {
        while( true ) {
          iVar1 = (iVar11 + iVar12) / 2;
          iVar10 = iVar2 + iVar1 * 8;
          uVar3 = FUN_00077fe4(iVar10);
          if (iVar1 == iVar7) {
            uVar4 = 0xffffffff;
          }
          else {
            iVar5 = FUN_00077fe4(iVar2 + (iVar1 + 1) * 8);
            uVar4 = iVar5 - 1;
          }
          if (uVar3 <= uVar9) break;
          if (iVar1 == iVar11) goto LAB_000780ec;
          iVar12 = iVar1 + -1;
        }
        if (uVar9 <= uVar4) break;
        iVar11 = iVar1 + 1;
      }
      if (iVar10 != 0) {
        uVar6 = FUN_00077fe4(iVar10);
        iVar2 = *(int *)(iVar10 + 4);
        bVar13 = iVar2 == 1;
        if (bVar13) {
          iVar2 = 0;
          *(undefined4 *)(param_1 + 0x10) = 0;
        }
        *(undefined4 *)(param_1 + 0x48) = uVar6;
        if (bVar13) {
          return 5;
        }
        if (iVar2 < 0) {
          *(int *)(param_1 + 0x4c) = iVar10 + 4;
        }
        else {
          uVar6 = FUN_00077fe4();
          *(undefined4 *)(param_1 + 0x4c) = uVar6;
        }
        *(uint *)(param_1 + 0x50) = (uint)(iVar2 < 0);
        if (-1 < (int)**(uint **)(param_1 + 0x4c)) {
          uVar6 = FUN_00077fe4();
          *(undefined4 *)(param_1 + 0x10) = uVar6;
          return 0;
        }
        uVar9 = **(uint **)(param_1 + 0x4c) >> 0x18 & 0xf;
        if (uVar9 == 0) {
          *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(iVar8 + DAT_000781c4);
          return 0;
        }
        iVar2 = DAT_000781c8;
        if ((uVar9 == 1) || (iVar2 = DAT_000781cc, uVar9 == 2)) {
          *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(iVar8 + iVar2);
          return 0;
        }
        goto LAB_00078198;
      }
    }
LAB_000780ec:
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  else {
    iVar2 = __gnu_Unwind_Find_exidx(uVar9,local_2c);
    if (iVar2 != 0) goto LAB_00078058;
LAB_00078198:
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return 9;
}

