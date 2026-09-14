/* 0004dba8 | STG::UArrayFixed<STG::UStringBase<char,int>,unsigned_long>::operator= */

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
  undefined1 *puVar4;
  uint uVar5;
  size_t __n;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  undefined1 *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  undefined4 *puVar14;
  uint uVar15;
  undefined1 *puVar16;
  void *__src;
  undefined1 *puVar17;
  bool bVar18;
  bool bVar19;
  undefined1 *local_34;
  undefined1 *local_2c [2];
  
  uVar7 = *(uint *)(param_1 + 4);
  if (uVar7 == *(uint *)(this + 4)) {
    if (uVar7 != 0) {
      puVar2 = *(undefined4 **)this;
      goto LAB_0004dc70;
    }
  }
  else {
    if (*(uint *)(this + 4) == 0) {
      *(uint *)(this + 4) = uVar7;
      iVar13 = DAT_0004e150;
    }
    else {
      iVar13 = *(int *)this;
      if (iVar13 != 0) {
        iVar8 = iVar13 + *(int *)(iVar13 + -4) * 0x1c;
        if (iVar13 != iVar8) {
          do {
            iVar12 = iVar8 + -0x1c;
            (*(code *)**(undefined4 **)(iVar8 + -0x1c))(iVar12);
            iVar13 = *(int *)this;
            iVar8 = iVar12;
          } while (iVar13 != iVar12);
        }
        operator_delete__((void *)(iVar13 + -8));
      }
      *(undefined4 *)this = 0;
      *(uint *)(this + 4) = uVar7;
      iVar13 = DAT_0004e150;
    }
    DAT_0004e150 = iVar13;
    if (uVar7 != 0) {
      puVar1 = operator_new__(uVar7 * 0x1c + 8);
      iVar13 = *(int *)(iVar13 + 0x4dc18);
      uVar5 = 0;
      puVar2 = puVar1 + 2;
      puVar1[1] = uVar7;
      *puVar1 = 0x1c;
      puVar14 = puVar1 + 3;
      do {
        uVar5 = uVar5 + 1;
        puVar14[-1] = iVar13 + 8;
        *(undefined4 **)((int)(puVar1 + 3) + (int)((int)puVar14 + (0xc - (int)puVar2))) = puVar14;
        *(undefined4 **)((int)puVar1 + (int)((int)puVar14 + (0x1c - (int)puVar2))) = puVar14;
        *(undefined1 *)puVar14 = 0;
        puVar14 = puVar14 + 7;
      } while (uVar5 != uVar7);
      *(undefined4 **)this = puVar2;
LAB_0004dc70:
      iVar13 = 0;
      uVar5 = 0;
      do {
        iVar12 = (int)puVar2 + iVar13;
        iVar8 = *(int *)param_1 + iVar13;
        if (iVar12 != iVar8) {
          __src = *(void **)(iVar8 + 0x18);
          puVar14 = *(undefined4 **)(iVar8 + 0x14);
          puVar2 = *(undefined4 **)(iVar12 + 0x18);
          puVar9 = *(undefined1 **)(iVar12 + 0x14);
          uVar15 = (int)puVar14 - (int)__src;
          __n = (int)puVar9 - (int)puVar2;
          if (__n < uVar15) {
            puVar17 = (undefined1 *)0x0;
            if (__n != 0) {
              memmove(puVar2,__src,__n);
              puVar9 = *(undefined1 **)(iVar12 + 0x14);
              puVar2 = *(undefined4 **)(iVar12 + 0x18);
              puVar17 = puVar9 + -(int)puVar2;
            }
            puVar1 = (undefined4 *)((int)__src + (int)puVar17);
            if (puVar14 != puVar1) {
              puVar16 = (undefined1 *)((int)puVar14 - (int)puVar1);
              if ((undefined4 *)(iVar12 + 4) == puVar2) {
                puVar4 = (undefined1 *)((int)puVar2 + (0x10 - (int)puVar9));
              }
              else {
                puVar4 = (undefined1 *)(*(int *)(iVar12 + 4) - (int)puVar9);
              }
              if (puVar16 < puVar4) {
                puVar17 = (undefined1 *)((int)puVar1 + 1);
                uVar15 = (int)puVar14 - (int)puVar17;
                if (0 < (int)uVar15) {
                  puVar2 = (undefined4 *)(puVar9 + 1);
                  uVar11 = uVar15 >> 2;
                  bVar19 = puVar9 + 5 <= puVar17;
                  bVar18 = puVar17 == puVar9 + 5;
                  if (!bVar19 || bVar18) {
                    bVar19 = (undefined4 *)((int)puVar1 + 5) <= puVar2;
                    bVar18 = puVar2 == (undefined4 *)((int)puVar1 + 5);
                  }
                  if (uVar11 == 0 ||
                      ((uVar15 < 4 || (((uint)puVar17 | (uint)puVar2) & 3) != 0) ||
                      (!bVar19 || bVar18))) {
LAB_0004dde4:
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
                    puVar14 = puVar2;
                    do {
                      puVar3 = puVar3 + 1;
                      uVar10 = uVar10 + 1;
                      *puVar14 = *puVar3;
                      puVar14 = puVar14 + 1;
                    } while (uVar10 < uVar11);
                    bVar18 = uVar15 != uVar11 * 4;
                    uVar15 = uVar15 + uVar11 * -4;
                    puVar2 = puVar2 + uVar11;
                    puVar17 = puVar17 + uVar11 * 4;
                    if (bVar18) goto LAB_0004dde4;
                  }
                  puVar9 = *(undefined1 **)(iVar12 + 0x14);
                }
                puVar9[(int)puVar16] = 0;
                **(undefined1 **)(iVar12 + 0x14) = *(undefined1 *)puVar1;
                *(undefined1 **)(iVar12 + 0x14) = puVar16 + *(int *)(iVar12 + 0x14);
              }
              else {
                if ((undefined1 *)(-2 - (int)puVar17) < puVar16) {
                    /* WARNING: Subroutine does not return */
                  std::__stl_throw_length_error((char *)(DAT_0004e154 + 0x4e148));
                }
                puVar9 = puVar16;
                if (puVar16 < puVar17) {
                  puVar9 = puVar17;
                }
                puVar9 = puVar17 + 1 + (int)puVar9;
                if ((puVar9 == (undefined1 *)0xffffffff) || (puVar9 < puVar17)) {
                  local_2c[0] = (undefined1 *)0xfffffffe;
LAB_0004e088:
                  puVar14 = operator_new((uint)local_2c[0]);
LAB_0004deac:
                  puVar2 = *(undefined4 **)(iVar12 + 0x18);
                  puVar17 = (undefined1 *)(*(int *)(iVar12 + 0x14) - (int)puVar2);
                  local_34 = (undefined1 *)((int)puVar14 + (int)local_2c[0]);
                }
                else {
                  if (puVar9 != (undefined1 *)0x0) {
                    local_2c[0] = puVar9;
                    if ((undefined1 *)0x80 < puVar9) goto LAB_0004e088;
                    puVar14 = (undefined4 *)std::__node_alloc::_M_allocate((uint *)local_2c);
                    goto LAB_0004deac;
                  }
                  puVar14 = (undefined4 *)0x0;
                  local_34 = (undefined1 *)0x0;
                }
                puVar3 = puVar14;
                if (0 < (int)puVar17) {
                  uVar15 = (uint)puVar17 >> 2;
                  bVar19 = puVar14 + 1 <= puVar2;
                  bVar18 = puVar2 == puVar14 + 1;
                  if (!bVar19 || bVar18) {
                    bVar19 = puVar2 + 1 <= puVar14;
                    bVar18 = puVar14 == puVar2 + 1;
                  }
                  puVar9 = puVar17;
                  if (uVar15 == 0 ||
                      ((puVar17 < (undefined1 *)0x4 || (((uint)puVar14 | (uint)puVar2) & 3) != 0) ||
                      (!bVar19 || bVar18))) {
LAB_0004df6c:
                    do {
                      puVar9 = puVar9 + -1;
                      *(undefined1 *)puVar3 = *(undefined1 *)puVar2;
                      puVar2 = (undefined4 *)((int)puVar2 + 1);
                      puVar3 = (undefined4 *)((int)puVar3 + 1);
                    } while (0 < (int)puVar9);
                  }
                  else {
                    uVar11 = 0;
                    puVar6 = puVar2;
                    do {
                      uVar11 = uVar11 + 1;
                      *puVar3 = *puVar6;
                      puVar3 = puVar3 + 1;
                      puVar6 = puVar6 + 1;
                    } while (uVar11 < uVar15);
                    puVar2 = puVar2 + uVar15;
                    puVar9 = puVar17 + uVar15 * -4;
                    puVar3 = puVar14 + uVar15;
                    if (puVar17 != (undefined1 *)(uVar15 * 4)) goto LAB_0004df6c;
                  }
                  puVar3 = (undefined4 *)((int)puVar14 + (int)puVar17);
                }
                if (0 < (int)puVar16) {
                  uVar15 = (uint)puVar16 >> 2;
                  bVar19 = puVar3 + 1 <= puVar1;
                  bVar18 = puVar1 == puVar3 + 1;
                  if (!bVar19 || bVar18) {
                    bVar19 = puVar1 + 1 <= puVar3;
                    bVar18 = puVar3 == puVar1 + 1;
                  }
                  puVar2 = puVar3;
                  puVar9 = puVar16;
                  if (uVar15 == 0 ||
                      ((puVar16 < (undefined1 *)0x4 || (((uint)puVar3 | (uint)puVar1) & 3) != 0) ||
                      (!bVar19 || bVar18))) {
LAB_0004e018:
                    do {
                      puVar9 = puVar9 + -1;
                      *(undefined1 *)puVar2 = *(undefined1 *)puVar1;
                      puVar2 = (undefined4 *)((int)puVar2 + 1);
                      puVar1 = (undefined4 *)((int)puVar1 + 1);
                    } while (0 < (int)puVar9);
                  }
                  else {
                    uVar11 = 0;
                    puVar2 = puVar1;
                    puVar6 = puVar3;
                    do {
                      uVar11 = uVar11 + 1;
                      *puVar6 = *puVar2;
                      puVar2 = puVar2 + 1;
                      puVar6 = puVar6 + 1;
                    } while (uVar11 < uVar15);
                    puVar2 = puVar3 + uVar15;
                    puVar9 = puVar16 + uVar15 * -4;
                    puVar1 = puVar1 + uVar15;
                    if (puVar16 != (undefined1 *)(uVar15 * 4)) goto LAB_0004e018;
                  }
                  puVar3 = (undefined4 *)((int)puVar3 + (int)puVar16);
                }
                *(undefined1 *)puVar3 = 0;
                puVar2 = *(undefined4 **)(iVar12 + 0x18);
                if (((undefined4 *)(iVar12 + 4) != puVar2) && (puVar2 != (undefined4 *)0x0)) {
                  uVar15 = *(int *)(iVar12 + 4) - (int)puVar2;
                  if (uVar15 < 0x81) {
                    std::__node_alloc::_M_deallocate(puVar2,uVar15);
                  }
                  else {
                    operator_delete(puVar2);
                  }
                }
                *(undefined4 **)(iVar12 + 0x14) = puVar3;
                *(undefined4 **)(iVar12 + 0x18) = puVar14;
                *(undefined1 **)(iVar12 + 4) = local_34;
              }
            }
          }
          else {
            if (uVar15 != 0) {
              memmove(puVar2,__src,uVar15);
              puVar2 = *(undefined4 **)(iVar12 + 0x18);
              puVar9 = *(undefined1 **)(iVar12 + 0x14);
            }
            if ((undefined1 *)((int)puVar2 + uVar15) != puVar9) {
              *(undefined1 *)((int)puVar2 + uVar15) = *puVar9;
              *(undefined1 **)(iVar12 + 0x14) =
                   (undefined1 *)((int)puVar2 + uVar15) + (*(int *)(iVar12 + 0x14) - (int)puVar9);
            }
          }
        }
        uVar5 = uVar5 + 1;
        iVar13 = iVar13 + 0x1c;
        if (uVar7 <= uVar5) {
          return this;
        }
        puVar2 = *(undefined4 **)this;
      } while( true );
    }
  }
  return this;
}

