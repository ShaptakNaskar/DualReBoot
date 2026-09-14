/* 000853d5 | FUN_000853d5 */

undefined4 __regparm3 FUN_000853d5(undefined4 param_1,undefined4 *param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  char *pcVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  int extraout_ECX;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 uVar12;
  undefined4 *puVar13;
  byte bVar14;
  char *local_38;
  int local_28;
  int local_24;
  undefined4 local_20 [3];
  undefined4 uStack_14;
  
  bVar14 = 0;
  uStack_14 = 0x853e9;
  iVar3 = FUN_0002e044();
  puVar13 = param_2;
  for (iVar8 = extraout_ECX; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar13 = 0;
    puVar13 = puVar13 + (uint)bVar14 * -2 + 1;
  }
  *(undefined4 *)(iVar3 + 0x68) = 0;
  *(undefined4 *)(iVar3 + 0x50) = 0;
  if ((*(int *)(iVar3 + 0x4c) == 0) ||
     (iVar8 = _Unwind_Find_FDE((*(int *)(iVar3 + 0x4c) + -1) - (*(int *)(iVar3 + 0x60) >> 0x1f),
                               iVar3 + 0x54,0,0), iVar8 == 0)) {
    return 5;
  }
  param_2[0x29] = *(undefined4 *)(iVar3 + 0x5c);
  iVar9 = (iVar8 + 4) - *(int *)(iVar8 + 4);
  local_38 = (char *)(iVar9 + 9);
  uVar10 = 0xffffffff;
  pcVar4 = local_38;
  do {
    if (uVar10 == 0) break;
    uVar10 = uVar10 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + (uint)bVar14 * -2 + 1;
  } while (cVar1 != '\0');
  iVar11 = ~uVar10 + iVar9;
  pcVar4 = (char *)(iVar11 + 9);
  if ((*(char *)(iVar9 + 9) == 'e') && (*(char *)(iVar9 + 10) == 'h')) {
    local_38 = (char *)(iVar9 + 0xb);
    param_2[0x2f] = *(undefined4 *)(iVar11 + 9);
    pcVar4 = (char *)(iVar11 + 0xd);
  }
  if ((3 < *(byte *)(iVar9 + 8)) && ((*pcVar4 != '\x04' || (pcVar4[1] != '\0')))) {
    return 3;
  }
  FUN_00084210();
  param_2[0x2c] = local_28;
  pbVar5 = (byte *)FUN_00084241();
  param_2[0x2b] = local_24;
  if (*(char *)(iVar9 + 8) == '\x01') {
    pbVar6 = pbVar5 + 1;
    param_2[0x2d] = (uint)*pbVar5;
  }
  else {
    pbVar6 = (byte *)FUN_00084210();
    param_2[0x2d] = local_28;
  }
  *(undefined1 *)((int)param_2 + 0xb9) = 0xff;
  pbVar5 = (byte *)0x0;
  pcVar4 = local_38;
  if (*local_38 == 'z') {
    pbVar6 = (byte *)FUN_00084210();
    *(undefined1 *)((int)param_2 + 0xba) = 1;
    pbVar5 = pbVar6 + local_28;
    pcVar4 = local_38 + 1;
  }
  while( true ) {
    local_38 = pcVar4 + 1;
    cVar1 = *pcVar4;
    if (cVar1 == '\0') break;
    pcVar4 = local_38;
    if (cVar1 == 'L') {
      *(byte *)((int)param_2 + 0xb9) = *pbVar6;
LAB_00085547:
      pbVar6 = pbVar6 + 1;
    }
    else {
      if (cVar1 == 'R') {
        *(byte *)(param_2 + 0x2e) = *pbVar6;
        goto LAB_00085547;
      }
      if (cVar1 == 'P') {
        pbVar6 = (byte *)FUN_00084570(pbVar6 + 1,local_20,pbVar6,pbVar6);
        param_2[0x2a] = local_20[0];
      }
      else {
        pbVar7 = pbVar5;
        if (cVar1 != 'S') goto LAB_00085593;
        *(undefined1 *)((int)param_2 + 0xbb) = 1;
      }
    }
  }
  pbVar7 = pbVar6;
  if (pbVar5 == (byte *)0x0) {
LAB_00085593:
    if (pbVar7 == (byte *)0x0) {
      return 3;
    }
  }
  FUN_00084f56(iVar3,param_2,pbVar5,pbVar5);
  bVar14 = *(byte *)(param_2 + 0x2e);
  if (bVar14 == 0xff) {
    iVar9 = 0;
  }
  else {
    bVar2 = bVar14 & 7;
    if (bVar2 == 2) {
      iVar9 = 2;
    }
    else {
      if (bVar2 < 3) {
        if ((bVar14 & 7) != 0) {
LAB_000855ef:
                    /* WARNING: Subroutine does not return */
          abort();
        }
      }
      else if (bVar2 != 3) {
        if (bVar2 != 4) goto LAB_000855ef;
        iVar9 = 8;
        goto LAB_000855fd;
      }
      iVar9 = 4;
    }
  }
LAB_000855fd:
  iVar11 = 0;
  iVar8 = iVar8 + 8 + iVar9 * 2;
  uVar12 = extraout_ECX_00;
  if (*(char *)((int)param_2 + 0xba) != '\0') {
    iVar8 = FUN_00084210();
    iVar11 = local_24 + iVar8;
    uVar12 = extraout_ECX_01;
  }
  if (*(char *)((int)param_2 + 0xb9) != -1) {
    FUN_00084570(iVar8,local_20,uVar12,uVar12);
    *(undefined4 *)(iVar3 + 0x50) = local_20[0];
  }
  FUN_00084f56(iVar3,param_2,iVar11,iVar11);
  return 0;
}

