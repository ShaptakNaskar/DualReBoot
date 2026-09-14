/* 00042900 | STG::GEScene::InitializeAnimations */

/* STG::GEScene::InitializeAnimations(STG::UTimeValue<unsigned long long, 1ul> const&, unsigned
   long, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long,
   unsigned long) */

void __thiscall
STG::GEScene::InitializeAnimations
          (GEScene *this,UTimeValue *param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5
          ,ulong param_6,ulong param_7,ulong param_8,ulong param_9)

{
  int *piVar1;
  ulong *puVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  ulong *puVar7;
  int *piVar8;
  int *piVar9;
  ulong *puVar10;
  ulong local_e8;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 uStack_14;
  
  uStack_14 = 0x42909;
  FUN_0002e044();
  piVar5 = *(int **)(this + 0x1bc);
  if (piVar5 != (int *)0x0) {
    piVar6 = piVar5 + piVar5[-1] * 0x40;
    piVar9 = piVar6;
    if (piVar6 != piVar5) {
      do {
        piVar6 = piVar9 + -0x40;
        if (piVar6 != (int *)0x0) {
          piVar5 = piVar9 + -0x12;
          piVar8 = piVar9 + -0xf;
          piVar9 = piVar9 + -0xd;
          do {
            if (*piVar9 != 0) {
              if ((void *)piVar9[-1] != (void *)0x0) {
                operator_delete__((void *)piVar9[-1]);
              }
              piVar9[-1] = 0;
              *piVar9 = 0;
            }
            if (*piVar8 != 0) {
              if ((void *)piVar8[-1] != (void *)0x0) {
                operator_delete__((void *)piVar8[-1]);
              }
              piVar8[-1] = 0;
              *piVar8 = 0;
            }
            if (piVar5[1] != 0) {
              if ((void *)*piVar5 != (void *)0x0) {
                operator_delete__((void *)*piVar5);
              }
              *piVar5 = 0;
              piVar5[1] = 0;
            }
            piVar5 = piVar5 + -0x15;
            piVar8 = piVar8 + -0x15;
            piVar1 = piVar9 + -9;
            piVar9 = piVar9 + -0x15;
          } while (piVar6 != piVar1);
          piVar5 = *(int **)(this + 0x1bc);
        }
        piVar9 = piVar6;
      } while (piVar6 != piVar5);
    }
    operator_delete__(piVar6 + -1);
  }
  piVar5 = *(int **)(this + 0x1c0);
  *(undefined4 *)(this + 0x1bc) = 0;
  if (piVar5 != (int *)0x0) {
    piVar6 = piVar5 + piVar5[-1] * 0x40;
    piVar9 = piVar6;
    if (piVar6 != piVar5) {
      do {
        piVar6 = piVar9 + -0x40;
        if (piVar6 != (int *)0x0) {
          piVar5 = piVar9 + -0x12;
          piVar8 = piVar9 + -0xf;
          piVar9 = piVar9 + -0xd;
          do {
            if (*piVar9 != 0) {
              if ((void *)piVar9[-1] != (void *)0x0) {
                operator_delete__((void *)piVar9[-1]);
              }
              piVar9[-1] = 0;
              *piVar9 = 0;
            }
            if (*piVar8 != 0) {
              if ((void *)piVar8[-1] != (void *)0x0) {
                operator_delete__((void *)piVar8[-1]);
              }
              piVar8[-1] = 0;
              *piVar8 = 0;
            }
            if (piVar5[1] != 0) {
              if ((void *)*piVar5 != (void *)0x0) {
                operator_delete__((void *)*piVar5);
              }
              *piVar5 = 0;
              piVar5[1] = 0;
            }
            piVar5 = piVar5 + -0x15;
            piVar8 = piVar8 + -0x15;
            piVar1 = piVar9 + -9;
            piVar9 = piVar9 + -0x15;
          } while (piVar6 != piVar1);
          piVar5 = *(int **)(this + 0x1c0);
        }
        piVar9 = piVar6;
      } while (piVar6 != piVar5);
    }
    operator_delete__(piVar6 + -1);
  }
  piVar5 = *(int **)(this + 0x1c4);
  *(undefined4 *)(this + 0x1c0) = 0;
  if (piVar5 != (int *)0x0) {
    piVar6 = piVar5 + piVar5[-1] * 0x40;
    piVar9 = piVar6;
    if (piVar6 != piVar5) {
      do {
        piVar6 = piVar9 + -0x40;
        if (piVar6 != (int *)0x0) {
          piVar5 = piVar9 + -0x12;
          piVar8 = piVar9 + -0xf;
          piVar9 = piVar9 + -0xd;
          do {
            if (*piVar9 != 0) {
              if ((void *)piVar9[-1] != (void *)0x0) {
                operator_delete__((void *)piVar9[-1]);
              }
              piVar9[-1] = 0;
              *piVar9 = 0;
            }
            if (*piVar8 != 0) {
              if ((void *)piVar8[-1] != (void *)0x0) {
                operator_delete__((void *)piVar8[-1]);
              }
              piVar8[-1] = 0;
              *piVar8 = 0;
            }
            if (piVar5[1] != 0) {
              if ((void *)*piVar5 != (void *)0x0) {
                operator_delete__((void *)*piVar5);
              }
              *piVar5 = 0;
              piVar5[1] = 0;
            }
            piVar5 = piVar5 + -0x15;
            piVar8 = piVar8 + -0x15;
            piVar1 = piVar9 + -9;
            piVar9 = piVar9 + -0x15;
          } while (piVar6 != piVar1);
          piVar5 = *(int **)(this + 0x1c4);
        }
        piVar9 = piVar6;
      } while (piVar6 != piVar5);
    }
    operator_delete__(piVar6 + -1);
  }
  piVar5 = *(int **)(this + 0x1c8);
  *(undefined4 *)(this + 0x1c4) = 0;
  if (piVar5 != (int *)0x0) {
    piVar6 = piVar5 + piVar5[-1] * 0x40;
    piVar9 = piVar6;
    if (piVar6 != piVar5) {
      do {
        piVar6 = piVar9 + -0x40;
        if (piVar6 != (int *)0x0) {
          piVar5 = piVar9 + -0x12;
          piVar8 = piVar9 + -0xf;
          piVar9 = piVar9 + -0xd;
          do {
            if (*piVar9 != 0) {
              if ((void *)piVar9[-1] != (void *)0x0) {
                operator_delete__((void *)piVar9[-1]);
              }
              piVar9[-1] = 0;
              *piVar9 = 0;
            }
            if (*piVar8 != 0) {
              if ((void *)piVar8[-1] != (void *)0x0) {
                operator_delete__((void *)piVar8[-1]);
              }
              piVar8[-1] = 0;
              *piVar8 = 0;
            }
            if (piVar5[1] != 0) {
              if ((void *)*piVar5 != (void *)0x0) {
                operator_delete__((void *)*piVar5);
              }
              *piVar5 = 0;
              piVar5[1] = 0;
            }
            piVar5 = piVar5 + -0x15;
            piVar8 = piVar8 + -0x15;
            piVar1 = piVar9 + -9;
            piVar9 = piVar9 + -0x15;
          } while (piVar6 != piVar1);
          piVar5 = *(int **)(this + 0x1c8);
        }
        piVar9 = piVar6;
      } while (piVar6 != piVar5);
    }
    operator_delete__(piVar6 + -1);
  }
  piVar5 = *(int **)(this + 0x1cc);
  *(undefined4 *)(this + 0x1c8) = 0;
  if (piVar5 != (int *)0x0) {
    piVar6 = piVar5 + piVar5[-1] * 0x57;
    piVar9 = piVar6;
    if (piVar6 != piVar5) {
      do {
        piVar6 = piVar9 + -0x57;
        if (piVar6 != (int *)0x0) {
          piVar5 = piVar9 + -0x14;
          piVar8 = piVar9 + -0x11;
          piVar9 = piVar9 + -0xf;
          do {
            if (*piVar9 != 0) {
              if ((void *)piVar9[-1] != (void *)0x0) {
                operator_delete__((void *)piVar9[-1]);
              }
              piVar9[-1] = 0;
              *piVar9 = 0;
            }
            if (*piVar8 != 0) {
              if ((void *)piVar8[-1] != (void *)0x0) {
                operator_delete__((void *)piVar8[-1]);
              }
              piVar8[-1] = 0;
              *piVar8 = 0;
            }
            if (piVar5[1] != 0) {
              if ((void *)*piVar5 != (void *)0x0) {
                operator_delete__((void *)*piVar5);
              }
              *piVar5 = 0;
              piVar5[1] = 0;
            }
            piVar5 = piVar5 + -0x15;
            piVar8 = piVar8 + -0x15;
            piVar1 = piVar9 + -9;
            piVar9 = piVar9 + -0x15;
          } while (piVar6 != piVar1);
          piVar5 = *(int **)(this + 0x1cc);
        }
        piVar9 = piVar6;
      } while (piVar6 != piVar5);
    }
    operator_delete__(piVar6 + -1);
  }
  piVar5 = *(int **)(this + 0x1d0);
  *(undefined4 *)(this + 0x1cc) = 0;
  if (piVar5 != (int *)0x0) {
    piVar6 = piVar5 + piVar5[-1] * 0x55;
    piVar9 = piVar6;
    if (piVar6 != piVar5) {
      do {
        piVar6 = piVar9 + -0x55;
        if (piVar6 != (int *)0x0) {
          piVar5 = piVar9 + -0x12;
          piVar8 = piVar9 + -0xf;
          piVar9 = piVar9 + -0xd;
          do {
            if (*piVar9 != 0) {
              if ((void *)piVar9[-1] != (void *)0x0) {
                operator_delete__((void *)piVar9[-1]);
              }
              piVar9[-1] = 0;
              *piVar9 = 0;
            }
            if (*piVar8 != 0) {
              if ((void *)piVar8[-1] != (void *)0x0) {
                operator_delete__((void *)piVar8[-1]);
              }
              piVar8[-1] = 0;
              *piVar8 = 0;
            }
            if (piVar5[1] != 0) {
              if ((void *)*piVar5 != (void *)0x0) {
                operator_delete__((void *)*piVar5);
              }
              *piVar5 = 0;
              piVar5[1] = 0;
            }
            piVar5 = piVar5 + -0x15;
            piVar8 = piVar8 + -0x15;
            piVar1 = piVar9 + -9;
            piVar9 = piVar9 + -0x15;
          } while (piVar6 != piVar1);
          piVar5 = *(int **)(this + 0x1d0);
        }
        piVar9 = piVar6;
      } while (piVar6 != piVar5);
    }
    operator_delete__(piVar6 + -1);
  }
  piVar5 = *(int **)(this + 0x1d4);
  *(undefined4 *)(this + 0x1d0) = 0;
  if (piVar5 != (int *)0x0) {
    piVar6 = piVar5 + piVar5[-1] * 0x16;
    piVar9 = piVar6;
    if (piVar6 != piVar5) {
      do {
        piVar6 = piVar9 + -0x16;
        if (piVar6 != (int *)0x0) {
          piVar5 = piVar9 + -0x12;
          piVar8 = piVar9 + -0xf;
          piVar9 = piVar9 + -0xd;
          do {
            if (*piVar9 != 0) {
              if ((void *)piVar9[-1] != (void *)0x0) {
                operator_delete__((void *)piVar9[-1]);
              }
              piVar9[-1] = 0;
              *piVar9 = 0;
            }
            if (*piVar8 != 0) {
              if ((void *)piVar8[-1] != (void *)0x0) {
                operator_delete__((void *)piVar8[-1]);
              }
              piVar8[-1] = 0;
              *piVar8 = 0;
            }
            if (piVar5[1] != 0) {
              if ((void *)*piVar5 != (void *)0x0) {
                operator_delete__((void *)*piVar5);
              }
              *piVar5 = 0;
              piVar5[1] = 0;
            }
            piVar5 = piVar5 + -0x15;
            piVar8 = piVar8 + -0x15;
            piVar1 = piVar9 + -9;
            piVar9 = piVar9 + -0x15;
          } while (piVar6 != piVar1);
          piVar5 = *(int **)(this + 0x1d4);
        }
        piVar9 = piVar6;
      } while (piVar6 != piVar5);
    }
    operator_delete__(piVar6 + -1);
  }
  piVar5 = *(int **)(this + 0x1d8);
  *(undefined4 *)(this + 0x1d4) = 0;
  if (piVar5 != (int *)0x0) {
    piVar6 = piVar5 + piVar5[-1] * 0x16;
    piVar9 = piVar6;
    if (piVar6 != piVar5) {
      do {
        piVar6 = piVar9 + -0x16;
        if (piVar6 != (int *)0x0) {
          piVar5 = piVar9 + -0x12;
          piVar8 = piVar9 + -0xf;
          piVar9 = piVar9 + -0xd;
          do {
            if (*piVar9 != 0) {
              if ((void *)piVar9[-1] != (void *)0x0) {
                operator_delete__((void *)piVar9[-1]);
              }
              piVar9[-1] = 0;
              *piVar9 = 0;
            }
            if (*piVar8 != 0) {
              if ((void *)piVar8[-1] != (void *)0x0) {
                operator_delete__((void *)piVar8[-1]);
              }
              piVar8[-1] = 0;
              *piVar8 = 0;
            }
            if (piVar5[1] != 0) {
              if ((void *)*piVar5 != (void *)0x0) {
                operator_delete__((void *)*piVar5);
              }
              *piVar5 = 0;
              piVar5[1] = 0;
            }
            piVar5 = piVar5 + -0x15;
            piVar8 = piVar8 + -0x15;
            piVar1 = piVar9 + -9;
            piVar9 = piVar9 + -0x15;
          } while (piVar6 != piVar1);
          piVar5 = *(int **)(this + 0x1d8);
        }
        piVar9 = piVar6;
      } while (piVar6 != piVar5);
    }
    operator_delete__(piVar6 + -1);
  }
  uVar3 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0x1fc) = *(undefined4 *)param_1;
  *(ulong *)(this + 0x1e4) = param_4;
  *(ulong *)(this + 0x1e8) = param_5;
  *(ulong *)(this + 0x1ec) = param_6;
  *(ulong *)(this + 0x1f0) = param_7;
  *(ulong *)(this + 500) = param_8;
  *(undefined4 *)(this + 0x1d8) = 0;
  *(undefined4 *)(this + 0x200) = uVar3;
  *(ulong *)(this + 0x1dc) = param_2;
  *(ulong *)(this + 0x1e0) = param_3;
  *(ulong *)(this + 0x1f8) = param_9;
  if (param_2 != 0) {
    puVar7 = operator_new__(param_2 * 0x100 + 4);
    puVar2 = puVar7 + 1;
    *puVar7 = param_2;
    local_e8 = 0;
    puVar10 = puVar2;
    do {
      *puVar10 = 0;
      puVar10[1] = 0xc;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0xc - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0x10 - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0x14 - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0x18 - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0x1c - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0x20 - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0x24 - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0x28 - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0x2c - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0x30 - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0x34 - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0x38 - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0x3c - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0x40 - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0x44 - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0x48 - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0x4c - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0x50 - (int)puVar2)) = 0;
      *(undefined1 *)(puVar10 + 0x14) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0x58 - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0x5c - (int)puVar2)) = 0xc;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0x60 - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (100 - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0x68 - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0x6c - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0x70 - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0x74 - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0x78 - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0x7c - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0x80 - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0x84 - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0x88 - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0x8c - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0x90 - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0x94 - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0x98 - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0x9c - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0xa0 - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0xa4 - (int)puVar2)) = 0;
      *(undefined1 *)((int)puVar7 + (int)puVar10 + (0xa8 - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0xac - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0xb0 - (int)puVar2)) = 0xc;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0xb4 - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0xb8 - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0xbc - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0xc0 - (int)puVar2)) = 0;
      local_e8 = local_e8 + 1;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0xc4 - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (200 - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0xcc - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0xd0 - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0xd4 - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0xd8 - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0xdc - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0xe0 - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0xe4 - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0xe8 - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0xec - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0xf0 - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0xf4 - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0xf8 - (int)puVar2)) = 0;
      *(undefined1 *)((int)puVar7 + (int)puVar10 + (0xfc - (int)puVar2)) = 0;
      puVar10[0x3f] = 0;
      puVar10 = puVar10 + 0x40;
    } while (local_e8 != param_2);
    param_3 = *(ulong *)(this + 0x1e0);
    *(ulong **)(this + 0x1bc) = puVar2;
  }
  if (param_3 != 0) {
    puVar7 = operator_new__(param_3 * 0x100 + 4);
    puVar2 = puVar7 + 1;
    *puVar7 = param_3;
    local_e8 = 0;
    puVar10 = puVar2;
    do {
      *puVar10 = 0;
      puVar10[1] = 0xc;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0xc - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0x10 - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0x14 - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0x18 - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0x1c - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0x20 - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0x24 - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0x28 - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0x2c - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0x30 - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0x34 - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0x38 - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0x3c - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0x40 - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0x44 - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0x48 - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0x4c - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0x50 - (int)puVar2)) = 0;
      *(undefined1 *)(puVar10 + 0x14) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0x58 - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0x5c - (int)puVar2)) = 0xc;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0x60 - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (100 - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0x68 - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0x6c - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0x70 - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0x74 - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0x78 - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0x7c - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0x80 - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0x84 - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0x88 - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0x8c - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0x90 - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0x94 - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0x98 - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0x9c - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0xa0 - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0xa4 - (int)puVar2)) = 0;
      *(undefined1 *)((int)puVar7 + (int)puVar10 + (0xa8 - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0xac - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0xb0 - (int)puVar2)) = 0xc;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0xb4 - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0xb8 - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0xbc - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0xc0 - (int)puVar2)) = 0;
      local_e8 = local_e8 + 1;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0xc4 - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (200 - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0xcc - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0xd0 - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0xd4 - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0xd8 - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0xdc - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0xe0 - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0xe4 - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0xe8 - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0xec - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0xf0 - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0xf4 - (int)puVar2)) = 0;
      *(undefined4 *)((int)puVar7 + (int)puVar10 + (0xf8 - (int)puVar2)) = 0;
      *(undefined1 *)((int)puVar7 + (int)puVar10 + (0xfc - (int)puVar2)) = 0;
      puVar10[0x3f] = 0;
      puVar10 = puVar10 + 0x40;
    } while (local_e8 != param_3);
    *(ulong **)(this + 0x1c0) = puVar2;
  }
  iVar4 = *(int *)(this + 0x1e4);
  if (iVar4 != 0) {
    piVar6 = operator_new__(iVar4 * 0x100 + 4);
    piVar5 = piVar6 + 1;
    *piVar6 = iVar4;
    local_e8 = 0;
    piVar9 = piVar5;
    do {
      *piVar9 = 0;
      piVar9[1] = 0xc;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0xc - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x10 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x14 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x18 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x1c - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x20 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x24 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x28 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x2c - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x30 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x34 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x38 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x3c - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x40 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x44 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x48 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x4c - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x50 - (int)piVar5)) = 0;
      *(undefined1 *)(piVar9 + 0x14) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x58 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x5c - (int)piVar5)) = 0xc;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x60 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (100 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x68 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x6c - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x70 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x74 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x78 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x7c - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x80 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x84 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x88 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x8c - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x90 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x94 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x98 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x9c - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0xa0 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0xa4 - (int)piVar5)) = 0;
      *(undefined1 *)((int)piVar6 + (int)piVar9 + (0xa8 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0xac - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0xb0 - (int)piVar5)) = 0xc;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0xb4 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0xb8 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0xbc - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0xc0 - (int)piVar5)) = 0;
      local_e8 = local_e8 + 1;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0xc4 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (200 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0xcc - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0xd0 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0xd4 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0xd8 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0xdc - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0xe0 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0xe4 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0xe8 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0xec - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0xf0 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0xf4 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0xf8 - (int)piVar5)) = 0;
      *(undefined1 *)((int)piVar6 + (int)piVar9 + (0xfc - (int)piVar5)) = 0;
      piVar9[0x3f] = 0;
      piVar9 = piVar9 + 0x40;
    } while (local_e8 != iVar4);
    *(int **)(this + 0x1c4) = piVar5;
  }
  iVar4 = *(int *)(this + 0x1e8);
  if (iVar4 != 0) {
    piVar6 = operator_new__(iVar4 * 0x100 + 4);
    piVar5 = piVar6 + 1;
    *piVar6 = iVar4;
    local_e8 = 0;
    piVar9 = piVar5;
    do {
      *piVar9 = 0;
      piVar9[1] = 0xc;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0xc - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x10 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x14 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x18 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x1c - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x20 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x24 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x28 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x2c - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x30 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x34 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x38 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x3c - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x40 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x44 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x48 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x4c - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x50 - (int)piVar5)) = 0;
      *(undefined1 *)(piVar9 + 0x14) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x58 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x5c - (int)piVar5)) = 0xc;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x60 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (100 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x68 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x6c - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x70 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x74 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x78 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x7c - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x80 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x84 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x88 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x8c - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x90 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x94 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x98 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x9c - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0xa0 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0xa4 - (int)piVar5)) = 0;
      *(undefined1 *)((int)piVar6 + (int)piVar9 + (0xa8 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0xac - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0xb0 - (int)piVar5)) = 0xc;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0xb4 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0xb8 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0xbc - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0xc0 - (int)piVar5)) = 0;
      local_e8 = local_e8 + 1;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0xc4 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (200 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0xcc - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0xd0 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0xd4 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0xd8 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0xdc - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0xe0 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0xe4 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0xe8 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0xec - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0xf0 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0xf4 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0xf8 - (int)piVar5)) = 0;
      *(undefined1 *)((int)piVar6 + (int)piVar9 + (0xfc - (int)piVar5)) = 0;
      piVar9[0x3f] = 0;
      piVar9 = piVar9 + 0x40;
    } while (local_e8 != iVar4);
    *(int **)(this + 0x1c8) = piVar5;
  }
  iVar4 = *(int *)(this + 0x1ec);
  if (iVar4 != 0) {
    piVar6 = operator_new__(iVar4 * 0x15c + 4);
    *piVar6 = iVar4;
    piVar5 = piVar6 + 1;
    piVar9 = piVar5;
    while (iVar4 = iVar4 + -1, iVar4 != -1) {
      *piVar9 = 0;
      piVar9[1] = 0xc;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0xc - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x10 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x14 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x18 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x1c - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x20 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x24 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x28 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x2c - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x30 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x34 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x38 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x3c - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x40 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x44 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x48 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x4c - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x50 - (int)piVar5)) = 0;
      *(undefined1 *)(piVar9 + 0x14) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x58 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x5c - (int)piVar5)) = 0xc;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x60 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (100 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x68 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x6c - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x70 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x74 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x78 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x7c - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x80 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x84 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x88 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x8c - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x90 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x94 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x98 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x9c - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0xa0 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0xa4 - (int)piVar5)) = 0;
      *(undefined1 *)((int)piVar6 + (int)piVar9 + (0xa8 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0xac - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0xb0 - (int)piVar5)) = 0xc;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0xb4 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0xb8 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0xbc - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0xc0 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0xc4 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (200 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0xcc - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0xd0 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0xd4 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0xd8 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0xdc - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0xe0 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0xe4 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0xe8 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0xec - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0xf0 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0xf4 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0xf8 - (int)piVar5)) = 0;
      *(undefined1 *)((int)piVar6 + (int)piVar9 + (0xfc - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x100 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x104 - (int)piVar5)) = 0xc;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x108 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x10c - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x110 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x114 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x118 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x11c - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x120 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x124 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x128 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (300 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x130 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x134 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x138 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x13c - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x140 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x144 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x148 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x14c - (int)piVar5)) = 0;
      *(undefined1 *)((int)piVar6 + (int)piVar9 + (0x150 - (int)piVar5)) = 0;
      piVar9[0x54] = 0;
      piVar9[0x55] = 0;
      piVar9[0x56] = 0;
      local_24 = 0;
      local_20 = 0;
      local_2c = 0;
      local_28 = 0;
      local_34 = 0;
      local_30 = 0;
      GEAnimationTrack::Initialize
                ((GEAnimationTrack *)(piVar9 + 0x2a),0x3f800000,0,&local_34,&local_2c,0xc,&local_24)
      ;
      local_3c = 0;
      local_38 = 0;
      local_44 = 0;
      local_40 = 0;
      local_4c = 0;
      local_48 = 0;
      GEAnimationTrack::Initialize
                ((GEAnimationTrack *)(piVar9 + 0x3f),0x3f800000,0,&local_4c,&local_44,0xc,&local_3c)
      ;
      piVar9 = piVar9 + 0x57;
    }
    *(int **)(this + 0x1cc) = piVar5;
  }
  iVar4 = *(int *)(this + 0x1f0);
  if (iVar4 != 0) {
    piVar6 = operator_new__(iVar4 * 0x154 + 4);
    piVar5 = piVar6 + 1;
    *piVar6 = iVar4;
    local_e8 = 0;
    piVar9 = piVar5;
    do {
      *piVar9 = 0;
      piVar9[1] = 0xc;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0xc - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x10 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x14 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x18 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x1c - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x20 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x24 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x28 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x2c - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x30 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x34 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x38 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x3c - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x40 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x44 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x48 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x4c - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x50 - (int)piVar5)) = 0;
      *(undefined1 *)(piVar9 + 0x14) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x58 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x5c - (int)piVar5)) = 0xc;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x60 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (100 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x68 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x6c - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x70 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x74 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x78 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x7c - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x80 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x84 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x88 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x8c - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x90 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x94 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x98 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x9c - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0xa0 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0xa4 - (int)piVar5)) = 0;
      *(undefined1 *)((int)piVar6 + (int)piVar9 + (0xa8 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0xac - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0xb0 - (int)piVar5)) = 0xc;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0xb4 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0xb8 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0xbc - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0xc0 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0xc4 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (200 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0xcc - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0xd0 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0xd4 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0xd8 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0xdc - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0xe0 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0xe4 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0xe8 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0xec - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0xf0 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0xf4 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0xf8 - (int)piVar5)) = 0;
      *(undefined1 *)((int)piVar6 + (int)piVar9 + (0xfc - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x100 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x104 - (int)piVar5)) = 0xc;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x108 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x10c - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x110 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x114 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x118 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x11c - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x120 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x124 - (int)piVar5)) = 0;
      local_e8 = local_e8 + 1;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x128 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (300 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x130 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x134 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x138 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x13c - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x140 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x144 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x148 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x14c - (int)piVar5)) = 0;
      *(undefined1 *)((int)piVar6 + (int)piVar9 + (0x150 - (int)piVar5)) = 0;
      piVar9[0x54] = 0;
      piVar9 = piVar9 + 0x55;
    } while (local_e8 != iVar4);
    *(int **)(this + 0x1d0) = piVar5;
  }
  iVar4 = *(int *)(this + 500);
  if (iVar4 != 0) {
    piVar6 = operator_new__(iVar4 * 0x58 + 4);
    piVar5 = piVar6 + 1;
    *piVar6 = iVar4;
    local_e8 = 0;
    piVar9 = piVar5;
    do {
      *piVar9 = 0;
      piVar9[1] = 0xc;
      local_e8 = local_e8 + 1;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0xc - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x10 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x14 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x18 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x1c - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x20 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x24 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x28 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x2c - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x30 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x34 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x38 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x3c - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x40 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x44 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x48 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x4c - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x50 - (int)piVar5)) = 0;
      *(undefined1 *)(piVar9 + 0x14) = 0;
      piVar9[0x15] = 0;
      piVar9 = piVar9 + 0x16;
    } while (local_e8 != iVar4);
    *(int **)(this + 0x1d4) = piVar5;
  }
  iVar4 = *(int *)(this + 0x1f8);
  if (iVar4 != 0) {
    piVar6 = operator_new__(iVar4 * 0x58 + 4);
    piVar5 = piVar6 + 1;
    *piVar6 = iVar4;
    local_e8 = 0;
    piVar9 = piVar5;
    do {
      *piVar9 = 0;
      piVar9[1] = 0xc;
      local_e8 = local_e8 + 1;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0xc - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x10 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x14 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x18 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x1c - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x20 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x24 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x28 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x2c - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x30 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x34 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x38 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x3c - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x40 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x44 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x48 - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x4c - (int)piVar5)) = 0;
      *(undefined4 *)((int)piVar6 + (int)piVar9 + (0x50 - (int)piVar5)) = 0;
      *(undefined1 *)(piVar9 + 0x14) = 0;
      piVar9[0x15] = 0;
      piVar9 = piVar9 + 0x16;
    } while (local_e8 != iVar4);
    *(int **)(this + 0x1d8) = piVar5;
    return;
  }
  return;
}

