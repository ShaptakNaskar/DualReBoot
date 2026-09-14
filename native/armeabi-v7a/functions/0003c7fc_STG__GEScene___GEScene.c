/* 0003c7fc | STG::GEScene::~GEScene */

/* STG::GEScene::~GEScene() */

GEScene * __thiscall STG::GEScene::~GEScene(GEScene *this)

{
  int *piVar1;
  int iVar2;
  GECameraSet *pGVar3;
  GEScene *pGVar4;
  void *pvVar5;
  GEVertexBlender *pGVar6;
  Mesh *pMVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  MSIMD *this_00;
  uint uVar12;
  GECameraSet *this_01;
  int iVar13;
  GEVertexBlender *this_02;
  Mesh *this_03;
  undefined4 *puVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  
  iVar9 = DAT_0003d7b8 + 0x3c810;
  this_00 = *(MSIMD **)(this + 0x1b0);
  *(int *)this = *(int *)(iVar9 + DAT_0003d7bc) + 8;
  if (this_00 != (MSIMD *)0x0) {
    MSIMD::~MSIMD(this_00);
    operator_delete(this_00);
  }
  uVar8 = *(uint *)(this + 0xa4);
  uVar12 = 0;
  *(undefined4 *)(this + 0x1b0) = 0;
  if (uVar8 != 0) {
    do {
      while( true ) {
        iVar10 = *(int *)(this + 0xb0);
        iVar2 = uVar12 * 4;
        piVar1 = *(int **)(iVar10 + uVar12 * 4);
        uVar12 = uVar12 + 1;
        if ((piVar1 == (int *)0x0) || (iVar11 = piVar1[1], piVar1[1] = iVar11 + -1, iVar11 != 1))
        break;
        (**(code **)(*piVar1 + 4))();
        uVar8 = *(uint *)(this + 0xa4);
        *(undefined4 *)(*(int *)(this + 0xb0) + iVar2) = 0;
        if (uVar8 <= uVar12) goto LAB_0003c8bc;
      }
      *(undefined4 *)(iVar10 + iVar2) = 0;
    } while (uVar12 < uVar8);
  }
LAB_0003c8bc:
  if (*(void **)(this + 0xb0) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0xb0));
  }
  iVar2 = *(int *)(this + 0xb4);
  *(undefined4 *)(this + 0xb0) = 0;
  if (iVar2 != 0) {
    iVar10 = iVar2 + *(int *)(iVar2 + -4) * 0x210;
    if (iVar2 != iVar10) {
      do {
        iVar11 = iVar10 + -0x210;
        (*(code *)**(undefined4 **)(iVar10 + -0x210))(iVar11);
        iVar2 = *(int *)(this + 0xb4);
        iVar10 = iVar11;
      } while (iVar2 != iVar11);
    }
    operator_delete__((void *)(iVar2 + -8));
  }
  pGVar3 = *(GECameraSet **)(this + 0xb8);
  *(undefined4 *)(this + 0xb4) = 0;
  if (pGVar3 != (GECameraSet *)0x0) {
    this_01 = pGVar3 + *(int *)(pGVar3 + -4) * 0x248;
    if (pGVar3 != this_01) {
      do {
        this_01 = this_01 + -0x248;
        GECameraSet::~GECameraSet(this_01);
        pGVar3 = *(GECameraSet **)(this + 0xb8);
      } while (pGVar3 != this_01);
    }
    operator_delete__(pGVar3 + -8);
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
  iVar2 = *(int *)(this + 0x1bc);
  *(undefined4 *)(this + 0xf8) = 0;
  if (iVar2 != 0) {
    iVar11 = iVar2 + *(int *)(iVar2 + -4) * 0x110;
    iVar10 = iVar11;
    if (iVar11 != iVar2) {
      do {
        iVar11 = iVar10 + -0x110;
        if (iVar11 != 0) {
          iVar17 = iVar10 + -0x40;
          iVar15 = iVar10 + -0x48;
          iVar16 = iVar10 + -0x50;
          iVar2 = iVar10 + -8;
          do {
            iVar13 = iVar2 - (iVar10 + -8);
            if (*(int *)(iVar13 + iVar17 + 4) != 0) {
              if (*(void **)(iVar13 + iVar17) != (void *)0x0) {
                operator_delete__(*(void **)(iVar13 + iVar17));
              }
              *(undefined4 *)(iVar13 + iVar17) = 0;
              *(undefined4 *)(iVar13 + iVar17 + 4) = 0;
            }
            if (*(int *)(iVar13 + iVar15 + 4) != 0) {
              if (*(void **)(iVar13 + iVar15) != (void *)0x0) {
                operator_delete__(*(void **)(iVar13 + iVar15));
              }
              *(undefined4 *)(iVar13 + iVar15) = 0;
              *(undefined4 *)(iVar13 + iVar15 + 4) = 0;
            }
            if (*(int *)(iVar13 + iVar16 + 4) != 0) {
              if (*(void **)(iVar13 + iVar16) != (void *)0x0) {
                operator_delete__(*(void **)(iVar13 + iVar16));
              }
              *(undefined4 *)(iVar13 + iVar16) = 0;
              *(undefined4 *)(iVar13 + iVar16 + 4) = 0;
            }
            iVar2 = iVar2 + -0x58;
          } while (iVar11 != iVar2);
          iVar2 = *(int *)(this + 0x1bc);
        }
        iVar10 = iVar11;
      } while (iVar11 != iVar2);
    }
    operator_delete__((void *)(iVar11 + -8));
  }
  iVar2 = *(int *)(this + 0x1c0);
  *(undefined4 *)(this + 0x1bc) = 0;
  if (iVar2 != 0) {
    iVar11 = iVar2 + *(int *)(iVar2 + -4) * 0x110;
    iVar10 = iVar11;
    if (iVar11 != iVar2) {
      do {
        iVar11 = iVar10 + -0x110;
        if (iVar11 != 0) {
          iVar17 = iVar10 + -0x40;
          iVar15 = iVar10 + -0x48;
          iVar16 = iVar10 + -0x50;
          iVar2 = iVar10 + -8;
          do {
            iVar13 = iVar2 - (iVar10 + -8);
            if (*(int *)(iVar13 + iVar17 + 4) != 0) {
              if (*(void **)(iVar13 + iVar17) != (void *)0x0) {
                operator_delete__(*(void **)(iVar13 + iVar17));
              }
              *(undefined4 *)(iVar13 + iVar17) = 0;
              *(undefined4 *)(iVar13 + iVar17 + 4) = 0;
            }
            if (*(int *)(iVar13 + iVar15 + 4) != 0) {
              if (*(void **)(iVar13 + iVar15) != (void *)0x0) {
                operator_delete__(*(void **)(iVar13 + iVar15));
              }
              *(undefined4 *)(iVar13 + iVar15) = 0;
              *(undefined4 *)(iVar13 + iVar15 + 4) = 0;
            }
            if (*(int *)(iVar13 + iVar16 + 4) != 0) {
              if (*(void **)(iVar13 + iVar16) != (void *)0x0) {
                operator_delete__(*(void **)(iVar13 + iVar16));
              }
              *(undefined4 *)(iVar13 + iVar16) = 0;
              *(undefined4 *)(iVar13 + iVar16 + 4) = 0;
            }
            iVar2 = iVar2 + -0x58;
          } while (iVar11 != iVar2);
          iVar2 = *(int *)(this + 0x1c0);
        }
        iVar10 = iVar11;
      } while (iVar11 != iVar2);
    }
    operator_delete__((void *)(iVar11 + -8));
  }
  iVar2 = *(int *)(this + 0x1c4);
  *(undefined4 *)(this + 0x1c0) = 0;
  if (iVar2 != 0) {
    iVar11 = iVar2 + *(int *)(iVar2 + -4) * 0x110;
    iVar10 = iVar11;
    if (iVar11 != iVar2) {
      do {
        iVar11 = iVar10 + -0x110;
        if (iVar11 != 0) {
          iVar17 = iVar10 + -0x40;
          iVar15 = iVar10 + -0x48;
          iVar16 = iVar10 + -0x50;
          iVar2 = iVar10 + -8;
          do {
            iVar13 = iVar2 - (iVar10 + -8);
            if (*(int *)(iVar13 + iVar17 + 4) != 0) {
              if (*(void **)(iVar13 + iVar17) != (void *)0x0) {
                operator_delete__(*(void **)(iVar13 + iVar17));
              }
              *(undefined4 *)(iVar13 + iVar17) = 0;
              *(undefined4 *)(iVar13 + iVar17 + 4) = 0;
            }
            if (*(int *)(iVar13 + iVar15 + 4) != 0) {
              if (*(void **)(iVar13 + iVar15) != (void *)0x0) {
                operator_delete__(*(void **)(iVar13 + iVar15));
              }
              *(undefined4 *)(iVar13 + iVar15) = 0;
              *(undefined4 *)(iVar13 + iVar15 + 4) = 0;
            }
            if (*(int *)(iVar13 + iVar16 + 4) != 0) {
              if (*(void **)(iVar13 + iVar16) != (void *)0x0) {
                operator_delete__(*(void **)(iVar13 + iVar16));
              }
              *(undefined4 *)(iVar13 + iVar16) = 0;
              *(undefined4 *)(iVar13 + iVar16 + 4) = 0;
            }
            iVar2 = iVar2 + -0x58;
          } while (iVar11 != iVar2);
          iVar2 = *(int *)(this + 0x1c4);
        }
        iVar10 = iVar11;
      } while (iVar11 != iVar2);
    }
    operator_delete__((void *)(iVar11 + -8));
  }
  iVar2 = *(int *)(this + 0x1c8);
  *(undefined4 *)(this + 0x1c4) = 0;
  if (iVar2 != 0) {
    iVar11 = iVar2 + *(int *)(iVar2 + -4) * 0x110;
    iVar10 = iVar11;
    if (iVar11 != iVar2) {
      do {
        iVar11 = iVar10 + -0x110;
        if (iVar11 != 0) {
          iVar17 = iVar10 + -0x40;
          iVar15 = iVar10 + -0x48;
          iVar16 = iVar10 + -0x50;
          iVar2 = iVar10 + -8;
          do {
            iVar13 = iVar2 - (iVar10 + -8);
            if (*(int *)(iVar13 + iVar17 + 4) != 0) {
              if (*(void **)(iVar13 + iVar17) != (void *)0x0) {
                operator_delete__(*(void **)(iVar13 + iVar17));
              }
              *(undefined4 *)(iVar13 + iVar17) = 0;
              *(undefined4 *)(iVar13 + iVar17 + 4) = 0;
            }
            if (*(int *)(iVar13 + iVar15 + 4) != 0) {
              if (*(void **)(iVar13 + iVar15) != (void *)0x0) {
                operator_delete__(*(void **)(iVar13 + iVar15));
              }
              *(undefined4 *)(iVar13 + iVar15) = 0;
              *(undefined4 *)(iVar13 + iVar15 + 4) = 0;
            }
            if (*(int *)(iVar13 + iVar16 + 4) != 0) {
              if (*(void **)(iVar13 + iVar16) != (void *)0x0) {
                operator_delete__(*(void **)(iVar13 + iVar16));
              }
              *(undefined4 *)(iVar13 + iVar16) = 0;
              *(undefined4 *)(iVar13 + iVar16 + 4) = 0;
            }
            iVar2 = iVar2 + -0x58;
          } while (iVar11 != iVar2);
          iVar2 = *(int *)(this + 0x1c8);
        }
        iVar10 = iVar11;
      } while (iVar11 != iVar2);
    }
    operator_delete__((void *)(iVar11 + -8));
  }
  iVar2 = *(int *)(this + 0x1cc);
  *(undefined4 *)(this + 0x1c8) = 0;
  if (iVar2 != 0) {
    iVar11 = *(int *)(iVar2 + -4) * 0x170 + iVar2;
    iVar10 = iVar11;
    if (iVar11 != iVar2) {
      do {
        iVar11 = iVar10 + -0x170;
        if (iVar11 != 0) {
          iVar17 = iVar10 + -0x48;
          iVar15 = iVar10 + -0x50;
          iVar16 = iVar10 + -0x58;
          iVar2 = iVar10 + -0x10;
          do {
            iVar13 = iVar2 - (iVar10 + -0x10);
            if (*(int *)(iVar13 + iVar17 + 4) != 0) {
              if (*(void **)(iVar13 + iVar17) != (void *)0x0) {
                operator_delete__(*(void **)(iVar13 + iVar17));
              }
              *(undefined4 *)(iVar13 + iVar17) = 0;
              *(undefined4 *)(iVar13 + iVar17 + 4) = 0;
            }
            if (*(int *)(iVar13 + iVar15 + 4) != 0) {
              if (*(void **)(iVar13 + iVar15) != (void *)0x0) {
                operator_delete__(*(void **)(iVar13 + iVar15));
              }
              *(undefined4 *)(iVar13 + iVar15) = 0;
              *(undefined4 *)(iVar13 + iVar15 + 4) = 0;
            }
            if (*(int *)(iVar13 + iVar16 + 4) != 0) {
              if (*(void **)(iVar13 + iVar16) != (void *)0x0) {
                operator_delete__(*(void **)(iVar13 + iVar16));
              }
              *(undefined4 *)(iVar13 + iVar16) = 0;
              *(undefined4 *)(iVar13 + iVar16 + 4) = 0;
            }
            iVar2 = iVar2 + -0x58;
          } while (iVar11 != iVar2);
          iVar2 = *(int *)(this + 0x1cc);
        }
        iVar10 = iVar11;
      } while (iVar11 != iVar2);
    }
    operator_delete__((void *)(iVar11 + -8));
  }
  iVar2 = *(int *)(this + 0x1d0);
  *(undefined4 *)(this + 0x1cc) = 0;
  if (iVar2 != 0) {
    iVar11 = *(int *)(iVar2 + -4) * 0x168 + iVar2;
    iVar10 = iVar11;
    if (iVar11 != iVar2) {
      do {
        iVar11 = iVar10 + -0x168;
        if (iVar11 != 0) {
          iVar17 = iVar10 + -0x40;
          iVar15 = iVar10 + -0x48;
          iVar16 = iVar10 + -0x50;
          iVar2 = iVar10 + -8;
          do {
            iVar13 = iVar2 - (iVar10 + -8);
            if (*(int *)(iVar13 + iVar17 + 4) != 0) {
              if (*(void **)(iVar13 + iVar17) != (void *)0x0) {
                operator_delete__(*(void **)(iVar13 + iVar17));
              }
              *(undefined4 *)(iVar13 + iVar17) = 0;
              *(undefined4 *)(iVar13 + iVar17 + 4) = 0;
            }
            if (*(int *)(iVar13 + iVar15 + 4) != 0) {
              if (*(void **)(iVar13 + iVar15) != (void *)0x0) {
                operator_delete__(*(void **)(iVar13 + iVar15));
              }
              *(undefined4 *)(iVar13 + iVar15) = 0;
              *(undefined4 *)(iVar13 + iVar15 + 4) = 0;
            }
            if (*(int *)(iVar13 + iVar16 + 4) != 0) {
              if (*(void **)(iVar13 + iVar16) != (void *)0x0) {
                operator_delete__(*(void **)(iVar13 + iVar16));
              }
              *(undefined4 *)(iVar13 + iVar16) = 0;
              *(undefined4 *)(iVar13 + iVar16 + 4) = 0;
            }
            iVar2 = iVar2 + -0x58;
          } while (iVar11 != iVar2);
          iVar2 = *(int *)(this + 0x1d0);
        }
        iVar10 = iVar11;
      } while (iVar11 != iVar2);
    }
    operator_delete__((void *)(iVar11 + -8));
  }
  iVar2 = *(int *)(this + 0x1d4);
  *(undefined4 *)(this + 0x1d0) = 0;
  if (iVar2 != 0) {
    iVar11 = iVar2 + *(int *)(iVar2 + -4) * 0x60;
    iVar10 = iVar11;
    if (iVar11 != iVar2) {
      do {
        iVar11 = iVar10 + -0x60;
        if (iVar11 != 0) {
          iVar17 = iVar10 + -0x40;
          iVar15 = iVar10 + -0x48;
          iVar16 = iVar10 + -0x50;
          iVar2 = iVar10 + -8;
          do {
            iVar13 = iVar2 - (iVar10 + -8);
            if (*(int *)(iVar13 + iVar17 + 4) != 0) {
              if (*(void **)(iVar13 + iVar17) != (void *)0x0) {
                operator_delete__(*(void **)(iVar13 + iVar17));
              }
              *(undefined4 *)(iVar13 + iVar17) = 0;
              *(undefined4 *)(iVar13 + iVar17 + 4) = 0;
            }
            if (*(int *)(iVar13 + iVar15 + 4) != 0) {
              if (*(void **)(iVar13 + iVar15) != (void *)0x0) {
                operator_delete__(*(void **)(iVar13 + iVar15));
              }
              *(undefined4 *)(iVar13 + iVar15) = 0;
              *(undefined4 *)(iVar13 + iVar15 + 4) = 0;
            }
            if (*(int *)(iVar13 + iVar16 + 4) != 0) {
              if (*(void **)(iVar13 + iVar16) != (void *)0x0) {
                operator_delete__(*(void **)(iVar13 + iVar16));
              }
              *(undefined4 *)(iVar13 + iVar16) = 0;
              *(undefined4 *)(iVar13 + iVar16 + 4) = 0;
            }
            iVar2 = iVar2 + -0x58;
          } while (iVar11 != iVar2);
          iVar2 = *(int *)(this + 0x1d4);
        }
        iVar10 = iVar11;
      } while (iVar11 != iVar2);
    }
    operator_delete__((void *)(iVar11 + -8));
  }
  iVar2 = *(int *)(this + 0x1d8);
  *(undefined4 *)(this + 0x1d4) = 0;
  if (iVar2 != 0) {
    iVar11 = iVar2 + *(int *)(iVar2 + -4) * 0x60;
    iVar10 = iVar11;
    if (iVar11 != iVar2) {
      do {
        iVar11 = iVar10 + -0x60;
        if (iVar11 != 0) {
          iVar17 = iVar10 + -0x40;
          iVar15 = iVar10 + -0x48;
          iVar16 = iVar10 + -0x50;
          iVar2 = iVar10 + -8;
          do {
            iVar13 = iVar2 - (iVar10 + -8);
            if (*(int *)(iVar13 + iVar17 + 4) != 0) {
              if (*(void **)(iVar13 + iVar17) != (void *)0x0) {
                operator_delete__(*(void **)(iVar13 + iVar17));
              }
              *(undefined4 *)(iVar13 + iVar17) = 0;
              *(undefined4 *)(iVar13 + iVar17 + 4) = 0;
            }
            if (*(int *)(iVar13 + iVar15 + 4) != 0) {
              if (*(void **)(iVar13 + iVar15) != (void *)0x0) {
                operator_delete__(*(void **)(iVar13 + iVar15));
              }
              *(undefined4 *)(iVar13 + iVar15) = 0;
              *(undefined4 *)(iVar13 + iVar15 + 4) = 0;
            }
            if (*(int *)(iVar13 + iVar16 + 4) != 0) {
              if (*(void **)(iVar13 + iVar16) != (void *)0x0) {
                operator_delete__(*(void **)(iVar13 + iVar16));
              }
              *(undefined4 *)(iVar13 + iVar16) = 0;
              *(undefined4 *)(iVar13 + iVar16 + 4) = 0;
            }
            iVar2 = iVar2 + -0x58;
          } while (iVar11 != iVar2);
          iVar2 = *(int *)(this + 0x1d8);
        }
        iVar10 = iVar11;
      } while (iVar11 != iVar2);
    }
    operator_delete__((void *)(iVar11 + -8));
  }
  *(undefined4 *)(this + 0x1d8) = 0;
  LLogicScene::Deallocate((UArrayFixed *)(this + 0x5b0));
  if (*(int *)(this + 0x78c) == 0) {
    iVar10 = *(int *)(iVar9 + DAT_0003d7c8);
  }
  else {
    iVar2 = *(int *)(this + 0x788);
    if (iVar2 == 0) {
      iVar10 = *(int *)(iVar9 + DAT_0003d7c8);
    }
    else {
      iVar10 = *(int *)(iVar9 + DAT_0003d7c8);
      iVar15 = iVar2 + *(int *)(iVar2 + -4) * 0x38;
      puVar14 = (undefined4 *)(iVar15 + -0x20);
      iVar11 = iVar15;
      while (iVar2 != iVar11) {
        *(int *)(iVar11 + -0x1c) = iVar10 + 8;
        pvVar5 = *(void **)((int)puVar14 + ((iVar15 + -0x18) - (iVar15 + -0x34)));
        iVar2 = iVar11 - iVar15;
        if ((pvVar5 != (void *)(iVar11 + -0x18)) && (pvVar5 != (void *)0x0)) {
          uVar8 = *(int *)(iVar2 + iVar15 + -0x18) - (int)pvVar5;
          if (uVar8 < 0x81) {
            std::__node_alloc::_M_deallocate(pvVar5,uVar8);
          }
          else {
            operator_delete(pvVar5);
          }
        }
        *(int *)(iVar2 + iVar15 + -0x38) = iVar10 + 8;
        pvVar5 = (void *)*puVar14;
        if ((pvVar5 != (void *)(iVar11 + -0x34)) && (pvVar5 != (void *)0x0)) {
          uVar8 = *(int *)(iVar2 + iVar15 + -0x34) - (int)pvVar5;
          if (uVar8 < 0x81) {
            std::__node_alloc::_M_deallocate(pvVar5,uVar8);
          }
          else {
            operator_delete(pvVar5);
          }
        }
        iVar11 = iVar11 + -0x38;
        puVar14 = puVar14 + -0xe;
        iVar2 = *(int *)(this + 0x788);
      }
      operator_delete__((void *)(iVar2 + -8));
    }
    *(undefined4 *)(this + 0x788) = 0;
    *(undefined4 *)(this + 0x78c) = 0;
  }
  GETimeOfDayAuto::~GETimeOfDayAuto((GETimeOfDayAuto *)(this + 0x5dc));
  if (*(int *)(this + 0x5bc) != 0) {
    if (*(void **)(this + 0x5b8) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x5b8));
    }
    *(undefined4 *)(this + 0x5b8) = 0;
    *(undefined4 *)(this + 0x5bc) = 0;
  }
  if (*(int *)(this + 0x5b4) != 0) {
    if (*(void **)(this + 0x5b0) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x5b0));
    }
    *(undefined4 *)(this + 0x5b0) = 0;
    *(undefined4 *)(this + 0x5b4) = 0;
  }
  GECamera::~GECamera((GECamera *)(this + 0x35c));
  GETextureModifier::~GETextureModifier((GETextureModifier *)(this + 0x324));
  GEEnvironment::~GEEnvironment((GEEnvironment *)(this + 0x314));
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
    pMVar7 = *(Mesh **)(this + 0x180);
    if (pMVar7 != (Mesh *)0x0) {
      this_03 = pMVar7 + *(int *)(pMVar7 + -4) * 0x2c;
      if (pMVar7 != this_03) {
        do {
          this_03 = this_03 + -0x2c;
          GESkeleton::Mesh::~Mesh(this_03);
          pMVar7 = *(Mesh **)(this + 0x180);
        } while (pMVar7 != this_03);
      }
      operator_delete__(pMVar7 + -8);
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
    pGVar6 = *(GEVertexBlender **)(this + 0x170);
    if (pGVar6 != (GEVertexBlender *)0x0) {
      this_02 = pGVar6 + *(int *)(pGVar6 + -4) * 0x24;
      if (pGVar6 != this_02) {
        do {
          this_02 = this_02 + -0x24;
          GEVertexBlender::~GEVertexBlender(this_02);
          pGVar6 = *(GEVertexBlender **)(this + 0x170);
        } while (pGVar6 != this_02);
      }
      operator_delete__(pGVar6 + -8);
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
  pGVar4 = *(GEScene **)(this + 0x20);
  iVar2 = *(int *)(iVar9 + DAT_0003d7c0);
  *(int *)(this + 8) = iVar10 + 8;
  *(int *)this = iVar2 + 8;
  if ((pGVar4 != this + 0xc) && (pGVar4 != (GEScene *)0x0)) {
    if ((uint)(*(int *)(this + 0xc) - (int)pGVar4) < 0x81) {
      std::__node_alloc::_M_deallocate(pGVar4,*(int *)(this + 0xc) - (int)pGVar4);
    }
    else {
      operator_delete(pGVar4);
    }
  }
  *(int *)this = *(int *)(iVar9 + DAT_0003d7c4) + 8;
  return this;
}

