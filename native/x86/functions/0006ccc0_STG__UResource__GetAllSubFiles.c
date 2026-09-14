/* 0006ccc0 | STG::UResource::GetAllSubFiles */

/* STG::UResource::GetAllSubFiles(STG::UArrayFixed<STG::FFileHash, unsigned long>&) const */

void __thiscall STG::UResource::GetAllSubFiles(UResource *this,UArrayFixed *param_1)

{
  char *pcVar1;
  void *pvVar2;
  string *psVar3;
  string *psVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  undefined1 *puVar9;
  int iVar10;
  void *pvVar11;
  int *piVar12;
  uint uVar13;
  int iVar14;
  int *piVar15;
  int unaff_EBX;
  int iVar16;
  undefined1 *puVar17;
  int iVar18;
  int iVar19;
  undefined1 *local_8c;
  int local_80;
  void *local_7c;
  int local_5c;
  int local_58;
  void *local_54;
  int local_50;
  int local_4c;
  int local_40;
  uint local_3c [4];
  string *local_2c;
  string *local_28;
  int local_24;
  int local_14;
  
  local_14 = 0x6cccb;
  FUN_0002e044();
  local_14 = **(int **)(unaff_EBX + 0x2f16d);
  iVar6 = (**(code **)(*(int *)this + 0x24))(this);
  if (iVar6 != *(int *)(param_1 + 4)) {
    if (*(int *)(param_1 + 4) == 0) {
      *(int *)(param_1 + 4) = iVar6;
    }
    else {
      iVar16 = *(int *)param_1;
      if (iVar16 != 0) {
        iVar14 = *(int *)(iVar16 + -4) * 0x20 + iVar16;
        for (iVar18 = iVar14; iVar18 != iVar16; iVar18 = iVar18 + -0x20) {
          *(int *)(iVar18 + -0x20) = *(int *)(unaff_EBX + 0x2f171) + 8;
          pvVar2 = *(void **)(iVar14 + -8 + (iVar18 - iVar14));
          if ((pvVar2 != (void *)(iVar18 + -0x1c)) && (pvVar2 != (void *)0x0)) {
            uVar7 = *(int *)(iVar14 + -0x1c + (iVar18 - iVar14)) - (int)pvVar2;
            if (uVar7 < 0x81) {
              std::__node_alloc::_M_deallocate(pvVar2,uVar7);
            }
            else {
              operator_delete(pvVar2);
            }
          }
          iVar16 = *(int *)param_1;
        }
        operator_delete__((void *)(iVar18 + -4));
      }
      *(undefined4 *)param_1 = 0;
      *(int *)(param_1 + 4) = iVar6;
    }
    if (iVar6 != 0) {
      piVar12 = operator_new__(iVar6 * 0x20 + 4);
      iVar16 = *(int *)(unaff_EBX + 0x2f171);
      piVar8 = piVar12 + 1;
      *piVar12 = iVar6;
      local_5c = 0;
      piVar15 = piVar8;
      do {
        *piVar15 = iVar16 + 8;
        local_5c = local_5c + 1;
        *(int **)((int)piVar12 + (int)piVar15 + (0x18 - (int)piVar8)) = piVar15 + 1;
        *(int **)((int)piVar12 + (int)piVar15 + (0x1c - (int)piVar8)) = piVar15 + 1;
        *(undefined1 *)(piVar15 + 1) = 0;
        *(undefined4 *)((int)piVar12 + (int)piVar15 + (0x20 - (int)piVar8)) = 0xffffffff;
        piVar15 = piVar15 + 8;
      } while (local_5c != iVar6);
      *(int **)param_1 = piVar8;
    }
  }
  iVar6 = (**(code **)(*(int *)this + 0x14))(this);
  local_80 = 0;
  if (iVar6 != 0) {
    iVar16 = *(int *)(unaff_EBX + 0x2f171) + 8;
    iVar18 = 0;
    do {
      while( true ) {
        local_2c = (string *)local_3c;
        local_3c[0] = local_3c[0] & 0xffffff00;
        local_24 = -1;
        local_40 = iVar16;
        local_28 = local_2c;
        cVar5 = (**(code **)(*(int *)this + 0x18))(this,iVar18,&local_40);
        psVar4 = local_28;
        psVar3 = local_2c;
        if (((cVar5 != '\0') && (local_24 != -1)) && (local_28 != local_2c)) {
          iVar14 = local_80 * 0x20 + *(int *)param_1;
          if ((string *)(iVar14 + 4) != (string *)local_3c) {
            local_7c = *(void **)(iVar14 + 0x18);
            uVar13 = (int)local_2c - (int)local_28;
            puVar9 = *(undefined1 **)(iVar14 + 0x14);
            uVar7 = (int)puVar9 - (int)local_7c;
            if (uVar7 < uVar13) {
              iVar19 = 0;
              if (uVar7 != 0) {
                memmove(local_7c,local_28,uVar7);
                iVar19 = *(int *)(iVar14 + 0x14) - *(int *)(iVar14 + 0x18);
              }
              std::string::_M_append
                        ((string *)(iVar14 + 4),(char *)(psVar4 + iVar19),(char *)psVar3);
            }
            else {
              if (uVar13 != 0) {
                memmove(local_7c,local_28,uVar13);
                local_7c = *(void **)(iVar14 + 0x18);
                puVar9 = *(undefined1 **)(iVar14 + 0x14);
              }
              puVar17 = (undefined1 *)((int)local_7c + uVar13);
              if (puVar17 != puVar9) {
                *puVar17 = *puVar9;
                *(int *)(iVar14 + 0x14) = (int)(puVar17 + (*(int *)(iVar14 + 0x14) - (int)puVar9));
              }
            }
          }
          *(int *)(iVar14 + 0x1c) = local_24;
          local_80 = local_80 + 1;
        }
        local_40 = iVar16;
        if ((local_28 != (string *)local_3c) && (local_28 != (string *)0x0)) break;
LAB_0006cd74:
        iVar18 = iVar18 + 1;
        if (iVar18 == iVar6) goto LAB_0006ceb8;
      }
      if (local_3c[0] - (int)local_28 < 0x81) {
        std::__node_alloc::_M_deallocate(local_28,local_3c[0] - (int)local_28);
        goto LAB_0006cd74;
      }
      iVar18 = iVar18 + 1;
      operator_delete(local_28);
    } while (iVar18 != iVar6);
  }
LAB_0006ceb8:
  iVar6 = (**(code **)(*(int *)this + 0x1c))(this);
  if (iVar6 != 0) {
    local_7c = (void *)0x0;
    do {
      piVar8 = (int *)(**(code **)(*(int *)this + 0x20))(this,local_7c);
      if (piVar8 != (int *)0x0) {
        local_50 = 0;
        local_4c = 0;
        (**(code **)(*piVar8 + 0x2c))(piVar8,&local_50);
        iVar16 = local_4c;
        if (local_4c != 0) {
          iVar18 = 0;
          local_5c = local_80 << 5;
          do {
            iVar14 = iVar18 * 0x20 + local_50;
            iVar19 = local_5c + *(int *)param_1;
            if ((string *)(iVar19 + 4) != (string *)(iVar14 + 4)) {
              pcVar1 = *(char **)(iVar14 + 0x14);
              pvVar2 = *(void **)(iVar14 + 0x18);
              uVar7 = (int)pcVar1 - (int)pvVar2;
              local_8c = *(undefined1 **)(iVar19 + 0x14);
              local_54 = *(void **)(iVar19 + 0x18);
              uVar13 = (int)local_8c - (int)local_54;
              if (uVar13 < uVar7) {
                iVar10 = 0;
                if (uVar13 != 0) {
                  memmove(local_54,pvVar2,uVar13);
                  iVar10 = *(int *)(iVar19 + 0x14) - *(int *)(iVar19 + 0x18);
                }
                std::string::_M_append((string *)(iVar19 + 4),(char *)(iVar10 + (int)pvVar2),pcVar1)
                ;
              }
              else {
                if (uVar7 != 0) {
                  memmove(local_54,pvVar2,uVar7);
                  local_8c = *(undefined1 **)(iVar19 + 0x14);
                  local_54 = *(void **)(iVar19 + 0x18);
                }
                puVar9 = (undefined1 *)((int)local_54 + uVar7);
                if (puVar9 != local_8c) {
                  *puVar9 = *local_8c;
                  *(int *)(iVar19 + 0x14) =
                       (int)(puVar9 + (*(int *)(iVar19 + 0x14) - (int)local_8c));
                }
              }
            }
            iVar18 = iVar18 + 1;
            local_5c = local_5c + 0x20;
            *(undefined4 *)(iVar19 + 0x1c) = *(undefined4 *)(iVar14 + 0x1c);
          } while (iVar18 != iVar16);
          local_80 = local_80 + iVar18;
          if (local_4c != 0) {
            local_58 = local_50;
            if (local_50 != 0) {
              iVar18 = *(int *)(local_50 + -4) * 0x20 + local_50;
              iVar16 = iVar18;
              while (iVar16 != local_58) {
                iVar14 = iVar16 + -0x20;
                iVar19 = iVar14 - iVar18;
                pvVar11 = (void *)(iVar16 + -0x1c);
                *(int *)(iVar18 + iVar19) = *(int *)(unaff_EBX + 0x2f171) + 8;
                pvVar2 = *(void **)(iVar19 + 0x18 + iVar18);
                iVar16 = iVar14;
                if ((pvVar2 != pvVar11) && (pvVar2 != (void *)0x0)) {
                  uVar7 = *(int *)(iVar19 + 4 + iVar18) - (int)pvVar2;
                  if (uVar7 < 0x81) {
                    std::__node_alloc::_M_deallocate(pvVar2,uVar7);
                    local_58 = local_50;
                  }
                  else {
                    operator_delete(pvVar2);
                    local_58 = local_50;
                  }
                }
              }
              operator_delete__((void *)(iVar16 + -4));
            }
            local_50 = 0;
            local_4c = 0;
          }
        }
      }
      local_7c = (void *)((int)local_7c + 1);
    } while (local_7c != (void *)iVar6);
  }
  if (local_14 == **(int **)(unaff_EBX + 0x2f16d)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002e000();
}

