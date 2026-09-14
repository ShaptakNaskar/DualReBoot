/* 00068810 | STG::USerialize::Load */

/* STG::USerialize::Load(STG::FFileBase const*, STG::GEScene&) */

void STG::USerialize::Load(FFileBase *param_1,GEScene *param_2)

{
  UStringBase<char,int> *this;
  int *piVar1;
  FFileBase *this_00;
  GEScene *this_01;
  GECameraSet *this_02;
  uint uVar2;
  int iVar3;
  UStringBase<char,int> *pUVar4;
  uint *puVar5;
  void *pvVar6;
  int iVar7;
  undefined4 *extraout_ECX;
  int unaff_EBX;
  ulong uVar8;
  undefined4 *puVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  GEAnimationTrack *pGVar13;
  uint uVar14;
  UStringBase<char,int> *pUVar15;
  ulong *local_1e8;
  ulong *local_1e0;
  uint local_1dc;
  uchar local_1c1;
  uint local_1c0 [4];
  ulong local_1b0 [4];
  ulong local_1a0 [4];
  ulong local_190 [4];
  ulong local_180 [4];
  ulong local_170 [4];
  ulong local_160 [4];
  ulong local_150 [4];
  ulong local_140 [4];
  ulong local_130 [4];
  uint local_120 [2];
  ulong local_118;
  uchar local_114 [4];
  ulong local_110 [4];
  ulong local_100 [4];
  uint local_f0 [2];
  GETimeOfDay local_e8 [8];
  undefined4 local_e0;
  undefined4 local_dc;
  USerialize local_d8 [8];
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  void *local_90;
  int local_8c;
  void *local_88;
  int local_84;
  void *local_80;
  int local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50;
  int local_40;
  undefined1 local_3c [16];
  undefined1 *local_2c;
  undefined1 *local_28;
  int local_24;
  undefined4 local_18;
  
  local_18 = 0x68825;
  FUN_0002e044();
  this_00 = (FFileBase *)*extraout_ECX;
  this_01 = (GEScene *)extraout_ECX[1];
  local_24 = **(int **)(unaff_EBX + 0x33613);
  FFileBase::Read(this_00,(uchar *)local_f0,4);
  uVar2 = local_f0[0];
  if (local_f0[0] < 0x18) {
    if (0x15 < local_f0[0]) {
      Load(this_00,(UPreference_Scene *)(this_01 + 0x2c));
    }
LAB_00068885:
    GEEnvironment::Initialize((GEEnvironment *)(this_01 + 0x308),1);
    if (7 < uVar2) {
      iVar3 = *(int *)(this_01 + 0x308);
      FFileBase::Read(this_00,(uchar *)local_f0,4);
      if (local_f0[0] != 0) {
        uVar14 = 0;
        uVar10 = local_f0[0];
        do {
          while (uVar14 < 8) {
            puVar9 = (undefined4 *)(uVar14 * 0x3c + iVar3);
            GETimeOfDay::GETimeOfDay(local_e8);
            Load(this_00,local_e8);
            Load(this_00,(GEColor *)&local_d0);
            *puVar9 = local_d0;
            puVar9[1] = local_cc;
            puVar9[2] = local_c8;
            puVar9[3] = local_c4;
            if (0xf < uVar2) {
              Load(this_00,(GEColor *)&local_c0);
              puVar9[4] = local_c0;
              puVar9[5] = local_bc;
              puVar9[6] = local_b8;
              puVar9[7] = local_b4;
              Load(this_00,(MVector2 *)&local_e0);
              puVar9[0xc] = local_e0;
              puVar9[0xd] = local_dc;
              FFileBase::Read(this_00,&local_1c1,1);
              *(uchar *)(puVar9 + 0xe) = local_1c1;
              if (0x12 < uVar2) {
                FFileBase::Read(this_00,&local_1c1,1);
                *(uchar *)((int)puVar9 + 0x39) = local_1c1;
                Load(this_00,(GEColor *)&local_b0);
                puVar9[8] = local_b0;
                puVar9[9] = local_ac;
                puVar9[10] = local_a8;
                puVar9[0xb] = local_a4;
              }
            }
            uVar14 = uVar14 + 1;
            uVar10 = local_f0[0];
            if (local_f0[0] <= uVar14) goto LAB_0006a7e6;
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 < uVar10);
      }
      goto LAB_0006a7e6;
    }
    if (2 < uVar2) goto LAB_0006a7e6;
  }
  else {
    FFileBase::Read(this_00,(uchar *)local_f0,4);
    uVar10 = local_f0[0];
    if (local_f0[0] != *(uint *)(this_01 + 0x778)) {
      if (*(uint *)(this_01 + 0x778) != 0) {
        pUVar15 = *(UStringBase<char,int> **)(this_01 + 0x774);
        if (pUVar15 != (UStringBase<char,int> *)0x0) {
          pUVar4 = pUVar15 + *(int *)(pUVar15 + -4) * 0x38;
          if (pUVar15 != pUVar15 + *(int *)(pUVar15 + -4) * 0x38) {
            do {
              this = pUVar4 + -0x38;
              UStringBase<char,int>::~UStringBase(pUVar4 + -0x1c);
              UStringBase<char,int>::~UStringBase(this);
              pUVar15 = *(UStringBase<char,int> **)(this_01 + 0x774);
              pUVar4 = this;
            } while (pUVar15 != this);
          }
          operator_delete__(pUVar15 + -4);
        }
        *(undefined4 *)(this_01 + 0x774) = 0;
      }
      *(uint *)(this_01 + 0x778) = uVar10;
      if (uVar10 != 0) {
        puVar5 = operator_new__(uVar10 * 0x38 + 4);
        *puVar5 = uVar10;
        pUVar15 = (UStringBase<char,int> *)(puVar5 + 1);
        while (uVar10 = uVar10 - 1, uVar10 != 0xffffffff) {
          UStringBase<char,int>::UStringBase(pUVar15);
          pUVar4 = pUVar15 + 0x1c;
          pUVar15 = pUVar15 + 0x38;
          UStringBase<char,int>::UStringBase(pUVar4);
        }
        *(UStringBase<char,int> **)(this_01 + 0x774) = (UStringBase<char,int> *)(puVar5 + 1);
      }
    }
    if (local_f0[0] != 0) {
      uVar10 = 0;
      iVar3 = 0;
      do {
        uVar10 = uVar10 + 1;
        iVar7 = *(int *)(this_01 + 0x774);
        Load<char,int>(this_00,(UStringBase *)(iVar3 + iVar7));
        Load<char,int>(this_00,(UStringBase *)(iVar3 + iVar7) + 0x1c);
        iVar3 = iVar3 + 0x38;
      } while (uVar10 < local_f0[0]);
    }
    Load(this_00,(UPreference_Scene *)(this_01 + 0x2c));
    if (uVar2 < 0x19) goto LAB_00068885;
    Load(this_00,(GEEnvironment *)(this_01 + 0x308));
LAB_0006a7e6:
    Load(this_00,(GETextureModifier *)(this_01 + 0x318));
  }
  FFileBase::Read(this_00,(uchar *)&local_118,4);
  FFileBase::Read(this_00,(uchar *)local_1c0,4);
  FFileBase::Read(this_00,(uchar *)local_1b0,4);
  GEScene::Initialize(this_01,local_118,local_1b0[0]);
  if (local_118 != 0) {
    uVar10 = 0;
    do {
      iVar3 = uVar10 * 4;
      uVar10 = uVar10 + 1;
      Load(this_00,*(GEModel **)(*(int *)(this_01 + 0xb0) + iVar3));
    } while (uVar10 < local_118);
  }
  if (local_1c0[0] != 0) {
    uVar10 = 0;
    do {
      iVar3 = uVar10 * 0x40;
      uVar10 = uVar10 + 1;
      Load(this_00,(MMatrix *)(iVar3 + *(int *)(this_01 + 0xbc)));
    } while (uVar10 < local_1c0[0]);
  }
  if (local_1b0[0] != 0) {
    uVar10 = 0;
    iVar3 = 0;
    do {
      uVar10 = uVar10 + 1;
      Load(this_00,(GECamera *)(iVar3 + *(int *)(this_01 + 0xb4)));
      iVar3 = iVar3 + 0x210;
    } while (uVar10 < local_1b0[0]);
  }
  if (uVar2 < 9) {
    GEScene::InitializeCameraSets(this_01,1);
    local_40 = *(int *)(unaff_EBX + 0x33617) + 8;
    local_3c[0] = 0;
    local_2c = local_3c;
    this_02 = *(GECameraSet **)(this_01 + 0xb8);
    local_28 = local_2c;
    GECameraSet::Initialize(this_02,(UStringBase *)&local_40,local_1b0[0],0);
    UStringBase<char,int>::~UStringBase((UStringBase<char,int> *)&local_40);
    if (local_1b0[0] == 0) goto LAB_00068a61;
    uVar10 = 0;
    do {
      *(uint *)(*(int *)(this_02 + 0x230) + uVar10 * 4) = uVar10;
      uVar10 = uVar10 + 1;
    } while (uVar10 < local_1b0[0]);
    if (uVar2 - 10 < 0xb) goto LAB_0006a1de;
LAB_00068a73:
    if (uVar2 < 0xb) goto LAB_00068a80;
LAB_0006a205:
    FFileBase::Read(this_00,(uchar *)(this_01 + 0xfc),4);
    if (local_1c0[0] != 0) {
      uVar10 = 0;
      do {
        FFileBase::Read(this_00,(uchar *)local_100,4);
        FFileBase::Read(this_00,(uchar *)local_f0,4);
        *(ulong *)(*(int *)(this_01 + 0xf4) + uVar10 * 4) = local_100[0];
        *(uint *)(*(int *)(this_01 + 0xf8) + uVar10 * 4) = local_f0[0];
        *(uint *)(*(int *)(this_01 + 0x100) + local_100[0] * 4) = local_f0[0];
        if (local_f0[0] < local_1c0[0]) {
          piVar1 = (int *)(*(int *)(this_01 + 0x108) + local_f0[0] * 4);
          *piVar1 = *piVar1 + 1;
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < local_1c0[0]);
    }
    if (uVar2 < 0xe) goto LAB_00068a80;
    FFileBase::Read(this_00,(uchar *)local_100,4);
    GEScene::InitializeVertexAnimation(this_01,local_100[0]);
    if (local_100[0] != 0) {
      iVar3 = 0;
      uVar8 = 0;
      do {
        FFileBase::Read(this_00,(uchar *)local_f0,4);
        uVar10 = uVar8 + 1;
        GEScene::SetVertexAnimationRemap(this_01,uVar8,local_f0[0]);
        Load(this_00,(GEVertexBlender *)(iVar3 + *(int *)(this_01 + 0x170)));
        iVar3 = iVar3 + 0x24;
        uVar8 = uVar10;
      } while (uVar10 < local_100[0]);
    }
    local_1e0 = local_100;
    if (uVar2 < 0x14) goto LAB_00068a96;
    FFileBase::Read(this_00,(uchar *)local_1e0,4);
    GEScene::InitializeSkeleton(this_01,local_100[0]);
    if (local_100[0] != 0) {
      uVar8 = 0;
      do {
        FFileBase::Read(this_00,(uchar *)local_f0,4);
        GEScene::SetSkeletonRemap(this_01,uVar8,local_f0[0]);
        iVar3 = uVar8 * 0x2c;
        uVar8 = uVar8 + 1;
        Load(this_00,(Mesh *)(iVar3 + *(int *)(this_01 + 0x180)));
      } while (uVar8 < local_100[0]);
    }
LAB_0006a474:
    local_1e0 = local_100;
    FFileBase::Read(this_00,(uchar *)local_1e0,4);
    GEScene::InitializeIntersectables(this_01,local_100[0]);
    if (local_100[0] != 0) {
      uVar8 = 0;
      do {
        FFileBase::Read(this_00,(uchar *)local_f0,4);
        uVar10 = uVar8 + 1;
        GEScene::SetIntersectRemap(this_01,uVar8,local_f0[0]);
        uVar8 = uVar10;
      } while (uVar10 < local_100[0]);
    }
    if (uVar2 < 0x12) goto LAB_00068acf;
    FFileBase::Read(this_00,(uchar *)local_110,4);
    GEScene::InitializeInherit_Visibility(this_01,local_110[0]);
    if (local_110[0] != 0) {
      uVar8 = 0;
      do {
        FFileBase::Read(this_00,(uchar *)local_1e0,4);
        FFileBase::Read(this_00,(uchar *)local_f0,4);
        uVar10 = uVar8 + 1;
        GEScene::SetInherit_Visibility(this_01,uVar8,local_100[0],local_f0[0]);
        uVar8 = uVar10;
      } while (uVar10 < local_110[0]);
    }
    local_1e8 = local_110;
    if (uVar2 < 0x1a) {
      GEScene::InitializeInherit_Intersection(this_01,0);
    }
    else {
      FFileBase::Read(this_00,(uchar *)local_1e8,4);
      GEScene::InitializeInherit_Intersection(this_01,local_110[0]);
      if (local_110[0] != 0) {
        uVar8 = 0;
        do {
          local_1e0 = local_100;
          FFileBase::Read(this_00,(uchar *)local_1e0,4);
          FFileBase::Read(this_00,(uchar *)local_f0,4);
          uVar10 = uVar8 + 1;
          GEScene::SetInherit_Intersection(this_01,uVar8,local_100[0],local_f0[0]);
          uVar8 = uVar10;
        } while (uVar10 < local_110[0]);
      }
    }
LAB_00068c3a:
    local_1e0 = local_100;
    local_1e8 = local_110;
    FFileBase::Read(this_00,(uchar *)local_1e8,4);
    GEScene::InitializeModelVisMask_TimeOfDay(this_01,local_110[0]);
    if (local_110[0] != 0) {
      uVar8 = 0;
      do {
        FFileBase::Read(this_00,(uchar *)local_1e0,4);
        FFileBase::Read(this_00,(uchar *)local_f0,4);
        uVar10 = uVar8 + 1;
        GEScene::SetModelVisMask_TimeOfDay(this_01,uVar8,local_100[0],local_f0[0]);
        uVar8 = uVar10;
      } while (uVar10 < local_110[0]);
    }
    FFileBase::Read(this_00,(uchar *)local_1e0,4);
    GEScene::InitializeModelVisMask_WeekDay(this_01,local_100[0]);
    if (local_100[0] != 0) {
      uVar8 = 0;
      do {
        FFileBase::Read(this_00,(uchar *)local_f0,4);
        FFileBase::Read(this_00,(uchar *)local_1e8,1);
        uVar10 = uVar8 + 1;
        GEScene::SetModelVisMask_WeekDay(this_01,uVar8,local_f0[0],(uchar)local_110[0]);
        uVar8 = uVar10;
      } while (uVar10 < local_100[0]);
    }
    FFileBase::Read(this_00,(uchar *)local_1e8,4);
    GEScene::InitializeModelVisMask_Date(this_01,local_110[0]);
    if (local_110[0] != 0) {
      uVar8 = 0;
      do {
        FFileBase::Read(this_00,(uchar *)local_1e0,4);
        uVar11 = 0;
        do {
          FFileBase::Read(this_00,(uchar *)local_f0,4);
          uVar12 = uVar11 + 1;
          GEScene::SetModelVisMask_Date(this_01,uVar8,local_100[0],uVar11,local_f0[0]);
          uVar11 = uVar12;
        } while (uVar12 != 0xc);
        uVar8 = uVar8 + 1;
      } while (uVar8 < local_110[0]);
    }
    if (0x18 < uVar2) {
      FFileBase::Read(this_00,(uchar *)local_1e8,4);
      GEScene::InitializeModelVisMask_Environment(this_01,local_110[0]);
      if (local_110[0] != 0) {
        uVar8 = 0;
        do {
          FFileBase::Read(this_00,(uchar *)local_1e0,4);
          FFileBase::Read(this_00,(uchar *)local_f0,4);
          uVar10 = uVar8 + 1;
          GEScene::SetModelVisMask_Environment(this_01,uVar8,local_100[0],local_f0[0]);
          uVar8 = uVar10;
        } while (uVar10 < local_110[0]);
      }
    }
LAB_00068e6c:
    LoadLegacyTimeValue(local_d8,this_00,0xf,uVar2);
    FFileBase::Read(this_00,(uchar *)local_1a0,4);
    FFileBase::Read(this_00,(uchar *)local_180,4);
    FFileBase::Read(this_00,(uchar *)local_160,4);
    if (uVar2 < 4) {
      local_150[0] = 0;
LAB_00068efb:
      local_140[0] = 0;
LAB_00068f07:
      local_190[0] = 0;
LAB_00068f1b:
      local_170[0] = 0;
LAB_00068f2f:
      local_130[0] = 0;
    }
    else {
      FFileBase::Read(this_00,(uchar *)local_150,4);
      if (uVar2 == 4) goto LAB_00068efb;
      FFileBase::Read(this_00,(uchar *)local_140,4);
      if (uVar2 == 5) goto LAB_00068f07;
      FFileBase::Read(this_00,(uchar *)local_190,4);
      if (uVar2 == 6) goto LAB_00068f1b;
      FFileBase::Read(this_00,(uchar *)local_170,4);
      if (uVar2 < 0x11) goto LAB_00068f2f;
      FFileBase::Read(this_00,(uchar *)local_130,4);
    }
    GEScene::InitializeAnimations
              (this_01,(UTimeValue *)local_d8,local_1a0[0],local_190[0],local_180[0],local_170[0],
               local_160[0],local_150[0],local_140[0],local_130[0]);
    if (local_1a0[0] != 0) {
      local_1dc = 0;
      do {
        iVar3 = local_1dc * 0x100 + *(int *)(this_01 + 0x1bc);
        FFileBase::Read(this_00,(uchar *)local_100,4);
        FFileBase::Read(this_00,(uchar *)local_f0,4);
        *(uint *)(iVar3 + 0xfc) = local_f0[0];
        if (local_100[0] != 0) {
          uVar10 = 0;
LAB_00069054:
          do {
            if (uVar10 < 3) {
              Load(this_00,(GEAnimationTrack *)(uVar10 * 0x54 + iVar3));
            }
            else {
              local_a0 = 0;
              local_9c = 0xc;
              local_98 = 0;
              local_94 = 0;
              local_90 = (void *)0x0;
              local_8c = 0;
              local_88 = (void *)0x0;
              local_84 = 0;
              local_80 = (void *)0x0;
              local_7c = 0;
              local_78 = 0;
              local_74 = 0;
              local_70 = 0;
              local_6c = 0;
              local_68 = 0;
              local_64 = 0;
              local_60 = 0;
              local_5c = 0;
              local_58 = 0;
              local_54 = 0;
              local_50 = 0;
              Load(this_00,(GEAnimationTrack *)&local_a0);
              if (local_7c != 0) {
                if (local_80 != (void *)0x0) {
                  operator_delete__(local_80);
                }
                local_80 = (void *)0x0;
                local_7c = 0;
              }
              if (local_84 != 0) {
                if (local_88 != (void *)0x0) {
                  operator_delete__(local_88);
                }
                local_88 = (void *)0x0;
                local_84 = 0;
              }
              if (local_8c != 0) {
                if (local_90 != (void *)0x0) {
                  operator_delete__(local_90);
                }
                uVar10 = uVar10 + 1;
                local_90 = (void *)0x0;
                local_8c = 0;
                if (local_100[0] <= uVar10) break;
                goto LAB_00069054;
              }
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < local_100[0]);
        }
        local_1dc = local_1dc + 1;
      } while (local_1dc < local_1a0[0]);
    }
    if (5 < uVar2) {
      local_1dc = 0;
      if (local_190[0] != 0) {
        do {
          iVar3 = local_1dc * 0x100 + *(int *)(this_01 + 0x1c0);
          FFileBase::Read(this_00,(uchar *)local_100,4);
          FFileBase::Read(this_00,(uchar *)local_f0,4);
          *(uint *)(iVar3 + 0xfc) = local_f0[0];
          if (local_100[0] != 0) {
            uVar10 = 0;
LAB_0006927c:
            do {
              if (uVar10 < 3) {
                Load(this_00,(GEAnimationTrack *)(uVar10 * 0x54 + iVar3));
              }
              else {
                local_a0 = 0;
                local_9c = 0xc;
                local_98 = 0;
                local_94 = 0;
                local_90 = (void *)0x0;
                local_8c = 0;
                local_88 = (void *)0x0;
                local_84 = 0;
                local_80 = (void *)0x0;
                local_7c = 0;
                local_78 = 0;
                local_74 = 0;
                local_70 = 0;
                local_6c = 0;
                local_68 = 0;
                local_64 = 0;
                local_60 = 0;
                local_5c = 0;
                local_58 = 0;
                local_54 = 0;
                local_50 = 0;
                Load(this_00,(GEAnimationTrack *)&local_a0);
                if (local_7c != 0) {
                  if (local_80 != (void *)0x0) {
                    operator_delete__(local_80);
                  }
                  local_80 = (void *)0x0;
                  local_7c = 0;
                }
                if (local_84 != 0) {
                  if (local_88 != (void *)0x0) {
                    operator_delete__(local_88);
                  }
                  local_88 = (void *)0x0;
                  local_84 = 0;
                }
                if (local_8c != 0) {
                  if (local_90 != (void *)0x0) {
                    operator_delete__(local_90);
                  }
                  uVar10 = uVar10 + 1;
                  local_90 = (void *)0x0;
                  local_8c = 0;
                  if (local_100[0] <= uVar10) break;
                  goto LAB_0006927c;
                }
              }
              uVar10 = uVar10 + 1;
            } while (uVar10 < local_100[0]);
          }
          local_1dc = local_1dc + 1;
        } while (local_1dc < local_190[0]);
      }
    }
    local_1dc = 0;
    if (local_180[0] != 0) {
      do {
        iVar3 = local_1dc * 0x100 + *(int *)(this_01 + 0x1c4);
        FFileBase::Read(this_00,(uchar *)local_100,4);
        FFileBase::Read(this_00,(uchar *)local_f0,4);
        *(uint *)(iVar3 + 0xfc) = local_f0[0];
        if (local_100[0] != 0) {
          uVar10 = 0;
LAB_00069494:
          do {
            if (uVar10 < 3) {
              Load(this_00,(GEAnimationTrack *)(uVar10 * 0x54 + iVar3));
            }
            else {
              local_a0 = 0;
              local_9c = 0xc;
              local_98 = 0;
              local_94 = 0;
              local_90 = (void *)0x0;
              local_8c = 0;
              local_88 = (void *)0x0;
              local_84 = 0;
              local_80 = (void *)0x0;
              local_7c = 0;
              local_78 = 0;
              local_74 = 0;
              local_70 = 0;
              local_6c = 0;
              local_68 = 0;
              local_64 = 0;
              local_60 = 0;
              local_5c = 0;
              local_58 = 0;
              local_54 = 0;
              local_50 = 0;
              Load(this_00,(GEAnimationTrack *)&local_a0);
              if (local_7c != 0) {
                if (local_80 != (void *)0x0) {
                  operator_delete__(local_80);
                }
                local_80 = (void *)0x0;
                local_7c = 0;
              }
              if (local_84 != 0) {
                if (local_88 != (void *)0x0) {
                  operator_delete__(local_88);
                }
                local_88 = (void *)0x0;
                local_84 = 0;
              }
              if (local_8c != 0) {
                if (local_90 != (void *)0x0) {
                  operator_delete__(local_90);
                }
                uVar10 = uVar10 + 1;
                local_90 = (void *)0x0;
                local_8c = 0;
                if (local_100[0] <= uVar10) break;
                goto LAB_00069494;
              }
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < local_100[0]);
        }
        local_1dc = local_1dc + 1;
      } while (local_1dc < local_180[0]);
    }
    if (6 < uVar2) {
      local_1dc = 0;
      if (local_170[0] != 0) {
        do {
          iVar3 = local_1dc * 0x100 + *(int *)(this_01 + 0x1c8);
          FFileBase::Read(this_00,(uchar *)local_100,4);
          FFileBase::Read(this_00,(uchar *)local_f0,4);
          *(uint *)(iVar3 + 0xfc) = local_f0[0];
          if (local_100[0] != 0) {
            uVar10 = 0;
LAB_000696bc:
            do {
              if (uVar10 < 3) {
                Load(this_00,(GEAnimationTrack *)(uVar10 * 0x54 + iVar3));
              }
              else {
                local_a0 = 0;
                local_9c = 0xc;
                local_98 = 0;
                local_94 = 0;
                local_90 = (void *)0x0;
                local_8c = 0;
                local_88 = (void *)0x0;
                local_84 = 0;
                local_80 = (void *)0x0;
                local_7c = 0;
                local_78 = 0;
                local_74 = 0;
                local_70 = 0;
                local_6c = 0;
                local_68 = 0;
                local_64 = 0;
                local_60 = 0;
                local_5c = 0;
                local_58 = 0;
                local_54 = 0;
                local_50 = 0;
                Load(this_00,(GEAnimationTrack *)&local_a0);
                if (local_7c != 0) {
                  if (local_80 != (void *)0x0) {
                    operator_delete__(local_80);
                  }
                  local_80 = (void *)0x0;
                  local_7c = 0;
                }
                if (local_84 != 0) {
                  if (local_88 != (void *)0x0) {
                    operator_delete__(local_88);
                  }
                  local_88 = (void *)0x0;
                  local_84 = 0;
                }
                if (local_8c != 0) {
                  if (local_90 != (void *)0x0) {
                    operator_delete__(local_90);
                  }
                  uVar10 = uVar10 + 1;
                  local_90 = (void *)0x0;
                  local_8c = 0;
                  if (local_100[0] <= uVar10) break;
                  goto LAB_000696bc;
                }
              }
              uVar10 = uVar10 + 1;
            } while (uVar10 < local_100[0]);
          }
          local_1dc = local_1dc + 1;
        } while (local_1dc < local_170[0]);
      }
    }
    if (local_160[0] != 0) {
      local_1dc = 0;
      do {
        iVar3 = local_1dc * 0x15c + *(int *)(this_01 + 0x1cc);
        FFileBase::Read(this_00,(uchar *)local_120,4);
        FFileBase::Read(this_00,(uchar *)local_110,4);
        FFileBase::Read(this_00,(uchar *)local_100,4);
        FFileBase::Read(this_00,(uchar *)local_f0,4);
        *(ulong *)(iVar3 + 0x150) = local_110[0];
        *(ulong *)(iVar3 + 0x154) = local_100[0];
        *(uint *)(iVar3 + 0x158) = local_f0[0];
        if (local_120[0] != 0) {
          uVar10 = 0;
LAB_00069934:
          do {
            if (uVar10 < 4) {
              Load(this_00,(GEAnimationTrack *)(uVar10 * 0x54 + iVar3));
            }
            else {
              local_a0 = 0;
              local_9c = 0xc;
              local_98 = 0;
              local_94 = 0;
              local_90 = (void *)0x0;
              local_8c = 0;
              local_88 = (void *)0x0;
              local_84 = 0;
              local_80 = (void *)0x0;
              local_7c = 0;
              local_78 = 0;
              local_74 = 0;
              local_70 = 0;
              local_6c = 0;
              local_68 = 0;
              local_64 = 0;
              local_60 = 0;
              local_5c = 0;
              local_58 = 0;
              local_54 = 0;
              local_50 = 0;
              Load(this_00,(GEAnimationTrack *)&local_a0);
              if (local_7c != 0) {
                if (local_80 != (void *)0x0) {
                  operator_delete__(local_80);
                }
                local_80 = (void *)0x0;
                local_7c = 0;
              }
              if (local_84 != 0) {
                if (local_88 != (void *)0x0) {
                  operator_delete__(local_88);
                }
                local_88 = (void *)0x0;
                local_84 = 0;
              }
              if (local_8c != 0) {
                if (local_90 != (void *)0x0) {
                  operator_delete__(local_90);
                }
                uVar10 = uVar10 + 1;
                local_90 = (void *)0x0;
                local_8c = 0;
                if (local_120[0] <= uVar10) break;
                goto LAB_00069934;
              }
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < local_120[0]);
        }
        local_1dc = local_1dc + 1;
      } while (local_1dc < local_160[0]);
    }
    if (3 < uVar2) {
      if (local_150[0] != 0) {
        local_1dc = 0;
        do {
          iVar3 = local_1dc * 0x154 + *(int *)(this_01 + 0x1d0);
          FFileBase::Read(this_00,(uchar *)local_100,4);
          FFileBase::Read(this_00,(uchar *)local_f0,4);
          *(uint *)(iVar3 + 0x150) = local_f0[0];
          if (local_100[0] != 0) {
            uVar10 = 0;
LAB_00069b5c:
            do {
              if (uVar10 < 4) {
                Load(this_00,(GEAnimationTrack *)(uVar10 * 0x54 + iVar3));
              }
              else {
                local_a0 = 0;
                local_9c = 0xc;
                local_98 = 0;
                local_94 = 0;
                local_90 = (void *)0x0;
                local_8c = 0;
                local_88 = (void *)0x0;
                local_84 = 0;
                local_80 = (void *)0x0;
                local_7c = 0;
                local_78 = 0;
                local_74 = 0;
                local_70 = 0;
                local_6c = 0;
                local_68 = 0;
                local_64 = 0;
                local_60 = 0;
                local_5c = 0;
                local_58 = 0;
                local_54 = 0;
                local_50 = 0;
                Load(this_00,(GEAnimationTrack *)&local_a0);
                if (local_7c != 0) {
                  if (local_80 != (void *)0x0) {
                    operator_delete__(local_80);
                  }
                  local_80 = (void *)0x0;
                  local_7c = 0;
                }
                if (local_84 != 0) {
                  if (local_88 != (void *)0x0) {
                    operator_delete__(local_88);
                  }
                  local_88 = (void *)0x0;
                  local_84 = 0;
                }
                if (local_8c != 0) {
                  if (local_90 != (void *)0x0) {
                    operator_delete__(local_90);
                  }
                  uVar10 = uVar10 + 1;
                  local_90 = (void *)0x0;
                  local_8c = 0;
                  if (local_100[0] <= uVar10) break;
                  goto LAB_00069b5c;
                }
              }
              uVar10 = uVar10 + 1;
            } while (uVar10 < local_100[0]);
          }
          local_1dc = local_1dc + 1;
        } while (local_1dc < local_150[0]);
      }
      if (uVar2 != 4) {
        if (local_140[0] != 0) {
          local_1dc = 0;
          do {
            pGVar13 = (GEAnimationTrack *)(local_1dc * 0x58 + *(int *)(this_01 + 0x1d4));
            FFileBase::Read(this_00,(uchar *)local_100,4);
            FFileBase::Read(this_00,(uchar *)local_f0,4);
            *(uint *)(pGVar13 + 0x54) = local_f0[0];
            if (local_100[0] != 0) {
              uVar10 = 0;
LAB_00069d81:
              do {
                if (uVar10 == 0) {
                  Load(this_00,pGVar13);
                }
                else {
                  local_a0 = 0;
                  local_9c = 0xc;
                  local_98 = 0;
                  local_94 = 0;
                  local_90 = (void *)0x0;
                  local_8c = 0;
                  local_88 = (void *)0x0;
                  local_84 = 0;
                  local_80 = (void *)0x0;
                  local_7c = 0;
                  local_78 = 0;
                  local_74 = 0;
                  local_70 = 0;
                  local_6c = 0;
                  local_68 = 0;
                  local_64 = 0;
                  local_60 = 0;
                  local_5c = 0;
                  local_58 = 0;
                  local_54 = 0;
                  local_50 = 0;
                  Load(this_00,(GEAnimationTrack *)&local_a0);
                  if (local_7c != 0) {
                    if (local_80 != (void *)0x0) {
                      operator_delete__(local_80);
                    }
                    local_80 = (void *)0x0;
                    local_7c = 0;
                  }
                  if (local_84 != 0) {
                    if (local_88 != (void *)0x0) {
                      operator_delete__(local_88);
                    }
                    local_88 = (void *)0x0;
                    local_84 = 0;
                  }
                  if (local_8c != 0) {
                    if (local_90 != (void *)0x0) {
                      operator_delete__(local_90);
                    }
                    uVar10 = uVar10 + 1;
                    local_90 = (void *)0x0;
                    local_8c = 0;
                    if (local_100[0] <= uVar10) break;
                    goto LAB_00069d81;
                  }
                }
                uVar10 = uVar10 + 1;
              } while (uVar10 < local_100[0]);
            }
            local_1dc = local_1dc + 1;
          } while (local_1dc < local_140[0]);
        }
        if ((0x10 < uVar2) && (local_130[0] != 0)) {
          local_1dc = 0;
          do {
            pGVar13 = (GEAnimationTrack *)(local_1dc * 0x58 + *(int *)(this_01 + 0x1d8));
            FFileBase::Read(this_00,(uchar *)local_100,4);
            FFileBase::Read(this_00,(uchar *)local_f0,4);
            *(uint *)(pGVar13 + 0x54) = local_f0[0];
            if (local_100[0] != 0) {
              uVar10 = 0;
LAB_00069fa1:
              do {
                if (uVar10 == 0) {
                  Load(this_00,pGVar13);
                }
                else {
                  local_a0 = 0;
                  local_9c = 0xc;
                  local_98 = 0;
                  local_94 = 0;
                  local_90 = (void *)0x0;
                  local_8c = 0;
                  local_88 = (void *)0x0;
                  local_84 = 0;
                  local_80 = (void *)0x0;
                  local_7c = 0;
                  local_78 = 0;
                  local_74 = 0;
                  local_70 = 0;
                  local_6c = 0;
                  local_68 = 0;
                  local_64 = 0;
                  local_60 = 0;
                  local_5c = 0;
                  local_58 = 0;
                  local_54 = 0;
                  local_50 = 0;
                  Load(this_00,(GEAnimationTrack *)&local_a0);
                  if (local_7c != 0) {
                    if (local_80 != (void *)0x0) {
                      operator_delete__(local_80);
                    }
                    local_80 = (void *)0x0;
                    local_7c = 0;
                  }
                  if (local_84 != 0) {
                    if (local_88 != (void *)0x0) {
                      operator_delete__(local_88);
                    }
                    local_88 = (void *)0x0;
                    local_84 = 0;
                  }
                  if (local_8c != 0) {
                    if (local_90 != (void *)0x0) {
                      operator_delete__(local_90);
                    }
                    uVar10 = uVar10 + 1;
                    local_90 = (void *)0x0;
                    local_8c = 0;
                    if (local_100[0] <= uVar10) break;
                    goto LAB_00069fa1;
                  }
                }
                uVar10 = uVar10 + 1;
              } while (uVar10 < local_100[0]);
            }
            local_1dc = local_1dc + 1;
          } while (local_1dc < local_130[0]);
        }
      }
    }
    if (0x16 < uVar2) {
      LLogicScene::Load(this_00,(UArrayFixed *)(this_01 + 0x59c));
      iVar3 = *(int *)(this_01 + 0x5a0);
      goto LAB_00068baf;
    }
  }
  else {
    FFileBase::Read(this_00,(uchar *)local_f0,4);
    GEScene::InitializeCameraSets(this_01,local_f0[0]);
    if (local_f0[0] != 0) {
      uVar10 = 0;
      do {
        iVar3 = uVar10 * 0x248;
        uVar10 = uVar10 + 1;
        Load(this_00,(GECameraSet *)(iVar3 + *(int *)(this_01 + 0xb8)));
      } while (uVar10 < local_f0[0]);
    }
LAB_00068a61:
    if (10 < uVar2 - 10) goto LAB_00068a73;
LAB_0006a1de:
    FFileBase::Read(this_00,local_114,4);
    if (10 < uVar2) goto LAB_0006a205;
LAB_00068a80:
    GEScene::InitializeVertexAnimation(this_01,0);
LAB_00068a96:
    GEScene::InitializeSkeleton(this_01,0);
    if (0xb < uVar2) goto LAB_0006a474;
    GEScene::InitializeIntersectables(this_01,0);
LAB_00068acf:
    GEScene::InitializeInherit_Visibility(this_01,0);
    GEScene::InitializeInherit_Intersection(this_01,0);
    if (0xc < uVar2) goto LAB_00068c3a;
    GEScene::InitializeModelVisMask_TimeOfDay(this_01,0);
    GEScene::InitializeModelVisMask_WeekDay(this_01,0);
    GEScene::InitializeModelVisMask_Date(this_01,0);
    GEScene::InitializeModelVisMask_Environment(this_01,0);
    if (1 < uVar2) goto LAB_00068e6c;
  }
  iVar3 = 0;
  if (*(int *)(this_01 + 0x5a0) != 0) {
    if (*(void **)(this_01 + 0x59c) != (void *)0x0) {
      operator_delete__(*(void **)(this_01 + 0x59c));
    }
    iVar3 = 0;
    *(undefined4 *)(this_01 + 0x59c) = 0;
    *(undefined4 *)(this_01 + 0x5a0) = 0;
  }
LAB_00068baf:
  if (*(int *)(this_01 + 0x5a8) != iVar3) {
    if (*(int *)(this_01 + 0x5a8) != 0) {
      if (*(void **)(this_01 + 0x5a4) != (void *)0x0) {
        operator_delete__(*(void **)(this_01 + 0x5a4));
      }
      *(undefined4 *)(this_01 + 0x5a4) = 0;
    }
    *(int *)(this_01 + 0x5a8) = iVar3;
    if (iVar3 != 0) {
      pvVar6 = operator_new__(iVar3 << 2);
      *(void **)(this_01 + 0x5a4) = pvVar6;
      iVar3 = *(int *)(this_01 + 0x5a8);
      if (iVar3 != 0) {
        iVar7 = 0;
        do {
          *(undefined4 *)(*(int *)(this_01 + 0x5a4) + iVar7 * 4) = 0;
          iVar7 = iVar7 + 1;
        } while (iVar7 != iVar3);
      }
    }
  }
  *(undefined4 *)(this_01 + 0x5ac) = 0;
  if (local_24 == **(int **)(unaff_EBX + 0x33613)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002e000();
}

