/* 0006c870 | STG::UResource::GetAllUniqueSubFiles */

/* STG::UResource::GetAllUniqueSubFiles(STG::UArrayFixed<STG::FFileHash, unsigned long>&) const */

void __thiscall STG::UResource::GetAllUniqueSubFiles(UResource *this,UArrayFixed *param_1)

{
  uint uVar1;
  char *pcVar2;
  void *pvVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  void *pvVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined1 *__dest;
  int unaff_EBX;
  int iVar12;
  int iVar13;
  undefined1 *local_54;
  uint *local_48;
  int local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  uint local_1c;
  undefined4 uStack_14;
  
  uStack_14 = 0x6c87b;
  FUN_0002e044();
  local_20 = 0;
  local_1c = 0;
  (**(code **)(*(int *)this + 0x2c))(this,&local_20);
  uVar9 = local_1c;
  if (local_1c == 0) {
    local_2c = 0;
    local_48 = (uint *)0x0;
    local_28 = 0;
    iVar13 = *(int *)(param_1 + 4);
  }
  else {
    puVar4 = operator_new__(local_1c * 0x20 + 4);
    *puVar4 = uVar9;
    local_48 = puVar4 + 1;
    local_24 = 0;
    iVar13 = *(int *)(unaff_EBX + 0x2f5c1);
    puVar5 = local_48;
    do {
      local_24 = local_24 + 1;
      *puVar5 = iVar13 + 8;
      *(uint **)((int)puVar4 + (int)puVar5 + (0x18 - (int)local_48)) = puVar5 + 1;
      *(uint **)((int)puVar4 + (int)puVar5 + (0x1c - (int)local_48)) = puVar5 + 1;
      *(undefined1 *)(puVar5 + 1) = 0;
      *(undefined4 *)((int)puVar4 + (int)puVar5 + (0x20 - (int)local_48)) = 0xffffffff;
      puVar5 = puVar5 + 8;
    } while (local_24 != uVar9);
    local_2c = local_1c;
    if (local_1c == 0) {
      local_28 = 0;
    }
    else {
      local_24 = 0;
      local_28 = 0;
      do {
        iVar13 = local_24 * 0x20 + local_20;
        uVar7 = *(uint *)(iVar13 + 0x1c);
        if (puVar4[8] != uVar7) {
          uVar6 = 0;
          puVar5 = puVar4 + 0x10;
          do {
            uVar6 = uVar6 + 1;
            if (uVar6 == uVar9) {
              if ((string *)(local_48 + local_28 * 8 + 1) != (string *)(iVar13 + 4)) {
                pcVar2 = *(char **)(iVar13 + 0x14);
                local_54 = (undefined1 *)local_48[local_28 * 8 + 5];
                pvVar3 = *(void **)(iVar13 + 0x18);
                __dest = (undefined1 *)local_48[local_28 * 8 + 6];
                uVar6 = (int)pcVar2 - (int)pvVar3;
                uVar7 = (int)local_54 - (int)__dest;
                if (uVar7 < uVar6) {
                  iVar12 = 0;
                  if (uVar7 != 0) {
                    memmove(__dest,pvVar3,uVar7);
                    iVar12 = local_48[local_28 * 8 + 5] - local_48[local_28 * 8 + 6];
                  }
                  std::string::_M_append
                            ((string *)(local_48 + local_28 * 8 + 1),(char *)(iVar12 + (int)pvVar3),
                             pcVar2);
                  uVar7 = *(uint *)(iVar13 + 0x1c);
                  local_2c = local_1c;
                }
                else {
                  if (uVar6 == 0) {
                    if (__dest == local_54) {
LAB_0006cc41:
                      local_2c = local_1c;
                      uVar7 = *(uint *)(iVar13 + 0x1c);
                      goto LAB_0006ca3e;
                    }
                  }
                  else {
                    memmove(__dest,pvVar3,uVar6);
                    local_54 = (undefined1 *)local_48[local_28 * 8 + 5];
                    __dest = (undefined1 *)(uVar6 + local_48[local_28 * 8 + 6]);
                    if (__dest == local_54) goto LAB_0006cc41;
                  }
                  *__dest = *local_54;
                  local_48[local_28 * 8 + 5] =
                       (uint)(__dest + (local_48[local_28 * 8 + 5] - (int)local_54));
                  uVar7 = *(uint *)(iVar13 + 0x1c);
                  local_2c = local_1c;
                }
              }
LAB_0006ca3e:
              local_48[local_28 * 8 + 7] = uVar7;
              local_28 = local_28 + 1;
              break;
            }
            uVar1 = *puVar5;
            puVar5 = puVar5 + 8;
          } while (uVar1 != uVar7);
        }
        local_24 = local_24 + 1;
      } while (local_24 < local_2c);
    }
    iVar13 = *(int *)(param_1 + 4);
  }
  if ((iVar13 != 0) && (iVar13 = *(int *)param_1, iVar13 != 0)) {
    iVar10 = *(int *)(iVar13 + -4) * 0x20 + iVar13;
    iVar12 = iVar10;
    while (iVar13 != iVar12) {
      *(int *)(iVar12 + -0x20) = *(int *)(unaff_EBX + 0x2f5c1) + 8;
      pvVar3 = *(void **)((iVar12 - iVar10) + -8 + iVar10);
      if ((pvVar3 != (void *)(iVar12 + -0x1c)) && (pvVar3 != (void *)0x0)) {
        uVar7 = *(int *)((iVar12 - iVar10) + -0x1c + iVar10) - (int)pvVar3;
        if (uVar7 < 0x81) {
          std::__node_alloc::_M_deallocate(pvVar3,uVar7);
        }
        else {
          operator_delete(pvVar3);
        }
      }
      iVar12 = iVar12 + -0x20;
      iVar13 = *(int *)param_1;
    }
    operator_delete__((void *)(iVar13 + -4));
    local_2c = local_1c;
  }
  if (local_28 < uVar9) {
    uVar9 = local_28;
  }
  *(uint **)param_1 = local_48;
  *(uint *)(param_1 + 4) = uVar9;
  if ((local_2c != 0) && (local_30 = local_20, local_20 != 0)) {
    iVar12 = *(int *)(local_20 + -4) * 0x20 + local_20;
    iVar13 = iVar12;
    while (local_30 != iVar13) {
      iVar10 = iVar13 + -0x20;
      iVar11 = iVar10 - iVar12;
      pvVar8 = (void *)(iVar13 + -0x1c);
      *(int *)(iVar12 + iVar11) = *(int *)(unaff_EBX + 0x2f5c1) + 8;
      pvVar3 = *(void **)(iVar11 + 0x18 + iVar12);
      iVar13 = iVar10;
      if ((pvVar3 != pvVar8) && (pvVar3 != (void *)0x0)) {
        uVar9 = *(int *)(iVar11 + 4 + iVar12) - (int)pvVar3;
        if (uVar9 < 0x81) {
          std::__node_alloc::_M_deallocate(pvVar3,uVar9);
          local_30 = local_20;
        }
        else {
          operator_delete(pvVar3);
          local_30 = local_20;
        }
      }
    }
    operator_delete__((void *)(local_30 + -4));
    return;
  }
  return;
}

