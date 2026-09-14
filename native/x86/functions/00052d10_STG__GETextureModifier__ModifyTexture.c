/* 00052d10 | STG::GETextureModifier::ModifyTexture */

/* STG::GETextureModifier::ModifyTexture(STG::FFileHash const&, STG::FFileHash&, STG::GETexture&)
   const */

void __thiscall
STG::GETextureModifier::ModifyTexture
          (GETextureModifier *this,FFileHash *param_1,FFileHash *param_2,GETexture *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  undefined1 *puVar13;
  int *piVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int unaff_EBX;
  string *this_00;
  undefined1 *puVar19;
  char *pcVar20;
  uint uVar21;
  undefined2 *puVar22;
  bool bVar23;
  undefined2 *local_b4;
  undefined1 *local_a4;
  undefined2 *local_98;
  uint local_94;
  uint local_80 [3];
  GEFont *local_74;
  int local_70;
  undefined1 local_6c [6];
  undefined4 auStack_66 [3];
  undefined2 local_5a [7];
  undefined2 *local_4c;
  undefined2 *local_48;
  int local_40;
  uint local_3c [8];
  uint *local_1c;
  uint *local_18;
  undefined4 uStack_14;
  void *pvVar14;
  
  uStack_14 = 0x52d1b;
  FUN_0002e044();
  this_00 = (string *)(param_2 + 4);
  if (this_00 != (string *)(param_1 + 4)) {
    pvVar3 = *(void **)(param_1 + 0x18);
    pcVar20 = *(char **)(param_1 + 0x14);
    uVar21 = (int)pcVar20 - (int)pvVar3;
    local_a4 = *(undefined1 **)(param_2 + 0x14);
    pvVar14 = *(void **)(param_2 + 0x18);
    uVar9 = (int)local_a4 - (int)pvVar14;
    if (uVar9 < uVar21) {
      iVar10 = 0;
      if (uVar9 != 0) {
        memmove(pvVar14,pvVar3,uVar9);
        iVar10 = *(int *)(param_2 + 0x14) - *(int *)(param_2 + 0x18);
      }
      std::string::_M_append(this_00,(char *)(iVar10 + (int)pvVar3),pcVar20);
    }
    else {
      if (uVar21 != 0) {
        memmove(pvVar14,pvVar3,uVar21);
        local_a4 = *(undefined1 **)(param_2 + 0x14);
        pvVar14 = *(void **)(param_2 + 0x18);
      }
      puVar19 = (undefined1 *)((int)pvVar14 + uVar21);
      if (puVar19 != local_a4) {
        *puVar19 = *local_a4;
        *(undefined1 **)(param_2 + 0x14) = puVar19 + (*(int *)(param_2 + 0x14) - (int)local_a4);
      }
    }
  }
  *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  local_94 = *(uint *)(this + 0x24);
  if (local_94 != 0) {
    uVar9 = 0;
    do {
      pcVar20 = (char *)(uVar9 * 0x68 + *(int *)(this + 0x1c));
      if (*(int *)(pcVar20 + 0x44) == *(int *)(param_1 + 0x1c)) {
        if (*pcVar20 != '\0') {
          if (pcVar20[0x1c] == '\0') {
            cVar8 = pcVar20[0x24];
            if (cVar8 != '\0') goto LAB_00052f40;
            iVar10 = 0;
            if (*(int *)(this + 0x28) != 0) {
              piVar15 = (int *)(*(int *)(pcVar20 + 4) * 0x8c +
                               *(int *)(*(int *)(this + 0x28) + 0x14));
              iVar10 = (**(code **)(*piVar15 + 0x20))(piVar15);
            }
            if (*(int *)(pcVar20 + 8) != iVar10) {
              local_94 = *(uint *)(this + 0x24);
              goto LAB_00052dc8;
            }
          }
          else {
            cVar8 = pcVar20[0x24];
            if (*(int *)(pcVar20 + 0x14) == *(int *)(this + 0x2c)) {
LAB_00052f40:
              bVar23 = true;
            }
            else {
              bVar23 = false;
            }
            if (((cVar8 != '\0') && (*(int *)(pcVar20 + 0x20) != *(int *)(this + 0x34))) ||
               (!bVar23)) goto LAB_00052dc8;
          }
          if (this_00 != (string *)(pcVar20 + 0x4c)) {
            pvVar3 = *(void **)(pcVar20 + 0x60);
            pcVar4 = *(char **)(pcVar20 + 0x5c);
            uVar9 = (int)pcVar4 - (int)pvVar3;
            puVar19 = *(undefined1 **)(param_2 + 0x14);
            pvVar14 = *(void **)(param_2 + 0x18);
            uVar21 = (int)puVar19 - (int)pvVar14;
            if (uVar21 < uVar9) {
              iVar10 = 0;
              if (uVar21 != 0) {
                memmove(pvVar14,pvVar3,uVar21);
                iVar10 = *(int *)(param_2 + 0x14) - *(int *)(param_2 + 0x18);
              }
              std::string::_M_append(this_00,(char *)(iVar10 + (int)pvVar3),pcVar4);
              *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(pcVar20 + 100);
              goto LAB_00052e90;
            }
            if (uVar9 != 0) {
              memmove(pvVar14,pvVar3,uVar9);
              puVar19 = *(undefined1 **)(param_2 + 0x14);
              pvVar14 = *(void **)(param_2 + 0x18);
            }
            puVar13 = (undefined1 *)((int)pvVar14 + uVar9);
            if (puVar13 != puVar19) {
              *puVar13 = *puVar19;
              *(undefined1 **)(param_2 + 0x14) = puVar13 + (*(int *)(param_2 + 0x14) - (int)puVar19)
              ;
            }
          }
          *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(pcVar20 + 100);
        }
LAB_00052e90:
        if (pcVar20[1] == '\0') goto LAB_00052e9a;
        local_6c._0_4_ = local_6c._0_4_ & 0xffff0000;
        local_70 = *(int *)(unaff_EBX + 0x491a5) + 8;
        local_4c = (undefined2 *)local_6c;
        local_48 = (undefined2 *)local_6c;
        if ((*(int *)(this + 0x28) == 0) ||
           (piVar15 = *(int **)(*(int *)(pcVar20 + 0xc) * 0x90 +
                                *(int *)(*(int *)(this + 0x28) + 0x24) + 0x7c), piVar15 == &local_70
           )) goto LAB_000533ac;
        puVar11 = (undefined2 *)piVar15[9];
        puVar22 = (undefined2 *)piVar15[10];
        uVar9 = (int)puVar11 - (int)puVar22 >> 1;
        if ((uVar9 == 0) || (puVar11 == puVar22)) goto LAB_000533ac;
        if (uVar9 < 0x10) {
          puVar12 = puVar22 + 1;
          uVar21 = (int)puVar11 - (int)puVar12 >> 1;
          if ((int)uVar21 < 1) goto LAB_00053607;
          uVar16 = uVar21 >> 3;
          if (uVar16 == 0) {
            puVar11 = (undefined2 *)(local_6c + 2);
            goto LAB_000535e5;
          }
          puVar11 = (undefined2 *)(local_6c + 2);
          if (uVar21 < 0xb || puVar11 <= puVar22 + 9 && puVar12 <= local_5a) goto LAB_000535e5;
          iVar10 = 0;
          uVar18 = 0;
          do {
            puVar1 = (undefined4 *)((int)puVar22 + iVar10 + 2);
            uVar5 = puVar1[1];
            uVar6 = puVar1[2];
            uVar7 = puVar1[3];
            uVar18 = uVar18 + 1;
            *(undefined4 *)((int)puVar11 + iVar10) = *puVar1;
            *(undefined4 *)((int)auStack_66 + iVar10) = uVar5;
            *(undefined4 *)((int)auStack_66 + iVar10 + 4) = uVar6;
            *(undefined4 *)((int)local_5a + iVar10 + -4) = uVar7;
            iVar10 = iVar10 + 0x10;
          } while (uVar18 < uVar16);
          puVar12 = puVar12 + uVar16 * 8;
          puVar11 = puVar11 + uVar16 * 8;
          bVar23 = uVar21 != uVar16 * 8;
          uVar21 = uVar21 + uVar16 * -8;
          if (bVar23) {
LAB_000535e5:
            do {
              uVar21 = uVar21 - 1;
              *puVar11 = *puVar12;
              puVar12 = puVar12 + 1;
              puVar11 = puVar11 + 1;
            } while (0 < (int)uVar21);
          }
LAB_00053607:
          *(undefined2 *)(local_6c + uVar9 * 2) = 0;
          *local_4c = *puVar22;
          local_4c = local_4c + uVar9;
        }
        else {
          if (0x7ffffffe < uVar9) {
                    /* WARNING: Subroutine does not return */
            std::__stl_throw_length_error((char *)(unaff_EBX + 0x345f1));
          }
          local_80[0] = (uVar9 + 1) * 2;
          if (local_80[0] < 0x81) {
            local_98 = (undefined2 *)std::__node_alloc::_M_allocate(local_80);
          }
          else {
            local_98 = operator_new(local_80[0]);
          }
          uVar16 = (int)local_4c - (int)local_48 >> 1;
          uVar21 = local_80[0] & 0xfffffffe;
          if ((int)uVar16 < 1) {
            local_b4 = local_98;
          }
          else {
            uVar17 = uVar16 >> 3;
            puVar11 = local_48;
            uVar18 = uVar16;
            puVar12 = local_98;
            if ((uVar17 == 0) ||
               (local_98 <= local_48 + 8 && local_48 <= local_98 + 8 || uVar16 < 0xb))
            goto LAB_0005323f;
            iVar10 = 0;
            uVar18 = 0;
            do {
              puVar1 = (undefined4 *)((int)local_48 + iVar10);
              uVar5 = puVar1[1];
              uVar6 = puVar1[2];
              uVar7 = puVar1[3];
              uVar18 = uVar18 + 1;
              puVar2 = (undefined4 *)((int)local_98 + iVar10);
              *puVar2 = *puVar1;
              puVar2[1] = uVar5;
              puVar2[2] = uVar6;
              puVar2[3] = uVar7;
              iVar10 = iVar10 + 0x10;
            } while (uVar18 < uVar17);
            puVar11 = local_48 + uVar17 * 8;
            puVar12 = local_98 + uVar17 * 8;
            uVar18 = uVar16 + uVar17 * -8;
            if (uVar17 * 8 != uVar16) {
LAB_0005323f:
              do {
                uVar18 = uVar18 - 1;
                *puVar12 = *puVar11;
                puVar11 = puVar11 + 1;
                puVar12 = puVar12 + 1;
              } while (0 < (int)uVar18);
            }
            local_b4 = local_98 + uVar16;
          }
          if (0 < (int)uVar9) {
            uVar18 = uVar9 >> 3;
            puVar11 = local_b4;
            uVar16 = uVar9;
            if ((uVar18 == 0) || (uVar9 < 0xb || puVar22 <= local_b4 + 8 && local_b4 <= puVar22 + 8)
               ) {
LAB_0005331b:
              do {
                uVar16 = uVar16 - 1;
                *puVar11 = *puVar22;
                puVar22 = puVar22 + 1;
                puVar11 = puVar11 + 1;
              } while (0 < (int)uVar16);
            }
            else {
              iVar10 = 0;
              uVar16 = 0;
              do {
                puVar1 = (undefined4 *)((int)puVar22 + iVar10);
                uVar5 = puVar1[1];
                uVar6 = puVar1[2];
                uVar7 = puVar1[3];
                uVar16 = uVar16 + 1;
                puVar2 = (undefined4 *)((int)local_b4 + iVar10);
                *puVar2 = *puVar1;
                puVar2[1] = uVar5;
                puVar2[2] = uVar6;
                puVar2[3] = uVar7;
                iVar10 = iVar10 + 0x10;
              } while (uVar16 < uVar18);
              puVar22 = puVar22 + uVar18 * 8;
              puVar11 = local_b4 + uVar18 * 8;
              uVar16 = uVar9 + uVar18 * -8;
              if (uVar9 != uVar18 * 8) goto LAB_0005331b;
            }
            local_b4 = local_b4 + uVar9;
          }
          *local_b4 = 0;
          if ((local_48 != (undefined2 *)local_6c) && (local_48 != (undefined2 *)0x0)) {
            uVar9 = local_6c._0_4_ - (int)local_48 & 0xfffffffe;
            if (uVar9 < 0x81) {
              std::__node_alloc::_M_deallocate(local_48,uVar9);
            }
            else {
              operator_delete(local_48);
            }
          }
          local_4c = local_b4;
          local_48 = local_98;
          local_6c._0_4_ = uVar21 + (int)local_98;
        }
LAB_000533ac:
        local_3c[0] = local_3c[0] & 0xffff0000;
        local_40 = *(int *)(unaff_EBX + 0x491a5) + 8;
        local_1c = local_3c;
        local_18 = local_3c;
        cVar8 = GETextureFontContainer::FindByIndex
                          ((GETextureFontContainer *)(this + 0xc),*(ulong *)(pcVar20 + 0xc),
                           (UStringBase *)&local_70,&local_74,(UStringBase *)&local_40);
        if (cVar8 != '\0') {
          GETexture::SetFontAndMessage(param_3,local_74,(UStringBase *)&local_40);
        }
        local_40 = *(int *)(unaff_EBX + 0x491a5) + 8;
        if ((local_18 != local_3c) && (local_18 != (uint *)0x0)) {
          uVar9 = local_3c[0] - (int)local_18 & 0xfffffffe;
          if (uVar9 < 0x81) {
            std::__node_alloc::_M_deallocate(local_18,uVar9);
          }
          else {
            operator_delete(local_18);
          }
        }
        local_70 = *(int *)(unaff_EBX + 0x491a5) + 8;
        if ((local_48 != (undefined2 *)local_6c) && (local_48 != (undefined2 *)0x0)) {
          uVar9 = local_6c._0_4_ - (int)local_48 & 0xfffffffe;
          if (uVar9 < 0x81) {
            std::__node_alloc::_M_deallocate(local_48,uVar9);
          }
          else {
            operator_delete(local_48);
          }
        }
LAB_00052e9a:
        if (pcVar20[2] == '\0') {
          return;
        }
        if (*(int *)(this + 0x28) == 0) {
          return;
        }
        iVar10 = *(int *)(pcVar20 + 0x10) * 0x94 + *(int *)(*(int *)(this + 0x28) + 0x34);
        GETexture::SetUserImage
                  (param_3,*(undefined4 *)(iVar10 + 0x7c),*(undefined4 *)(iVar10 + 0x8c),
                   *(undefined4 *)(iVar10 + 0x90),*(undefined4 *)(iVar10 + 0x88));
        return;
      }
LAB_00052dc8:
      uVar9 = uVar9 + 1;
    } while (uVar9 < local_94);
  }
  return;
}

