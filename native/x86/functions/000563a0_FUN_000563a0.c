/* 000563a0 | FUN_000563a0 */

void FUN_000563a0(void)

{
  undefined1 *puVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uchar uVar6;
  FFileBase *this;
  undefined1 *puVar7;
  uint *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined1 *puVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  int *piVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  int unaff_EBX;
  int iVar19;
  undefined4 *puVar20;
  undefined8 uVar21;
  int local_7c;
  uint local_78;
  undefined1 *local_74;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  uint local_54;
  uchar local_41;
  uint local_40 [4];
  uint local_30 [4];
  uint local_20 [3];
  undefined4 uStack_14;
  
  uStack_14 = 0x563ab;
  uVar21 = FUN_0002e044();
  piVar15 = (int *)((ulonglong)uVar21 >> 0x20);
  this = (FFileBase *)uVar21;
  STG::FFileBase::Read(this,(uchar *)local_40,4);
  uVar17 = local_40[0];
  if (local_40[0] != piVar15[1]) {
    if (piVar15[1] == 0) {
      piVar15[1] = local_40[0];
    }
    else {
      puVar9 = (undefined4 *)*piVar15;
      if (puVar9 != (undefined4 *)0x0) {
        puVar20 = puVar9 + puVar9[-1] * 7;
        if (puVar9 != puVar20) {
          do {
            puVar20 = puVar20 + -7;
            (**(code **)*puVar20)(puVar20);
            puVar9 = (undefined4 *)*piVar15;
          } while (puVar9 != puVar20);
        }
        operator_delete__(puVar9 + -1);
      }
      *piVar15 = 0;
      piVar15[1] = uVar17;
    }
    if (uVar17 != 0) {
      puVar8 = operator_new__(uVar17 * 0x1c + 4);
      puVar2 = puVar8 + 1;
      *puVar8 = uVar17;
      iVar19 = *(int *)(unaff_EBX + 0x45a91);
      local_54 = 0;
      puVar18 = puVar2;
      do {
        *puVar18 = iVar19 + 8;
        local_54 = local_54 + 1;
        *(uint **)((int)puVar8 + (int)puVar18 + (0x18 - (int)puVar2)) = puVar18 + 1;
        *(uint **)((int)puVar8 + (int)puVar18 + (0x1c - (int)puVar2)) = puVar18 + 1;
        *(undefined1 *)(puVar18 + 1) = 0;
        puVar18 = puVar18 + 7;
      } while (local_54 != uVar17);
      *piVar15 = (int)puVar2;
    }
  }
  if (local_40[0] != 0) {
    local_7c = 0;
    local_78 = 0;
    do {
      iVar19 = local_7c + *piVar15;
      STG::FFileBase::Read(this,(uchar *)local_30,4);
      puVar7 = *(undefined1 **)(iVar19 + 0x18);
      if (puVar7 != *(undefined1 **)(iVar19 + 0x14)) {
        *puVar7 = 0;
        puVar7 = *(undefined1 **)(iVar19 + 0x18);
        *(undefined1 **)(iVar19 + 0x14) = puVar7;
      }
      if (local_30[0] == 0xffffffff) {
LAB_0005695e:
                    /* WARNING: Subroutine does not return */
        std::__stl_throw_length_error((char *)(unaff_EBX + 0x30f61));
      }
      uVar17 = local_30[0] + 1;
      uVar16 = 0;
      puVar1 = (undefined1 *)(iVar19 + 4);
      uVar10 = 0x10;
      if (puVar1 != puVar7) {
        uVar10 = *(int *)(iVar19 + 4) - (int)puVar7;
      }
      if (uVar10 <= uVar17) {
        local_68 = (undefined1 *)0x0;
        local_58 = (undefined1 *)0x0;
        if (uVar17 != 0) {
          local_20[0] = uVar17;
          if (uVar17 < 0x81) {
            local_58 = (undefined1 *)std::__node_alloc::_M_allocate(local_20);
          }
          else {
            local_58 = operator_new(uVar17);
          }
          puVar7 = *(undefined1 **)(iVar19 + 0x18);
          local_68 = local_58 + local_20[0];
          uVar16 = *(int *)(iVar19 + 0x14) - (int)puVar7;
        }
        puVar14 = local_58;
        if (0 < (int)uVar16) {
          uVar10 = uVar16 >> 4;
          uVar12 = uVar10 * 0x10;
          uVar17 = uVar16;
          if ((uVar10 == 0) ||
             (uVar16 < 0x10 || puVar7 <= local_58 + 0x10 && local_58 <= puVar7 + 0x10)) {
LAB_000567f0:
            do {
              uVar17 = uVar17 - 1;
              *puVar14 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar14 = puVar14 + 1;
            } while (0 < (int)uVar17);
          }
          else {
            iVar13 = 0;
            uVar17 = 0;
            do {
              puVar9 = (undefined4 *)(puVar7 + iVar13);
              uVar3 = puVar9[1];
              uVar4 = puVar9[2];
              uVar5 = puVar9[3];
              uVar17 = uVar17 + 1;
              puVar20 = (undefined4 *)(local_58 + iVar13);
              *puVar20 = *puVar9;
              puVar20[1] = uVar3;
              puVar20[2] = uVar4;
              puVar20[3] = uVar5;
              iVar13 = iVar13 + 0x10;
            } while (uVar17 < uVar10);
            puVar7 = puVar7 + uVar12;
            uVar17 = uVar16 + uVar10 * -0x10;
            puVar14 = local_58 + uVar12;
            if (uVar16 != uVar12) goto LAB_000567f0;
          }
          puVar14 = local_58 + uVar16;
        }
        *puVar14 = 0;
        puVar7 = *(undefined1 **)(iVar19 + 0x18);
        if ((puVar1 != puVar7) && (puVar7 != (undefined1 *)0x0)) {
          uVar17 = *(int *)(iVar19 + 4) - (int)puVar7;
          if (uVar17 < 0x81) {
            std::__node_alloc::_M_deallocate(puVar7,uVar17);
          }
          else {
            operator_delete(puVar7);
          }
        }
        *(undefined1 **)(iVar19 + 0x14) = puVar14;
        *(undefined1 **)(iVar19 + 4) = local_68;
        *(undefined1 **)(iVar19 + 0x18) = local_58;
      }
      if (local_30[0] != 0) {
        local_54 = 0;
        do {
          STG::FFileBase::Read(this,&local_41,1);
          uVar6 = local_41;
          puVar7 = *(undefined1 **)(iVar19 + 0x18);
          puVar14 = *(undefined1 **)(iVar19 + 0x14);
          if (puVar1 == puVar7) {
            puVar11 = puVar1 + (0x10 - (int)puVar14);
          }
          else {
            puVar11 = (undefined1 *)(*(int *)(iVar19 + 4) - (int)puVar14);
          }
          if (puVar11 == (undefined1 *)0x1) {
            uVar17 = (int)puVar14 - (int)puVar7;
            if (uVar17 == 0xfffffffe) goto LAB_0005695e;
            uVar10 = 1;
            if (uVar17 != 0) {
              uVar10 = uVar17;
            }
            uVar10 = uVar17 + 1 + uVar10;
            if ((uVar10 == 0xffffffff) || (uVar10 < uVar17)) {
              local_20[0] = 0xfffffffe;
LAB_000566d0:
              local_60 = operator_new(local_20[0]);
LAB_0005657b:
              puVar7 = *(undefined1 **)(iVar19 + 0x18);
              local_74 = local_60 + local_20[0];
              uVar17 = *(int *)(iVar19 + 0x14) - (int)puVar7;
            }
            else {
              local_74 = (undefined1 *)0x0;
              local_60 = (undefined1 *)0x0;
              if (uVar10 != 0) {
                local_20[0] = uVar10;
                if (0x80 < uVar10) goto LAB_000566d0;
                local_60 = (undefined1 *)std::__node_alloc::_M_allocate(local_20);
                goto LAB_0005657b;
              }
            }
            puVar14 = local_60;
            if (0 < (int)uVar17) {
              uVar16 = uVar17 >> 4;
              uVar12 = uVar16 * 0x10;
              uVar10 = uVar17;
              if ((uVar16 == 0) ||
                 (uVar17 < 0x10 || puVar7 <= local_60 + 0x10 && local_60 <= puVar7 + 0x10)) {
LAB_00056638:
                do {
                  uVar10 = uVar10 - 1;
                  *puVar14 = *puVar7;
                  puVar7 = puVar7 + 1;
                  puVar14 = puVar14 + 1;
                } while (0 < (int)uVar10);
              }
              else {
                iVar13 = 0;
                uVar10 = 0;
                do {
                  puVar9 = (undefined4 *)(puVar7 + iVar13);
                  uVar3 = puVar9[1];
                  uVar4 = puVar9[2];
                  uVar5 = puVar9[3];
                  uVar10 = uVar10 + 1;
                  puVar20 = (undefined4 *)(local_60 + iVar13);
                  *puVar20 = *puVar9;
                  puVar20[1] = uVar3;
                  puVar20[2] = uVar4;
                  puVar20[3] = uVar5;
                  iVar13 = iVar13 + 0x10;
                } while (uVar10 < uVar16);
                puVar7 = puVar7 + uVar12;
                uVar10 = uVar17 + uVar16 * -0x10;
                puVar14 = local_60 + uVar12;
                if (uVar12 != uVar17) goto LAB_00056638;
              }
              puVar14 = local_60 + uVar17;
            }
            *puVar14 = 0;
            puVar7 = *(undefined1 **)(iVar19 + 0x18);
            if ((puVar1 != puVar7) && (puVar7 != (undefined1 *)0x0)) {
              uVar17 = *(int *)(iVar19 + 4) - (int)puVar7;
              if (uVar17 < 0x81) {
                std::__node_alloc::_M_deallocate(puVar7,uVar17);
              }
              else {
                operator_delete(puVar7);
              }
            }
            *(undefined1 **)(iVar19 + 0x14) = puVar14;
            *(undefined1 **)(iVar19 + 4) = local_74;
            *(undefined1 **)(iVar19 + 0x18) = local_60;
          }
          puVar14[1] = 0;
          local_54 = local_54 + 1;
          **(uchar **)(iVar19 + 0x14) = uVar6;
          *(int *)(iVar19 + 0x14) = *(int *)(iVar19 + 0x14) + 1;
        } while (local_54 < local_30[0]);
      }
      local_78 = local_78 + 1;
      local_7c = local_7c + 0x1c;
    } while (local_78 < local_40[0]);
  }
  return;
}

