/* 0004d33c | FUN_0004d33c */

/* WARNING: Removing unreachable block (ram,0x0004d3f0) */

void FUN_0004d33c(FFileBase *param_1,int *param_2)

{
  uchar uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined1 *puVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  bool bVar15;
  bool bVar16;
  undefined1 *local_50;
  int local_48;
  uint local_44;
  undefined1 *local_40;
  uchar local_35;
  uint local_34;
  uint local_30;
  uint local_2c [2];
  
  STG::FFileBase::Read(param_1,(uchar *)&local_34,4);
  uVar2 = local_34;
  if (local_34 != param_2[1]) {
    if (param_2[1] == 0) {
      param_2[1] = local_34;
      iVar9 = DAT_0004d8d4;
    }
    else {
      iVar9 = *param_2;
      if (iVar9 != 0) {
        iVar12 = iVar9 + *(int *)(iVar9 + -4) * 0x1c;
        if (iVar9 != iVar12) {
          do {
            iVar10 = iVar12 + -0x1c;
            (*(code *)**(undefined4 **)(iVar12 + -0x1c))(iVar10);
            iVar9 = *param_2;
            iVar12 = iVar10;
          } while (iVar9 != iVar10);
        }
        operator_delete__((void *)(iVar9 + -8));
      }
      *param_2 = 0;
      param_2[1] = uVar2;
      iVar9 = DAT_0004d8d4;
    }
    DAT_0004d8d4 = iVar9;
    if (uVar2 != 0) {
      puVar11 = operator_new__(uVar2 * 0x1c + 8);
      iVar9 = *(int *)(iVar9 + 0x4d7d4);
      uVar6 = 0;
      puVar13 = puVar11 + 2;
      puVar11[1] = uVar2;
      *puVar11 = 0x1c;
      puVar5 = puVar11 + 3;
      do {
        uVar6 = uVar6 + 1;
        puVar5[-1] = iVar9 + 8;
        *(undefined4 **)((int)(puVar11 + 3) + (int)((int)puVar5 + (0xc - (int)puVar13))) = puVar5;
        *(undefined4 **)((int)puVar11 + (int)((int)puVar5 + (0x1c - (int)puVar13))) = puVar5;
        *(undefined1 *)puVar5 = 0;
        puVar5 = puVar5 + 7;
      } while (uVar6 != uVar2);
      *param_2 = (int)puVar13;
    }
  }
  if (local_34 != 0) {
    local_48 = 0;
    local_44 = 0;
    do {
      iVar9 = *param_2 + local_48;
      STG::FFileBase::Read(param_1,(uchar *)&local_30,4);
      puVar5 = *(undefined4 **)(iVar9 + 0x18);
      if (puVar5 != *(undefined4 **)(iVar9 + 0x14)) {
        *(undefined1 *)puVar5 = 0;
        puVar5 = *(undefined4 **)(iVar9 + 0x18);
        *(undefined4 **)(iVar9 + 0x14) = puVar5;
      }
      if (local_30 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
        std::__stl_throw_length_error((char *)(DAT_0004d8d8 + 0x4d8b8));
      }
      puVar11 = (undefined4 *)(iVar9 + 4);
      uVar2 = local_30 + 1;
      if (puVar11 == puVar5) {
        uVar6 = 0x10;
      }
      else {
        uVar6 = *(int *)(iVar9 + 4) - (int)puVar5;
      }
      if (uVar6 <= uVar2) {
        if (uVar2 == 0) {
          puVar5 = (undefined4 *)0x0;
          local_50 = (undefined1 *)0x0;
          puVar13 = (undefined4 *)0x0;
        }
        else {
          local_2c[0] = uVar2;
          if (uVar2 < 0x81) {
            puVar5 = (undefined4 *)std::__node_alloc::_M_allocate(local_2c);
            puVar4 = *(undefined4 **)(iVar9 + 0x18);
            uVar2 = *(int *)(iVar9 + 0x14) - (int)puVar4;
            local_50 = (undefined1 *)((int)puVar5 + local_2c[0]);
          }
          else {
            puVar5 = operator_new(uVar2);
            puVar4 = *(undefined4 **)(iVar9 + 0x18);
            uVar2 = *(int *)(iVar9 + 0x14) - (int)puVar4;
            local_50 = (undefined1 *)((int)puVar5 + local_2c[0]);
          }
          puVar13 = puVar5;
          if (0 < (int)uVar2) {
            uVar6 = uVar2 >> 2;
            bVar16 = puVar5 + 1 <= puVar4;
            bVar15 = puVar4 == puVar5 + 1;
            if (!bVar16 || bVar15) {
              bVar16 = puVar4 + 1 <= puVar5;
              bVar15 = puVar5 == puVar4 + 1;
            }
            uVar3 = uVar2;
            if (uVar6 == 0 ||
                ((uVar2 < 4 || (((uint)puVar5 | (uint)puVar4) & 3) != 0) || (!bVar16 || bVar15))) {
LAB_0004d710:
              do {
                uVar3 = uVar3 - 1;
                *(undefined1 *)puVar13 = *(undefined1 *)puVar4;
                puVar4 = (undefined4 *)((int)puVar4 + 1);
                puVar13 = (undefined4 *)((int)puVar13 + 1);
              } while (0 < (int)uVar3);
            }
            else {
              uVar3 = 0;
              puVar14 = puVar4;
              do {
                uVar3 = uVar3 + 1;
                *puVar13 = *puVar14;
                puVar13 = puVar13 + 1;
                puVar14 = puVar14 + 1;
              } while (uVar3 < uVar6);
              puVar4 = puVar4 + uVar6;
              puVar13 = puVar5 + uVar6;
              uVar3 = uVar2 + uVar6 * -4;
              if (uVar2 != uVar6 * 4) goto LAB_0004d710;
            }
            puVar13 = (undefined4 *)((int)puVar5 + uVar2);
          }
        }
        *(undefined1 *)puVar13 = 0;
        puVar4 = *(undefined4 **)(iVar9 + 0x18);
        if ((puVar11 != puVar4) && (puVar4 != (undefined4 *)0x0)) {
          uVar2 = *(int *)(iVar9 + 4) - (int)puVar4;
          if (uVar2 < 0x81) {
            std::__node_alloc::_M_deallocate(puVar4,uVar2);
          }
          else {
            operator_delete(puVar4);
          }
        }
        *(undefined4 **)(iVar9 + 0x14) = puVar13;
        *(undefined1 **)(iVar9 + 4) = local_50;
        *(undefined4 **)(iVar9 + 0x18) = puVar5;
      }
      if (local_30 != 0) {
        uVar2 = 0;
        do {
          STG::FFileBase::Read(param_1,&local_35,1);
          uVar1 = local_35;
          puVar5 = *(undefined4 **)(iVar9 + 0x18);
          puVar13 = *(undefined4 **)(iVar9 + 0x14);
          if (puVar11 == puVar5) {
            puVar8 = (undefined1 *)((int)puVar11 + (0x10 - (int)puVar13));
          }
          else {
            puVar8 = (undefined1 *)(*(int *)(iVar9 + 4) - (int)puVar13);
          }
          if (puVar8 == (undefined1 *)0x1) {
            uVar6 = (int)puVar13 - (int)puVar5;
            if (uVar6 == 0xfffffffe) {
                    /* WARNING: Subroutine does not return */
              std::__stl_throw_length_error((char *)((int)&DAT_0004d8d4 + DAT_0004d8dc));
            }
            uVar3 = uVar6 * 2 + 1;
            if (uVar6 == 0) {
              uVar3 = 2;
            }
            if ((uVar3 == 0xffffffff) || (uVar3 < uVar6)) {
              local_2c[0] = 0xfffffffe;
LAB_0004d630:
              puVar4 = operator_new(local_2c[0]);
LAB_0004d4d4:
              puVar5 = *(undefined4 **)(iVar9 + 0x18);
              uVar6 = *(int *)(iVar9 + 0x14) - (int)puVar5;
              local_40 = (undefined1 *)((int)puVar4 + local_2c[0]);
            }
            else {
              if (uVar3 != 0) {
                local_2c[0] = uVar3;
                if (0x80 < uVar3) goto LAB_0004d630;
                puVar4 = (undefined4 *)std::__node_alloc::_M_allocate(local_2c);
                goto LAB_0004d4d4;
              }
              puVar4 = (undefined4 *)0x0;
              local_40 = (undefined1 *)0x0;
            }
            puVar13 = puVar4;
            if (0 < (int)uVar6) {
              uVar3 = uVar6 >> 2;
              bVar16 = puVar5 + 1 <= puVar4;
              bVar15 = puVar4 == puVar5 + 1;
              if (!bVar16 || bVar15) {
                bVar16 = puVar4 + 1 <= puVar5;
                bVar15 = puVar5 == puVar4 + 1;
              }
              uVar7 = uVar6;
              if (uVar3 == 0 ||
                  ((uVar6 < 4 || (((uint)puVar4 | (uint)puVar5) & 3) != 0) || (!bVar16 || bVar15)))
              {
LAB_0004d598:
                do {
                  uVar7 = uVar7 - 1;
                  *(undefined1 *)puVar13 = *(undefined1 *)puVar5;
                  puVar5 = (undefined4 *)((int)puVar5 + 1);
                  puVar13 = (undefined4 *)((int)puVar13 + 1);
                } while (0 < (int)uVar7);
              }
              else {
                uVar7 = 0;
                puVar14 = puVar5;
                do {
                  uVar7 = uVar7 + 1;
                  *puVar13 = *puVar14;
                  puVar13 = puVar13 + 1;
                  puVar14 = puVar14 + 1;
                } while (uVar7 < uVar3);
                puVar5 = puVar5 + uVar3;
                puVar13 = puVar4 + uVar3;
                uVar7 = uVar6 + uVar3 * -4;
                if (uVar3 * 4 != uVar6) goto LAB_0004d598;
              }
              puVar13 = (undefined4 *)((int)puVar4 + uVar6);
            }
            *(undefined1 *)puVar13 = 0;
            puVar5 = *(undefined4 **)(iVar9 + 0x18);
            if ((puVar11 != puVar5) && (puVar5 != (undefined4 *)0x0)) {
              uVar6 = *(int *)(iVar9 + 4) - (int)puVar5;
              if (uVar6 < 0x81) {
                std::__node_alloc::_M_deallocate(puVar5,uVar6);
              }
              else {
                operator_delete(puVar5);
              }
            }
            *(undefined4 **)(iVar9 + 0x14) = puVar13;
            *(undefined4 **)(iVar9 + 0x18) = puVar4;
            *(undefined1 **)(iVar9 + 4) = local_40;
          }
          *(undefined1 *)((int)puVar13 + 1) = 0;
          uVar2 = uVar2 + 1;
          **(uchar **)(iVar9 + 0x14) = uVar1;
          *(int *)(iVar9 + 0x14) = *(int *)(iVar9 + 0x14) + 1;
        } while (uVar2 < local_30);
      }
      local_44 = local_44 + 1;
      local_48 = local_48 + 0x1c;
    } while (local_44 < local_34);
  }
  return;
}

