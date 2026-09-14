/* 0004a65c | STG::GETextureModifier::ModifyTexture */

/* WARNING: Removing unreachable block (ram,0x0004a99c) */
/* STG::GETextureModifier::ModifyTexture(STG::FFileHash const&, STG::FFileHash&, STG::GETexture&)
   const */

void __thiscall
STG::GETextureModifier::ModifyTexture
          (GETextureModifier *this,FFileHash *param_1,FFileHash *param_2,GETexture *param_3)

{
  void *pvVar1;
  int iVar2;
  ulong uVar3;
  undefined4 *puVar4;
  char cVar5;
  size_t sVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  int iVar11;
  UStringBase *pUVar12;
  undefined4 *puVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  string *this_00;
  undefined4 *puVar17;
  char *pcVar18;
  uint uVar19;
  void *pvVar20;
  int iVar21;
  undefined4 *puVar22;
  bool bVar23;
  bool bVar24;
  GEFont *local_88;
  uint local_84;
  int local_80;
  undefined4 local_7c;
  undefined4 *local_5c;
  undefined4 *local_58;
  int local_54;
  uint local_50 [8];
  uint *local_30;
  uint *local_2c;
  
  this_00 = (string *)(param_2 + 4);
  if (this_00 != (string *)(param_1 + 4)) {
    pvVar20 = *(void **)(param_1 + 0x18);
    pcVar18 = *(char **)(param_1 + 0x14);
    puVar10 = *(undefined1 **)(param_2 + 0x14);
    pvVar1 = *(void **)(param_2 + 0x18);
    uVar15 = (int)pcVar18 - (int)pvVar20;
    sVar6 = (int)puVar10 - (int)pvVar1;
    if (sVar6 < uVar15) {
      iVar21 = 0;
      if (sVar6 != 0) {
        memmove(pvVar1,pvVar20,sVar6);
        iVar21 = *(int *)(param_2 + 0x14) - *(int *)(param_2 + 0x18);
      }
      std::string::_M_append(this_00,(char *)((int)pvVar20 + iVar21),pcVar18);
    }
    else {
      if (uVar15 != 0) {
        memmove(pvVar1,pvVar20,uVar15);
        pvVar1 = *(void **)(param_2 + 0x18);
        puVar10 = *(undefined1 **)(param_2 + 0x14);
      }
      if ((undefined1 *)((int)pvVar1 + uVar15) != puVar10) {
        *(undefined1 *)((int)pvVar1 + uVar15) = *puVar10;
        *(undefined1 **)(param_2 + 0x14) =
             (undefined1 *)((int)pvVar1 + uVar15) + (*(int *)(param_2 + 0x14) - (int)puVar10);
      }
    }
  }
  uVar15 = *(uint *)(this + 0x24);
  *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  if (uVar15 != 0) {
    iVar21 = 0;
    uVar19 = 0;
    do {
      iVar16 = *(int *)(this + 0x1c) + iVar21;
      if (*(int *)(iVar16 + 0x44) == *(int *)(param_1 + 0x1c)) {
        if (*(char *)(*(int *)(this + 0x1c) + iVar21) != '\0') {
          if (*(char *)(iVar16 + 0x1c) == '\0') {
            cVar5 = *(char *)(iVar16 + 0x24);
            if (cVar5 != '\0') goto LAB_0004a86c;
            iVar2 = 0;
            if (*(int *)(this + 0x28) != 0) {
              iVar2 = *(int *)(*(int *)(this + 0x28) + 0x14);
              iVar11 = *(int *)(iVar16 + 4) * 0x8c;
              iVar2 = (**(code **)(*(int *)(iVar2 + iVar11) + 0x20))(iVar2 + iVar11);
            }
            if (*(int *)(iVar16 + 8) != iVar2) {
              uVar15 = *(uint *)(this + 0x24);
              goto LAB_0004a6f4;
            }
          }
          else {
            cVar5 = *(char *)(iVar16 + 0x24);
            if (*(int *)(iVar16 + 0x14) == *(int *)(this + 0x2c)) {
LAB_0004a86c:
              bVar23 = true;
            }
            else {
              bVar23 = false;
            }
            if (((cVar5 != '\0') && (*(int *)(iVar16 + 0x20) != *(int *)(this + 0x34))) || (!bVar23)
               ) goto LAB_0004a6f4;
          }
          if (this_00 != (string *)(iVar16 + 0x4c)) {
            pvVar20 = *(void **)(iVar16 + 0x60);
            pcVar18 = *(char **)(iVar16 + 0x5c);
            puVar10 = *(undefined1 **)(param_2 + 0x14);
            pvVar1 = *(void **)(param_2 + 0x18);
            uVar15 = (int)pcVar18 - (int)pvVar20;
            sVar6 = (int)puVar10 - (int)pvVar1;
            if (sVar6 < uVar15) {
              iVar21 = 0;
              if (sVar6 != 0) {
                memmove(pvVar1,pvVar20,sVar6);
                iVar21 = *(int *)(param_2 + 0x14) - *(int *)(param_2 + 0x18);
              }
              std::string::_M_append(this_00,(char *)((int)pvVar20 + iVar21),pcVar18);
              *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(iVar16 + 100);
              goto LAB_0004a7cc;
            }
            if (uVar15 != 0) {
              memmove(pvVar1,pvVar20,uVar15);
              pvVar1 = *(void **)(param_2 + 0x18);
              puVar10 = *(undefined1 **)(param_2 + 0x14);
            }
            if (puVar10 != (undefined1 *)((int)pvVar1 + uVar15)) {
              *(undefined1 *)((int)pvVar1 + uVar15) = *puVar10;
              *(undefined1 **)(param_2 + 0x14) =
                   (undefined1 *)((int)pvVar1 + uVar15) + (*(int *)(param_2 + 0x14) - (int)puVar10);
            }
          }
          *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(iVar16 + 100);
        }
LAB_0004a7cc:
        if (*(char *)(iVar16 + 1) == '\0') goto LAB_0004a7d8;
        iVar21 = *(int *)(DAT_0004ad24 + 0x4a934);
        local_80 = iVar21 + 8;
        uVar3 = *(ulong *)(iVar16 + 0xc);
        local_7c = local_7c & 0xffff0000;
        local_5c = &local_7c;
        local_58 = &local_7c;
        if ((*(int *)(this + 0x28) == 0) ||
           (pUVar12 = *(UStringBase **)
                       (*(int *)(*(int *)(this + 0x28) + 0x24) + uVar3 * 0x90 + 0x7c),
           pUVar12 == (UStringBase *)&local_80)) goto LAB_0004abb0;
        puVar22 = *(undefined4 **)(pUVar12 + 0x28);
        puVar13 = *(undefined4 **)(pUVar12 + 0x24);
        uVar15 = (int)puVar13 - (int)puVar22 >> 1;
        if ((uVar15 == 0) || (puVar22 == puVar13)) goto LAB_0004abb0;
        if (uVar15 < 0x10) {
          iVar2 = (int)puVar13 - (int)((int)puVar22 + 2) >> 1;
          if (0 < iVar2) {
            puVar13 = &local_7c;
            puVar17 = puVar22;
            do {
              puVar17 = (undefined4 *)((int)puVar17 + 2);
              puVar13 = (undefined4 *)((int)puVar13 + 2);
              *(undefined2 *)puVar13 = *(undefined2 *)puVar17;
            } while (puVar17 != (undefined4 *)((int)puVar22 + iVar2 * 2));
          }
          *(undefined2 *)((int)local_5c + uVar15 * 2) = 0;
          *(undefined2 *)local_5c = *(undefined2 *)puVar22;
          local_5c = (undefined4 *)((int)local_5c + uVar15 * 2);
        }
        else {
          if (0x7ffffffe < uVar15) {
                    /* WARNING: Subroutine does not return */
            std::__stl_throw_length_error((char *)(DAT_0004ad28 + 0x4ad18));
          }
          if (uVar15 == 0x7ffffffe) {
            local_84 = 0xfffffffc;
LAB_0004a9b4:
            puVar13 = operator_new(local_84);
          }
          else {
            local_84 = (uVar15 + 1) * 2;
            if (0x80 < local_84) goto LAB_0004a9b4;
            puVar13 = (undefined4 *)std::__node_alloc::_M_allocate(&local_84);
          }
          uVar7 = local_84 & 0xfffffffe;
          uVar19 = (int)local_5c - (int)local_58 >> 1;
          puVar17 = puVar13;
          if ((int)uVar19 < 1) goto LAB_0004aab0;
          uVar14 = uVar19 >> 1;
          bVar24 = puVar13 + 1 <= local_58;
          bVar23 = local_58 == puVar13 + 1;
          if (!bVar24 || bVar23) {
            bVar24 = local_58 + 1 <= puVar13;
            bVar23 = puVar13 == local_58 + 1;
          }
          puVar17 = local_58;
          puVar4 = puVar13;
          uVar8 = uVar19;
          if (uVar14 == 0 ||
              ((uVar19 < 2 || (((uint)local_58 | (uint)puVar13) & 3) != 0) || (!bVar24 || bVar23)))
          goto LAB_0004aa90;
          uVar8 = 0;
          puVar17 = puVar13;
          puVar4 = local_58;
          do {
            uVar8 = uVar8 + 1;
            *puVar17 = *puVar4;
            puVar17 = puVar17 + 1;
            puVar4 = puVar4 + 1;
          } while (uVar8 < uVar14);
          puVar17 = local_58 + uVar14;
          puVar4 = puVar13 + uVar14;
          uVar8 = uVar19 + uVar14 * -2;
          if (uVar19 != uVar14 * 2) {
LAB_0004aa90:
            do {
              uVar8 = uVar8 - 1;
              *(undefined2 *)puVar4 = *(undefined2 *)puVar17;
              puVar17 = (undefined4 *)((int)puVar17 + 2);
              puVar4 = (undefined4 *)((int)puVar4 + 2);
            } while (0 < (int)uVar8);
          }
          puVar17 = (undefined4 *)((int)puVar13 + uVar19 * 2);
LAB_0004aab0:
          if (0 < (int)uVar15) {
            bVar24 = puVar17 + 1 <= puVar22;
            bVar23 = puVar22 == puVar17 + 1;
            if (!bVar24 || bVar23) {
              bVar24 = puVar22 + 1 <= puVar17;
              bVar23 = puVar17 == puVar22 + 1;
            }
            uVar19 = uVar15 >> 1;
            puVar4 = puVar17;
            uVar14 = uVar15;
            if (uVar19 == 0 ||
                ((!bVar24 || bVar23) || (uVar15 < 2 || (((uint)puVar17 | (uint)puVar22) & 3) != 0)))
            {
LAB_0004ab4c:
              do {
                uVar14 = uVar14 - 1;
                *(undefined2 *)puVar4 = *(undefined2 *)puVar22;
                puVar4 = (undefined4 *)((int)puVar4 + 2);
                puVar22 = (undefined4 *)((int)puVar22 + 2);
              } while (0 < (int)uVar14);
            }
            else {
              uVar14 = 0;
              puVar4 = puVar22;
              puVar9 = puVar17;
              do {
                uVar14 = uVar14 + 1;
                *puVar9 = *puVar4;
                puVar4 = puVar4 + 1;
                puVar9 = puVar9 + 1;
              } while (uVar14 < uVar19);
              puVar4 = puVar17 + uVar19;
              uVar14 = uVar15 + uVar19 * -2;
              puVar22 = puVar22 + uVar19;
              if (uVar19 * 2 != uVar15) goto LAB_0004ab4c;
            }
            puVar17 = (undefined4 *)((int)puVar17 + uVar15 * 2);
          }
          *(undefined2 *)puVar17 = 0;
          if ((local_58 != &local_7c) && (local_58 != (undefined4 *)0x0)) {
            uVar15 = local_7c - (int)local_58 & 0xfffffffe;
            if (uVar15 < 0x81) {
              std::__node_alloc::_M_deallocate(local_58,uVar15);
            }
            else {
              operator_delete(local_58);
            }
          }
          uVar3 = *(ulong *)(iVar16 + 0xc);
          local_7c = (int)puVar13 + uVar7;
          local_5c = puVar17;
          local_58 = puVar13;
        }
LAB_0004abb0:
        local_54 = iVar21 + 8;
        local_50[0] = local_50[0] & 0xffff0000;
        local_30 = local_50;
        local_2c = local_50;
        iVar2 = GETextureFontContainer::FindByIndex
                          ((GETextureFontContainer *)(this + 0xc),uVar3,(UStringBase *)&local_80,
                           &local_88,(UStringBase *)&local_54);
        if (iVar2 != 0) {
          GETexture::SetFontAndMessage(param_3,local_88,(UStringBase *)&local_54);
        }
        local_54 = iVar21 + 8;
        if ((local_2c != local_50) && (local_2c != (uint *)0x0)) {
          uVar15 = local_50[0] - (int)local_2c & 0xfffffffe;
          if (uVar15 < 0x81) {
            std::__node_alloc::_M_deallocate(local_2c,uVar15);
          }
          else {
            operator_delete(local_2c);
          }
        }
        local_80 = iVar21 + 8;
        if ((local_58 != &local_7c) && (local_58 != (undefined4 *)0x0)) {
          uVar15 = local_7c - (int)local_58 & 0xfffffffe;
          if (uVar15 < 0x81) {
            std::__node_alloc::_M_deallocate(local_58,uVar15);
          }
          else {
            operator_delete(local_58);
          }
        }
LAB_0004a7d8:
        if (*(char *)(iVar16 + 2) == '\0') {
          return;
        }
        if (*(int *)(this + 0x28) == 0) {
          return;
        }
        iVar21 = *(int *)(iVar16 + 0x10) * 0x94 + *(int *)(*(int *)(this + 0x28) + 0x34);
        GETexture::SetUserImage
                  (param_3,*(undefined4 *)(iVar21 + 0x7c),*(undefined4 *)(iVar21 + 0x8c),
                   *(undefined4 *)(iVar21 + 0x90),*(undefined4 *)(iVar21 + 0x88));
        return;
      }
LAB_0004a6f4:
      uVar19 = uVar19 + 1;
      iVar21 = iVar21 + 0x68;
    } while (uVar19 < uVar15);
  }
  return;
}

