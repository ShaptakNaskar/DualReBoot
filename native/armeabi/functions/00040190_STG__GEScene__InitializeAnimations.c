/* 00040190 | STG::GEScene::InitializeAnimations */

/* STG::GEScene::InitializeAnimations(STG::UTimeValue<unsigned long long, 1ul> const&, unsigned
   long, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long,
   unsigned long) */

void __thiscall
STG::GEScene::InitializeAnimations
          (GEScene *this,UTimeValue *param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5
          ,ulong param_6,ulong param_7,ulong param_8,ulong param_9)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  ulong uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined4 *local_104;
  undefined4 *local_100;
  undefined4 *local_fc;
  undefined4 *local_88;
  undefined4 *local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  iVar15 = *(int *)(this + 0x1bc);
  if (iVar15 != 0) {
    iVar12 = *(int *)(iVar15 + -4) * 0x110 + iVar15;
    iVar8 = iVar12;
    if (iVar12 != iVar15) {
      do {
        iVar12 = iVar8 + -0x110;
        if (iVar12 != 0) {
          iVar14 = iVar8 + -0x40;
          iVar11 = iVar8 + -0x48;
          iVar13 = iVar8 + -0x50;
          iVar15 = iVar8 + -8;
          do {
            iVar7 = iVar15 - (iVar8 + -8);
            if (*(int *)(iVar7 + iVar14 + 4) != 0) {
              if (*(void **)(iVar7 + iVar14) != (void *)0x0) {
                operator_delete__(*(void **)(iVar7 + iVar14));
              }
              *(undefined4 *)(iVar7 + iVar14) = 0;
              *(undefined4 *)(iVar7 + iVar14 + 4) = 0;
            }
            if (*(int *)(iVar7 + iVar11 + 4) != 0) {
              if (*(void **)(iVar7 + iVar11) != (void *)0x0) {
                operator_delete__(*(void **)(iVar7 + iVar11));
              }
              *(undefined4 *)(iVar7 + iVar11) = 0;
              *(undefined4 *)(iVar7 + iVar11 + 4) = 0;
            }
            if (*(int *)(iVar7 + iVar13 + 4) != 0) {
              if (*(void **)(iVar7 + iVar13) != (void *)0x0) {
                operator_delete__(*(void **)(iVar7 + iVar13));
              }
              *(undefined4 *)(iVar7 + iVar13) = 0;
              *(undefined4 *)(iVar7 + iVar13 + 4) = 0;
            }
            iVar15 = iVar15 + -0x58;
          } while (iVar12 != iVar15);
          iVar15 = *(int *)(this + 0x1bc);
        }
        iVar8 = iVar12;
      } while (iVar12 != iVar15);
    }
    operator_delete__((void *)(iVar12 + -8));
  }
  iVar15 = *(int *)(this + 0x1c0);
  *(undefined4 *)(this + 0x1bc) = 0;
  if (iVar15 != 0) {
    iVar12 = *(int *)(iVar15 + -4) * 0x110 + iVar15;
    iVar8 = iVar12;
    if (iVar12 != iVar15) {
      do {
        iVar12 = iVar8 + -0x110;
        if (iVar12 != 0) {
          iVar14 = iVar8 + -0x40;
          iVar11 = iVar8 + -0x48;
          iVar13 = iVar8 + -0x50;
          iVar15 = iVar8 + -8;
          do {
            iVar7 = iVar15 - (iVar8 + -8);
            if (*(int *)(iVar7 + iVar14 + 4) != 0) {
              if (*(void **)(iVar7 + iVar14) != (void *)0x0) {
                operator_delete__(*(void **)(iVar7 + iVar14));
              }
              *(undefined4 *)(iVar7 + iVar14) = 0;
              *(undefined4 *)(iVar7 + iVar14 + 4) = 0;
            }
            if (*(int *)(iVar7 + iVar11 + 4) != 0) {
              if (*(void **)(iVar7 + iVar11) != (void *)0x0) {
                operator_delete__(*(void **)(iVar7 + iVar11));
              }
              *(undefined4 *)(iVar7 + iVar11) = 0;
              *(undefined4 *)(iVar7 + iVar11 + 4) = 0;
            }
            if (*(int *)(iVar7 + iVar13 + 4) != 0) {
              if (*(void **)(iVar7 + iVar13) != (void *)0x0) {
                operator_delete__(*(void **)(iVar7 + iVar13));
              }
              *(undefined4 *)(iVar7 + iVar13) = 0;
              *(undefined4 *)(iVar7 + iVar13 + 4) = 0;
            }
            iVar15 = iVar15 + -0x58;
          } while (iVar12 != iVar15);
          iVar15 = *(int *)(this + 0x1c0);
        }
        iVar8 = iVar12;
      } while (iVar12 != iVar15);
    }
    operator_delete__((void *)(iVar12 + -8));
  }
  iVar15 = *(int *)(this + 0x1c4);
  *(undefined4 *)(this + 0x1c0) = 0;
  if (iVar15 != 0) {
    iVar12 = *(int *)(iVar15 + -4) * 0x110 + iVar15;
    iVar8 = iVar12;
    if (iVar12 != iVar15) {
      do {
        iVar12 = iVar8 + -0x110;
        if (iVar12 != 0) {
          iVar14 = iVar8 + -0x40;
          iVar11 = iVar8 + -0x48;
          iVar13 = iVar8 + -0x50;
          iVar15 = iVar8 + -8;
          do {
            iVar7 = iVar15 - (iVar8 + -8);
            if (*(int *)(iVar7 + iVar14 + 4) != 0) {
              if (*(void **)(iVar7 + iVar14) != (void *)0x0) {
                operator_delete__(*(void **)(iVar7 + iVar14));
              }
              *(undefined4 *)(iVar7 + iVar14) = 0;
              *(undefined4 *)(iVar7 + iVar14 + 4) = 0;
            }
            if (*(int *)(iVar7 + iVar11 + 4) != 0) {
              if (*(void **)(iVar7 + iVar11) != (void *)0x0) {
                operator_delete__(*(void **)(iVar7 + iVar11));
              }
              *(undefined4 *)(iVar7 + iVar11) = 0;
              *(undefined4 *)(iVar7 + iVar11 + 4) = 0;
            }
            if (*(int *)(iVar7 + iVar13 + 4) != 0) {
              if (*(void **)(iVar7 + iVar13) != (void *)0x0) {
                operator_delete__(*(void **)(iVar7 + iVar13));
              }
              *(undefined4 *)(iVar7 + iVar13) = 0;
              *(undefined4 *)(iVar7 + iVar13 + 4) = 0;
            }
            iVar15 = iVar15 + -0x58;
          } while (iVar12 != iVar15);
          iVar15 = *(int *)(this + 0x1c4);
        }
        iVar8 = iVar12;
      } while (iVar12 != iVar15);
    }
    operator_delete__((void *)(iVar12 + -8));
  }
  iVar15 = *(int *)(this + 0x1c8);
  *(undefined4 *)(this + 0x1c4) = 0;
  if (iVar15 != 0) {
    iVar12 = *(int *)(iVar15 + -4) * 0x110 + iVar15;
    iVar8 = iVar12;
    if (iVar12 != iVar15) {
      do {
        iVar12 = iVar8 + -0x110;
        if (iVar12 != 0) {
          iVar14 = iVar8 + -0x40;
          iVar11 = iVar8 + -0x48;
          iVar13 = iVar8 + -0x50;
          iVar15 = iVar8 + -8;
          do {
            iVar7 = iVar15 - (iVar8 + -8);
            if (*(int *)(iVar7 + iVar14 + 4) != 0) {
              if (*(void **)(iVar7 + iVar14) != (void *)0x0) {
                operator_delete__(*(void **)(iVar7 + iVar14));
              }
              *(undefined4 *)(iVar7 + iVar14) = 0;
              *(undefined4 *)(iVar7 + iVar14 + 4) = 0;
            }
            if (*(int *)(iVar7 + iVar11 + 4) != 0) {
              if (*(void **)(iVar7 + iVar11) != (void *)0x0) {
                operator_delete__(*(void **)(iVar7 + iVar11));
              }
              *(undefined4 *)(iVar7 + iVar11) = 0;
              *(undefined4 *)(iVar7 + iVar11 + 4) = 0;
            }
            if (*(int *)(iVar7 + iVar13 + 4) != 0) {
              if (*(void **)(iVar7 + iVar13) != (void *)0x0) {
                operator_delete__(*(void **)(iVar7 + iVar13));
              }
              *(undefined4 *)(iVar7 + iVar13) = 0;
              *(undefined4 *)(iVar7 + iVar13 + 4) = 0;
            }
            iVar15 = iVar15 + -0x58;
          } while (iVar12 != iVar15);
          iVar15 = *(int *)(this + 0x1c8);
        }
        iVar8 = iVar12;
      } while (iVar12 != iVar15);
    }
    operator_delete__((void *)(iVar12 + -8));
  }
  iVar15 = *(int *)(this + 0x1cc);
  *(undefined4 *)(this + 0x1c8) = 0;
  if (iVar15 != 0) {
    iVar12 = *(int *)(iVar15 + -4) * 0x170 + iVar15;
    iVar8 = iVar12;
    if (iVar12 != iVar15) {
      do {
        iVar12 = iVar8 + -0x170;
        if (iVar12 != 0) {
          iVar14 = iVar8 + -0x48;
          iVar11 = iVar8 + -0x50;
          iVar13 = iVar8 + -0x58;
          iVar15 = iVar8 + -0x10;
          do {
            iVar7 = iVar15 - (iVar8 + -0x10);
            if (*(int *)(iVar7 + iVar14 + 4) != 0) {
              if (*(void **)(iVar7 + iVar14) != (void *)0x0) {
                operator_delete__(*(void **)(iVar7 + iVar14));
              }
              *(undefined4 *)(iVar7 + iVar14) = 0;
              *(undefined4 *)(iVar7 + iVar14 + 4) = 0;
            }
            if (*(int *)(iVar7 + iVar11 + 4) != 0) {
              if (*(void **)(iVar7 + iVar11) != (void *)0x0) {
                operator_delete__(*(void **)(iVar7 + iVar11));
              }
              *(undefined4 *)(iVar7 + iVar11) = 0;
              *(undefined4 *)(iVar7 + iVar11 + 4) = 0;
            }
            if (*(int *)(iVar7 + iVar13 + 4) != 0) {
              if (*(void **)(iVar7 + iVar13) != (void *)0x0) {
                operator_delete__(*(void **)(iVar7 + iVar13));
              }
              *(undefined4 *)(iVar7 + iVar13) = 0;
              *(undefined4 *)(iVar7 + iVar13 + 4) = 0;
            }
            iVar15 = iVar15 + -0x58;
          } while (iVar12 != iVar15);
          iVar15 = *(int *)(this + 0x1cc);
        }
        iVar8 = iVar12;
      } while (iVar12 != iVar15);
    }
    operator_delete__((void *)(iVar12 + -8));
  }
  iVar15 = *(int *)(this + 0x1d0);
  *(undefined4 *)(this + 0x1cc) = 0;
  if (iVar15 != 0) {
    iVar12 = *(int *)(iVar15 + -4) * 0x168 + iVar15;
    iVar8 = iVar12;
    if (iVar12 != iVar15) {
      do {
        iVar12 = iVar8 + -0x168;
        if (iVar12 != 0) {
          iVar14 = iVar8 + -0x40;
          iVar11 = iVar8 + -0x48;
          iVar13 = iVar8 + -0x50;
          iVar15 = iVar8 + -8;
          do {
            iVar7 = iVar15 - (iVar8 + -8);
            if (*(int *)(iVar7 + iVar14 + 4) != 0) {
              if (*(void **)(iVar7 + iVar14) != (void *)0x0) {
                operator_delete__(*(void **)(iVar7 + iVar14));
              }
              *(undefined4 *)(iVar7 + iVar14) = 0;
              *(undefined4 *)(iVar7 + iVar14 + 4) = 0;
            }
            if (*(int *)(iVar7 + iVar11 + 4) != 0) {
              if (*(void **)(iVar7 + iVar11) != (void *)0x0) {
                operator_delete__(*(void **)(iVar7 + iVar11));
              }
              *(undefined4 *)(iVar7 + iVar11) = 0;
              *(undefined4 *)(iVar7 + iVar11 + 4) = 0;
            }
            if (*(int *)(iVar7 + iVar13 + 4) != 0) {
              if (*(void **)(iVar7 + iVar13) != (void *)0x0) {
                operator_delete__(*(void **)(iVar7 + iVar13));
              }
              *(undefined4 *)(iVar7 + iVar13) = 0;
              *(undefined4 *)(iVar7 + iVar13 + 4) = 0;
            }
            iVar15 = iVar15 + -0x58;
          } while (iVar12 != iVar15);
          iVar15 = *(int *)(this + 0x1d0);
        }
        iVar8 = iVar12;
      } while (iVar12 != iVar15);
    }
    operator_delete__((void *)(iVar12 + -8));
  }
  iVar15 = *(int *)(this + 0x1d4);
  *(undefined4 *)(this + 0x1d0) = 0;
  if (iVar15 != 0) {
    iVar12 = *(int *)(iVar15 + -4) * 0x60 + iVar15;
    iVar8 = iVar12;
    if (iVar12 != iVar15) {
      do {
        iVar12 = iVar8 + -0x60;
        if (iVar12 != 0) {
          iVar14 = iVar8 + -0x40;
          iVar11 = iVar8 + -0x48;
          iVar13 = iVar8 + -0x50;
          iVar15 = iVar8 + -8;
          do {
            iVar7 = iVar15 - (iVar8 + -8);
            if (*(int *)(iVar7 + iVar14 + 4) != 0) {
              if (*(void **)(iVar7 + iVar14) != (void *)0x0) {
                operator_delete__(*(void **)(iVar7 + iVar14));
              }
              *(undefined4 *)(iVar7 + iVar14) = 0;
              *(undefined4 *)(iVar7 + iVar14 + 4) = 0;
            }
            if (*(int *)(iVar7 + iVar11 + 4) != 0) {
              if (*(void **)(iVar7 + iVar11) != (void *)0x0) {
                operator_delete__(*(void **)(iVar7 + iVar11));
              }
              *(undefined4 *)(iVar7 + iVar11) = 0;
              *(undefined4 *)(iVar7 + iVar11 + 4) = 0;
            }
            if (*(int *)(iVar7 + iVar13 + 4) != 0) {
              if (*(void **)(iVar7 + iVar13) != (void *)0x0) {
                operator_delete__(*(void **)(iVar7 + iVar13));
              }
              *(undefined4 *)(iVar7 + iVar13) = 0;
              *(undefined4 *)(iVar7 + iVar13 + 4) = 0;
            }
            iVar15 = iVar15 + -0x58;
          } while (iVar12 != iVar15);
          iVar15 = *(int *)(this + 0x1d4);
        }
        iVar8 = iVar12;
      } while (iVar12 != iVar15);
    }
    operator_delete__((void *)(iVar12 + -8));
  }
  iVar15 = *(int *)(this + 0x1d8);
  *(undefined4 *)(this + 0x1d4) = 0;
  if (iVar15 != 0) {
    iVar12 = *(int *)(iVar15 + -4) * 0x60 + iVar15;
    iVar8 = iVar12;
    if (iVar12 != iVar15) {
      do {
        iVar12 = iVar8 + -0x60;
        if (iVar12 != 0) {
          iVar14 = iVar8 + -0x40;
          iVar11 = iVar8 + -0x48;
          iVar13 = iVar8 + -0x50;
          iVar15 = iVar8 + -8;
          do {
            iVar7 = iVar15 - (iVar8 + -8);
            if (*(int *)(iVar7 + iVar14 + 4) != 0) {
              if (*(void **)(iVar7 + iVar14) != (void *)0x0) {
                operator_delete__(*(void **)(iVar7 + iVar14));
              }
              *(undefined4 *)(iVar7 + iVar14) = 0;
              *(undefined4 *)(iVar7 + iVar14 + 4) = 0;
            }
            if (*(int *)(iVar7 + iVar11 + 4) != 0) {
              if (*(void **)(iVar7 + iVar11) != (void *)0x0) {
                operator_delete__(*(void **)(iVar7 + iVar11));
              }
              *(undefined4 *)(iVar7 + iVar11) = 0;
              *(undefined4 *)(iVar7 + iVar11 + 4) = 0;
            }
            if (*(int *)(iVar7 + iVar13 + 4) != 0) {
              if (*(void **)(iVar7 + iVar13) != (void *)0x0) {
                operator_delete__(*(void **)(iVar7 + iVar13));
              }
              *(undefined4 *)(iVar7 + iVar13) = 0;
              *(undefined4 *)(iVar7 + iVar13 + 4) = 0;
            }
            iVar15 = iVar15 + -0x58;
          } while (iVar12 != iVar15);
          iVar15 = *(int *)(this + 0x1d8);
        }
        iVar8 = iVar12;
      } while (iVar12 != iVar15);
    }
    operator_delete__((void *)(iVar12 + -8));
  }
  uVar10 = 0;
  uVar5 = *(undefined4 *)param_1;
  uVar6 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0x1d8) = 0;
  *(undefined4 *)(this + 0x200) = uVar5;
  *(undefined4 *)(this + 0x204) = uVar6;
  *(ulong *)(this + 0x1e4) = param_4;
  *(ulong *)(this + 0x1dc) = param_2;
  *(ulong *)(this + 0x1e0) = param_3;
  *(ulong *)(this + 0x1e8) = param_5;
  *(ulong *)(this + 0x1ec) = param_6;
  *(ulong *)(this + 0x1f0) = param_7;
  *(ulong *)(this + 500) = param_8;
  *(ulong *)(this + 0x1f8) = param_9;
  local_fc = (undefined4 *)param_3;
  if (param_2 != 0) {
    puVar3 = operator_new__(param_2 * 0x110 + 8);
    puVar2 = puVar3 + 2;
    *puVar3 = 0x110;
    puVar3[1] = param_2;
    puVar4 = puVar3 + 0x42;
    puVar1 = puVar2;
    local_88 = puVar3 + 0x2c;
    do {
      *puVar1 = 0;
      puVar1[1] = 0xc;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x10 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x18 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x20 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x28 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x30 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      uVar10 = uVar10 + 1;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x38 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x40 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x48 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x50 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      *(undefined1 *)(puVar1 + 0x14) = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x60 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0xc;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x68 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x70 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x78 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x80 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x88 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x90 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x98 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0xa0 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0xa8 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      *(undefined1 *)local_88 = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0xb8 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0xc;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0xc0 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (200 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0xd0 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0xd8 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0xe0 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0xe8 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0xf0 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0xf8 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x100 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      *(undefined1 *)puVar4 = 0;
      puVar1[0x42] = 0;
      puVar1 = puVar1 + 0x44;
      puVar4 = puVar4 + 0x44;
      local_88 = local_88 + 0x44;
    } while (uVar10 != param_2);
    local_fc = *(undefined4 **)(this + 0x1e0);
    *(undefined4 **)(this + 0x1bc) = puVar2;
  }
  if (local_fc != (undefined4 *)0x0) {
    puVar3 = operator_new__((int)local_fc * 0x110 + 8);
    puVar2 = puVar3 + 2;
    *puVar3 = 0x110;
    puVar3[1] = local_fc;
    uVar10 = 0;
    puVar4 = puVar3 + 0x42;
    puVar1 = puVar2;
    local_88 = puVar3 + 0x2c;
    do {
      *puVar1 = 0;
      puVar1[1] = 0xc;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x10 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x18 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x20 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x28 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x30 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      uVar10 = uVar10 + 1;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x38 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x40 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x48 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x50 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      *(undefined1 *)(puVar1 + 0x14) = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x60 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0xc;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x68 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x70 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x78 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x80 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x88 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x90 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x98 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0xa0 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0xa8 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      *(undefined1 *)local_88 = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0xb8 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0xc;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0xc0 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (200 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0xd0 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0xd8 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0xe0 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0xe8 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0xf0 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0xf8 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x100 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      *(undefined1 *)puVar4 = 0;
      puVar1[0x42] = 0;
      puVar1 = puVar1 + 0x44;
      puVar4 = puVar4 + 0x44;
      local_88 = local_88 + 0x44;
    } while ((undefined4 *)uVar10 != local_fc);
    *(undefined4 **)(this + 0x1c0) = puVar2;
  }
  iVar15 = *(int *)(this + 0x1e4);
  if (iVar15 != 0) {
    puVar3 = operator_new__(iVar15 * 0x110 + 8);
    puVar2 = puVar3 + 2;
    *puVar3 = 0x110;
    puVar3[1] = iVar15;
    iVar8 = 0;
    puVar4 = puVar3 + 0x42;
    puVar1 = puVar2;
    local_88 = puVar3 + 0x2c;
    do {
      *puVar1 = 0;
      puVar1[1] = 0xc;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x10 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x18 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x20 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x28 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x30 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      iVar8 = iVar8 + 1;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x38 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x40 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x48 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x50 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      *(undefined1 *)(puVar1 + 0x14) = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x60 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0xc;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x68 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x70 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x78 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x80 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x88 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x90 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x98 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0xa0 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0xa8 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      *(undefined1 *)local_88 = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0xb8 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0xc;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0xc0 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (200 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0xd0 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0xd8 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0xe0 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0xe8 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0xf0 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0xf8 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x100 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      *(undefined1 *)puVar4 = 0;
      puVar1[0x42] = 0;
      puVar1 = puVar1 + 0x44;
      puVar4 = puVar4 + 0x44;
      local_88 = local_88 + 0x44;
    } while (iVar8 != iVar15);
    *(undefined4 **)(this + 0x1c4) = puVar2;
  }
  iVar15 = *(int *)(this + 0x1e8);
  if (iVar15 != 0) {
    puVar3 = operator_new__(iVar15 * 0x110 + 8);
    puVar2 = puVar3 + 2;
    *puVar3 = 0x110;
    puVar3[1] = iVar15;
    iVar8 = 0;
    puVar4 = puVar3 + 0x42;
    puVar1 = puVar2;
    local_88 = puVar3 + 0x2c;
    do {
      *puVar1 = 0;
      puVar1[1] = 0xc;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x10 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x18 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x20 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x28 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x30 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      iVar8 = iVar8 + 1;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x38 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x40 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x48 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x50 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      *(undefined1 *)(puVar1 + 0x14) = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x60 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0xc;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x68 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x70 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x78 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x80 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x88 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x90 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x98 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0xa0 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0xa8 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      *(undefined1 *)local_88 = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0xb8 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0xc;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0xc0 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (200 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0xd0 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0xd8 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0xe0 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0xe8 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0xf0 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0xf8 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x100 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      *(undefined1 *)puVar4 = 0;
      puVar1[0x42] = 0;
      puVar1 = puVar1 + 0x44;
      puVar4 = puVar4 + 0x44;
      local_88 = local_88 + 0x44;
    } while (iVar8 != iVar15);
    *(undefined4 **)(this + 0x1c8) = puVar2;
  }
  iVar15 = *(int *)(this + 0x1ec);
  if (iVar15 != 0) {
    puVar4 = operator_new__(iVar15 * 0x170 + 8);
    iVar8 = iVar15 + -1;
    *puVar4 = 0x170;
    puVar4[1] = iVar15;
    if (iVar8 != -1) {
      puVar3 = puVar4 + 2;
      puVar1 = puVar3;
      local_104 = puVar4 + 0x2c;
      local_100 = puVar4 + 0x42;
      local_fc = puVar4 + 0x58;
      do {
        *puVar1 = 0;
        puVar1[1] = 0xc;
        puVar2 = (undefined4 *)((int)puVar4 + (int)puVar1 + (0x10 - (int)puVar3));
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2 = (undefined4 *)((int)puVar4 + (int)puVar1 + (0x18 - (int)puVar3));
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2 = (undefined4 *)((int)puVar4 + (int)puVar1 + (0x20 - (int)puVar3));
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2 = (undefined4 *)((int)puVar4 + (int)puVar1 + (0x28 - (int)puVar3));
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2 = (undefined4 *)((int)puVar4 + (int)puVar1 + (0x30 - (int)puVar3));
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2 = (undefined4 *)((int)puVar4 + (int)puVar1 + (0x38 - (int)puVar3));
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2 = (undefined4 *)((int)puVar4 + (int)puVar1 + (0x40 - (int)puVar3));
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2 = (undefined4 *)((int)puVar4 + (int)puVar1 + (0x48 - (int)puVar3));
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2 = (undefined4 *)((int)puVar4 + (int)puVar1 + (0x50 - (int)puVar3));
        *puVar2 = 0;
        puVar2[1] = 0;
        *(undefined1 *)(puVar1 + 0x14) = 0;
        puVar2 = (undefined4 *)((int)puVar4 + (int)puVar1 + (0x60 - (int)puVar3));
        *puVar2 = 0;
        puVar2[1] = 0xc;
        puVar2 = (undefined4 *)((int)puVar4 + (int)puVar1 + (0x68 - (int)puVar3));
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2 = (undefined4 *)((int)puVar4 + (int)puVar1 + (0x70 - (int)puVar3));
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2 = (undefined4 *)((int)puVar4 + (int)puVar1 + (0x78 - (int)puVar3));
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2 = (undefined4 *)((int)puVar4 + (int)puVar1 + (0x80 - (int)puVar3));
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2 = (undefined4 *)((int)puVar4 + (int)puVar1 + (0x88 - (int)puVar3));
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2 = (undefined4 *)((int)puVar4 + (int)puVar1 + (0x90 - (int)puVar3));
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2 = (undefined4 *)((int)puVar4 + (int)puVar1 + (0x98 - (int)puVar3));
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2 = (undefined4 *)((int)puVar4 + (int)puVar1 + (0xa0 - (int)puVar3));
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2 = (undefined4 *)((int)puVar4 + (int)puVar1 + (0xa8 - (int)puVar3));
        *puVar2 = 0;
        puVar2[1] = 0;
        *(undefined1 *)local_104 = 0;
        puVar2 = (undefined4 *)((int)puVar4 + (int)puVar1 + (0xb8 - (int)puVar3));
        *puVar2 = 0;
        puVar2[1] = 0xc;
        puVar2 = (undefined4 *)((int)puVar4 + (int)puVar1 + (0xc0 - (int)puVar3));
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2 = (undefined4 *)((int)puVar4 + (int)puVar1 + (200 - (int)puVar3));
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2 = (undefined4 *)((int)puVar4 + (int)puVar1 + (0xd0 - (int)puVar3));
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2 = (undefined4 *)((int)puVar4 + (int)puVar1 + (0xd8 - (int)puVar3));
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2 = (undefined4 *)((int)puVar4 + (int)puVar1 + (0xe0 - (int)puVar3));
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2 = (undefined4 *)((int)puVar4 + (int)puVar1 + (0xe8 - (int)puVar3));
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2 = (undefined4 *)((int)puVar4 + (int)puVar1 + (0xf0 - (int)puVar3));
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2 = (undefined4 *)((int)puVar4 + (int)puVar1 + (0xf8 - (int)puVar3));
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2 = (undefined4 *)((int)puVar4 + (int)puVar1 + (0x100 - (int)puVar3));
        *puVar2 = 0;
        puVar2[1] = 0;
        *(undefined1 *)local_100 = 0;
        puVar2 = (undefined4 *)((int)puVar4 + (int)puVar1 + (0x110 - (int)puVar3));
        *puVar2 = 0;
        puVar2[1] = 0xc;
        puVar2 = (undefined4 *)((int)puVar4 + (int)puVar1 + (0x118 - (int)puVar3));
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2 = (undefined4 *)((int)puVar4 + (int)puVar1 + (0x120 - (int)puVar3));
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2 = (undefined4 *)((int)puVar4 + (int)puVar1 + (0x128 - (int)puVar3));
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2 = (undefined4 *)((int)puVar4 + (int)puVar1 + (0x130 - (int)puVar3));
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2 = (undefined4 *)((int)puVar4 + (int)puVar1 + (0x138 - (int)puVar3));
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2 = (undefined4 *)((int)puVar4 + (int)puVar1 + (0x140 - (int)puVar3));
        *puVar2 = 0;
        puVar2[1] = 0;
        iVar8 = iVar8 + -1;
        puVar2 = (undefined4 *)((int)puVar4 + (int)puVar1 + (0x148 - (int)puVar3));
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2 = (undefined4 *)((int)puVar4 + (int)puVar1 + (0x150 - (int)puVar3));
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2 = (undefined4 *)((int)puVar4 + (int)puVar1 + (0x158 - (int)puVar3));
        *puVar2 = 0;
        puVar2[1] = 0;
        *(undefined1 *)local_fc = 0;
        puVar1[0x58] = 0;
        puVar1[0x59] = 0;
        puVar1[0x5a] = 0;
        local_30 = 0;
        uStack_2c = 0;
        local_38 = 0;
        uStack_34 = 0;
        local_40 = 0;
        uStack_3c = 0;
        GEAnimationTrack::Initialize
                  ((GEAnimationTrack *)(puVar1 + 0x2c),0x3f800000,0,&local_30,&local_38,0xc,
                   &local_40);
        local_48 = 0;
        uStack_44 = 0;
        local_50 = 0;
        uStack_4c = 0;
        local_58 = 0;
        uStack_54 = 0;
        GEAnimationTrack::Initialize
                  ((GEAnimationTrack *)(puVar1 + 0x42),0x3f800000,0,&local_48,&local_50,0xc,
                   &local_58);
        puVar1 = puVar1 + 0x5c;
        local_104 = local_104 + 0x5c;
        local_100 = local_100 + 0x5c;
        local_fc = local_fc + 0x5c;
      } while (iVar8 != -1);
    }
    *(undefined4 **)(this + 0x1cc) = puVar4 + 2;
  }
  iVar15 = *(int *)(this + 0x1f0);
  if (iVar15 != 0) {
    puVar3 = operator_new__(iVar15 * 0x168 + 8);
    puVar2 = puVar3 + 2;
    *puVar3 = 0x168;
    puVar3[1] = iVar15;
    iVar8 = 0;
    puVar4 = puVar3 + 0x42;
    puVar1 = puVar2;
    local_104 = puVar3 + 0x58;
    local_5c = puVar3 + 0x2c;
    do {
      *puVar1 = 0;
      puVar1[1] = 0xc;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x10 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x18 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x20 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x28 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x30 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      iVar8 = iVar8 + 1;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x38 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x40 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x48 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x50 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      *(undefined1 *)(puVar1 + 0x14) = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x60 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0xc;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x68 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x70 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x78 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x80 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x88 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x90 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x98 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0xa0 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0xa8 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      *(undefined1 *)local_5c = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0xb8 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0xc;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0xc0 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (200 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0xd0 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0xd8 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0xe0 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0xe8 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0xf0 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0xf8 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x100 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      *(undefined1 *)puVar4 = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x110 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0xc;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x118 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x120 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x128 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x130 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x138 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x140 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x148 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x150 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9 = (undefined4 *)((int)puVar3 + (int)puVar1 + (0x158 - (int)puVar2));
      *puVar9 = 0;
      puVar9[1] = 0;
      *(undefined1 *)local_104 = 0;
      puVar1[0x58] = 0;
      puVar1 = puVar1 + 0x5a;
      puVar4 = puVar4 + 0x5a;
      local_104 = local_104 + 0x5a;
      local_5c = local_5c + 0x5a;
    } while (iVar8 != iVar15);
    *(undefined4 **)(this + 0x1d0) = puVar2;
  }
  iVar15 = *(int *)(this + 500);
  if (iVar15 != 0) {
    puVar1 = operator_new__(iVar15 * 0x60 + 8);
    puVar3 = puVar1 + 2;
    *puVar1 = 0x60;
    iVar8 = 0;
    puVar1[1] = iVar15;
    puVar4 = puVar3;
    do {
      *puVar4 = 0;
      puVar4[1] = 0xc;
      puVar2 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x10 - (int)puVar3));
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x18 - (int)puVar3));
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x20 - (int)puVar3));
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x28 - (int)puVar3));
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x30 - (int)puVar3));
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x38 - (int)puVar3));
      *puVar2 = 0;
      puVar2[1] = 0;
      iVar8 = iVar8 + 1;
      puVar2 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x40 - (int)puVar3));
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x48 - (int)puVar3));
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x50 - (int)puVar3));
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined1 *)(puVar4 + 0x14) = 0;
      puVar4[0x16] = 0;
      puVar4 = puVar4 + 0x18;
    } while (iVar8 != iVar15);
    *(undefined4 **)(this + 0x1d4) = puVar3;
  }
  iVar15 = *(int *)(this + 0x1f8);
  if (iVar15 != 0) {
    puVar1 = operator_new__(iVar15 * 0x60 + 8);
    puVar3 = puVar1 + 2;
    *puVar1 = 0x60;
    iVar8 = 0;
    puVar1[1] = iVar15;
    puVar4 = puVar3;
    do {
      *puVar4 = 0;
      puVar4[1] = 0xc;
      puVar2 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x10 - (int)puVar3));
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x18 - (int)puVar3));
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x20 - (int)puVar3));
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x28 - (int)puVar3));
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x30 - (int)puVar3));
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x38 - (int)puVar3));
      *puVar2 = 0;
      puVar2[1] = 0;
      iVar8 = iVar8 + 1;
      puVar2 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x40 - (int)puVar3));
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x48 - (int)puVar3));
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x50 - (int)puVar3));
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined1 *)(puVar4 + 0x14) = 0;
      puVar4[0x16] = 0;
      puVar4 = puVar4 + 0x18;
    } while (iVar8 != iVar15);
    *(undefined4 **)(this + 0x1d8) = puVar3;
  }
  return;
}

