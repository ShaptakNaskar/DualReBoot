/* 00041220 | STG::GEScene::~GEScene */

/* STG::GEScene::~GEScene() */

void __thiscall STG::GEScene::~GEScene(GEScene *this)

{
  int *piVar1;
  MSIMD *this_00;
  void *pvVar2;
  GEScene *pGVar3;
  undefined4 *puVar4;
  GECameraSet *pGVar5;
  int *piVar6;
  GEVertexBlender *pGVar7;
  Mesh *pMVar8;
  int iVar9;
  int *piVar10;
  int unaff_EBX;
  int *piVar11;
  int *piVar12;
  int iVar13;
  uint uVar14;
  undefined4 *puVar15;
  GECameraSet *this_01;
  int iVar16;
  GEVertexBlender *this_02;
  Mesh *this_03;
  int iVar17;
  uint local_20;
  
  FUN_0002e044();
  this_00 = *(MSIMD **)(this + 0x1b0);
  *(int *)this = *(int *)(unaff_EBX + 0x5ac8f) + 8;
  if (this_00 != (MSIMD *)0x0) {
    MSIMD::~MSIMD(this_00);
    operator_delete(this_00);
  }
  local_20 = *(uint *)(this + 0xa4);
  *(undefined4 *)(this + 0x1b0) = 0;
  if (local_20 != 0) {
    uVar14 = 0;
    do {
      while( true ) {
        iVar13 = uVar14 * 4;
        piVar10 = (int *)(iVar13 + *(int *)(this + 0xb0));
        piVar6 = (int *)*piVar10;
        if ((piVar6 == (int *)0x0) || (iVar16 = piVar6[1], piVar6[1] = iVar16 + -1, iVar16 != 1))
        break;
        (**(code **)(*piVar6 + 4))(piVar6);
        uVar14 = uVar14 + 1;
        local_20 = *(uint *)(this + 0xa4);
        *(undefined4 *)(iVar13 + *(int *)(this + 0xb0)) = 0;
        if (local_20 <= uVar14) goto LAB_000412e8;
      }
      uVar14 = uVar14 + 1;
      *piVar10 = 0;
    } while (uVar14 < local_20);
  }
LAB_000412e8:
  if (*(void **)(this + 0xb0) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0xb0));
  }
  puVar4 = *(undefined4 **)(this + 0xb4);
  *(undefined4 *)(this + 0xb0) = 0;
  if (puVar4 != (undefined4 *)0x0) {
    puVar15 = puVar4 + puVar4[-1] * 0x84;
    if (puVar4 != puVar15) {
      do {
        puVar15 = puVar15 + -0x84;
        (**(code **)*puVar15)(puVar15);
        puVar4 = *(undefined4 **)(this + 0xb4);
      } while (puVar4 != puVar15);
    }
    operator_delete__(puVar4 + -1);
  }
  pGVar5 = *(GECameraSet **)(this + 0xb8);
  *(undefined4 *)(this + 0xb4) = 0;
  if (pGVar5 != (GECameraSet *)0x0) {
    this_01 = pGVar5 + *(int *)(pGVar5 + -4) * 0x248;
    if (pGVar5 != this_01) {
      do {
        this_01 = this_01 + -0x248;
        GECameraSet::~GECameraSet(this_01);
        pGVar5 = *(GECameraSet **)(this + 0xb8);
      } while (pGVar5 != this_01);
    }
    operator_delete__(pGVar5 + -4);
  }
  *(undefined4 *)(this + 0xb8) = 0;
  if (*(void **)(this + 0xbc) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0xbc));
  }
  *(undefined4 *)(this + 0xbc) = 0;
  if (*(void **)(this + 0xc0) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0xc0));
  }
  *(undefined4 *)(this + 0xc0) = 0;
  if (*(void **)(this + 0xf4) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0xf4));
  }
  *(undefined4 *)(this + 0xf4) = 0;
  if (*(void **)(this + 0xf8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0xf8));
  }
  *(undefined4 *)(this + 0xf8) = 0;
  piVar6 = *(int **)(this + 0x1bc);
  if (piVar6 != (int *)0x0) {
    piVar12 = piVar6 + piVar6[-1] * 0x40;
    piVar10 = piVar12;
    if (piVar12 != piVar6) {
      do {
        piVar12 = piVar10 + -0x40;
        if (piVar12 != (int *)0x0) {
          piVar6 = piVar10 + -0x12;
          piVar11 = piVar10 + -0xf;
          piVar10 = piVar10 + -0xd;
          do {
            if (*piVar10 != 0) {
              if ((void *)piVar10[-1] != (void *)0x0) {
                operator_delete__((void *)piVar10[-1]);
              }
              piVar10[-1] = 0;
              *piVar10 = 0;
            }
            if (*piVar11 != 0) {
              if ((void *)piVar11[-1] != (void *)0x0) {
                operator_delete__((void *)piVar11[-1]);
              }
              piVar11[-1] = 0;
              *piVar11 = 0;
            }
            if (piVar6[1] != 0) {
              if ((void *)*piVar6 != (void *)0x0) {
                operator_delete__((void *)*piVar6);
              }
              *piVar6 = 0;
              piVar6[1] = 0;
            }
            piVar6 = piVar6 + -0x15;
            piVar11 = piVar11 + -0x15;
            piVar1 = piVar10 + -9;
            piVar10 = piVar10 + -0x15;
          } while (piVar12 != piVar1);
          piVar6 = *(int **)(this + 0x1bc);
        }
        piVar10 = piVar12;
      } while (piVar12 != piVar6);
    }
    operator_delete__(piVar12 + -1);
  }
  piVar6 = *(int **)(this + 0x1c0);
  *(undefined4 *)(this + 0x1bc) = 0;
  if (piVar6 != (int *)0x0) {
    piVar12 = piVar6 + piVar6[-1] * 0x40;
    piVar10 = piVar12;
    if (piVar12 != piVar6) {
      do {
        piVar12 = piVar10 + -0x40;
        if (piVar12 != (int *)0x0) {
          piVar6 = piVar10 + -0x12;
          piVar11 = piVar10 + -0xf;
          piVar10 = piVar10 + -0xd;
          do {
            if (*piVar10 != 0) {
              if ((void *)piVar10[-1] != (void *)0x0) {
                operator_delete__((void *)piVar10[-1]);
              }
              piVar10[-1] = 0;
              *piVar10 = 0;
            }
            if (*piVar11 != 0) {
              if ((void *)piVar11[-1] != (void *)0x0) {
                operator_delete__((void *)piVar11[-1]);
              }
              piVar11[-1] = 0;
              *piVar11 = 0;
            }
            if (piVar6[1] != 0) {
              if ((void *)*piVar6 != (void *)0x0) {
                operator_delete__((void *)*piVar6);
              }
              *piVar6 = 0;
              piVar6[1] = 0;
            }
            piVar6 = piVar6 + -0x15;
            piVar11 = piVar11 + -0x15;
            piVar1 = piVar10 + -9;
            piVar10 = piVar10 + -0x15;
          } while (piVar12 != piVar1);
          piVar6 = *(int **)(this + 0x1c0);
        }
        piVar10 = piVar12;
      } while (piVar12 != piVar6);
    }
    operator_delete__(piVar12 + -1);
  }
  *(undefined4 *)(this + 0x1c0) = 0;
  piVar6 = *(int **)(this + 0x1c4);
  if (piVar6 != (int *)0x0) {
    piVar12 = piVar6 + piVar6[-1] * 0x40;
    piVar10 = piVar12;
    if (piVar12 != piVar6) {
      do {
        piVar12 = piVar10 + -0x40;
        if (piVar12 != (int *)0x0) {
          piVar6 = piVar10 + -0x12;
          piVar11 = piVar10 + -0xf;
          piVar10 = piVar10 + -0xd;
          do {
            if (*piVar10 != 0) {
              if ((void *)piVar10[-1] != (void *)0x0) {
                operator_delete__((void *)piVar10[-1]);
              }
              piVar10[-1] = 0;
              *piVar10 = 0;
            }
            if (*piVar11 != 0) {
              if ((void *)piVar11[-1] != (void *)0x0) {
                operator_delete__((void *)piVar11[-1]);
              }
              piVar11[-1] = 0;
              *piVar11 = 0;
            }
            if (piVar6[1] != 0) {
              if ((void *)*piVar6 != (void *)0x0) {
                operator_delete__((void *)*piVar6);
              }
              *piVar6 = 0;
              piVar6[1] = 0;
            }
            piVar6 = piVar6 + -0x15;
            piVar11 = piVar11 + -0x15;
            piVar1 = piVar10 + -9;
            piVar10 = piVar10 + -0x15;
          } while (piVar12 != piVar1);
          piVar6 = *(int **)(this + 0x1c4);
        }
        piVar10 = piVar12;
      } while (piVar12 != piVar6);
    }
    operator_delete__(piVar12 + -1);
  }
  piVar6 = *(int **)(this + 0x1c8);
  *(undefined4 *)(this + 0x1c4) = 0;
  if (piVar6 != (int *)0x0) {
    piVar12 = piVar6 + piVar6[-1] * 0x40;
    piVar10 = piVar12;
    if (piVar12 != piVar6) {
      do {
        piVar12 = piVar10 + -0x40;
        if (piVar12 != (int *)0x0) {
          piVar6 = piVar10 + -0x12;
          piVar11 = piVar10 + -0xf;
          piVar10 = piVar10 + -0xd;
          do {
            if (*piVar10 != 0) {
              if ((void *)piVar10[-1] != (void *)0x0) {
                operator_delete__((void *)piVar10[-1]);
              }
              piVar10[-1] = 0;
              *piVar10 = 0;
            }
            if (*piVar11 != 0) {
              if ((void *)piVar11[-1] != (void *)0x0) {
                operator_delete__((void *)piVar11[-1]);
              }
              piVar11[-1] = 0;
              *piVar11 = 0;
            }
            if (piVar6[1] != 0) {
              if ((void *)*piVar6 != (void *)0x0) {
                operator_delete__((void *)*piVar6);
              }
              *piVar6 = 0;
              piVar6[1] = 0;
            }
            piVar6 = piVar6 + -0x15;
            piVar11 = piVar11 + -0x15;
            piVar1 = piVar10 + -9;
            piVar10 = piVar10 + -0x15;
          } while (piVar12 != piVar1);
          piVar6 = *(int **)(this + 0x1c8);
        }
        piVar10 = piVar12;
      } while (piVar12 != piVar6);
    }
    operator_delete__(piVar12 + -1);
  }
  *(undefined4 *)(this + 0x1c8) = 0;
  piVar6 = *(int **)(this + 0x1cc);
  if (piVar6 != (int *)0x0) {
    piVar12 = piVar6 + piVar6[-1] * 0x57;
    piVar10 = piVar12;
    if (piVar12 != piVar6) {
      do {
        piVar12 = piVar10 + -0x57;
        if (piVar12 != (int *)0x0) {
          piVar6 = piVar10 + -0x14;
          piVar11 = piVar10 + -0x11;
          piVar10 = piVar10 + -0xf;
          do {
            if (*piVar10 != 0) {
              if ((void *)piVar10[-1] != (void *)0x0) {
                operator_delete__((void *)piVar10[-1]);
              }
              piVar10[-1] = 0;
              *piVar10 = 0;
            }
            if (*piVar11 != 0) {
              if ((void *)piVar11[-1] != (void *)0x0) {
                operator_delete__((void *)piVar11[-1]);
              }
              piVar11[-1] = 0;
              *piVar11 = 0;
            }
            if (piVar6[1] != 0) {
              if ((void *)*piVar6 != (void *)0x0) {
                operator_delete__((void *)*piVar6);
              }
              *piVar6 = 0;
              piVar6[1] = 0;
            }
            piVar6 = piVar6 + -0x15;
            piVar11 = piVar11 + -0x15;
            piVar1 = piVar10 + -9;
            piVar10 = piVar10 + -0x15;
          } while (piVar12 != piVar1);
          piVar6 = *(int **)(this + 0x1cc);
        }
        piVar10 = piVar12;
      } while (piVar12 != piVar6);
    }
    operator_delete__(piVar12 + -1);
  }
  piVar6 = *(int **)(this + 0x1d0);
  *(undefined4 *)(this + 0x1cc) = 0;
  if (piVar6 != (int *)0x0) {
    piVar12 = piVar6 + piVar6[-1] * 0x55;
    piVar10 = piVar12;
    if (piVar12 != piVar6) {
      do {
        piVar12 = piVar10 + -0x55;
        if (piVar12 != (int *)0x0) {
          piVar6 = piVar10 + -0x12;
          piVar11 = piVar10 + -0xf;
          piVar10 = piVar10 + -0xd;
          do {
            if (*piVar10 != 0) {
              if ((void *)piVar10[-1] != (void *)0x0) {
                operator_delete__((void *)piVar10[-1]);
              }
              piVar10[-1] = 0;
              *piVar10 = 0;
            }
            if (*piVar11 != 0) {
              if ((void *)piVar11[-1] != (void *)0x0) {
                operator_delete__((void *)piVar11[-1]);
              }
              piVar11[-1] = 0;
              *piVar11 = 0;
            }
            if (piVar6[1] != 0) {
              if ((void *)*piVar6 != (void *)0x0) {
                operator_delete__((void *)*piVar6);
              }
              *piVar6 = 0;
              piVar6[1] = 0;
            }
            piVar6 = piVar6 + -0x15;
            piVar11 = piVar11 + -0x15;
            piVar1 = piVar10 + -9;
            piVar10 = piVar10 + -0x15;
          } while (piVar12 != piVar1);
          piVar6 = *(int **)(this + 0x1d0);
        }
        piVar10 = piVar12;
      } while (piVar12 != piVar6);
    }
    operator_delete__(piVar12 + -1);
  }
  *(undefined4 *)(this + 0x1d0) = 0;
  piVar6 = *(int **)(this + 0x1d4);
  if (piVar6 != (int *)0x0) {
    piVar12 = piVar6 + piVar6[-1] * 0x16;
    piVar10 = piVar12;
    if (piVar12 != piVar6) {
      do {
        piVar12 = piVar10 + -0x16;
        if (piVar12 != (int *)0x0) {
          piVar6 = piVar10 + -0x12;
          piVar11 = piVar10 + -0xf;
          piVar10 = piVar10 + -0xd;
          do {
            if (*piVar10 != 0) {
              if ((void *)piVar10[-1] != (void *)0x0) {
                operator_delete__((void *)piVar10[-1]);
              }
              piVar10[-1] = 0;
              *piVar10 = 0;
            }
            if (*piVar11 != 0) {
              if ((void *)piVar11[-1] != (void *)0x0) {
                operator_delete__((void *)piVar11[-1]);
              }
              piVar11[-1] = 0;
              *piVar11 = 0;
            }
            if (piVar6[1] != 0) {
              if ((void *)*piVar6 != (void *)0x0) {
                operator_delete__((void *)*piVar6);
              }
              *piVar6 = 0;
              piVar6[1] = 0;
            }
            piVar6 = piVar6 + -0x15;
            piVar11 = piVar11 + -0x15;
            piVar1 = piVar10 + -9;
            piVar10 = piVar10 + -0x15;
          } while (piVar12 != piVar1);
          piVar6 = *(int **)(this + 0x1d4);
        }
        piVar10 = piVar12;
      } while (piVar12 != piVar6);
    }
    operator_delete__(piVar12 + -1);
  }
  piVar6 = *(int **)(this + 0x1d8);
  *(undefined4 *)(this + 0x1d4) = 0;
  if (piVar6 != (int *)0x0) {
    piVar12 = piVar6 + piVar6[-1] * 0x16;
    piVar10 = piVar12;
    if (piVar12 != piVar6) {
      do {
        piVar12 = piVar10 + -0x16;
        if (piVar12 != (int *)0x0) {
          piVar6 = piVar10 + -0x12;
          piVar11 = piVar10 + -0xf;
          piVar10 = piVar10 + -0xd;
          do {
            if (*piVar10 != 0) {
              if ((void *)piVar10[-1] != (void *)0x0) {
                operator_delete__((void *)piVar10[-1]);
              }
              piVar10[-1] = 0;
              *piVar10 = 0;
            }
            if (*piVar11 != 0) {
              if ((void *)piVar11[-1] != (void *)0x0) {
                operator_delete__((void *)piVar11[-1]);
              }
              piVar11[-1] = 0;
              *piVar11 = 0;
            }
            if (piVar6[1] != 0) {
              if ((void *)*piVar6 != (void *)0x0) {
                operator_delete__((void *)*piVar6);
              }
              *piVar6 = 0;
              piVar6[1] = 0;
            }
            piVar6 = piVar6 + -0x15;
            piVar11 = piVar11 + -0x15;
            piVar1 = piVar10 + -9;
            piVar10 = piVar10 + -0x15;
          } while (piVar12 != piVar1);
          piVar6 = *(int **)(this + 0x1d8);
        }
        piVar10 = piVar12;
      } while (piVar12 != piVar6);
    }
    operator_delete__(piVar12 + -1);
  }
  *(undefined4 *)(this + 0x1d8) = 0;
  LLogicScene::Deallocate((UArrayFixed *)(this + 0x59c));
  if (*(int *)(this + 0x778) != 0) {
    iVar13 = *(int *)(this + 0x774);
    if (iVar13 != 0) {
      iVar9 = *(int *)(unaff_EBX + 0x5ac13) + 8;
      iVar17 = *(int *)(iVar13 + -4) * 0x38 + iVar13;
      for (iVar16 = iVar17; iVar16 != iVar13; iVar16 = iVar16 + -0x38) {
        iVar13 = iVar16 - iVar17;
        *(int *)(iVar16 + -0x1c) = iVar9;
        pvVar2 = *(void **)(iVar13 + -4 + iVar17);
        if ((pvVar2 != (void *)(iVar16 + -0x18)) && (pvVar2 != (void *)0x0)) {
          uVar14 = *(int *)(iVar13 + -0x18 + iVar17) - (int)pvVar2;
          if (uVar14 < 0x81) {
            std::__node_alloc::_M_deallocate(pvVar2,uVar14);
          }
          else {
            operator_delete(pvVar2);
          }
        }
        *(int *)(iVar13 + -0x38 + iVar17) = iVar9;
        pvVar2 = *(void **)(iVar13 + -0x20 + iVar17);
        if ((pvVar2 != (void *)(iVar16 + -0x34)) && (pvVar2 != (void *)0x0)) {
          uVar14 = *(int *)(iVar13 + -0x34 + iVar17) - (int)pvVar2;
          if (uVar14 < 0x81) {
            std::__node_alloc::_M_deallocate(pvVar2,uVar14);
          }
          else {
            operator_delete(pvVar2);
          }
        }
        iVar13 = *(int *)(this + 0x774);
      }
      operator_delete__((void *)(iVar16 + -4));
    }
    *(undefined4 *)(this + 0x774) = 0;
    *(undefined4 *)(this + 0x778) = 0;
  }
  GETimeOfDayAuto::~GETimeOfDayAuto((GETimeOfDayAuto *)(this + 0x5c8));
  if (*(int *)(this + 0x5a8) != 0) {
    if (*(void **)(this + 0x5a4) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x5a4));
    }
    *(undefined4 *)(this + 0x5a4) = 0;
    *(undefined4 *)(this + 0x5a8) = 0;
  }
  if (*(int *)(this + 0x5a0) != 0) {
    if (*(void **)(this + 0x59c) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x59c));
    }
    *(undefined4 *)(this + 0x59c) = 0;
    *(undefined4 *)(this + 0x5a0) = 0;
  }
  GECamera::~GECamera((GECamera *)(this + 0x350));
  GETextureModifier::~GETextureModifier((GETextureModifier *)(this + 0x318));
  GEEnvironment::~GEEnvironment((GEEnvironment *)(this + 0x308));
  if (*(int *)(this + 0x1ac) != 0) {
    if (*(void **)(this + 0x1a8) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x1a8));
    }
    *(undefined4 *)(this + 0x1a8) = 0;
    *(undefined4 *)(this + 0x1ac) = 0;
  }
  if (*(int *)(this + 0x1a4) != 0) {
    if (*(void **)(this + 0x1a0) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x1a0));
    }
    *(undefined4 *)(this + 0x1a0) = 0;
    *(undefined4 *)(this + 0x1a4) = 0;
  }
  if (*(int *)(this + 0x19c) != 0) {
    if (*(void **)(this + 0x198) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x198));
    }
    *(undefined4 *)(this + 0x198) = 0;
    *(undefined4 *)(this + 0x19c) = 0;
  }
  if (*(int *)(this + 0x194) != 0) {
    if (*(void **)(this + 400) != (void *)0x0) {
      operator_delete__(*(void **)(this + 400));
    }
    *(undefined4 *)(this + 400) = 0;
    *(undefined4 *)(this + 0x194) = 0;
  }
  if (*(int *)(this + 0x18c) != 0) {
    if (*(void **)(this + 0x188) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x188));
    }
    *(undefined4 *)(this + 0x188) = 0;
    *(undefined4 *)(this + 0x18c) = 0;
  }
  if (*(int *)(this + 0x184) != 0) {
    pMVar8 = *(Mesh **)(this + 0x180);
    if (pMVar8 != (Mesh *)0x0) {
      this_03 = pMVar8 + *(int *)(pMVar8 + -4) * 0x2c;
      if (pMVar8 != this_03) {
        do {
          this_03 = this_03 + -0x2c;
          GESkeleton::Mesh::~Mesh(this_03);
          pMVar8 = *(Mesh **)(this + 0x180);
        } while (pMVar8 != this_03);
      }
      operator_delete__(pMVar8 + -4);
    }
    *(undefined4 *)(this + 0x180) = 0;
    *(undefined4 *)(this + 0x184) = 0;
  }
  if (*(int *)(this + 0x17c) != 0) {
    if (*(void **)(this + 0x178) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x178));
    }
    *(undefined4 *)(this + 0x178) = 0;
    *(undefined4 *)(this + 0x17c) = 0;
  }
  if (*(int *)(this + 0x174) != 0) {
    pGVar7 = *(GEVertexBlender **)(this + 0x170);
    if (pGVar7 != (GEVertexBlender *)0x0) {
      this_02 = pGVar7 + *(int *)(pGVar7 + -4) * 0x24;
      if (pGVar7 != this_02) {
        do {
          this_02 = this_02 + -0x24;
          GEVertexBlender::~GEVertexBlender(this_02);
          pGVar7 = *(GEVertexBlender **)(this + 0x170);
        } while (pGVar7 != this_02);
      }
      operator_delete__(pGVar7 + -4);
    }
    *(undefined4 *)(this + 0x170) = 0;
    *(undefined4 *)(this + 0x174) = 0;
  }
  if (*(int *)(this + 0x16c) != 0) {
    if (*(void **)(this + 0x168) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x168));
    }
    *(undefined4 *)(this + 0x168) = 0;
    *(undefined4 *)(this + 0x16c) = 0;
  }
  if (*(int *)(this + 0x164) != 0) {
    if (*(void **)(this + 0x160) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x160));
    }
    *(undefined4 *)(this + 0x160) = 0;
    *(undefined4 *)(this + 0x164) = 0;
  }
  if (*(int *)(this + 0x15c) != 0) {
    if (*(void **)(this + 0x158) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x158));
    }
    *(undefined4 *)(this + 0x158) = 0;
    *(undefined4 *)(this + 0x15c) = 0;
  }
  if (*(int *)(this + 0x154) != 0) {
    if (*(void **)(this + 0x150) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x150));
    }
    *(undefined4 *)(this + 0x150) = 0;
    *(undefined4 *)(this + 0x154) = 0;
  }
  if (*(int *)(this + 0x14c) != 0) {
    if (*(void **)(this + 0x148) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x148));
    }
    *(undefined4 *)(this + 0x148) = 0;
    *(undefined4 *)(this + 0x14c) = 0;
  }
  if (*(int *)(this + 0x144) != 0) {
    if (*(void **)(this + 0x140) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x140));
    }
    *(undefined4 *)(this + 0x140) = 0;
    *(undefined4 *)(this + 0x144) = 0;
  }
  if (*(int *)(this + 0x13c) != 0) {
    if (*(void **)(this + 0x138) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x138));
    }
    *(undefined4 *)(this + 0x138) = 0;
    *(undefined4 *)(this + 0x13c) = 0;
  }
  if (*(int *)(this + 0x134) != 0) {
    if (*(void **)(this + 0x130) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x130));
    }
    *(undefined4 *)(this + 0x130) = 0;
    *(undefined4 *)(this + 0x134) = 0;
  }
  if (*(int *)(this + 300) != 0) {
    if (*(void **)(this + 0x128) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x128));
    }
    *(undefined4 *)(this + 0x128) = 0;
    *(undefined4 *)(this + 300) = 0;
  }
  if (*(int *)(this + 0x11c) != 0) {
    if (*(void **)(this + 0x118) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x118));
    }
    *(undefined4 *)(this + 0x118) = 0;
    *(undefined4 *)(this + 0x11c) = 0;
  }
  if (*(int *)(this + 0x114) != 0) {
    if (*(void **)(this + 0x110) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x110));
    }
    *(undefined4 *)(this + 0x110) = 0;
    *(undefined4 *)(this + 0x114) = 0;
  }
  if (*(int *)(this + 0x10c) != 0) {
    if (*(void **)(this + 0x108) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x108));
    }
    *(undefined4 *)(this + 0x108) = 0;
    *(undefined4 *)(this + 0x10c) = 0;
  }
  if (*(int *)(this + 0x104) != 0) {
    if (*(void **)(this + 0x100) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x100));
    }
    *(undefined4 *)(this + 0x100) = 0;
    *(undefined4 *)(this + 0x104) = 0;
  }
  if (*(int *)(this + 0xec) != 0) {
    if (*(void **)(this + 0xe8) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0xe8));
    }
    *(undefined4 *)(this + 0xe8) = 0;
    *(undefined4 *)(this + 0xec) = 0;
  }
  if (*(int *)(this + 0xe4) != 0) {
    if (*(void **)(this + 0xe0) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0xe0));
    }
    *(undefined4 *)(this + 0xe0) = 0;
    *(undefined4 *)(this + 0xe4) = 0;
  }
  if (*(int *)(this + 0xd8) != 0) {
    if (*(void **)(this + 0xd4) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0xd4));
    }
    *(undefined4 *)(this + 0xd4) = 0;
    *(undefined4 *)(this + 0xd8) = 0;
  }
  if (*(int *)(this + 0xd0) != 0) {
    if (*(void **)(this + 0xcc) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0xcc));
    }
    *(undefined4 *)(this + 0xcc) = 0;
    *(undefined4 *)(this + 0xd0) = 0;
  }
  if (*(int *)(this + 200) != 0) {
    if (*(void **)(this + 0xc4) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0xc4));
    }
    *(undefined4 *)(this + 0xc4) = 0;
    *(undefined4 *)(this + 200) = 0;
  }
  UPreference_Scene::~UPreference_Scene((UPreference_Scene *)(this + 0x2c));
  iVar13 = *(int *)(unaff_EBX + 0x5ac13);
  *(int *)this = *(int *)(&DAT_0005ac5b + unaff_EBX) + 8;
  *(int *)(this + 8) = iVar13 + 8;
  pGVar3 = *(GEScene **)(this + 0x20);
  if ((pGVar3 != this + 0xc) && (pGVar3 != (GEScene *)0x0)) {
    if ((uint)(*(int *)(this + 0xc) - (int)pGVar3) < 0x81) {
      std::__node_alloc::_M_deallocate(pGVar3,*(int *)(this + 0xc) - (int)pGVar3);
    }
    else {
      operator_delete(pGVar3);
    }
  }
  *(int *)this = *(int *)(unaff_EBX + 0x5ac53) + 8;
  return;
}

