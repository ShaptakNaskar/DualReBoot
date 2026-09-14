/* 000869e9 | FUN_000869e9 */

int __regparm3 FUN_000869e9(uint *param_1)

{
  size_t __size;
  byte bVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  int *piVar10;
  uint uVar11;
  undefined4 extraout_EDX;
  uint uVar12;
  int unaff_EBX;
  undefined8 uVar13;
  uint *local_40;
  uint local_3c;
  code *local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  int local_28;
  uint *local_24;
  void *local_20;
  undefined4 uStack_14;
  
  uStack_14 = 0x869f6;
  uVar13 = FUN_0002e044();
  uVar11 = (uint)((ulonglong)uVar13 >> 0x20);
  bVar1 = *(byte *)((int)uVar13 + 0x10);
  if ((bVar1 & 1) != 0) goto LAB_00086cff;
  local_30 = param_1[4] >> 0xb;
  if (local_30 == 0) {
    if ((bVar1 & 2) == 0) {
      local_30 = FUN_00086110();
      if (local_30 != 0xffffffff) goto LAB_00086a6b;
LAB_00086a50:
      param_1[4] = 0;
      *(undefined2 *)(param_1 + 4) = 0x7f8;
      param_1[3] = (uint)("_ZN3STG9FFileDiskD1Ev" + unaff_EBX + 10);
    }
    else {
      for (piVar10 = (int *)param_1[3]; *piVar10 != 0; piVar10 = piVar10 + 1) {
        iVar4 = FUN_00086110();
        if (iVar4 == -1) goto LAB_00086a50;
        local_30 = local_30 + iVar4;
      }
LAB_00086a6b:
      uVar12 = param_1[4];
      param_1[4] = uVar12 & 0x7ff | local_30 << 0xb;
      if ((local_30 & 0x1fffff) != local_30) {
        param_1[4] = uVar12 & 0x7ff;
      }
      if (local_30 != 0) goto LAB_00086a9d;
    }
  }
  else {
LAB_00086a9d:
    __size = local_30 * 4 + 8;
    local_24 = malloc(__size);
    if (local_24 != (uint *)0x0) {
      local_24[1] = 0;
      local_20 = malloc(__size);
      if (local_20 != (void *)0x0) {
        *(undefined4 *)((int)local_20 + 4) = 0;
      }
      if ((param_1[4] & 2) == 0) {
        FUN_0008622f(param_1[3]);
      }
      else {
        for (piVar10 = (int *)param_1[3]; *piVar10 != 0; piVar10 = piVar10 + 1) {
          FUN_0008622f(*piVar10);
        }
      }
      pvVar2 = local_20;
      puVar7 = local_24;
      if ((local_24 != (uint *)0x0) && (local_24[1] != local_30)) {
LAB_00086c2e:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      local_38 = (code *)(unaff_EBX + -0x666);
      if ((param_1[4] & 4) == 0) {
        local_38 = (code *)(unaff_EBX + -0xc7a);
        if ((param_1[4] & 0x7f8) != 0) {
          local_38 = (code *)(unaff_EBX + -0x6e4);
        }
      }
      if (local_20 == (void *)0x0) {
        FUN_00085e2d(local_24);
      }
      else {
        uVar12 = local_24[1];
        puVar6 = (uint *)("_ZN3STG9FFileDiskD1Ev" + unaff_EBX + 0x12);
        for (local_34 = 0; uVar3 = uVar12, local_34 != uVar12; local_34 = local_34 + 1) {
          while ((puVar6 != (uint *)("_ZN3STG9FFileDiskD1Ev" + unaff_EBX + 0x12) &&
                 (iVar4 = (*local_38)(param_1,puVar7[local_34 + 2],*puVar6,uVar3), iVar4 < 0))) {
            uVar3 = (int)puVar6 - (int)(puVar7 + 2) >> 2;
            puVar6 = *(uint **)((int)pvVar2 + uVar3 * 4 + 8);
            *(undefined4 *)((int)pvVar2 + uVar3 * 4 + 8) = 0;
          }
          *(uint **)((int)pvVar2 + local_34 * 4 + 8) = puVar6;
          puVar6 = puVar7 + local_34 + 2;
        }
        local_34 = 0;
        local_3c = 0;
        for (uVar3 = 0; uVar3 != uVar12; uVar3 = uVar3 + 1) {
          if (*(int *)((int)pvVar2 + uVar3 * 4 + 8) == 0) {
            *(uint *)((int)pvVar2 + local_34 * 4 + 8) = puVar7[uVar3 + 2];
            local_34 = local_34 + 1;
          }
          else {
            puVar7[local_3c + 2] = puVar7[uVar3 + 2];
            local_3c = local_3c + 1;
          }
        }
        puVar7[1] = local_3c;
        *(uint *)((int)pvVar2 + 4) = local_34;
        if (*(int *)((int)local_20 + 4) + local_24[1] != local_30) goto LAB_00086c2e;
        FUN_00085e2d(local_20);
        pvVar2 = local_20;
        puVar6 = local_24;
        puVar7 = *(uint **)((int)local_20 + 4);
        if (puVar7 != (uint *)0x0) {
          local_30 = local_24[1];
          local_40 = local_24 + (int)puVar7;
          do {
            puVar7 = (uint *)((int)puVar7 + -1);
            uVar12 = *(uint *)((int)pvVar2 + (int)puVar7 * 4 + 8);
            puVar8 = puVar7;
            while (local_30 != 0) {
              iVar4 = (*local_38)(param_1,puVar6[local_30 + 1],uVar12,puVar8);
              if (iVar4 < 1) break;
              local_40[local_30 + 1] = puVar6[local_30 + 1];
              puVar8 = local_40;
              local_30 = local_30 - 1;
            }
            local_40 = local_40 + -1;
            puVar6[(int)puVar7 + local_30 + 2] = uVar12;
          } while (puVar7 != (uint *)0x0);
          puVar6[1] = puVar6[1] + *(int *)((int)pvVar2 + 4);
        }
        free(local_20);
      }
      *local_24 = param_1[3];
      param_1[3] = (uint)local_24;
      *(byte *)(param_1 + 4) = (byte)param_1[4] | 1;
    }
  }
  if (uVar11 < *param_1) {
    return 0;
  }
LAB_00086cff:
  uVar12 = param_1[4];
  if ((uVar12 & 1) == 0) {
    if ((uVar12 & 2) == 0) {
      iVar4 = FUN_0008640e(uVar11);
      return iVar4;
    }
    for (piVar10 = (int *)param_1[3]; *piVar10 != 0; piVar10 = piVar10 + 1) {
      iVar4 = FUN_0008640e(uVar11);
      if (iVar4 != 0) {
        return iVar4;
      }
    }
  }
  else if ((uVar12 & 4) == 0) {
    if ((param_1[4] & 0x7f8) == 0) {
      uVar12 = 0;
      uVar3 = *(uint *)(param_1[3] + 4);
      while (uVar9 = uVar3, uVar12 < uVar9) {
        uVar3 = uVar9 + uVar12 >> 1;
        iVar4 = *(int *)(param_1[3] + 8 + uVar3 * 4);
        if (*(uint *)(iVar4 + 8) <= uVar11) {
          if (uVar11 < *(int *)(iVar4 + 0xc) + *(uint *)(iVar4 + 8)) {
            return iVar4;
          }
          uVar12 = uVar3 + 1;
          uVar3 = uVar9;
        }
      }
    }
    else {
      uVar12 = param_1[3];
      FUN_00085ef2();
      local_30 = 0;
      uVar3 = *(uint *)(uVar12 + 4);
      while (uVar9 = uVar3, local_30 < uVar9) {
        uVar3 = local_30 + uVar9 >> 1;
        iVar4 = *(int *)(uVar12 + 8 + uVar3 * 4);
        uVar5 = FUN_00085f3a(iVar4 + 8,&local_2c,uVar12,uVar12);
        FUN_00085f3a(uVar5,&local_28);
        if (local_2c <= uVar11) {
          if (uVar11 < local_2c + local_28) {
            return iVar4;
          }
          local_30 = uVar3 + 1;
          uVar3 = uVar9;
        }
      }
    }
  }
  else {
    uVar12 = param_1[3];
    local_38 = (code *)0x0;
    uVar3 = *(uint *)(uVar12 + 4);
    while (local_30 = uVar3, local_38 < local_30) {
      uVar3 = local_30 + (int)local_38 >> 1;
      iVar4 = *(int *)(uVar12 + 8 + uVar3 * 4);
      FUN_000860ff();
      FUN_00085ef2();
      uVar5 = FUN_00085f3a(iVar4 + 8,&local_2c,extraout_EDX,extraout_EDX);
      FUN_00085f3a(uVar5,&local_28);
      if (local_2c <= uVar11) {
        if (uVar11 < local_2c + local_28) {
          return iVar4;
        }
        local_38 = (code *)(uVar3 + 1);
        uVar3 = local_30;
      }
    }
  }
  return 0;
}

