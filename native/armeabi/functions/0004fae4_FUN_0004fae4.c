/* 0004fae4 | FUN_0004fae4 */

/* WARNING: Removing unreachable block (ram,0x0004fb98) */

void FUN_0004fae4(FFileBase *param_1,int *param_2)

{
  uchar uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *puVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  bool bVar14;
  bool bVar15;
  undefined1 *local_50;
  int local_48;
  uint local_44;
  undefined1 *local_40;
  uchar local_35;
  uint local_34;
  uint local_30;
  uint local_2c [2];
  
  STG::FFileBase::Read(param_1,(uchar *)&local_34,4);
  uVar5 = local_34;
  if (local_34 != param_2[1]) {
    if (param_2[1] == 0) {
      param_2[1] = local_34;
    }
    else {
      iVar9 = *param_2;
      if (iVar9 != 0) {
        iVar11 = *(int *)(iVar9 + -4) * 0x1c + iVar9;
        if (iVar9 != iVar11) {
          do {
            puVar4 = (undefined4 *)(iVar11 + -0x1c);
            iVar11 = iVar11 + -0x1c;
            (**(code **)*puVar4)(iVar11);
            iVar9 = *param_2;
          } while (iVar9 != iVar11);
        }
        operator_delete__((void *)(iVar9 + -8));
      }
      *param_2 = 0;
      param_2[1] = uVar5;
    }
    if (uVar5 != 0) {
      puVar10 = operator_new__(uVar5 * 0x1c + 8);
      uVar8 = 0;
      iVar9 = *(int *)(DAT_00050078 + 0x4ff84);
      *puVar10 = 0x1c;
      puVar10[1] = uVar5;
      puVar12 = puVar10 + 2;
      puVar4 = puVar10 + 3;
      do {
        uVar8 = uVar8 + 1;
        puVar4[-1] = iVar9 + 8;
        *(undefined4 **)((int)(puVar10 + 3) + (int)((int)puVar4 + (0xc - (int)puVar12))) = puVar4;
        *(undefined4 **)((int)puVar10 + (int)((int)puVar4 + (0x1c - (int)puVar12))) = puVar4;
        *(undefined1 *)puVar4 = 0;
        puVar4 = puVar4 + 7;
      } while (uVar8 != uVar5);
      *param_2 = (int)puVar12;
    }
  }
  if (local_34 != 0) {
    local_48 = 0;
    local_44 = 0;
    do {
      iVar9 = *param_2 + local_48;
      STG::FFileBase::Read(param_1,(uchar *)&local_30,4);
      puVar4 = *(undefined4 **)(iVar9 + 0x18);
      if (puVar4 != *(undefined4 **)(iVar9 + 0x14)) {
        *(undefined1 *)puVar4 = 0;
        puVar4 = *(undefined4 **)(iVar9 + 0x18);
        *(undefined4 **)(iVar9 + 0x14) = puVar4;
      }
      if (local_30 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
        std::__stl_throw_length_error((char *)(DAT_0005007c + 0x5005c));
      }
      puVar10 = (undefined4 *)(iVar9 + 4);
      if (puVar10 == puVar4) {
        uVar5 = 0x10;
      }
      else {
        uVar5 = *(int *)(iVar9 + 4) - (int)puVar4;
      }
      uVar8 = local_30 + 1;
      if (uVar5 <= uVar8) {
        if (uVar8 == 0) {
          puVar4 = (undefined4 *)0x0;
          local_50 = (undefined1 *)0x0;
          puVar12 = (undefined4 *)0x0;
        }
        else {
          local_2c[0] = uVar8;
          if (uVar8 < 0x81) {
            puVar4 = (undefined4 *)std::__node_alloc::_M_allocate(local_2c);
            puVar3 = *(undefined4 **)(iVar9 + 0x18);
            uVar5 = *(int *)(iVar9 + 0x14) - (int)puVar3;
            local_50 = (undefined1 *)((int)puVar4 + local_2c[0]);
          }
          else {
            puVar4 = operator_new(uVar8);
            puVar3 = *(undefined4 **)(iVar9 + 0x18);
            uVar5 = *(int *)(iVar9 + 0x14) - (int)puVar3;
            local_50 = (undefined1 *)((int)puVar4 + local_2c[0]);
          }
          puVar12 = puVar4;
          if (0 < (int)uVar5) {
            bVar15 = puVar4 + 1 <= puVar3;
            bVar14 = puVar3 == puVar4 + 1;
            if (!bVar15 || bVar14) {
              bVar15 = puVar3 + 1 <= puVar4;
              bVar14 = puVar4 == puVar3 + 1;
            }
            uVar8 = uVar5 >> 2;
            uVar2 = uVar5;
            if (uVar8 == 0 ||
                ((uVar5 < 4 || (((uint)puVar4 | (uint)puVar3) & 3) != 0) || (!bVar15 || bVar14))) {
LAB_0004feb8:
              do {
                uVar2 = uVar2 - 1;
                *(undefined1 *)puVar12 = *(undefined1 *)puVar3;
                puVar3 = (undefined4 *)((int)puVar3 + 1);
                puVar12 = (undefined4 *)((int)puVar12 + 1);
              } while (0 < (int)uVar2);
            }
            else {
              uVar2 = 0;
              puVar13 = puVar3;
              do {
                uVar2 = uVar2 + 1;
                *puVar12 = *puVar13;
                puVar12 = puVar12 + 1;
                puVar13 = puVar13 + 1;
              } while (uVar2 < uVar8);
              puVar3 = puVar3 + uVar8;
              puVar12 = puVar4 + uVar8;
              uVar2 = uVar5 + uVar8 * -4;
              if (uVar5 != uVar8 * 4) goto LAB_0004feb8;
            }
            puVar12 = (undefined4 *)((int)puVar4 + uVar5);
          }
        }
        *(undefined1 *)puVar12 = 0;
        puVar3 = *(undefined4 **)(iVar9 + 0x18);
        if ((puVar10 != puVar3) && (puVar3 != (undefined4 *)0x0)) {
          uVar5 = *(int *)(iVar9 + 4) - (int)puVar3;
          if (uVar5 < 0x81) {
            std::__node_alloc::_M_deallocate(puVar3,uVar5);
          }
          else {
            operator_delete(puVar3);
          }
        }
        *(undefined4 **)(iVar9 + 0x14) = puVar12;
        *(undefined1 **)(iVar9 + 4) = local_50;
        *(undefined4 **)(iVar9 + 0x18) = puVar4;
      }
      if (local_30 != 0) {
        uVar5 = 0;
        do {
          STG::FFileBase::Read(param_1,&local_35,1);
          uVar1 = local_35;
          puVar4 = *(undefined4 **)(iVar9 + 0x18);
          puVar12 = *(undefined4 **)(iVar9 + 0x14);
          if (puVar10 == puVar4) {
            puVar7 = (undefined1 *)((int)puVar10 + (0x10 - (int)puVar12));
          }
          else {
            puVar7 = (undefined1 *)(*(int *)(iVar9 + 4) - (int)puVar12);
          }
          if (puVar7 == (undefined1 *)0x1) {
            uVar8 = (int)puVar12 - (int)puVar4;
            if (uVar8 == 0xfffffffe) {
                    /* WARNING: Subroutine does not return */
              std::__stl_throw_length_error((char *)((int)&DAT_00050078 + DAT_00050080));
            }
            uVar2 = uVar8 * 2 + 1;
            if (uVar8 == 0) {
              uVar2 = 2;
            }
            if ((uVar2 == 0xffffffff) || (uVar2 < uVar8)) {
              local_2c[0] = 0xfffffffe;
LAB_0004fdd8:
              puVar3 = operator_new(local_2c[0]);
LAB_0004fc7c:
              puVar4 = *(undefined4 **)(iVar9 + 0x18);
              local_40 = (undefined1 *)((int)puVar3 + local_2c[0]);
              uVar8 = *(int *)(iVar9 + 0x14) - (int)puVar4;
            }
            else {
              if (uVar2 != 0) {
                local_2c[0] = uVar2;
                if (0x80 < uVar2) goto LAB_0004fdd8;
                puVar3 = (undefined4 *)std::__node_alloc::_M_allocate(local_2c);
                goto LAB_0004fc7c;
              }
              puVar3 = (undefined4 *)0x0;
              local_40 = (undefined1 *)0x0;
            }
            puVar12 = puVar3;
            if (0 < (int)uVar8) {
              bVar15 = puVar4 + 1 <= puVar3;
              bVar14 = puVar3 == puVar4 + 1;
              if (!bVar15 || bVar14) {
                bVar15 = puVar3 + 1 <= puVar4;
                bVar14 = puVar4 == puVar3 + 1;
              }
              uVar2 = uVar8 >> 2;
              uVar6 = uVar8;
              if (uVar2 == 0 ||
                  ((uVar8 < 4 || (((uint)puVar3 | (uint)puVar4) & 3) != 0) || (!bVar15 || bVar14)))
              {
LAB_0004fd40:
                do {
                  uVar6 = uVar6 - 1;
                  *(undefined1 *)puVar12 = *(undefined1 *)puVar4;
                  puVar4 = (undefined4 *)((int)puVar4 + 1);
                  puVar12 = (undefined4 *)((int)puVar12 + 1);
                } while (0 < (int)uVar6);
              }
              else {
                uVar6 = 0;
                puVar13 = puVar4;
                do {
                  uVar6 = uVar6 + 1;
                  *puVar12 = *puVar13;
                  puVar12 = puVar12 + 1;
                  puVar13 = puVar13 + 1;
                } while (uVar6 < uVar2);
                puVar4 = puVar4 + uVar2;
                puVar12 = puVar3 + uVar2;
                uVar6 = uVar8 + uVar2 * -4;
                if (uVar2 * 4 != uVar8) goto LAB_0004fd40;
              }
              puVar12 = (undefined4 *)((int)puVar3 + uVar8);
            }
            *(undefined1 *)puVar12 = 0;
            puVar4 = *(undefined4 **)(iVar9 + 0x18);
            if ((puVar10 != puVar4) && (puVar4 != (undefined4 *)0x0)) {
              uVar8 = *(int *)(iVar9 + 4) - (int)puVar4;
              if (uVar8 < 0x81) {
                std::__node_alloc::_M_deallocate(puVar4,uVar8);
              }
              else {
                operator_delete(puVar4);
              }
            }
            *(undefined4 **)(iVar9 + 0x14) = puVar12;
            *(undefined4 **)(iVar9 + 0x18) = puVar3;
            *(undefined1 **)(iVar9 + 4) = local_40;
          }
          *(undefined1 *)((int)puVar12 + 1) = 0;
          uVar5 = uVar5 + 1;
          **(uchar **)(iVar9 + 0x14) = uVar1;
          *(int *)(iVar9 + 0x14) = *(int *)(iVar9 + 0x14) + 1;
        } while (uVar5 < local_30);
      }
      local_44 = local_44 + 1;
      local_48 = local_48 + 0x1c;
    } while (local_44 < local_34);
  }
  return;
}

