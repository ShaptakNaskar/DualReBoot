/* 00086556 | FUN_00086556 */

undefined4 FUN_00086556(uint *param_1,uint param_2,uint *param_3)

{
  uint *puVar1;
  uint *puVar2;
  char *pcVar3;
  bool bVar4;
  int *piVar5;
  uint *puVar6;
  int *piVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  char *pcVar12;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int *piVar13;
  undefined4 extraout_EDX;
  uint uVar14;
  undefined4 extraout_EDX_00;
  int unaff_EBX;
  int iVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  uint local_70;
  uint local_68;
  uint local_64;
  uint local_5c;
  int *local_54;
  int *local_50;
  undefined4 local_40;
  int local_3c;
  uint local_38 [3];
  uint local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 uStack_14;
  
  uStack_14 = 0x86561;
  FUN_0002e044();
  iVar15 = unaff_EBX + 0x15a93;
  local_54 = (int *)param_1[2];
  local_5c = *param_1;
  if ((param_2 < 0x20) || (param_3[5] == 0)) {
    if (param_2 < 0xe) {
      return 0xffffffff;
    }
LAB_000866ea:
    puVar17 = (uint *)0x0;
    puVar11 = (uint *)0x0;
  }
  else {
    uVar14 = param_1[4];
    if ((((param_1[5] != *(uint *)((int)&__DT_SYMTAB[0x5b9].st_shndx + unaff_EBX + 1)) ||
         (uVar14 != *(uint *)((int)&__DT_SYMTAB[0x5b9].st_size + unaff_EBX + 3))) ||
        (param_1[7] !=
         *(uint *)("_ZNK3STG12FFileManager9CreateDirERKNS_11UStringBaseIciEE" + unaff_EBX + 0x2d)))
       || (param_1[6] !=
           *(uint *)("_ZNK3STG12FFileManager9CreateDirERKNS_11UStringBaseIciEE" + unaff_EBX + 0x29))
       ) {
      *(uint *)((int)&__DT_SYMTAB[0x5b9].st_shndx + unaff_EBX + 1) = param_1[5];
      *(uint *)((int)&__DT_SYMTAB[0x5b9].st_size + unaff_EBX + 3) = uVar14;
      iVar10 = 1;
      uVar14 = param_1[7];
      *(uint *)("_ZNK3STG12FFileManager9CreateDirERKNS_11UStringBaseIciEE" + unaff_EBX + 0x29) =
           param_1[6];
      *(uint *)("_ZNK3STG12FFileManager9CreateDirERKNS_11UStringBaseIciEE" + unaff_EBX + 0x2d) =
           uVar14;
      iVar9 = 0;
      do {
        iVar16 = iVar10 * 0x18;
        iVar10 = iVar10 + 1;
        *(undefined4 *)(iVar9 + 0x1c48 + iVar15) = 0;
        *(undefined4 *)(iVar9 + 0x1c4c + iVar15) = 0;
        *(char **)(iVar9 + 0x1c5c + iVar15) =
             "_ZNK3STG12FFileManager9CreateDirERKNS_11UStringBaseIciEE" + unaff_EBX + 0x35 + iVar16;
        iVar9 = iVar9 + 0x18;
      } while (iVar10 != 9);
      pcVar12 = "_ZTVN3STG12FFileManagerE" + unaff_EBX + 0x16;
      pcVar12[0] = '\0';
      pcVar12[1] = '\0';
      pcVar12[2] = '\0';
      pcVar12[3] = '\0';
      *(char **)("_ZNK3STG12FFileManager9CreateDirERKNS_11UStringBaseIciEE" + unaff_EBX + 0x31) =
           "_ZNK3STG12FFileManager9CreateDirERKNS_11UStringBaseIciEE" + unaff_EBX + 0x35;
      param_3[5] = 0;
      goto LAB_000866ea;
    }
    puVar1 = *(uint **)("_ZNK3STG12FFileManager9CreateDirERKNS_11UStringBaseIciEE" +
                       unaff_EBX + 0x31);
    puVar2 = puVar1;
    puVar11 = (uint *)0x0;
    puVar17 = (uint *)0x0;
    while (puVar6 = puVar2, puVar6 != (uint *)0x0) {
      if ((*puVar6 <= *param_3) && (*param_3 < puVar6[1])) {
        local_5c = puVar6[2];
        local_50 = (int *)puVar6[4];
        piVar7 = (int *)puVar6[3];
        if (puVar6 != puVar1) {
          uVar14 = puVar6[5];
          *(uint **)("_ZNK3STG12FFileManager9CreateDirERKNS_11UStringBaseIciEE" + unaff_EBX + 0x31)
               = puVar6;
          puVar17[5] = uVar14;
          puVar6[5] = (uint)puVar1;
        }
        goto LAB_000867d3;
      }
      puVar11 = puVar6;
      if (*puVar6 == 0 && puVar6[1] == 0) break;
      puVar2 = (uint *)puVar6[5];
      if (puVar2 != (uint *)0x0) {
        puVar17 = puVar6;
      }
    }
  }
  local_68 = 0;
  local_64 = 0;
  local_50 = (int *)0x0;
  local_70 = (uint)(ushort)param_1[3];
  bVar4 = false;
  piVar7 = (int *)0x0;
  while (local_70 = local_70 - 1, local_70 != 0xffffffff) {
    iVar15 = *local_54;
    piVar13 = piVar7;
    piVar5 = local_50;
    if (iVar15 == 1) {
      uVar14 = local_5c + local_54[2];
      if ((uVar14 <= *param_3) && (*param_3 < uVar14 + local_54[5])) {
        bVar4 = true;
        local_68 = uVar14 + local_54[5];
        local_64 = uVar14;
      }
    }
    else {
      piVar13 = local_54;
      if ((iVar15 != 0x6474e550) && (piVar13 = piVar7, piVar5 = local_54, iVar15 != 2)) {
        piVar5 = local_50;
      }
    }
    local_50 = piVar5;
    local_54 = local_54 + 8;
    piVar7 = piVar13;
  }
  if (bVar4) {
    if (0x1f < param_2) {
      if ((puVar17 != (uint *)0x0) && (puVar11 != (uint *)0x0)) {
        puVar17[5] = puVar11[5];
        puVar11[5] = *(uint *)("_ZNK3STG12FFileManager9CreateDirERKNS_11UStringBaseIciEE" +
                              unaff_EBX + 0x31);
        *(uint **)("_ZNK3STG12FFileManager9CreateDirERKNS_11UStringBaseIciEE" + unaff_EBX + 0x31) =
             puVar11;
      }
      puVar11 = *(uint **)("_ZNK3STG12FFileManager9CreateDirERKNS_11UStringBaseIciEE" +
                          unaff_EBX + 0x31);
      puVar11[2] = local_5c;
      puVar11[4] = (uint)local_50;
      puVar11[3] = (uint)piVar7;
      *puVar11 = local_64;
      puVar11[1] = local_68;
    }
LAB_000867d3:
    if (piVar7 != (int *)0x0) {
      pcVar12 = (char *)(local_5c + piVar7[2]);
      if (*pcVar12 != '\x01') {
        return 1;
      }
      param_3[2] = 0;
      if (local_50 != (int *)0x0) {
        for (piVar7 = (int *)(local_5c + local_50[2]); *piVar7 != 0; piVar7 = piVar7 + 2) {
          if (*piVar7 == 3) {
            param_3[2] = piVar7[1];
            break;
          }
        }
      }
      FUN_0008650e();
      uVar8 = FUN_00085f3a(pcVar12 + 4,&local_40,extraout_ECX,extraout_ECX);
      if ((pcVar12[2] != -1) && (pcVar12[3] == ';')) {
        FUN_0008650e();
        piVar7 = (int *)FUN_00085f3a(uVar8,&local_3c,extraout_EDX,extraout_EDX);
        if (local_3c != 0) {
          if (((uint)piVar7 & 3) != 0) goto LAB_0008694f;
          pcVar3 = (char *)*param_3;
          if (pcVar12 + *piVar7 <= pcVar3) {
            uVar14 = local_3c - 1;
            if (pcVar3 < pcVar12 + piVar7[uVar14 * 2]) {
              uVar18 = 0;
              piVar13 = (int *)uVar14;
              do {
                local_50 = piVar13;
                if (local_50 <= uVar18) {
                    /* WARNING: Subroutine does not return */
                  abort();
                }
                uVar14 = (int)local_50 + uVar18 >> 1;
                piVar13 = (int *)uVar14;
              } while ((pcVar3 < pcVar12 + piVar7[uVar14 * 2]) ||
                      (uVar18 = uVar14 + 1, piVar13 = local_50,
                      pcVar12 + piVar7[uVar18 * 2] <= pcVar3));
            }
            iVar15 = (piVar7 + uVar14 * 2)[1];
            FUN_000860ff();
            iVar9 = FUN_00085ea2();
            FUN_00085f3a(pcVar12 + iVar15 + iVar9 + 8,local_38,extraout_ECX_00,extraout_ECX_00);
            iVar9 = piVar7[uVar14 * 2];
            if ((char *)*param_3 < pcVar12 + iVar9 + local_38[0]) {
              param_3[4] = (uint)(pcVar12 + iVar15);
            }
            param_3[3] = (uint)(pcVar12 + iVar9);
          }
        }
        return 1;
      }
LAB_0008694f:
      local_38[2] = param_3[1];
      local_2c = param_3[2];
      local_24 = 4;
      local_38[1] = 0;
      local_28 = local_40;
      uVar14 = FUN_0008640e(*param_3);
      param_3[4] = uVar14;
      if (uVar14 == 0) {
        return 1;
      }
      FUN_000860ff();
      FUN_0008650e();
      FUN_00085f3a(param_3[4] + 8,local_38,extraout_EDX_00,extraout_EDX_00);
      param_3[3] = local_38[0];
      return 1;
    }
  }
  return 0;
}

