/* 00050344 | STG::UArrayFixed<STG::UStringBase<char,int>,unsigned_long>::operator= */

/* STG::UArrayFixed<STG::UStringBase<char, int>, unsigned
   long>::TEMPNAMEPLACEHOLDERVALUE(STG::UArrayFixed<STG::UStringBase<char, int>, unsigned long>
   const&) */

UArrayFixed<STG::UStringBase<char,int>,unsigned_long> * __thiscall
STG::UArrayFixed<STG::UStringBase<char,int>,unsigned_long>::operator=
          (UArrayFixed<STG::UStringBase<char,int>,unsigned_long> *this,UArrayFixed *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  size_t __n;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  undefined1 *puVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  uint uVar15;
  uint uVar16;
  void *__src;
  undefined1 *puVar17;
  bool bVar18;
  bool bVar19;
  undefined1 *local_34;
  uint local_2c [2];
  
  uVar7 = *(uint *)(param_1 + 4);
  if (uVar7 == *(uint *)(this + 4)) {
    if (uVar7 != 0) {
      puVar2 = *(undefined4 **)this;
      goto LAB_0005040c;
    }
  }
  else {
    if (*(uint *)(this + 4) == 0) {
      *(uint *)(this + 4) = uVar7;
    }
    else {
      iVar12 = *(int *)this;
      if (iVar12 != 0) {
        iVar8 = *(int *)(iVar12 + -4) * 0x1c + iVar12;
        if (iVar12 != iVar8) {
          do {
            puVar2 = (undefined4 *)(iVar8 + -0x1c);
            iVar8 = iVar8 + -0x1c;
            (**(code **)*puVar2)(iVar8);
            iVar12 = *(int *)this;
          } while (iVar12 != iVar8);
        }
        operator_delete__((void *)(iVar12 + -8));
      }
      *(undefined4 *)this = 0;
      *(uint *)(this + 4) = uVar7;
    }
    if (uVar7 != 0) {
      puVar1 = operator_new__(uVar7 * 0x1c + 8);
      uVar5 = 0;
      iVar12 = *(int *)(DAT_000508e4 + 0x503c4);
      *puVar1 = 0x1c;
      puVar1[1] = uVar7;
      puVar2 = puVar1 + 2;
      puVar13 = puVar1 + 3;
      do {
        uVar5 = uVar5 + 1;
        puVar13[-1] = iVar12 + 8;
        *(undefined4 **)((int)(puVar1 + 3) + (int)((int)puVar13 + (0xc - (int)puVar2))) = puVar13;
        *(undefined4 **)((int)puVar1 + (int)((int)puVar13 + (0x1c - (int)puVar2))) = puVar13;
        *(undefined1 *)puVar13 = 0;
        puVar13 = puVar13 + 7;
      } while (uVar5 != uVar7);
      *(undefined4 **)this = puVar2;
LAB_0005040c:
      iVar12 = 0;
      uVar5 = 0;
      do {
        iVar11 = (int)puVar2 + iVar12;
        iVar8 = *(int *)param_1 + iVar12;
        if (iVar11 != iVar8) {
          __src = *(void **)(iVar8 + 0x18);
          puVar13 = *(undefined4 **)(iVar8 + 0x14);
          puVar2 = *(undefined4 **)(iVar11 + 0x18);
          puVar9 = *(undefined1 **)(iVar11 + 0x14);
          uVar15 = (int)puVar13 - (int)__src;
          __n = (int)puVar9 - (int)puVar2;
          if (__n < uVar15) {
            uVar15 = 0;
            if (__n != 0) {
              memmove(puVar2,__src,__n);
              puVar9 = *(undefined1 **)(iVar11 + 0x14);
              puVar2 = *(undefined4 **)(iVar11 + 0x18);
              uVar15 = (int)puVar9 - (int)puVar2;
            }
            puVar1 = (undefined4 *)((int)__src + uVar15);
            if (puVar13 != puVar1) {
              puVar3 = (undefined4 *)(iVar11 + 4);
              if (puVar3 != puVar2) {
                iVar8 = *(int *)(iVar11 + 4);
              }
              else {
                iVar8 = (int)puVar2 - (int)puVar9;
              }
              uVar16 = (int)puVar13 - (int)puVar1;
              if (puVar3 != puVar2) {
                uVar4 = iVar8 - (int)puVar9;
              }
              else {
                uVar4 = iVar8 + 0x10;
              }
              if (uVar16 < uVar4) {
                puVar17 = (undefined1 *)((int)puVar1 + 1);
                uVar15 = (int)puVar13 - (int)puVar17;
                if (0 < (int)uVar15) {
                  puVar2 = (undefined4 *)(puVar9 + 1);
                  bVar19 = puVar9 + 5 <= puVar17;
                  bVar18 = puVar17 == puVar9 + 5;
                  if (!bVar19 || bVar18) {
                    bVar19 = (undefined4 *)((int)puVar1 + 5) <= puVar2;
                    bVar18 = puVar2 == (undefined4 *)((int)puVar1 + 5);
                  }
                  uVar4 = uVar15 >> 2;
                  if (uVar4 == 0 ||
                      ((uVar15 < 4 || (((uint)puVar17 | (uint)puVar2) & 3) != 0) ||
                      (!bVar19 || bVar18))) {
LAB_00050580:
                    do {
                      uVar15 = uVar15 - 1;
                      *(undefined1 *)puVar2 = *puVar17;
                      puVar2 = (undefined4 *)((int)puVar2 + 1);
                      puVar17 = puVar17 + 1;
                    } while (0 < (int)uVar15);
                  }
                  else {
                    puVar3 = (undefined4 *)((int)puVar1 + -3);
                    uVar10 = 0;
                    puVar13 = puVar2;
                    do {
                      puVar3 = puVar3 + 1;
                      uVar10 = uVar10 + 1;
                      *puVar13 = *puVar3;
                      puVar13 = puVar13 + 1;
                    } while (uVar10 < uVar4);
                    bVar18 = uVar15 != uVar4 * 4;
                    uVar15 = uVar15 + uVar4 * -4;
                    puVar2 = puVar2 + uVar4;
                    puVar17 = puVar17 + uVar4 * 4;
                    if (bVar18) goto LAB_00050580;
                  }
                  puVar9 = *(undefined1 **)(iVar11 + 0x14);
                }
                puVar9[uVar16] = 0;
                **(undefined1 **)(iVar11 + 0x14) = *(undefined1 *)puVar1;
                *(uint *)(iVar11 + 0x14) = *(int *)(iVar11 + 0x14) + uVar16;
              }
              else {
                if (-uVar15 - 2 < uVar16) {
                    /* WARNING: Subroutine does not return */
                  std::__stl_throw_length_error((char *)(DAT_000508e8 + 0x508dc));
                }
                uVar4 = uVar16;
                if (uVar16 < uVar15) {
                  uVar4 = uVar15;
                }
                uVar4 = uVar15 + 1 + uVar4;
                if ((uVar4 == 0xffffffff) || (uVar4 < uVar15)) {
                  local_2c[0] = 0xfffffffe;
LAB_00050820:
                  puVar13 = operator_new(local_2c[0]);
LAB_00050644:
                  puVar2 = *(undefined4 **)(iVar11 + 0x18);
                  local_34 = (undefined1 *)((int)puVar13 + local_2c[0]);
                  uVar15 = *(int *)(iVar11 + 0x14) - (int)puVar2;
                }
                else {
                  if (uVar4 != 0) {
                    local_2c[0] = uVar4;
                    if (0x80 < uVar4) goto LAB_00050820;
                    puVar13 = (undefined4 *)std::__node_alloc::_M_allocate(local_2c);
                    goto LAB_00050644;
                  }
                  puVar13 = (undefined4 *)0x0;
                  local_34 = (undefined1 *)0x0;
                }
                puVar14 = puVar13;
                if (0 < (int)uVar15) {
                  bVar19 = puVar13 + 1 <= puVar2;
                  bVar18 = puVar2 == puVar13 + 1;
                  if (!bVar19 || bVar18) {
                    bVar19 = puVar2 + 1 <= puVar13;
                    bVar18 = puVar13 == puVar2 + 1;
                  }
                  uVar4 = uVar15 >> 2;
                  uVar10 = uVar15;
                  if (uVar4 == 0 ||
                      ((uVar15 < 4 || (((uint)puVar13 | (uint)puVar2) & 3) != 0) ||
                      (!bVar19 || bVar18))) {
LAB_00050704:
                    do {
                      uVar10 = uVar10 - 1;
                      *(undefined1 *)puVar14 = *(undefined1 *)puVar2;
                      puVar2 = (undefined4 *)((int)puVar2 + 1);
                      puVar14 = (undefined4 *)((int)puVar14 + 1);
                    } while (0 < (int)uVar10);
                  }
                  else {
                    uVar10 = 0;
                    puVar6 = puVar2;
                    do {
                      uVar10 = uVar10 + 1;
                      *puVar14 = *puVar6;
                      puVar14 = puVar14 + 1;
                      puVar6 = puVar6 + 1;
                    } while (uVar10 < uVar4);
                    puVar2 = puVar2 + uVar4;
                    uVar10 = uVar15 + uVar4 * -4;
                    puVar14 = puVar13 + uVar4;
                    if (uVar15 != uVar4 * 4) goto LAB_00050704;
                  }
                  puVar14 = (undefined4 *)((int)puVar13 + uVar15);
                }
                if (0 < (int)uVar16) {
                  bVar19 = puVar14 + 1 <= puVar1;
                  bVar18 = puVar1 == puVar14 + 1;
                  if (!bVar19 || bVar18) {
                    bVar19 = puVar1 + 1 <= puVar14;
                    bVar18 = puVar14 == puVar1 + 1;
                  }
                  uVar15 = uVar16 >> 2;
                  puVar2 = puVar14;
                  uVar4 = uVar16;
                  if (uVar15 == 0 ||
                      ((uVar16 < 4 || (((uint)puVar14 | (uint)puVar1) & 3) != 0) ||
                      (!bVar19 || bVar18))) {
LAB_000507b0:
                    do {
                      uVar4 = uVar4 - 1;
                      *(undefined1 *)puVar2 = *(undefined1 *)puVar1;
                      puVar2 = (undefined4 *)((int)puVar2 + 1);
                      puVar1 = (undefined4 *)((int)puVar1 + 1);
                    } while (0 < (int)uVar4);
                  }
                  else {
                    uVar4 = 0;
                    puVar2 = puVar1;
                    puVar6 = puVar14;
                    do {
                      uVar4 = uVar4 + 1;
                      *puVar6 = *puVar2;
                      puVar2 = puVar2 + 1;
                      puVar6 = puVar6 + 1;
                    } while (uVar4 < uVar15);
                    puVar2 = puVar14 + uVar15;
                    uVar4 = uVar16 + uVar15 * -4;
                    puVar1 = puVar1 + uVar15;
                    if (uVar16 != uVar15 * 4) goto LAB_000507b0;
                  }
                  puVar14 = (undefined4 *)((int)puVar14 + uVar16);
                }
                *(undefined1 *)puVar14 = 0;
                puVar2 = *(undefined4 **)(iVar11 + 0x18);
                if ((puVar3 != puVar2) && (puVar2 != (undefined4 *)0x0)) {
                  uVar15 = *(int *)(iVar11 + 4) - (int)puVar2;
                  if (uVar15 < 0x81) {
                    std::__node_alloc::_M_deallocate(puVar2,uVar15);
                  }
                  else {
                    operator_delete(puVar2);
                  }
                }
                *(undefined4 **)(iVar11 + 0x14) = puVar14;
                *(undefined4 **)(iVar11 + 0x18) = puVar13;
                *(undefined1 **)(iVar11 + 4) = local_34;
              }
            }
          }
          else {
            if (uVar15 != 0) {
              memmove(puVar2,__src,uVar15);
              puVar2 = *(undefined4 **)(iVar11 + 0x18);
              puVar9 = *(undefined1 **)(iVar11 + 0x14);
            }
            if ((undefined1 *)((int)puVar2 + uVar15) != puVar9) {
              *(undefined1 *)((int)puVar2 + uVar15) = *puVar9;
              *(undefined1 **)(iVar11 + 0x14) =
                   (undefined1 *)((int)puVar2 + uVar15) + (*(int *)(iVar11 + 0x14) - (int)puVar9);
            }
          }
        }
        uVar5 = uVar5 + 1;
        iVar12 = iVar12 + 0x1c;
        if (uVar7 <= uVar5) {
          return this;
        }
        puVar2 = *(undefined4 **)this;
      } while( true );
    }
  }
  return this;
}

