/* 0006361c | STG::UResource::GetAllUniqueSubFiles */

/* STG::UResource::GetAllUniqueSubFiles(STG::UArrayFixed<STG::FFileHash, unsigned long>&) const */

void __thiscall STG::UResource::GetAllUniqueSubFiles(UResource *this,UArrayFixed *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  size_t __n;
  int iVar8;
  size_t __n_00;
  void *pvVar9;
  int iVar10;
  void *pvVar11;
  int iVar12;
  void *pvVar13;
  undefined4 *puVar14;
  int iVar15;
  int iVar16;
  undefined4 *puVar17;
  char *pcVar18;
  undefined4 *local_34;
  int local_30;
  undefined4 *local_2c;
  
  local_30 = 0;
  local_2c = (undefined4 *)0x0;
  (**(code **)(*(int *)this + 0x2c))(this,&local_30);
  puVar1 = local_2c;
  iVar8 = DAT_000639d0 + 0x63658;
  if (local_2c == (undefined4 *)0x0) {
    local_34 = local_2c;
    puVar17 = (undefined4 *)0x0;
    puVar4 = local_2c;
  }
  else {
    puVar2 = operator_new__((int)local_2c * 0x20 + 8);
    *puVar2 = 0x20;
    iVar16 = DAT_000639d4;
    puVar2[1] = puVar1;
    puVar4 = (undefined4 *)0x0;
    iVar16 = *(int *)(iVar8 + iVar16);
    local_34 = puVar2 + 2;
    puVar17 = puVar2 + 3;
    do {
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar17[-1] = iVar16 + 8;
      *(undefined4 **)((int)(puVar2 + 3) + (int)((int)puVar17 + (0xc - (int)local_34))) = puVar17;
      *(undefined4 **)((int)puVar2 + (int)((int)puVar17 + (0x1c - (int)local_34))) = puVar17;
      *(undefined1 *)puVar17 = 0;
      *(undefined4 *)((int)puVar2 + (int)((int)puVar17 + (0x20 - (int)local_34))) = 0xffffffff;
      puVar17 = puVar17 + 8;
    } while (puVar4 != puVar1);
    puVar4 = local_2c;
    if (local_2c == (undefined4 *)0x0) {
      puVar17 = (undefined4 *)0x0;
    }
    else {
      puVar14 = (undefined4 *)0x0;
      puVar17 = (undefined4 *)0x0;
      do {
        iVar15 = local_30 + (int)puVar14 * 0x20;
        iVar16 = *(int *)(iVar15 + 0x1c);
        if (puVar2[9] != iVar16) {
          puVar3 = puVar2 + 7;
          puVar7 = (undefined4 *)0x0;
          do {
            puVar3 = puVar3 + 8;
            puVar7 = (undefined4 *)((int)puVar7 + 1);
            if (puVar7 == puVar1) {
              if ((string *)(local_34 + (int)puVar17 * 8 + 1) != (string *)(iVar15 + 4)) {
                pvVar9 = *(void **)(iVar15 + 0x18);
                pcVar18 = *(char **)(iVar15 + 0x14);
                puVar5 = (undefined1 *)local_34[(int)puVar17 * 8 + 5];
                pvVar11 = (void *)local_34[(int)puVar17 * 8 + 6];
                __n_00 = (int)pcVar18 - (int)pvVar9;
                __n = (int)puVar5 - (int)pvVar11;
                if (__n < __n_00) {
                  iVar16 = 0;
                  if (__n != 0) {
                    memmove(pvVar11,pvVar9,__n);
                    iVar16 = local_34[(int)puVar17 * 8 + 5] - local_34[(int)puVar17 * 8 + 6];
                  }
                  std::string::_M_append
                            ((string *)(local_34 + (int)puVar17 * 8 + 1),
                             (char *)((int)pvVar9 + iVar16),pcVar18);
                }
                else {
                  if (__n_00 != 0) {
                    memmove(pvVar11,pvVar9,__n_00);
                    pvVar11 = (void *)local_34[(int)puVar17 * 8 + 6];
                    puVar5 = (undefined1 *)local_34[(int)puVar17 * 8 + 5];
                  }
                  if ((undefined1 *)((int)pvVar11 + __n_00) != puVar5) {
                    *(undefined1 *)((int)pvVar11 + __n_00) = *puVar5;
                    iVar16 = *(int *)(iVar15 + 0x1c);
                    local_34[(int)puVar17 * 8 + 5] =
                         (undefined1 *)((int)pvVar11 + __n_00) +
                         (local_34[(int)puVar17 * 8 + 5] - (int)puVar5);
                    puVar4 = local_2c;
                    goto LAB_000637c4;
                  }
                }
                iVar16 = *(int *)(iVar15 + 0x1c);
                puVar4 = local_2c;
              }
LAB_000637c4:
              local_34[(int)puVar17 * 8 + 7] = iVar16;
              puVar17 = (undefined4 *)((int)puVar17 + 1);
              break;
            }
          } while (*(int *)((int)puVar2 + (int)puVar3 + (8 - (int)puVar2)) != iVar16);
        }
        puVar14 = (undefined4 *)((int)puVar14 + 1);
      } while (puVar14 < puVar4);
    }
  }
  if ((*(int *)(param_1 + 4) != 0) && (iVar16 = *(int *)param_1, iVar16 != 0)) {
    iVar15 = iVar16 + *(int *)(iVar16 + -4) * 0x20;
    pvVar9 = (void *)(iVar15 + -0x1c);
    pvVar11 = pvVar9;
    while( true ) {
      if (iVar16 == (int)pvVar11 + 0x1c) break;
      *(int *)((int)pvVar11 + -4) = *(int *)(iVar8 + DAT_000639d4) + 8;
      pvVar13 = *(void **)((int)pvVar9 + (int)pvVar11 + (0x30 - iVar15));
      if ((pvVar13 != pvVar11) && (pvVar13 != (void *)0x0)) {
        uVar6 = *(int *)((int)pvVar9 + (int)pvVar11 + (0x1c - iVar15)) - (int)pvVar13;
        if (uVar6 < 0x81) {
          std::__node_alloc::_M_deallocate(pvVar13,uVar6);
        }
        else {
          operator_delete(pvVar13);
        }
      }
      iVar16 = *(int *)param_1;
      pvVar11 = (void *)((int)pvVar11 + -0x20);
    }
    operator_delete__((void *)((int)pvVar11 + 0x14));
    puVar4 = local_2c;
  }
  if (puVar1 < puVar17) {
    *(undefined4 **)(param_1 + 4) = puVar1;
  }
  else {
    *(undefined4 **)(param_1 + 4) = puVar17;
  }
  *(undefined4 **)param_1 = local_34;
  if ((puVar4 != (undefined4 *)0x0) && (local_30 != 0)) {
    iVar12 = local_30 + *(int *)(local_30 + -4) * 0x20;
    pvVar13 = (void *)(iVar12 + -0x1c);
    iVar15 = (int)pvVar13 - iVar12;
    iVar16 = local_30;
    pvVar11 = pvVar13;
    pvVar9 = pvVar13;
    if (iVar12 != local_30) {
      do {
        *(int *)(iVar15 + iVar12 + -4) = *(int *)(iVar8 + DAT_000639d4) + 8;
        pvVar9 = *(void **)((int)pvVar13 + iVar15 + 0x30);
        if ((pvVar9 != pvVar11) && (pvVar9 != (void *)0x0)) {
          uVar6 = *(int *)((int)pvVar13 + iVar15 + 0x1c) - (int)pvVar9;
          if (uVar6 < 0x81) {
            std::__node_alloc::_M_deallocate(pvVar9,uVar6);
            iVar16 = local_30;
          }
          else {
            operator_delete(pvVar9);
            iVar16 = local_30;
          }
        }
        pvVar9 = (void *)((int)pvVar11 + -0x20);
        iVar15 = (int)pvVar9 - iVar12;
        iVar10 = (int)pvVar11 + -4;
        pvVar11 = pvVar9;
      } while (iVar10 != iVar16);
    }
    operator_delete__((void *)((int)pvVar9 + 0x14));
  }
  return;
}

