/* 00056fd0 | STG::UArrayFixed<STG::UStringBase<char,int>,unsigned_long>::operator= */

/* STG::UArrayFixed<STG::UStringBase<char, int>, unsigned
   long>::TEMPNAMEPLACEHOLDERVALUE(STG::UArrayFixed<STG::UStringBase<char, int>, unsigned long>
   const&) */

UArrayFixed<STG::UStringBase<char,int>,unsigned_long> * __thiscall
STG::UArrayFixed<STG::UStringBase<char,int>,unsigned_long>::operator=
          (UArrayFixed<STG::UStringBase<char,int>,unsigned_long> *this,UArrayFixed *param_1)

{
  uint uVar1;
  void *__src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  uint *puVar13;
  uint *puVar14;
  int iVar15;
  uint uVar16;
  int unaff_EBX;
  uint uVar17;
  undefined1 *puVar18;
  undefined4 *puVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  undefined1 *local_54;
  uint local_38;
  undefined1 *local_34;
  int local_30;
  undefined1 *local_28;
  uint local_24;
  undefined1 *local_20 [3];
  undefined4 uStack_14;
  
  uStack_14 = 0x56fdb;
  FUN_0002e044();
  uVar1 = *(uint *)(param_1 + 4);
  if (uVar1 == *(uint *)(this + 4)) {
    if (uVar1 != 0) {
      puVar14 = *(uint **)this;
      goto LAB_0005708d;
    }
  }
  else {
    if (*(uint *)(this + 4) == 0) {
      *(uint *)(this + 4) = uVar1;
    }
    else {
      puVar9 = *(undefined4 **)this;
      if (puVar9 != (undefined4 *)0x0) {
        puVar19 = puVar9 + puVar9[-1] * 7;
        if (puVar9 != puVar19) {
          do {
            puVar19 = puVar19 + -7;
            (**(code **)*puVar19)(puVar19);
            puVar9 = *(undefined4 **)this;
          } while (puVar9 != puVar19);
        }
        operator_delete__(puVar9 + -1);
      }
      *(undefined4 *)this = 0;
      *(uint *)(this + 4) = uVar1;
    }
    if (uVar1 != 0) {
      puVar5 = operator_new__(uVar1 * 0x1c + 4);
      puVar14 = puVar5 + 1;
      *puVar5 = uVar1;
      iVar6 = *(int *)(unaff_EBX + 0x44e61);
      local_24 = 0;
      puVar13 = puVar14;
      do {
        *puVar13 = iVar6 + 8;
        local_24 = local_24 + 1;
        *(uint **)((int)puVar5 + (int)puVar13 + (0x18 - (int)puVar14)) = puVar13 + 1;
        *(uint **)((int)puVar5 + (int)puVar13 + (0x1c - (int)puVar14)) = puVar13 + 1;
        *(undefined1 *)(puVar13 + 1) = 0;
        puVar13 = puVar13 + 7;
      } while (local_24 != uVar1);
      *(uint **)this = puVar14;
LAB_0005708d:
      local_30 = 0;
      local_38 = 0;
      do {
        iVar15 = (int)puVar14 + local_30;
        iVar6 = local_30 + *(int *)param_1;
        if (iVar6 != iVar15) {
          puVar21 = *(undefined1 **)(iVar6 + 0x14);
          __src = *(void **)(iVar6 + 0x18);
          local_28 = *(undefined1 **)(iVar15 + 0x14);
          puVar11 = *(undefined1 **)(iVar15 + 0x18);
          uVar17 = (int)puVar21 - (int)__src;
          uVar16 = (int)local_28 - (int)puVar11;
          if (uVar16 < uVar17) {
            local_34 = (undefined1 *)0x0;
            if (uVar16 != 0) {
              memmove(puVar11,__src,uVar16);
              local_28 = *(undefined1 **)(iVar15 + 0x14);
              puVar11 = *(undefined1 **)(iVar15 + 0x18);
              local_34 = local_28 + -(int)puVar11;
            }
            puVar18 = local_34 + (int)__src;
            if (puVar21 != puVar18) {
              puVar20 = puVar21 + -(int)puVar18;
              if ((undefined1 *)(iVar15 + 4) == puVar11) {
                puVar10 = puVar11 + (0x10 - (int)local_28);
              }
              else {
                puVar10 = (undefined1 *)(*(int *)(iVar15 + 4) - (int)local_28);
              }
              if (puVar20 < puVar10) {
                puVar11 = puVar18 + 1;
                uVar16 = (int)puVar21 - (int)puVar11;
                if (0 < (int)uVar16) {
                  uVar7 = uVar16 >> 4;
                  puVar21 = local_28 + 1;
                  uVar8 = uVar7 * 0x10;
                  uVar17 = uVar16;
                  if ((uVar7 == 0) ||
                     (uVar16 < 0x10 || puVar21 <= puVar18 + 0x11 && puVar11 <= local_28 + 0x11)) {
LAB_00057220:
                    do {
                      uVar17 = uVar17 - 1;
                      *puVar21 = *puVar11;
                      puVar11 = puVar11 + 1;
                      puVar21 = puVar21 + 1;
                    } while (0 < (int)uVar17);
                  }
                  else {
                    iVar6 = 0;
                    uVar17 = 0;
                    do {
                      puVar9 = (undefined4 *)(puVar18 + iVar6 + 1);
                      uVar2 = puVar9[1];
                      uVar3 = puVar9[2];
                      uVar4 = puVar9[3];
                      uVar17 = uVar17 + 1;
                      puVar19 = (undefined4 *)(local_28 + iVar6 + 1);
                      *puVar19 = *puVar9;
                      puVar19[1] = uVar2;
                      puVar19[2] = uVar3;
                      puVar19[3] = uVar4;
                      iVar6 = iVar6 + 0x10;
                    } while (uVar17 < uVar7);
                    puVar11 = puVar11 + uVar8;
                    puVar21 = puVar21 + uVar8;
                    uVar17 = uVar16 + uVar7 * -0x10;
                    if (uVar16 != uVar8) goto LAB_00057220;
                  }
                  local_28 = *(undefined1 **)(iVar15 + 0x14);
                }
                local_28[(int)puVar20] = 0;
                **(undefined1 **)(iVar15 + 0x14) = *puVar18;
                *(int *)(iVar15 + 0x14) = (int)(puVar20 + *(int *)(iVar15 + 0x14));
              }
              else {
                if ((undefined1 *)(-2 - (int)local_34) < puVar20) {
                    /* WARNING: Subroutine does not return */
                  std::__stl_throw_length_error((char *)(unaff_EBX + 0x30331));
                }
                puVar21 = local_34;
                if (local_34 <= puVar20) {
                  puVar21 = puVar20;
                }
                puVar21 = local_34 + 1 + (int)puVar21;
                if ((puVar21 == (undefined1 *)0xffffffff) || (puVar21 < local_34)) {
                  local_20[0] = (undefined1 *)0xfffffffe;
LAB_0005750d:
                  local_28 = operator_new((uint)local_20[0]);
LAB_0005732f:
                  local_54 = local_28 + (int)local_20[0];
                  puVar11 = *(undefined1 **)(iVar15 + 0x18);
                  local_34 = (undefined1 *)(*(int *)(iVar15 + 0x14) - (int)puVar11);
                }
                else {
                  local_54 = (undefined1 *)0x0;
                  local_28 = (undefined1 *)0x0;
                  if (puVar21 != (undefined1 *)0x0) {
                    local_20[0] = puVar21;
                    if ((undefined1 *)0x80 < puVar21) goto LAB_0005750d;
                    local_28 = (undefined1 *)std::__node_alloc::_M_allocate((uint *)local_20);
                    goto LAB_0005732f;
                  }
                }
                puVar21 = local_28;
                if (0 < (int)local_34) {
                  uVar16 = (uint)local_34 >> 4;
                  puVar12 = (undefined1 *)(uVar16 * 0x10);
                  puVar21 = local_34;
                  puVar10 = local_28;
                  if ((uVar16 == 0) ||
                     (local_34 < (undefined1 *)0x10 ||
                      local_28 <= puVar11 + 0x10 && puVar11 <= local_28 + 0x10)) {
LAB_000573f0:
                    do {
                      puVar21 = puVar21 + -1;
                      *puVar10 = *puVar11;
                      puVar11 = puVar11 + 1;
                      puVar10 = puVar10 + 1;
                    } while (0 < (int)puVar21);
                  }
                  else {
                    iVar6 = 0;
                    uVar17 = 0;
                    do {
                      puVar9 = (undefined4 *)(puVar11 + iVar6);
                      uVar2 = puVar9[1];
                      uVar3 = puVar9[2];
                      uVar4 = puVar9[3];
                      uVar17 = uVar17 + 1;
                      puVar19 = (undefined4 *)(local_28 + iVar6);
                      *puVar19 = *puVar9;
                      puVar19[1] = uVar2;
                      puVar19[2] = uVar3;
                      puVar19[3] = uVar4;
                      iVar6 = iVar6 + 0x10;
                    } while (uVar17 < uVar16);
                    puVar11 = puVar11 + (int)puVar12;
                    puVar21 = local_34 + uVar16 * -0x10;
                    puVar10 = local_28 + (int)puVar12;
                    if (local_34 != puVar12) goto LAB_000573f0;
                  }
                  puVar21 = local_28 + (int)local_34;
                }
                if (0 < (int)puVar20) {
                  uVar16 = (uint)puVar20 >> 4;
                  puVar12 = (undefined1 *)(uVar16 * 0x10);
                  puVar10 = puVar21;
                  puVar11 = puVar20;
                  if ((uVar16 == 0) ||
                     (puVar20 < (undefined1 *)0x10 ||
                      puVar21 <= puVar18 + 0x10 && puVar18 <= puVar21 + 0x10)) {
LAB_00057490:
                    do {
                      puVar11 = puVar11 + -1;
                      *puVar10 = *puVar18;
                      puVar18 = puVar18 + 1;
                      puVar10 = puVar10 + 1;
                    } while (0 < (int)puVar11);
                  }
                  else {
                    iVar6 = 0;
                    uVar17 = 0;
                    do {
                      puVar9 = (undefined4 *)(puVar18 + iVar6);
                      uVar2 = puVar9[1];
                      uVar3 = puVar9[2];
                      uVar4 = puVar9[3];
                      uVar17 = uVar17 + 1;
                      puVar19 = (undefined4 *)(puVar21 + iVar6);
                      *puVar19 = *puVar9;
                      puVar19[1] = uVar2;
                      puVar19[2] = uVar3;
                      puVar19[3] = uVar4;
                      iVar6 = iVar6 + 0x10;
                    } while (uVar17 < uVar16);
                    puVar18 = puVar18 + (int)puVar12;
                    puVar10 = puVar21 + (int)puVar12;
                    puVar11 = puVar20 + uVar16 * -0x10;
                    if (puVar20 != puVar12) goto LAB_00057490;
                  }
                  puVar21 = puVar21 + (int)puVar20;
                }
                *puVar21 = 0;
                puVar11 = *(undefined1 **)(iVar15 + 0x18);
                if (((undefined1 *)(iVar15 + 4) != puVar11) && (puVar11 != (undefined1 *)0x0)) {
                  uVar16 = *(int *)(iVar15 + 4) - (int)puVar11;
                  if (uVar16 < 0x81) {
                    std::__node_alloc::_M_deallocate(puVar11,uVar16);
                  }
                  else {
                    operator_delete(puVar11);
                  }
                }
                *(undefined1 **)(iVar15 + 4) = local_54;
                *(undefined1 **)(iVar15 + 0x14) = puVar21;
                *(undefined1 **)(iVar15 + 0x18) = local_28;
              }
            }
          }
          else {
            if (uVar17 != 0) {
              memmove(puVar11,__src,uVar17);
              local_28 = *(undefined1 **)(iVar15 + 0x14);
              puVar11 = *(undefined1 **)(iVar15 + 0x18);
            }
            puVar11 = puVar11 + uVar17;
            if (puVar11 != local_28) {
              *puVar11 = *local_28;
              *(int *)(iVar15 + 0x14) = (int)(puVar11 + (*(int *)(iVar15 + 0x14) - (int)local_28));
            }
          }
        }
        local_38 = local_38 + 1;
        local_30 = local_30 + 0x1c;
        if (uVar1 <= local_38) {
          return this;
        }
        puVar14 = *(uint **)this;
      } while( true );
    }
  }
  return this;
}

