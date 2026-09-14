/* 0003dc7c | STG::GEScene::InitializeAnimations */

/* STG::GEScene::InitializeAnimations(STG::UTimeValue<unsigned long long, 1ul> const&, unsigned
   long, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long,
   unsigned long) */

void __thiscall
STG::GEScene::InitializeAnimations
          (GEScene *this,UTimeValue *param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5
          ,ulong param_6,ulong param_7,ulong param_8,ulong param_9)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  ulong local_128;
  undefined4 *local_120;
  undefined4 *local_11c;
  undefined4 *local_118;
  int local_114;
  undefined4 *local_110;
  undefined4 *local_10c;
  undefined4 *local_108;
  undefined4 *local_104;
  undefined4 *local_100;
  undefined4 *local_fc;
  undefined4 *local_f8;
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
  
  iVar2 = *(int *)(this + 0x1bc);
  if (iVar2 != 0) {
    iVar13 = iVar2 + *(int *)(iVar2 + -4) * 0x110;
    iVar9 = iVar13;
    if (iVar13 != iVar2) {
      do {
        iVar13 = iVar9 + -0x110;
        if (iVar13 != 0) {
          iVar15 = iVar9 + -0x40;
          iVar16 = iVar9 + -0x48;
          iVar14 = iVar9 + -0x50;
          iVar2 = iVar9 + -8;
          do {
            iVar6 = iVar2 - (iVar9 + -8);
            if (*(int *)(iVar6 + iVar15 + 4) != 0) {
              if (*(void **)(iVar6 + iVar15) != (void *)0x0) {
                operator_delete__(*(void **)(iVar6 + iVar15));
              }
              *(undefined4 *)(iVar6 + iVar15) = 0;
              *(undefined4 *)(iVar6 + iVar15 + 4) = 0;
            }
            if (*(int *)(iVar6 + iVar16 + 4) != 0) {
              if (*(void **)(iVar6 + iVar16) != (void *)0x0) {
                operator_delete__(*(void **)(iVar6 + iVar16));
              }
              *(undefined4 *)(iVar6 + iVar16) = 0;
              *(undefined4 *)(iVar6 + iVar16 + 4) = 0;
            }
            if (*(int *)(iVar6 + iVar14 + 4) != 0) {
              if (*(void **)(iVar6 + iVar14) != (void *)0x0) {
                operator_delete__(*(void **)(iVar6 + iVar14));
              }
              *(undefined4 *)(iVar6 + iVar14) = 0;
              *(undefined4 *)(iVar6 + iVar14 + 4) = 0;
            }
            iVar2 = iVar2 + -0x58;
          } while (iVar13 != iVar2);
          iVar2 = *(int *)(this + 0x1bc);
        }
        iVar9 = iVar13;
      } while (iVar13 != iVar2);
    }
    operator_delete__((void *)(iVar13 + -8));
  }
  iVar2 = *(int *)(this + 0x1c0);
  *(undefined4 *)(this + 0x1bc) = 0;
  if (iVar2 != 0) {
    iVar13 = iVar2 + *(int *)(iVar2 + -4) * 0x110;
    iVar9 = iVar13;
    if (iVar13 != iVar2) {
      do {
        iVar13 = iVar9 + -0x110;
        if (iVar13 != 0) {
          iVar15 = iVar9 + -0x40;
          iVar16 = iVar9 + -0x48;
          iVar14 = iVar9 + -0x50;
          iVar2 = iVar9 + -8;
          do {
            iVar6 = iVar2 - (iVar9 + -8);
            if (*(int *)(iVar6 + iVar15 + 4) != 0) {
              if (*(void **)(iVar6 + iVar15) != (void *)0x0) {
                operator_delete__(*(void **)(iVar6 + iVar15));
              }
              *(undefined4 *)(iVar6 + iVar15) = 0;
              *(undefined4 *)(iVar6 + iVar15 + 4) = 0;
            }
            if (*(int *)(iVar6 + iVar16 + 4) != 0) {
              if (*(void **)(iVar6 + iVar16) != (void *)0x0) {
                operator_delete__(*(void **)(iVar6 + iVar16));
              }
              *(undefined4 *)(iVar6 + iVar16) = 0;
              *(undefined4 *)(iVar6 + iVar16 + 4) = 0;
            }
            if (*(int *)(iVar6 + iVar14 + 4) != 0) {
              if (*(void **)(iVar6 + iVar14) != (void *)0x0) {
                operator_delete__(*(void **)(iVar6 + iVar14));
              }
              *(undefined4 *)(iVar6 + iVar14) = 0;
              *(undefined4 *)(iVar6 + iVar14 + 4) = 0;
            }
            iVar2 = iVar2 + -0x58;
          } while (iVar13 != iVar2);
          iVar2 = *(int *)(this + 0x1c0);
        }
        iVar9 = iVar13;
      } while (iVar13 != iVar2);
    }
    operator_delete__((void *)(iVar13 + -8));
  }
  iVar2 = *(int *)(this + 0x1c4);
  *(undefined4 *)(this + 0x1c0) = 0;
  if (iVar2 != 0) {
    iVar13 = iVar2 + *(int *)(iVar2 + -4) * 0x110;
    iVar9 = iVar13;
    if (iVar13 != iVar2) {
      do {
        iVar13 = iVar9 + -0x110;
        if (iVar13 != 0) {
          iVar15 = iVar9 + -0x40;
          iVar16 = iVar9 + -0x48;
          iVar14 = iVar9 + -0x50;
          iVar2 = iVar9 + -8;
          do {
            iVar6 = iVar2 - (iVar9 + -8);
            if (*(int *)(iVar6 + iVar15 + 4) != 0) {
              if (*(void **)(iVar6 + iVar15) != (void *)0x0) {
                operator_delete__(*(void **)(iVar6 + iVar15));
              }
              *(undefined4 *)(iVar6 + iVar15) = 0;
              *(undefined4 *)(iVar6 + iVar15 + 4) = 0;
            }
            if (*(int *)(iVar6 + iVar16 + 4) != 0) {
              if (*(void **)(iVar6 + iVar16) != (void *)0x0) {
                operator_delete__(*(void **)(iVar6 + iVar16));
              }
              *(undefined4 *)(iVar6 + iVar16) = 0;
              *(undefined4 *)(iVar6 + iVar16 + 4) = 0;
            }
            if (*(int *)(iVar6 + iVar14 + 4) != 0) {
              if (*(void **)(iVar6 + iVar14) != (void *)0x0) {
                operator_delete__(*(void **)(iVar6 + iVar14));
              }
              *(undefined4 *)(iVar6 + iVar14) = 0;
              *(undefined4 *)(iVar6 + iVar14 + 4) = 0;
            }
            iVar2 = iVar2 + -0x58;
          } while (iVar13 != iVar2);
          iVar2 = *(int *)(this + 0x1c4);
        }
        iVar9 = iVar13;
      } while (iVar13 != iVar2);
    }
    operator_delete__((void *)(iVar13 + -8));
  }
  iVar2 = *(int *)(this + 0x1c8);
  *(undefined4 *)(this + 0x1c4) = 0;
  if (iVar2 != 0) {
    iVar13 = iVar2 + *(int *)(iVar2 + -4) * 0x110;
    iVar9 = iVar13;
    if (iVar13 != iVar2) {
      do {
        iVar13 = iVar9 + -0x110;
        if (iVar13 != 0) {
          iVar15 = iVar9 + -0x40;
          iVar16 = iVar9 + -0x48;
          iVar14 = iVar9 + -0x50;
          iVar2 = iVar9 + -8;
          do {
            iVar6 = iVar2 - (iVar9 + -8);
            if (*(int *)(iVar6 + iVar15 + 4) != 0) {
              if (*(void **)(iVar6 + iVar15) != (void *)0x0) {
                operator_delete__(*(void **)(iVar6 + iVar15));
              }
              *(undefined4 *)(iVar6 + iVar15) = 0;
              *(undefined4 *)(iVar6 + iVar15 + 4) = 0;
            }
            if (*(int *)(iVar6 + iVar16 + 4) != 0) {
              if (*(void **)(iVar6 + iVar16) != (void *)0x0) {
                operator_delete__(*(void **)(iVar6 + iVar16));
              }
              *(undefined4 *)(iVar6 + iVar16) = 0;
              *(undefined4 *)(iVar6 + iVar16 + 4) = 0;
            }
            if (*(int *)(iVar6 + iVar14 + 4) != 0) {
              if (*(void **)(iVar6 + iVar14) != (void *)0x0) {
                operator_delete__(*(void **)(iVar6 + iVar14));
              }
              *(undefined4 *)(iVar6 + iVar14) = 0;
              *(undefined4 *)(iVar6 + iVar14 + 4) = 0;
            }
            iVar2 = iVar2 + -0x58;
          } while (iVar13 != iVar2);
          iVar2 = *(int *)(this + 0x1c8);
        }
        iVar9 = iVar13;
      } while (iVar13 != iVar2);
    }
    operator_delete__((void *)(iVar13 + -8));
  }
  iVar2 = *(int *)(this + 0x1cc);
  *(undefined4 *)(this + 0x1c8) = 0;
  if (iVar2 != 0) {
    iVar13 = *(int *)(iVar2 + -4) * 0x170 + iVar2;
    iVar9 = iVar13;
    if (iVar13 != iVar2) {
      do {
        iVar13 = iVar9 + -0x170;
        if (iVar13 != 0) {
          iVar15 = iVar9 + -0x48;
          iVar16 = iVar9 + -0x50;
          iVar14 = iVar9 + -0x58;
          iVar2 = iVar9 + -0x10;
          do {
            iVar6 = iVar2 - (iVar9 + -0x10);
            if (*(int *)(iVar6 + iVar15 + 4) != 0) {
              if (*(void **)(iVar6 + iVar15) != (void *)0x0) {
                operator_delete__(*(void **)(iVar6 + iVar15));
              }
              *(undefined4 *)(iVar6 + iVar15) = 0;
              *(undefined4 *)(iVar6 + iVar15 + 4) = 0;
            }
            if (*(int *)(iVar6 + iVar16 + 4) != 0) {
              if (*(void **)(iVar6 + iVar16) != (void *)0x0) {
                operator_delete__(*(void **)(iVar6 + iVar16));
              }
              *(undefined4 *)(iVar6 + iVar16) = 0;
              *(undefined4 *)(iVar6 + iVar16 + 4) = 0;
            }
            if (*(int *)(iVar6 + iVar14 + 4) != 0) {
              if (*(void **)(iVar6 + iVar14) != (void *)0x0) {
                operator_delete__(*(void **)(iVar6 + iVar14));
              }
              *(undefined4 *)(iVar6 + iVar14) = 0;
              *(undefined4 *)(iVar6 + iVar14 + 4) = 0;
            }
            iVar2 = iVar2 + -0x58;
          } while (iVar13 != iVar2);
          iVar2 = *(int *)(this + 0x1cc);
        }
        iVar9 = iVar13;
      } while (iVar13 != iVar2);
    }
    operator_delete__((void *)(iVar13 + -8));
  }
  iVar2 = *(int *)(this + 0x1d0);
  *(undefined4 *)(this + 0x1cc) = 0;
  if (iVar2 != 0) {
    iVar13 = *(int *)(iVar2 + -4) * 0x168 + iVar2;
    iVar9 = iVar13;
    if (iVar13 != iVar2) {
      do {
        iVar13 = iVar9 + -0x168;
        if (iVar13 != 0) {
          iVar15 = iVar9 + -0x40;
          iVar16 = iVar9 + -0x48;
          iVar14 = iVar9 + -0x50;
          iVar2 = iVar9 + -8;
          do {
            iVar6 = iVar2 - (iVar9 + -8);
            if (*(int *)(iVar6 + iVar15 + 4) != 0) {
              if (*(void **)(iVar6 + iVar15) != (void *)0x0) {
                operator_delete__(*(void **)(iVar6 + iVar15));
              }
              *(undefined4 *)(iVar6 + iVar15) = 0;
              *(undefined4 *)(iVar6 + iVar15 + 4) = 0;
            }
            if (*(int *)(iVar6 + iVar16 + 4) != 0) {
              if (*(void **)(iVar6 + iVar16) != (void *)0x0) {
                operator_delete__(*(void **)(iVar6 + iVar16));
              }
              *(undefined4 *)(iVar6 + iVar16) = 0;
              *(undefined4 *)(iVar6 + iVar16 + 4) = 0;
            }
            if (*(int *)(iVar6 + iVar14 + 4) != 0) {
              if (*(void **)(iVar6 + iVar14) != (void *)0x0) {
                operator_delete__(*(void **)(iVar6 + iVar14));
              }
              *(undefined4 *)(iVar6 + iVar14) = 0;
              *(undefined4 *)(iVar6 + iVar14 + 4) = 0;
            }
            iVar2 = iVar2 + -0x58;
          } while (iVar13 != iVar2);
          iVar2 = *(int *)(this + 0x1d0);
        }
        iVar9 = iVar13;
      } while (iVar13 != iVar2);
    }
    operator_delete__((void *)(iVar13 + -8));
  }
  iVar2 = *(int *)(this + 0x1d4);
  *(undefined4 *)(this + 0x1d0) = 0;
  if (iVar2 != 0) {
    iVar13 = iVar2 + *(int *)(iVar2 + -4) * 0x60;
    iVar9 = iVar13;
    if (iVar13 != iVar2) {
      do {
        iVar13 = iVar9 + -0x60;
        if (iVar13 != 0) {
          iVar15 = iVar9 + -0x40;
          iVar16 = iVar9 + -0x48;
          iVar14 = iVar9 + -0x50;
          iVar2 = iVar9 + -8;
          do {
            iVar6 = iVar2 - (iVar9 + -8);
            if (*(int *)(iVar6 + iVar15 + 4) != 0) {
              if (*(void **)(iVar6 + iVar15) != (void *)0x0) {
                operator_delete__(*(void **)(iVar6 + iVar15));
              }
              *(undefined4 *)(iVar6 + iVar15) = 0;
              *(undefined4 *)(iVar6 + iVar15 + 4) = 0;
            }
            if (*(int *)(iVar6 + iVar16 + 4) != 0) {
              if (*(void **)(iVar6 + iVar16) != (void *)0x0) {
                operator_delete__(*(void **)(iVar6 + iVar16));
              }
              *(undefined4 *)(iVar6 + iVar16) = 0;
              *(undefined4 *)(iVar6 + iVar16 + 4) = 0;
            }
            if (*(int *)(iVar6 + iVar14 + 4) != 0) {
              if (*(void **)(iVar6 + iVar14) != (void *)0x0) {
                operator_delete__(*(void **)(iVar6 + iVar14));
              }
              *(undefined4 *)(iVar6 + iVar14) = 0;
              *(undefined4 *)(iVar6 + iVar14 + 4) = 0;
            }
            iVar2 = iVar2 + -0x58;
          } while (iVar13 != iVar2);
          iVar2 = *(int *)(this + 0x1d4);
        }
        iVar9 = iVar13;
      } while (iVar13 != iVar2);
    }
    operator_delete__((void *)(iVar13 + -8));
  }
  iVar2 = *(int *)(this + 0x1d8);
  *(undefined4 *)(this + 0x1d4) = 0;
  if (iVar2 != 0) {
    iVar13 = iVar2 + *(int *)(iVar2 + -4) * 0x60;
    iVar9 = iVar13;
    if (iVar13 != iVar2) {
      do {
        iVar13 = iVar9 + -0x60;
        if (iVar13 != 0) {
          iVar15 = iVar9 + -0x40;
          iVar16 = iVar9 + -0x48;
          iVar14 = iVar9 + -0x50;
          iVar2 = iVar9 + -8;
          do {
            iVar6 = iVar2 - (iVar9 + -8);
            if (*(int *)(iVar6 + iVar15 + 4) != 0) {
              if (*(void **)(iVar6 + iVar15) != (void *)0x0) {
                operator_delete__(*(void **)(iVar6 + iVar15));
              }
              *(undefined4 *)(iVar6 + iVar15) = 0;
              *(undefined4 *)(iVar6 + iVar15 + 4) = 0;
            }
            if (*(int *)(iVar6 + iVar16 + 4) != 0) {
              if (*(void **)(iVar6 + iVar16) != (void *)0x0) {
                operator_delete__(*(void **)(iVar6 + iVar16));
              }
              *(undefined4 *)(iVar6 + iVar16) = 0;
              *(undefined4 *)(iVar6 + iVar16 + 4) = 0;
            }
            if (*(int *)(iVar6 + iVar14 + 4) != 0) {
              if (*(void **)(iVar6 + iVar14) != (void *)0x0) {
                operator_delete__(*(void **)(iVar6 + iVar14));
              }
              *(undefined4 *)(iVar6 + iVar14) = 0;
              *(undefined4 *)(iVar6 + iVar14 + 4) = 0;
            }
            iVar2 = iVar2 + -0x58;
          } while (iVar13 != iVar2);
          iVar2 = *(int *)(this + 0x1d8);
        }
        iVar9 = iVar13;
      } while (iVar13 != iVar2);
    }
    operator_delete__((void *)(iVar13 + -8));
  }
  uVar3 = *(undefined4 *)param_1;
  uVar5 = *(undefined4 *)(param_1 + 4);
  *(ulong *)(this + 0x1dc) = param_2;
  *(undefined4 *)(this + 0x1d8) = 0;
  *(undefined4 *)(this + 0x200) = uVar3;
  *(undefined4 *)(this + 0x204) = uVar5;
  *(ulong *)(this + 0x1e4) = param_4;
  *(ulong *)(this + 0x1e0) = param_3;
  *(ulong *)(this + 0x1e8) = param_5;
  *(ulong *)(this + 0x1ec) = param_6;
  *(ulong *)(this + 0x1f0) = param_7;
  *(ulong *)(this + 500) = param_8;
  *(ulong *)(this + 0x1f8) = param_9;
  local_120 = (undefined4 *)param_3;
  if (param_2 != 0) {
    puVar1 = operator_new__(param_2 * 0x110 + 8);
    local_128 = 0;
    puVar12 = puVar1 + 2;
    puVar1[1] = param_2;
    *puVar1 = 0x110;
    puVar4 = puVar12;
    local_120 = puVar1 + 0x42;
    local_11c = puVar1 + 0x2c;
    do {
      puVar8 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x60 - (int)puVar12));
      *puVar4 = 0;
      local_128 = local_128 + 1;
      puVar10 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0xb8 - (int)puVar12));
      puVar4[1] = 0xc;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x10 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x18 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x20 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x28 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x30 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x38 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x40 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x48 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x50 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      *(undefined1 *)(puVar4 + 0x14) = 0;
      *puVar8 = 0;
      puVar8[1] = 0xc;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x68 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x70 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x78 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x80 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x88 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x90 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x98 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0xa0 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0xa8 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      *(undefined1 *)local_11c = 0;
      *puVar10 = 0;
      puVar10[1] = 0xc;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0xc0 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (200 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0xd0 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0xd8 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0xe0 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0xe8 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0xf0 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0xf8 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x100 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      *(undefined1 *)local_120 = 0;
      puVar4[0x42] = 0;
      puVar4 = puVar4 + 0x44;
      local_120 = local_120 + 0x44;
      local_11c = local_11c + 0x44;
    } while (local_128 != param_2);
    local_120 = *(undefined4 **)(this + 0x1e0);
    *(undefined4 **)(this + 0x1bc) = puVar12;
  }
  if (local_120 != (undefined4 *)0x0) {
    puVar1 = operator_new__((int)local_120 * 0x110 + 8);
    local_128 = 0;
    puVar12 = puVar1 + 2;
    puVar1[1] = local_120;
    *puVar1 = 0x110;
    puVar4 = puVar12;
    local_11c = puVar1 + 0x2c;
    local_118 = puVar1 + 0x42;
    do {
      puVar10 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0xb8 - (int)puVar12));
      *puVar4 = 0;
      local_128 = local_128 + 1;
      puVar4[1] = 0xc;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x10 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar8 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x60 - (int)puVar12));
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x18 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x20 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x28 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x30 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x38 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x40 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x48 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x50 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      *(undefined1 *)(puVar4 + 0x14) = 0;
      *puVar8 = 0;
      puVar8[1] = 0xc;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x68 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x70 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x78 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x80 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x88 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x90 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x98 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0xa0 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0xa8 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      *(undefined1 *)local_11c = 0;
      *puVar10 = 0;
      puVar10[1] = 0xc;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0xc0 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (200 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0xd0 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0xd8 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0xe0 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0xe8 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0xf0 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0xf8 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x100 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      *(undefined1 *)local_118 = 0;
      puVar4[0x42] = 0;
      puVar4 = puVar4 + 0x44;
      local_11c = local_11c + 0x44;
      local_118 = local_118 + 0x44;
    } while ((undefined4 *)local_128 != local_120);
    *(undefined4 **)(this + 0x1c0) = puVar12;
  }
  iVar2 = *(int *)(this + 0x1e4);
  if (iVar2 != 0) {
    puVar1 = operator_new__(iVar2 * 0x110 + 8);
    local_128 = 0;
    puVar12 = puVar1 + 2;
    puVar1[1] = iVar2;
    *puVar1 = 0x110;
    puVar4 = puVar12;
    local_120 = puVar1 + 0x42;
    local_118 = puVar1 + 0x2c;
    do {
      puVar10 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0xb8 - (int)puVar12));
      *puVar4 = 0;
      local_128 = local_128 + 1;
      puVar4[1] = 0xc;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x10 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar8 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x60 - (int)puVar12));
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x18 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x20 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x28 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x30 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x38 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x40 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x48 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x50 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      *(undefined1 *)(puVar4 + 0x14) = 0;
      *puVar8 = 0;
      puVar8[1] = 0xc;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x68 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x70 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x78 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x80 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x88 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x90 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x98 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0xa0 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0xa8 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      *(undefined1 *)local_118 = 0;
      *puVar10 = 0;
      puVar10[1] = 0xc;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0xc0 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (200 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0xd0 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0xd8 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0xe0 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0xe8 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0xf0 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0xf8 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x100 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      *(undefined1 *)local_120 = 0;
      puVar4[0x42] = 0;
      puVar4 = puVar4 + 0x44;
      local_120 = local_120 + 0x44;
      local_118 = local_118 + 0x44;
    } while (local_128 != iVar2);
    *(undefined4 **)(this + 0x1c4) = puVar12;
  }
  iVar2 = *(int *)(this + 0x1e8);
  if (iVar2 != 0) {
    puVar1 = operator_new__(iVar2 * 0x110 + 8);
    local_128 = 0;
    puVar12 = puVar1 + 2;
    puVar1[1] = iVar2;
    *puVar1 = 0x110;
    puVar4 = puVar12;
    local_120 = puVar1 + 0x42;
    local_118 = puVar1 + 0x2c;
    do {
      puVar10 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0xb8 - (int)puVar12));
      *puVar4 = 0;
      local_128 = local_128 + 1;
      puVar4[1] = 0xc;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x10 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar8 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x60 - (int)puVar12));
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x18 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x20 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x28 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x30 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x38 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x40 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x48 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x50 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      *(undefined1 *)(puVar4 + 0x14) = 0;
      *puVar8 = 0;
      puVar8[1] = 0xc;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x68 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x70 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x78 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x80 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x88 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x90 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x98 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0xa0 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0xa8 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      *(undefined1 *)local_118 = 0;
      *puVar10 = 0;
      puVar10[1] = 0xc;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0xc0 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (200 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0xd0 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0xd8 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0xe0 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0xe8 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0xf0 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0xf8 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x100 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      *(undefined1 *)local_120 = 0;
      puVar4[0x42] = 0;
      puVar4 = puVar4 + 0x44;
      local_120 = local_120 + 0x44;
      local_118 = local_118 + 0x44;
    } while (local_128 != iVar2);
    *(undefined4 **)(this + 0x1c8) = puVar12;
  }
  iVar2 = *(int *)(this + 0x1ec);
  if (iVar2 != 0) {
    local_114 = iVar2 + -1;
    local_f8 = operator_new__(iVar2 * 0x170 + 8);
    *local_f8 = 0x170;
    local_f8[1] = iVar2;
    if (local_114 != -1) {
      puVar1 = local_f8 + 2;
      puVar4 = puVar1;
      local_104 = local_f8 + 0x2c;
      local_100 = local_f8 + 0x42;
      local_fc = local_f8 + 0x58;
      do {
        *puVar4 = 0;
        puVar4[1] = 0xc;
        local_114 = local_114 + -1;
        puVar12 = (undefined4 *)((int)local_f8 + (int)puVar4 + (0x10 - (int)puVar1));
        *puVar12 = 0;
        puVar12[1] = 0;
        puVar8 = (undefined4 *)((int)local_f8 + (int)puVar4 + (0xb8 - (int)puVar1));
        puVar12 = (undefined4 *)((int)local_f8 + (int)puVar4 + (0x18 - (int)puVar1));
        *puVar12 = 0;
        puVar12[1] = 0;
        puVar7 = (undefined4 *)((int)local_f8 + (int)puVar4 + (0x60 - (int)puVar1));
        puVar10 = (undefined4 *)((int)local_f8 + (int)puVar4 + (0x110 - (int)puVar1));
        puVar12 = (undefined4 *)((int)local_f8 + (int)puVar4 + (0x20 - (int)puVar1));
        *puVar12 = 0;
        puVar12[1] = 0;
        puVar12 = (undefined4 *)((int)local_f8 + (int)puVar4 + (0x28 - (int)puVar1));
        *puVar12 = 0;
        puVar12[1] = 0;
        puVar12 = (undefined4 *)((int)local_f8 + (int)puVar4 + (0x30 - (int)puVar1));
        *puVar12 = 0;
        puVar12[1] = 0;
        puVar12 = (undefined4 *)((int)local_f8 + (int)puVar4 + (0x38 - (int)puVar1));
        *puVar12 = 0;
        puVar12[1] = 0;
        puVar12 = (undefined4 *)((int)local_f8 + (int)puVar4 + (0x40 - (int)puVar1));
        *puVar12 = 0;
        puVar12[1] = 0;
        puVar12 = (undefined4 *)((int)local_f8 + (int)puVar4 + (0x48 - (int)puVar1));
        *puVar12 = 0;
        puVar12[1] = 0;
        puVar12 = (undefined4 *)((int)local_f8 + (int)puVar4 + (0x50 - (int)puVar1));
        *puVar12 = 0;
        puVar12[1] = 0;
        *(undefined1 *)(puVar4 + 0x14) = 0;
        *puVar7 = 0;
        puVar7[1] = 0xc;
        puVar12 = (undefined4 *)((int)local_f8 + (int)puVar4 + (0x68 - (int)puVar1));
        *puVar12 = 0;
        puVar12[1] = 0;
        puVar12 = (undefined4 *)((int)local_f8 + (int)puVar4 + (0x70 - (int)puVar1));
        *puVar12 = 0;
        puVar12[1] = 0;
        puVar12 = (undefined4 *)((int)local_f8 + (int)puVar4 + (0x78 - (int)puVar1));
        *puVar12 = 0;
        puVar12[1] = 0;
        puVar12 = (undefined4 *)((int)local_f8 + (int)puVar4 + (0x80 - (int)puVar1));
        *puVar12 = 0;
        puVar12[1] = 0;
        puVar12 = (undefined4 *)((int)local_f8 + (int)puVar4 + (0x88 - (int)puVar1));
        *puVar12 = 0;
        puVar12[1] = 0;
        puVar12 = (undefined4 *)((int)local_f8 + (int)puVar4 + (0x90 - (int)puVar1));
        *puVar12 = 0;
        puVar12[1] = 0;
        puVar12 = (undefined4 *)((int)local_f8 + (int)puVar4 + (0x98 - (int)puVar1));
        *puVar12 = 0;
        puVar12[1] = 0;
        puVar12 = (undefined4 *)((int)local_f8 + (int)puVar4 + (0xa0 - (int)puVar1));
        *puVar12 = 0;
        puVar12[1] = 0;
        puVar12 = (undefined4 *)((int)local_f8 + (int)puVar4 + (0xa8 - (int)puVar1));
        *puVar12 = 0;
        puVar12[1] = 0;
        *(undefined1 *)local_104 = 0;
        *puVar8 = 0;
        puVar8[1] = 0xc;
        puVar12 = (undefined4 *)((int)local_f8 + (int)puVar4 + (0xc0 - (int)puVar1));
        *puVar12 = 0;
        puVar12[1] = 0;
        puVar12 = (undefined4 *)((int)local_f8 + (int)puVar4 + (200 - (int)puVar1));
        *puVar12 = 0;
        puVar12[1] = 0;
        puVar12 = (undefined4 *)((int)local_f8 + (int)puVar4 + (0xd0 - (int)puVar1));
        *puVar12 = 0;
        puVar12[1] = 0;
        puVar12 = (undefined4 *)((int)local_f8 + (int)puVar4 + (0xd8 - (int)puVar1));
        *puVar12 = 0;
        puVar12[1] = 0;
        puVar12 = (undefined4 *)((int)local_f8 + (int)puVar4 + (0xe0 - (int)puVar1));
        *puVar12 = 0;
        puVar12[1] = 0;
        puVar12 = (undefined4 *)((int)local_f8 + (int)puVar4 + (0xe8 - (int)puVar1));
        *puVar12 = 0;
        puVar12[1] = 0;
        puVar12 = (undefined4 *)((int)local_f8 + (int)puVar4 + (0xf0 - (int)puVar1));
        *puVar12 = 0;
        puVar12[1] = 0;
        puVar12 = (undefined4 *)((int)local_f8 + (int)puVar4 + (0xf8 - (int)puVar1));
        *puVar12 = 0;
        puVar12[1] = 0;
        puVar12 = (undefined4 *)((int)local_f8 + (int)puVar4 + (0x100 - (int)puVar1));
        *puVar12 = 0;
        puVar12[1] = 0;
        *(undefined1 *)local_100 = 0;
        *puVar10 = 0;
        puVar10[1] = 0xc;
        puVar12 = (undefined4 *)((int)local_f8 + (int)puVar4 + (0x118 - (int)puVar1));
        *puVar12 = 0;
        puVar12[1] = 0;
        puVar12 = (undefined4 *)((int)local_f8 + (int)puVar4 + (0x120 - (int)puVar1));
        *puVar12 = 0;
        puVar12[1] = 0;
        puVar12 = (undefined4 *)((int)local_f8 + (int)puVar4 + (0x128 - (int)puVar1));
        *puVar12 = 0;
        puVar12[1] = 0;
        puVar12 = (undefined4 *)((int)local_f8 + (int)puVar4 + (0x130 - (int)puVar1));
        *puVar12 = 0;
        puVar12[1] = 0;
        puVar12 = (undefined4 *)((int)local_f8 + (int)puVar4 + (0x138 - (int)puVar1));
        *puVar12 = 0;
        puVar12[1] = 0;
        puVar12 = (undefined4 *)((int)local_f8 + (int)puVar4 + (0x140 - (int)puVar1));
        *puVar12 = 0;
        puVar12[1] = 0;
        puVar12 = (undefined4 *)((int)local_f8 + (int)puVar4 + (0x148 - (int)puVar1));
        *puVar12 = 0;
        puVar12[1] = 0;
        puVar12 = (undefined4 *)((int)local_f8 + (int)puVar4 + (0x150 - (int)puVar1));
        *puVar12 = 0;
        puVar12[1] = 0;
        puVar12 = (undefined4 *)((int)local_f8 + (int)puVar4 + (0x158 - (int)puVar1));
        *puVar12 = 0;
        puVar12[1] = 0;
        *(undefined1 *)local_fc = 0;
        puVar4[0x58] = 0;
        puVar4[0x59] = 0;
        puVar4[0x5a] = 0;
        local_30 = 0;
        uStack_2c = 0;
        local_38 = 0;
        uStack_34 = 0;
        local_40 = 0;
        uStack_3c = 0;
        GEAnimationTrack::Initialize
                  ((GEAnimationTrack *)0x3f800000,puVar4 + 0x2c,0,&local_30,&local_38,0xc,&local_40)
        ;
        puVar12 = puVar4 + 0x42;
        local_48 = 0;
        uStack_44 = 0;
        local_50 = 0;
        uStack_4c = 0;
        puVar4 = puVar4 + 0x5c;
        local_58 = 0;
        uStack_54 = 0;
        GEAnimationTrack::Initialize
                  ((GEAnimationTrack *)0x3f800000,puVar12,0,&local_48,&local_50,0xc,&local_58);
        local_104 = local_104 + 0x5c;
        local_100 = local_100 + 0x5c;
        local_fc = local_fc + 0x5c;
      } while (local_114 != -1);
    }
    local_f8 = local_f8 + 2;
    *(undefined4 **)(this + 0x1cc) = local_f8;
  }
  iVar2 = *(int *)(this + 0x1f0);
  if (iVar2 != 0) {
    puVar1 = operator_new__(iVar2 * 0x168 + 8);
    local_120 = (undefined4 *)0x0;
    puVar12 = puVar1 + 2;
    *puVar1 = 0x168;
    puVar1[1] = iVar2;
    puVar4 = puVar12;
    local_110 = puVar1 + 0x2c;
    local_10c = puVar1 + 0x42;
    local_108 = puVar1 + 0x58;
    do {
      local_120 = (undefined4 *)((int)local_120 + 1);
      *puVar4 = 0;
      puVar4[1] = 0xc;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x10 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar8 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x60 - (int)puVar12));
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x18 - (int)puVar12));
      *puVar7 = 0;
      puVar10 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0xb8 - (int)puVar12));
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x20 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x28 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x30 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x38 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar11 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x110 - (int)puVar12));
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x40 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x48 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x50 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      *(undefined1 *)(puVar4 + 0x14) = 0;
      *puVar8 = 0;
      puVar8[1] = 0xc;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x68 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x70 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x78 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x80 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x88 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x90 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x98 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0xa0 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0xa8 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      *(undefined1 *)local_110 = 0;
      *puVar10 = 0;
      puVar10[1] = 0xc;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0xc0 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (200 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0xd0 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0xd8 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0xe0 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0xe8 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0xf0 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0xf8 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x100 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      *(undefined1 *)local_10c = 0;
      *puVar11 = 0;
      puVar11[1] = 0xc;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x118 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x120 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x128 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x130 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x138 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x140 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x148 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x150 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x158 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      *(undefined1 *)local_108 = 0;
      puVar4[0x58] = 0;
      puVar4 = puVar4 + 0x5a;
      local_110 = local_110 + 0x5a;
      local_10c = local_10c + 0x5a;
      local_108 = local_108 + 0x5a;
    } while (local_120 != (undefined4 *)iVar2);
    *(undefined4 **)(this + 0x1d0) = puVar12;
  }
  iVar2 = *(int *)(this + 500);
  if (iVar2 != 0) {
    puVar1 = operator_new__(iVar2 * 0x60 + 8);
    puVar12 = puVar1 + 2;
    iVar9 = 0;
    puVar1[1] = iVar2;
    *puVar1 = 0x60;
    puVar4 = puVar12;
    do {
      puVar4[1] = 0xc;
      *puVar4 = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x10 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      iVar9 = iVar9 + 1;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x18 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x20 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x28 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x30 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x38 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x40 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x48 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x50 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      *(undefined1 *)(puVar4 + 0x14) = 0;
      puVar4[0x16] = 0;
      puVar4 = puVar4 + 0x18;
    } while (iVar9 != iVar2);
    *(undefined4 **)(this + 0x1d4) = puVar12;
  }
  iVar2 = *(int *)(this + 0x1f8);
  if (iVar2 != 0) {
    puVar1 = operator_new__(iVar2 * 0x60 + 8);
    puVar12 = puVar1 + 2;
    iVar9 = 0;
    puVar1[1] = iVar2;
    *puVar1 = 0x60;
    puVar4 = puVar12;
    do {
      puVar4[1] = 0xc;
      iVar9 = iVar9 + 1;
      *puVar4 = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x10 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x18 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x20 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x28 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x30 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x38 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x40 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x48 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined4 *)((int)puVar1 + (int)puVar4 + (0x50 - (int)puVar12));
      *puVar7 = 0;
      puVar7[1] = 0;
      *(undefined1 *)(puVar4 + 0x14) = 0;
      puVar4[0x16] = 0;
      puVar4 = puVar4 + 0x18;
    } while (iVar9 != iVar2);
    *(undefined4 **)(this + 0x1d8) = puVar12;
  }
  return;
}

