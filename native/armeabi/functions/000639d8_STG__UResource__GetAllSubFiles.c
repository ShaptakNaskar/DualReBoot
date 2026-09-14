/* 000639d8 | STG::UResource::GetAllSubFiles */

/* STG::UResource::GetAllSubFiles(STG::UArrayFixed<STG::FFileHash, unsigned long>&) const */

void __thiscall STG::UResource::GetAllSubFiles(UResource *this,UArrayFixed *param_1)

{
  string *psVar1;
  string *psVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  size_t sVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  undefined4 *puVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  void *pvVar17;
  int iVar18;
  void *pvVar19;
  char *pcVar20;
  uint uVar21;
  undefined4 *puVar22;
  int local_74;
  int local_6c;
  int local_54;
  int local_50;
  int local_4c;
  uint local_48 [4];
  string *local_38;
  string *local_34;
  int local_30;
  int local_2c;
  
  iVar11 = DAT_00063fe8 + 0x639f0;
  piVar12 = *(int **)(iVar11 + DAT_00063fec);
  local_2c = *piVar12;
  iVar3 = (**(code **)(*(int *)this + 0x24))();
  if (iVar3 != *(int *)(param_1 + 4)) {
    if (*(int *)(param_1 + 4) == 0) {
      *(int *)(param_1 + 4) = iVar3;
    }
    else {
      iVar14 = *(int *)param_1;
      if (iVar14 != 0) {
        iVar18 = iVar14 + *(int *)(iVar14 + -4) * 0x20;
        pvVar19 = (void *)(iVar18 + -0x1c);
        pvVar5 = pvVar19;
        while (iVar14 != (int)pvVar5 + 0x1c) {
          *(int *)((int)pvVar5 + -4) = *(int *)(iVar11 + DAT_00063ff0) + 8;
          pvVar17 = *(void **)((int)pvVar19 + (int)pvVar5 + (0x30 - iVar18));
          if ((pvVar17 != pvVar5) && (pvVar17 != (void *)0x0)) {
            uVar21 = *(int *)((int)pvVar19 + (int)pvVar5 + (0x1c - iVar18)) - (int)pvVar17;
            if (uVar21 < 0x81) {
              std::__node_alloc::_M_deallocate(pvVar17,uVar21);
            }
            else {
              operator_delete(pvVar17);
            }
          }
          pvVar5 = (void *)((int)pvVar5 + -0x20);
          iVar14 = *(int *)param_1;
        }
        operator_delete__((void *)((int)pvVar5 + 0x14));
      }
      *(undefined4 *)param_1 = 0;
      *(int *)(param_1 + 4) = iVar3;
    }
    if (iVar3 != 0) {
      puVar7 = operator_new__(iVar3 * 0x20 + 8);
      *puVar7 = 0x20;
      iVar14 = DAT_00063ff0;
      puVar7[1] = iVar3;
      iVar18 = *(int *)(iVar11 + iVar14);
      iVar14 = 0;
      puVar22 = puVar7 + 2;
      puVar13 = puVar7 + 3;
      do {
        iVar14 = iVar14 + 1;
        puVar13[-1] = iVar18 + 8;
        *(undefined4 **)((int)(puVar7 + 3) + (int)((int)puVar13 + (0xc - (int)puVar22))) = puVar13;
        *(undefined4 **)((int)puVar7 + (int)((int)puVar13 + (0x1c - (int)puVar22))) = puVar13;
        *(undefined1 *)puVar13 = 0;
        *(undefined4 *)((int)puVar7 + (int)((int)puVar13 + (0x20 - (int)puVar22))) = 0xffffffff;
        puVar13 = puVar13 + 8;
      } while (iVar14 != iVar3);
      *(undefined4 **)param_1 = puVar22;
    }
  }
  iVar3 = (**(code **)(*(int *)this + 0x14))();
  if (iVar3 == 0) {
    local_6c = 0;
  }
  else {
    iVar14 = 0;
    iVar18 = *(int *)(iVar11 + DAT_00063ff0) + 8;
    local_6c = 0;
    do {
      while( true ) {
        local_30 = -1;
        local_48[0] = local_48[0] & 0xffffff00;
        local_4c = iVar18;
        local_38 = (string *)local_48;
        local_34 = (string *)local_48;
        iVar4 = (**(code **)(*(int *)this + 0x18))(this,iVar14,&local_4c);
        psVar2 = local_34;
        psVar1 = local_38;
        if (((iVar4 != 0) && (local_30 != -1)) && (local_34 != local_38)) {
          iVar4 = *(int *)param_1 + local_6c * 0x20;
          if ((string *)(iVar4 + 4) != (string *)local_48) {
            puVar8 = *(undefined1 **)(iVar4 + 0x14);
            pvVar5 = *(void **)(iVar4 + 0x18);
            uVar21 = (int)local_38 - (int)local_34;
            sVar9 = (int)puVar8 - (int)pvVar5;
            if (sVar9 < uVar21) {
              iVar15 = 0;
              if (sVar9 != 0) {
                memmove(pvVar5,local_34,sVar9);
                iVar15 = *(int *)(iVar4 + 0x14) - *(int *)(iVar4 + 0x18);
              }
              std::string::_M_append((string *)(iVar4 + 4),(char *)(psVar2 + iVar15),(char *)psVar1)
              ;
            }
            else {
              if (uVar21 != 0) {
                memmove(pvVar5,local_34,uVar21);
                pvVar5 = *(void **)(iVar4 + 0x18);
                puVar8 = *(undefined1 **)(iVar4 + 0x14);
              }
              if ((undefined1 *)((int)pvVar5 + uVar21) != puVar8) {
                *(undefined1 *)((int)pvVar5 + uVar21) = *puVar8;
                *(undefined1 **)(iVar4 + 0x14) =
                     (undefined1 *)((int)pvVar5 + uVar21) + (*(int *)(iVar4 + 0x14) - (int)puVar8);
              }
            }
          }
          *(int *)(iVar4 + 0x1c) = local_30;
          local_6c = local_6c + 1;
        }
        local_4c = iVar18;
        if ((local_34 != (string *)local_48) && (local_34 != (string *)0x0)) break;
LAB_00063a94:
        iVar14 = iVar14 + 1;
        if (iVar14 == iVar3) goto LAB_00063bac;
      }
      if (0x80 < local_48[0] - (int)local_34) {
        operator_delete(local_34);
        goto LAB_00063a94;
      }
      iVar14 = iVar14 + 1;
      std::__node_alloc::_M_deallocate(local_34,local_48[0] - (int)local_34);
    } while (iVar14 != iVar3);
  }
LAB_00063bac:
  iVar3 = (**(code **)(*(int *)this + 0x1c))(this);
  if (iVar3 != 0) {
    local_74 = 0;
LAB_00063bd4:
    do {
      piVar6 = (int *)(**(code **)(*(int *)this + 0x20))(this,local_74);
      if (piVar6 != (int *)0x0) {
        local_54 = 0;
        local_50 = 0;
        (**(code **)(*piVar6 + 0x2c))(piVar6,&local_54);
        iVar14 = local_50;
        if (local_50 != 0) {
          iVar18 = local_6c << 5;
          iVar4 = 0;
          do {
            while( true ) {
              iVar16 = iVar4;
              iVar4 = *(int *)param_1 + iVar18;
              iVar15 = local_54 + iVar16 * 0x20;
              if ((string *)(iVar4 + 4) != (string *)(iVar15 + 4)) break;
LAB_00063c5c:
              *(undefined4 *)(iVar4 + 0x1c) = *(undefined4 *)(iVar15 + 0x1c);
              iVar18 = iVar18 + 0x20;
              iVar4 = iVar16 + 1;
              if (iVar16 + 1 == iVar14) goto LAB_00063cf4;
            }
            pvVar19 = *(void **)(iVar15 + 0x18);
            pcVar20 = *(char **)(iVar15 + 0x14);
            puVar8 = *(undefined1 **)(iVar4 + 0x14);
            pvVar5 = *(void **)(iVar4 + 0x18);
            uVar21 = (int)pcVar20 - (int)pvVar19;
            sVar9 = (int)puVar8 - (int)pvVar5;
            if (uVar21 <= sVar9) {
              if (uVar21 != 0) {
                memmove(pvVar5,pvVar19,uVar21);
                pvVar5 = *(void **)(iVar4 + 0x18);
                puVar8 = *(undefined1 **)(iVar4 + 0x14);
              }
              if ((undefined1 *)((int)pvVar5 + uVar21) != puVar8) {
                *(undefined1 *)((int)pvVar5 + uVar21) = *puVar8;
                *(undefined1 **)(iVar4 + 0x14) =
                     (undefined1 *)((int)pvVar5 + uVar21) + (*(int *)(iVar4 + 0x14) - (int)puVar8);
              }
              goto LAB_00063c5c;
            }
            iVar10 = 0;
            if (sVar9 != 0) {
              memmove(pvVar5,pvVar19,sVar9);
              iVar10 = *(int *)(iVar4 + 0x14) - *(int *)(iVar4 + 0x18);
            }
            std::string::_M_append((string *)(iVar4 + 4),(char *)((int)pvVar19 + iVar10),pcVar20);
            iVar18 = iVar18 + 0x20;
            *(undefined4 *)(iVar4 + 0x1c) = *(undefined4 *)(iVar15 + 0x1c);
            iVar4 = iVar16 + 1;
          } while (iVar16 + 1 != iVar14);
LAB_00063cf4:
          local_6c = local_6c + iVar16 + 1;
          if (local_50 != 0) {
            if (local_54 != 0) {
              iVar18 = local_54 + *(int *)(local_54 + -4) * 0x20;
              pvVar17 = (void *)(iVar18 + -0x1c);
              iVar14 = local_54;
              pvVar5 = pvVar17;
              pvVar19 = pvVar17;
              if (iVar18 != local_54) {
                do {
                  *(int *)((int)pvVar5 + -4) = *(int *)(iVar11 + DAT_00063ff0) + 8;
                  pvVar19 = *(void **)((int)pvVar17 + (int)pvVar5 + (0x30 - iVar18));
                  if ((pvVar19 != pvVar5) && (pvVar19 != (void *)0x0)) {
                    uVar21 = *(int *)((int)pvVar17 + (int)pvVar5 + (0x1c - iVar18)) - (int)pvVar19;
                    if (uVar21 < 0x81) {
                      std::__node_alloc::_M_deallocate(pvVar19,uVar21);
                      iVar14 = local_54;
                    }
                    else {
                      operator_delete(pvVar19);
                      iVar14 = local_54;
                    }
                  }
                  pvVar19 = (void *)((int)pvVar5 + -0x20);
                  iVar4 = (int)pvVar5 + -4;
                  pvVar5 = pvVar19;
                } while (iVar4 != iVar14);
              }
              operator_delete__((void *)((int)pvVar19 + 0x14));
            }
            local_54 = 0;
            local_50 = 0;
            local_74 = local_74 + 1;
            if (local_74 == iVar3) break;
            goto LAB_00063bd4;
          }
        }
      }
      local_74 = local_74 + 1;
    } while (local_74 != iVar3);
  }
  if (local_2c != *piVar12) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

