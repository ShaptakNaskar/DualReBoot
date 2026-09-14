/* 00075a38 | __kernel_rem_pio2 */

uint __kernel_rem_pio2(double *param_1,double *param_2,int param_3,int param_4,int param_5)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  double *pdVar4;
  undefined1 *puVar5;
  double *pdVar6;
  double *pdVar7;
  int iVar8;
  int iVar9;
  undefined1 **ppuVar10;
  uint uVar11;
  double *pdVar12;
  int iVar13;
  undefined1 **ppuVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  undefined1 **ppuVar19;
  bool bVar20;
  uint in_fpscr;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined1 *local_274;
  undefined1 *local_270 [20];
  double local_220 [20];
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  double adStack_170 [18];
  double local_e0 [20];
  undefined1 auStack_40 [4];
  
  dVar23 = DAT_00075e08;
  dVar21 = DAT_00075e00;
  iVar16 = param_4 + -1;
  uVar18 = (param_3 + -3) / 0x18;
  iVar15 = *(int *)(DAT_00075e10 + 0x75a70 + param_5 * 4);
  uVar18 = uVar18 & ~((int)uVar18 >> 0x1f);
  iVar13 = uVar18 - iVar16;
  param_3 = param_3 + ~uVar18 * 0x18;
  if (-1 < iVar16 + iVar15) {
    iVar2 = iVar13 + iVar16 + iVar15;
    pdVar7 = local_220;
    iVar8 = 0;
    iVar9 = iVar13 * 4;
    do {
      bVar20 = -1 < iVar13;
      iVar13 = iVar13 + 1;
      dVar25 = DAT_00075df8;
      if (bVar20) {
        dVar25 = (double)VectorSignedToFloat(*(undefined4 *)(DAT_00075e14 + 0x75ab8 + iVar9 + iVar8)
                                             ,(byte)(in_fpscr >> 0x16) & 3);
      }
      iVar8 = iVar8 + 4;
      *pdVar7 = dVar25;
      pdVar7 = pdVar7 + 1;
    } while (iVar13 != iVar2 + 1);
  }
  if (-1 < iVar15) {
    pdVar7 = local_e0;
    iVar13 = param_4;
    do {
      while (iVar16 < 0) {
        *pdVar7 = DAT_00076238;
        pdVar7 = pdVar7 + 1;
        iVar13 = iVar13 + 1;
        if (pdVar7 == local_e0 + iVar15 + 1) goto LAB_00075b40;
      }
      pdVar4 = local_220 + iVar13;
      iVar9 = 0;
      pdVar6 = param_1;
      dVar25 = DAT_00075df8;
      do {
        iVar9 = iVar9 + 1;
        dVar24 = *pdVar6;
        pdVar6 = pdVar6 + 1;
        pdVar4 = pdVar4 + -1;
        dVar25 = dVar25 + dVar24 * *pdVar4;
      } while (iVar9 != param_4);
      *pdVar7 = dVar25;
      pdVar7 = pdVar7 + 1;
      iVar13 = iVar13 + 1;
    } while (pdVar7 != local_e0 + iVar15 + 1);
  }
LAB_00075b40:
  local_274 = auStack_40 + (iVar15 + -1) * 4;
  iVar13 = iVar15;
LAB_00075b74:
  iVar9 = iVar13;
  dVar25 = local_e0[iVar9];
  if (0 < iVar9) {
    pdVar7 = local_e0 + iVar9;
    ppuVar10 = &local_274;
    do {
      pdVar7 = pdVar7 + -1;
      dVar22 = (double)VectorSignedToFloat((int)(longlong)(dVar25 * dVar21),
                                           (byte)(in_fpscr >> 0x16) & 3);
      dVar24 = dVar25 - dVar22 * dVar23;
      dVar25 = dVar22 + *pdVar7;
      ppuVar10 = ppuVar10 + 1;
      *ppuVar10 = (undefined1 *)(longlong)dVar24;
    } while (ppuVar10 != local_270 + iVar9 + -1);
  }
  dVar25 = scalbnl(dVar25,param_3);
  dVar24 = floorl(dVar25 * 0.125);
  dVar25 = dVar25 - dVar24 * 8.0;
  uVar17 = (uint)(longlong)dVar25;
  dVar24 = (double)VectorSignedToFloat(uVar17,(byte)(in_fpscr >> 0x16) & 3);
  dVar25 = dVar25 - dVar24;
  if (param_3 < 1) {
    if (param_3 == 0) {
      iVar13 = (int)local_270[iVar9 + -1] >> 0x17;
      goto LAB_00075c30;
    }
    uVar11 = in_fpscr & 0xfffffff | (uint)(dVar25 < 0.5) << 0x1f;
    in_fpscr = uVar11 | (uint)NAN(dVar25) << 0x1c;
    if ((byte)(uVar11 >> 0x1f) == ((byte)(in_fpscr >> 0x1c) & 1)) {
      iVar13 = 2;
      goto joined_r0x00075fd0;
    }
    iVar13 = 0;
LAB_00075cd0:
    in_fpscr = in_fpscr & 0xfffffff | (uint)(dVar25 == 0.0) << 0x1e;
    bVar1 = (byte)(in_fpscr >> 0x18);
  }
  else {
    iVar13 = (int)local_270[iVar9 + -1] >> (0x18U - param_3 & 0xff);
    puVar5 = local_270[iVar9 + -1] + -(iVar13 << (0x18U - param_3 & 0xff));
    uVar17 = uVar17 + iVar13;
    local_270[iVar9 + -1] = puVar5;
    iVar13 = (int)puVar5 >> (0x17U - param_3 & 0xff);
LAB_00075c30:
    if (iVar13 < 1) goto LAB_00075cd0;
joined_r0x00075fd0:
    uVar17 = uVar17 + 1;
    if (iVar9 < 1) {
      bVar20 = false;
    }
    else {
      bVar20 = false;
      ppuVar19 = local_270 + iVar9;
      ppuVar10 = local_270;
      do {
        while( true ) {
          ppuVar14 = ppuVar10 + 1;
          puVar5 = *ppuVar10;
          if (!bVar20) break;
          bVar20 = true;
          *ppuVar10 = (undefined1 *)(0xffffff - (int)puVar5);
          ppuVar10 = ppuVar14;
          if (ppuVar14 == ppuVar19) goto LAB_00075c98;
        }
        if (puVar5 != (undefined1 *)0x0) {
          *ppuVar10 = (undefined1 *)(0x1000000 - (int)puVar5);
          bVar20 = true;
        }
        ppuVar10 = ppuVar14;
      } while (ppuVar14 != ppuVar19);
    }
LAB_00075c98:
    if (0 < param_3) {
      if (param_3 == 1) {
        local_270[iVar9 + -1] = (undefined1 *)((uint)local_270[iVar9 + -1] & 0x7fffff);
      }
      else if (param_3 == 2) {
        local_270[iVar9 + -1] = (undefined1 *)((uint)local_270[iVar9 + -1] & 0x3fffff);
      }
    }
    if ((iVar13 != 2) || (dVar25 = 1.0 - dVar25, !bVar20)) goto LAB_00075cd0;
    dVar24 = scalbnl(1.0,param_3);
    dVar25 = dVar25 - dVar24;
    in_fpscr = in_fpscr & 0xfffffff | (uint)(dVar25 == 0.0) << 0x1e;
    bVar1 = (byte)(in_fpscr >> 0x18);
  }
  if (!(bool)(bVar1 >> 6)) {
    dVar21 = scalbnl(dVar25,-param_3);
    uVar18 = in_fpscr & 0xfffffff | (uint)(dVar21 < DAT_00076228) << 0x1f;
    in_fpscr = uVar18 | (uint)(NAN(dVar21) || NAN(DAT_00076228)) << 0x1c;
    if ((byte)(uVar18 >> 0x1f) == ((byte)(in_fpscr >> 0x1c) & 1)) {
      param_3 = param_3 + 0x18;
      dVar23 = (double)VectorSignedToFloat((int)(longlong)(dVar21 * DAT_00076230),
                                           (byte)(in_fpscr >> 0x16) & 3);
      local_270[iVar9] = (undefined1 *)(longlong)(dVar21 - dVar23 * DAT_00076228);
      local_270[iVar9 + 1] = (undefined1 *)(longlong)dVar23;
      iVar8 = iVar9 + 1;
    }
    else {
      local_270[iVar9] = (undefined1 *)(longlong)dVar21;
      iVar8 = iVar9;
    }
    goto LAB_00075eac;
  }
  iVar8 = iVar9 + -1;
  if (iVar15 <= iVar8) {
    uVar11 = 0;
    ppuVar10 = local_270 + iVar9;
    do {
      ppuVar10 = ppuVar10 + -1;
      uVar11 = uVar11 | (uint)*ppuVar10;
    } while (ppuVar10 != local_270 + iVar15);
    if (uVar11 != 0) goto LAB_000761ac;
  }
  if (*(int *)(local_274 + -0x230) == 0) {
    iVar13 = 1;
    ppuVar10 = local_270 + iVar15 + -1;
    do {
      ppuVar10 = ppuVar10 + -1;
      iVar13 = iVar13 + 1;
    } while (*ppuVar10 == (undefined1 *)0x0);
  }
  else {
    iVar13 = 1;
  }
  iVar13 = iVar9 + iVar13;
  iVar8 = iVar9 + 1;
  if (iVar8 <= iVar13) {
    puVar3 = (undefined4 *)(DAT_00075e18 + 0x75d74 + (iVar9 + uVar18) * 4);
    pdVar4 = local_e0 + iVar8;
    pdVar7 = local_220 + iVar16 + iVar8;
    iVar9 = param_4 + 1 + iVar13;
    iVar8 = iVar16 + iVar8 + 1;
    do {
      while( true ) {
        puVar3 = puVar3 + 1;
        dVar25 = (double)VectorSignedToFloat(*puVar3,(byte)(in_fpscr >> 0x16) & 3);
        *pdVar7 = dVar25;
        pdVar7 = pdVar7 + 1;
        if (iVar16 < 0) break;
        iVar2 = 0;
        pdVar6 = local_220 + iVar8;
        pdVar12 = param_1;
        dVar25 = DAT_00075df8;
        do {
          iVar2 = iVar2 + 1;
          dVar24 = *pdVar12;
          pdVar12 = pdVar12 + 1;
          pdVar6 = pdVar6 + -1;
          dVar25 = dVar25 + dVar24 * *pdVar6;
        } while (iVar2 != param_4);
        iVar8 = iVar8 + 1;
        *pdVar4 = dVar25;
        pdVar4 = pdVar4 + 1;
        if (iVar8 == iVar9) goto LAB_00075b74;
      }
      iVar8 = iVar8 + 1;
      *pdVar4 = DAT_00075df8;
      pdVar4 = pdVar4 + 1;
    } while (iVar8 != iVar9);
  }
  goto LAB_00075b74;
LAB_000761ac:
  param_3 = param_3 + -0x18;
  if (local_270[iVar8] == (undefined1 *)0x0) {
    ppuVar10 = local_270 + iVar8;
    do {
      ppuVar10 = ppuVar10 + -1;
      iVar8 = iVar8 + -1;
      param_3 = param_3 + -0x18;
    } while (*ppuVar10 == (undefined1 *)0x0);
  }
LAB_00075eac:
  dVar21 = scalbnl(1.0,param_3);
  if (-1 < iVar8) {
    ppuVar10 = local_270 + iVar8 + 1;
    pdVar7 = local_e0 + iVar8 + 1;
    do {
      ppuVar10 = ppuVar10 + -1;
      dVar23 = (double)VectorSignedToFloat(*ppuVar10,(byte)(in_fpscr >> 0x16) & 3);
      pdVar7 = pdVar7 + -1;
      *pdVar7 = dVar23 * dVar21;
      dVar21 = dVar21 * DAT_00076230;
    } while (pdVar7 != local_e0);
    iVar16 = 0;
    iVar9 = iVar8;
    do {
      dVar21 = DAT_00076238;
      if (-1 < iVar15) {
        pdVar4 = local_e0 + iVar9;
        iVar2 = 0;
        pdVar7 = (double *)(DAT_00076240 + 0x75f04);
        do {
          iVar2 = iVar2 + 1;
          dVar23 = *pdVar7;
          pdVar7 = pdVar7 + 1;
          dVar25 = *pdVar4;
          pdVar4 = pdVar4 + 1;
          dVar21 = dVar21 + dVar23 * dVar25;
          if (iVar15 < iVar2) break;
        } while (iVar2 <= iVar16);
      }
      iVar9 = iVar9 + -1;
      *(double *)(&local_180 + iVar16 * 2) = dVar21;
      iVar16 = iVar16 + 1;
    } while (iVar9 != -1);
  }
  switch(param_5) {
  case 0:
    if (iVar8 < 0) {
      dVar21 = DAT_00076260;
      if (iVar13 != 0) {
        dVar21 = -DAT_00076260;
      }
      *param_2 = dVar21;
    }
    else {
      pdVar7 = (double *)((int)&local_180 + (iVar8 + 1) * 8);
      dVar21 = DAT_00076238;
      do {
        pdVar7 = pdVar7 + -1;
        dVar21 = dVar21 + *pdVar7;
      } while (pdVar7 != (double *)&local_180);
      if (iVar13 != 0) {
        dVar21 = -dVar21;
      }
      *param_2 = dVar21;
    }
    break;
  case 1:
    goto LAB_000760f4;
  case 2:
LAB_000760f4:
    dVar21 = DAT_00076238;
    if (-1 < iVar8) {
      pdVar7 = (double *)((int)&local_180 + (iVar8 + 1) * 8);
      do {
        pdVar7 = pdVar7 + -1;
        dVar21 = dVar21 + *pdVar7;
      } while (pdVar7 != (double *)&local_180);
    }
    dVar23 = (double)CONCAT44(uStack_17c,local_180) - dVar21;
    if (iVar13 != 0) {
      dVar21 = -dVar21;
    }
    *param_2 = dVar21;
    if (0 < iVar8) {
      pdVar7 = (double *)&local_178;
      pdVar4 = pdVar7 + iVar8;
      do {
        dVar21 = *pdVar7;
        pdVar7 = pdVar7 + 1;
        dVar23 = dVar23 + dVar21;
      } while (pdVar7 != pdVar4);
    }
    if (iVar13 != 0) {
      dVar23 = -dVar23;
    }
    param_2[1] = dVar23;
    break;
  case 3:
    dVar21 = DAT_00076238;
    if (0 < iVar8) {
      pdVar7 = (double *)(&local_180 + (iVar8 + 1) * 2);
      pdVar4 = pdVar7;
      do {
        dVar23 = pdVar4[-2] + pdVar4[-1];
        pdVar6 = pdVar4 + -1;
        *pdVar6 = pdVar4[-1] + (pdVar4[-2] - dVar23);
        pdVar4[-2] = dVar23;
        pdVar4 = pdVar6;
      } while (pdVar6 != (double *)&local_178);
      if (1 < iVar8) {
        pdVar4 = pdVar7;
        do {
          dVar23 = pdVar4[-2] + pdVar4[-1];
          pdVar6 = pdVar4 + -1;
          *pdVar6 = pdVar4[-1] + (pdVar4[-2] - dVar23);
          pdVar4[-2] = dVar23;
          pdVar4 = pdVar6;
        } while (pdVar6 != adStack_170);
        do {
          pdVar7 = pdVar7 + -1;
          dVar21 = dVar21 + *pdVar7;
        } while (pdVar7 != adStack_170);
      }
    }
    if (iVar13 == 0) {
      param_2[2] = dVar21;
      *(undefined4 *)param_2 = local_180;
      *(undefined4 *)((int)param_2 + 4) = uStack_17c;
      *(undefined4 *)(param_2 + 1) = (undefined4)local_178;
      *(undefined4 *)((int)param_2 + 0xc) = local_178._4_4_;
    }
    else {
      param_2[2] = -dVar21;
      *param_2 = -(double)CONCAT44(uStack_17c,local_180);
      param_2[1] = -(double)CONCAT44(local_178._4_4_,(undefined4)local_178);
    }
  }
  return uVar17 & 7;
}

