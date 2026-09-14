/* 0005bb8c | STG::USerialize::Load */

/* STG::USerialize::Load(STG::FFileBase const*, STG::GEScene&) */

void STG::USerialize::Load(FFileBase *param_1,GEScene *param_2)

{
  uint uVar1;
  void *pvVar2;
  GECamera *pGVar3;
  GECameraSet *pGVar4;
  GEVertexBlender *pGVar5;
  Mesh *pMVar6;
  int iVar7;
  int *piVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  int iVar14;
  uint uVar15;
  UStringBase<char,int> *this;
  int iVar16;
  ulong uVar17;
  undefined4 *puVar18;
  int iVar19;
  int iVar20;
  UStringBase *pUVar21;
  int local_14c;
  uint local_148;
  ulong *local_144;
  ulong *local_140;
  uchar local_129;
  ulong local_128;
  uint local_124;
  ulong local_120;
  uchar auStack_11c [4];
  ulong local_118;
  ulong local_114;
  ulong local_110;
  ulong local_10c;
  ulong local_108;
  ulong local_104;
  ulong local_100;
  ulong local_fc;
  uint local_f8;
  ulong local_f4;
  ulong local_f0;
  uint local_ec;
  USerialize aUStack_e8 [8];
  GETimeOfDay aGStack_e0 [8];
  undefined4 local_d8;
  undefined4 local_d4;
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
  undefined4 uStack_94;
  void *local_90;
  int local_8c;
  void *local_88;
  int local_84;
  void *local_80;
  int local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined1 local_50;
  int local_48;
  _String_base<char,std::allocator<char>> local_44 [16];
  _String_base<char,std::allocator<char>> *local_34;
  _String_base<char,std::allocator<char>> *local_30;
  int local_2c;
  
  iVar16 = DAT_0005c9ac + 0x5bbac;
  piVar8 = *(int **)(iVar16 + DAT_0005c9b0);
  local_2c = *piVar8;
  FFileBase::Read(param_1,(uchar *)&local_ec,4);
  uVar1 = local_ec;
  if (local_ec < 0x18) {
    if (0x15 < local_ec) {
      Load(param_1,(UPreference_Scene *)(param_2 + 0x2c));
    }
LAB_0005bbdc:
    GEEnvironment::Initialize((GEEnvironment *)(param_2 + 0x314),1);
    if (7 < uVar1) {
      iVar11 = *(int *)(param_2 + 0x314);
      FFileBase::Read(param_1,(uchar *)&local_ec,4);
      if (local_ec != 0) {
        uVar15 = 0;
        uVar10 = local_ec;
        do {
          if (uVar15 < 8) {
            GETimeOfDay::GETimeOfDay(aGStack_e0);
            puVar18 = (undefined4 *)(iVar11 + uVar15 * 0x3c);
            Load(param_1,aGStack_e0);
            Load(param_1,(GEColor *)&local_d0);
            *puVar18 = local_d0;
            puVar18[1] = local_cc;
            puVar18[2] = local_c8;
            puVar18[3] = local_c4;
            uVar10 = local_ec;
            if (0xf < uVar1) {
              Load(param_1,(GEColor *)&local_c0);
              puVar18[4] = local_c0;
              puVar18[5] = local_bc;
              puVar18[6] = local_b8;
              puVar18[7] = local_b4;
              Load(param_1,(MVector2 *)&local_d8);
              puVar18[0xc] = local_d8;
              puVar18[0xd] = local_d4;
              FFileBase::Read(param_1,&local_129,1);
              *(uchar *)(puVar18 + 0xe) = local_129;
              uVar10 = local_ec;
              if (0x12 < uVar1) {
                FFileBase::Read(param_1,&local_129,1);
                *(uchar *)((int)puVar18 + 0x39) = local_129;
                Load(param_1,(GEColor *)&local_b0);
                puVar18[8] = local_b0;
                puVar18[9] = local_ac;
                puVar18[10] = local_a8;
                puVar18[0xb] = local_a4;
                uVar10 = local_ec;
              }
            }
          }
          uVar15 = uVar15 + 1;
        } while (uVar15 < uVar10);
      }
      goto LAB_0005d340;
    }
    if (2 < uVar1) goto LAB_0005d340;
  }
  else {
    FFileBase::Read(param_1,(uchar *)&local_ec,4);
    uVar10 = local_ec;
    if (local_ec != *(uint *)(param_2 + 0x78c)) {
      if (*(uint *)(param_2 + 0x78c) != 0) {
        iVar11 = *(int *)(param_2 + 0x788);
        if (iVar11 != 0) {
          iVar7 = iVar11 + *(int *)(iVar11 + -4) * 0x38;
          if (iVar11 != iVar7) {
            iVar19 = *(int *)(iVar16 + DAT_0005c9b4) + 8;
            iVar14 = iVar7;
            do {
              iVar20 = iVar14 + -0x38;
              *(int *)((iVar14 - iVar7) + iVar7 + -0x1c) = iVar19;
              std::priv::_String_base<char,std::allocator<char>>::_M_deallocate_block
                        ((_String_base<char,std::allocator<char>> *)(iVar14 + -0x18));
              *(int *)((iVar14 - iVar7) + iVar7 + -0x38) = iVar19;
              std::priv::_String_base<char,std::allocator<char>>::_M_deallocate_block
                        ((_String_base<char,std::allocator<char>> *)(iVar14 + -0x34));
              iVar11 = *(int *)(param_2 + 0x788);
              iVar14 = iVar20;
            } while (iVar20 != iVar11);
          }
          operator_delete__((void *)(iVar11 + -8));
        }
        *(undefined4 *)(param_2 + 0x788) = 0;
      }
      *(uint *)(param_2 + 0x78c) = uVar10;
      if (uVar10 != 0) {
        puVar18 = operator_new__(uVar10 * 0x38 + 8);
        puVar18[1] = uVar10;
        *puVar18 = 0x38;
        this = (UStringBase<char,int> *)(puVar18 + 2);
        while (uVar10 = uVar10 - 1, uVar10 != 0xffffffff) {
          UStringBase<char,int>::UStringBase(this);
          UStringBase<char,int>::UStringBase(this + 0x1c);
          this = this + 0x38;
        }
        *(UStringBase<char,int> **)(param_2 + 0x788) = (UStringBase<char,int> *)(puVar18 + 2);
      }
    }
    if (local_ec != 0) {
      iVar11 = 0;
      uVar10 = 0;
      do {
        uVar10 = uVar10 + 1;
        pUVar21 = (UStringBase *)(*(int *)(param_2 + 0x788) + iVar11);
        iVar11 = iVar11 + 0x38;
        Load<char,int>(param_1,pUVar21);
        Load<char,int>(param_1,pUVar21 + 0x1c);
      } while (uVar10 < local_ec);
    }
    Load(param_1,(UPreference_Scene *)(param_2 + 0x2c));
    if (uVar1 < 0x19) goto LAB_0005bbdc;
    Load(param_1,(GEEnvironment *)(param_2 + 0x314));
LAB_0005d340:
    Load(param_1,(GETextureModifier *)(param_2 + 0x324));
  }
  FFileBase::Read(param_1,(uchar *)&local_128,4);
  FFileBase::Read(param_1,(uchar *)&local_124,4);
  FFileBase::Read(param_1,(uchar *)&local_120,4);
  GEScene::Initialize(param_2,local_128,local_120);
  if (local_128 != 0) {
    uVar10 = 0;
    do {
      iVar11 = uVar10 * 4;
      uVar10 = uVar10 + 1;
      Load(param_1,*(GEModel **)(*(int *)(param_2 + 0xb0) + iVar11));
    } while (uVar10 < local_128);
  }
  if (local_124 != 0) {
    uVar10 = 0;
    do {
      iVar11 = uVar10 * 0x40;
      uVar10 = uVar10 + 1;
      Load(param_1,(MMatrix *)(*(int *)(param_2 + 0xbc) + iVar11));
    } while (uVar10 < local_124);
  }
  if (local_120 != 0) {
    iVar11 = 0;
    uVar10 = 0;
    do {
      uVar10 = uVar10 + 1;
      pGVar3 = (GECamera *)(*(int *)(param_2 + 0xb4) + iVar11);
      iVar11 = iVar11 + 0x210;
      Load(param_1,pGVar3);
    } while (uVar10 < local_120);
  }
  if (uVar1 < 9) {
    GEScene::InitializeCameraSets(param_2,1);
    pGVar4 = *(GECameraSet **)(param_2 + 0xb8);
    uVar10 = 0;
    iVar16 = *(int *)(iVar16 + DAT_0005c9b4) + 8;
    local_44[0] = (_String_base<char,std::allocator<char>>)0x0;
    local_48 = iVar16;
    local_34 = local_44;
    local_30 = local_44;
    GECameraSet::Initialize(pGVar4,(UStringBase *)&local_48,local_120,0);
    local_48 = iVar16;
    std::priv::_String_base<char,std::allocator<char>>::_M_deallocate_block(local_44);
    if (local_120 == 0) goto LAB_0005bd38;
    puVar9 = *(uint **)(pGVar4 + 0x230);
    do {
      *puVar9 = uVar10;
      uVar10 = uVar10 + 1;
      puVar9 = puVar9 + 1;
    } while (uVar10 < local_120);
    if (10 < uVar1 - 10) goto LAB_0005bd48;
LAB_0005ced4:
    FFileBase::Read(param_1,auStack_11c,4);
    if (uVar1 < 0xb) goto LAB_0005bd50;
LAB_0005cef0:
    FFileBase::Read(param_1,(uchar *)(param_2 + 0xfc),4);
    if (local_124 != 0) {
      uVar10 = 0;
      do {
        FFileBase::Read(param_1,(uchar *)&local_f0,4);
        FFileBase::Read(param_1,(uchar *)&local_ec,4);
        iVar16 = *(int *)(param_2 + 0xf8);
        iVar11 = *(int *)(param_2 + 0x100);
        *(ulong *)(*(int *)(param_2 + 0xf4) + uVar10 * 4) = local_f0;
        *(uint *)(iVar16 + uVar10 * 4) = local_ec;
        uVar10 = uVar10 + 1;
        *(uint *)(iVar11 + local_f0 * 4) = local_ec;
        if (local_ec < local_124) {
          *(int *)(*(int *)(param_2 + 0x108) + local_ec * 4) =
               *(int *)(*(int *)(param_2 + 0x108) + local_ec * 4) + 1;
        }
      } while (uVar10 < local_124);
    }
    if (uVar1 < 0xe) goto LAB_0005bd50;
    FFileBase::Read(param_1,(uchar *)&local_f0,4);
    GEScene::InitializeVertexAnimation(param_2,local_f0);
    if (local_f0 != 0) {
      iVar16 = 0;
      uVar17 = 0;
      do {
        FFileBase::Read(param_1,(uchar *)&local_ec,4);
        GEScene::SetVertexAnimationRemap(param_2,uVar17,local_ec);
        uVar17 = uVar17 + 1;
        pGVar5 = (GEVertexBlender *)(*(int *)(param_2 + 0x170) + iVar16);
        iVar16 = iVar16 + 0x24;
        Load(param_1,pGVar5);
      } while (uVar17 < local_f0);
    }
    local_144 = &local_f0;
    if (uVar1 < 0x14) goto LAB_0005bd5c;
    FFileBase::Read(param_1,(uchar *)local_144,4);
    GEScene::InitializeSkeleton(param_2,local_f0);
    if (local_f0 != 0) {
      iVar16 = 0;
      uVar17 = 0;
      do {
        FFileBase::Read(param_1,(uchar *)&local_ec,4);
        GEScene::SetSkeletonRemap(param_2,uVar17,local_ec);
        uVar17 = uVar17 + 1;
        pMVar6 = (Mesh *)(*(int *)(param_2 + 0x180) + iVar16);
        iVar16 = iVar16 + 0x2c;
        Load(param_1,pMVar6);
      } while (uVar17 < local_f0);
    }
LAB_0005d098:
    local_144 = &local_f0;
    FFileBase::Read(param_1,(uchar *)local_144,4);
    GEScene::InitializeIntersectables(param_2,local_f0);
    if (local_f0 != 0) {
      uVar17 = 0;
      do {
        FFileBase::Read(param_1,(uchar *)&local_ec,4);
        GEScene::SetIntersectRemap(param_2,uVar17,local_ec);
        uVar17 = uVar17 + 1;
      } while (uVar17 < local_f0);
    }
    if (uVar1 < 0x12) goto LAB_0005bd80;
    FFileBase::Read(param_1,(uchar *)&local_f4,4);
    GEScene::InitializeInherit_Visibility(param_2,local_f4);
    if (local_f4 != 0) {
      uVar17 = 0;
      do {
        FFileBase::Read(param_1,(uchar *)local_144,4);
        FFileBase::Read(param_1,(uchar *)&local_ec,4);
        uVar10 = uVar17 + 1;
        GEScene::SetInherit_Visibility(param_2,uVar17,local_f0,local_ec);
        uVar17 = uVar10;
      } while (uVar10 < local_f4);
    }
    local_140 = &local_f4;
    if (uVar1 < 0x1a) {
      GEScene::InitializeInherit_Intersection(param_2,0);
    }
    else {
      FFileBase::Read(param_1,(uchar *)local_140,4);
      GEScene::InitializeInherit_Intersection(param_2,local_f4);
      if (local_f4 != 0) {
        uVar17 = 0;
        do {
          FFileBase::Read(param_1,(uchar *)local_144,4);
          FFileBase::Read(param_1,(uchar *)&local_ec,4);
          uVar10 = uVar17 + 1;
          GEScene::SetInherit_Intersection(param_2,uVar17,local_f0,local_ec);
          uVar17 = uVar10;
        } while (uVar10 < local_f4);
      }
    }
LAB_0005be74:
    local_140 = &local_f4;
    local_144 = &local_f0;
    FFileBase::Read(param_1,(uchar *)local_140,4);
    GEScene::InitializeModelVisMask_TimeOfDay(param_2,local_f4);
    if (local_f4 != 0) {
      uVar17 = 0;
      do {
        FFileBase::Read(param_1,(uchar *)local_144,4);
        FFileBase::Read(param_1,(uchar *)&local_ec,4);
        uVar10 = uVar17 + 1;
        GEScene::SetModelVisMask_TimeOfDay(param_2,uVar17,local_f0,local_ec);
        uVar17 = uVar10;
      } while (uVar10 < local_f4);
    }
    FFileBase::Read(param_1,(uchar *)local_144,4);
    GEScene::InitializeModelVisMask_WeekDay(param_2,local_f0);
    if (local_f0 != 0) {
      uVar17 = 0;
      do {
        FFileBase::Read(param_1,(uchar *)&local_ec,4);
        FFileBase::Read(param_1,(uchar *)local_140,1);
        uVar10 = uVar17 + 1;
        GEScene::SetModelVisMask_WeekDay(param_2,uVar17,local_ec,(uchar)local_f4);
        uVar17 = uVar10;
      } while (uVar10 < local_f0);
    }
    FFileBase::Read(param_1,(uchar *)local_140,4);
    GEScene::InitializeModelVisMask_Date(param_2,local_f4);
    if (local_f4 != 0) {
      uVar17 = 0;
      do {
        FFileBase::Read(param_1,(uchar *)local_144,4);
        uVar12 = 0;
        do {
          FFileBase::Read(param_1,(uchar *)&local_ec,4);
          uVar13 = uVar12 + 1;
          GEScene::SetModelVisMask_Date(param_2,uVar17,local_f0,uVar12,local_ec);
          uVar12 = uVar13;
        } while (uVar13 != 0xc);
        uVar17 = uVar17 + 1;
      } while (uVar17 < local_f4);
    }
    if (0x18 < uVar1) {
      FFileBase::Read(param_1,(uchar *)local_140,4);
      GEScene::InitializeModelVisMask_Environment(param_2,local_f4);
      if (local_f4 != 0) {
        uVar17 = 0;
        do {
          FFileBase::Read(param_1,(uchar *)local_144,4);
          FFileBase::Read(param_1,(uchar *)&local_ec,4);
          uVar10 = uVar17 + 1;
          GEScene::SetModelVisMask_Environment(param_2,uVar17,local_f0,local_ec);
          uVar17 = uVar10;
        } while (uVar10 < local_f4);
      }
    }
LAB_0005bff4:
    LoadLegacyTimeValue(aUStack_e8,param_1,0xf,uVar1);
    FFileBase::Read(param_1,(uchar *)&local_118,4);
    FFileBase::Read(param_1,(uchar *)&local_110,4);
    FFileBase::Read(param_1,(uchar *)&local_108,4);
    if (uVar1 < 4) {
      local_104 = 0;
LAB_0005c04c:
      local_100 = 0;
LAB_0005c054:
      local_114 = 0;
LAB_0005c05c:
      local_10c = 0;
LAB_0005c064:
      local_fc = 0;
    }
    else {
      FFileBase::Read(param_1,(uchar *)&local_104,4);
      if (uVar1 == 4) goto LAB_0005c04c;
      FFileBase::Read(param_1,(uchar *)&local_100,4);
      if (uVar1 == 5) goto LAB_0005c054;
      FFileBase::Read(param_1,(uchar *)&local_114,4);
      if (uVar1 == 6) goto LAB_0005c05c;
      FFileBase::Read(param_1,(uchar *)&local_10c,4);
      if (uVar1 < 0x11) goto LAB_0005c064;
      FFileBase::Read(param_1,(uchar *)&local_fc,4);
    }
    GEScene::InitializeAnimations
              (param_2,(UTimeValue *)aUStack_e8,local_118,local_114,local_110,local_10c,local_108,
               local_104,local_100,local_fc);
    if (local_118 != 0) {
      local_14c = 0;
      local_148 = 0;
      do {
        iVar16 = *(int *)(param_2 + 0x1bc);
        FFileBase::Read(param_1,(uchar *)&local_f0,4);
        FFileBase::Read(param_1,(uchar *)&local_ec,4);
        *(uint *)(iVar16 + local_14c + 0x108) = local_ec;
        if (local_f0 != 0) {
          uVar10 = 0;
          do {
            while (2 < uVar10) {
              local_a0 = 0;
              local_9c = 0xc;
              local_98 = 0;
              uStack_94 = 0;
              local_90 = (void *)0x0;
              local_8c = 0;
              local_88 = (void *)0x0;
              local_84 = 0;
              local_80 = (void *)0x0;
              local_7c = 0;
              local_78 = 0;
              uStack_74 = 0;
              local_70 = 0;
              uStack_6c = 0;
              local_68 = 0;
              uStack_64 = 0;
              local_60 = 0;
              uStack_5c = 0;
              local_58 = 0;
              uStack_54 = 0;
              local_50 = 0;
              Load(param_1,(GEAnimationTrack *)&local_a0);
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
                local_90 = (void *)0x0;
                local_8c = 0;
              }
              uVar10 = uVar10 + 1;
              if (local_f0 <= uVar10) goto LAB_0005c210;
            }
            Load(param_1,(GEAnimationTrack *)(uVar10 * 0x58 + iVar16 + local_14c));
            uVar10 = uVar10 + 1;
          } while (uVar10 < local_f0);
        }
LAB_0005c210:
        local_14c = local_14c + 0x110;
        local_148 = local_148 + 1;
      } while (local_148 < local_118);
    }
    if ((5 < uVar1) && (local_114 != 0)) {
      local_14c = 0;
      local_148 = 0;
      do {
        iVar16 = *(int *)(param_2 + 0x1c0);
        FFileBase::Read(param_1,(uchar *)&local_f0,4);
        FFileBase::Read(param_1,(uchar *)&local_ec,4);
        *(uint *)(iVar16 + local_14c + 0x108) = local_ec;
        if (local_f0 != 0) {
          uVar10 = 0;
          do {
            while (2 < uVar10) {
              local_a0 = 0;
              local_9c = 0xc;
              local_98 = 0;
              uStack_94 = 0;
              local_90 = (void *)0x0;
              local_8c = 0;
              local_88 = (void *)0x0;
              local_84 = 0;
              local_80 = (void *)0x0;
              local_7c = 0;
              local_78 = 0;
              uStack_74 = 0;
              local_70 = 0;
              uStack_6c = 0;
              local_68 = 0;
              uStack_64 = 0;
              local_60 = 0;
              uStack_5c = 0;
              local_58 = 0;
              uStack_54 = 0;
              local_50 = 0;
              Load(param_1,(GEAnimationTrack *)&local_a0);
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
                local_90 = (void *)0x0;
                local_8c = 0;
              }
              uVar10 = uVar10 + 1;
              if (local_f0 <= uVar10) goto LAB_0005c3bc;
            }
            Load(param_1,(GEAnimationTrack *)(uVar10 * 0x58 + iVar16 + local_14c));
            uVar10 = uVar10 + 1;
          } while (uVar10 < local_f0);
        }
LAB_0005c3bc:
        local_14c = local_14c + 0x110;
        local_148 = local_148 + 1;
      } while (local_148 < local_114);
    }
    if (local_110 != 0) {
      local_148 = 0;
      local_14c = 0;
      do {
        iVar16 = *(int *)(param_2 + 0x1c4);
        FFileBase::Read(param_1,(uchar *)&local_f0,4);
        FFileBase::Read(param_1,(uchar *)&local_ec,4);
        *(uint *)(iVar16 + local_14c + 0x108) = local_ec;
        if (local_f0 != 0) {
          uVar10 = 0;
          do {
            while (2 < uVar10) {
              local_a0 = 0;
              local_9c = 0xc;
              local_98 = 0;
              uStack_94 = 0;
              local_90 = (void *)0x0;
              local_8c = 0;
              local_88 = (void *)0x0;
              local_84 = 0;
              local_80 = (void *)0x0;
              local_7c = 0;
              local_78 = 0;
              uStack_74 = 0;
              local_70 = 0;
              uStack_6c = 0;
              local_68 = 0;
              uStack_64 = 0;
              local_60 = 0;
              uStack_5c = 0;
              local_58 = 0;
              uStack_54 = 0;
              local_50 = 0;
              Load(param_1,(GEAnimationTrack *)&local_a0);
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
                local_90 = (void *)0x0;
                local_8c = 0;
              }
              uVar10 = uVar10 + 1;
              if (local_f0 <= uVar10) goto LAB_0005c560;
            }
            Load(param_1,(GEAnimationTrack *)(uVar10 * 0x58 + iVar16 + local_14c));
            uVar10 = uVar10 + 1;
          } while (uVar10 < local_f0);
        }
LAB_0005c560:
        local_148 = local_148 + 1;
        local_14c = local_14c + 0x110;
      } while (local_148 < local_110);
    }
    if ((6 < uVar1) && (local_10c != 0)) {
      local_14c = 0;
      local_148 = 0;
      do {
        iVar16 = *(int *)(param_2 + 0x1c8);
        FFileBase::Read(param_1,(uchar *)&local_f0,4);
        FFileBase::Read(param_1,(uchar *)&local_ec,4);
        *(uint *)(iVar16 + local_14c + 0x108) = local_ec;
        if (local_f0 != 0) {
          uVar10 = 0;
          do {
            while (2 < uVar10) {
              local_a0 = 0;
              local_9c = 0xc;
              local_98 = 0;
              uStack_94 = 0;
              local_90 = (void *)0x0;
              local_8c = 0;
              local_88 = (void *)0x0;
              local_84 = 0;
              local_80 = (void *)0x0;
              local_7c = 0;
              local_78 = 0;
              uStack_74 = 0;
              local_70 = 0;
              uStack_6c = 0;
              local_68 = 0;
              uStack_64 = 0;
              local_60 = 0;
              uStack_5c = 0;
              local_58 = 0;
              uStack_54 = 0;
              local_50 = 0;
              Load(param_1,(GEAnimationTrack *)&local_a0);
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
                local_90 = (void *)0x0;
                local_8c = 0;
              }
              uVar10 = uVar10 + 1;
              if (local_f0 <= uVar10) goto LAB_0005c710;
            }
            Load(param_1,(GEAnimationTrack *)(uVar10 * 0x58 + iVar16 + local_14c));
            uVar10 = uVar10 + 1;
          } while (uVar10 < local_f0);
        }
LAB_0005c710:
        local_14c = local_14c + 0x110;
        local_148 = local_148 + 1;
      } while (local_148 < local_10c);
    }
    if (local_108 != 0) {
      local_148 = 0;
      local_14c = 0;
      do {
        iVar16 = *(int *)(param_2 + 0x1cc) + local_14c;
        FFileBase::Read(param_1,(uchar *)&local_f8,4);
        FFileBase::Read(param_1,(uchar *)&local_f4,4);
        FFileBase::Read(param_1,(uchar *)&local_f0,4);
        FFileBase::Read(param_1,(uchar *)&local_ec,4);
        *(ulong *)(iVar16 + 0x164) = local_f0;
        *(uint *)(iVar16 + 0x168) = local_ec;
        *(ulong *)(iVar16 + 0x160) = local_f4;
        if (local_f8 != 0) {
          uVar10 = 0;
          do {
            while (3 < uVar10) {
              local_a0 = 0;
              local_9c = 0xc;
              local_98 = 0;
              uStack_94 = 0;
              local_90 = (void *)0x0;
              local_8c = 0;
              local_88 = (void *)0x0;
              local_84 = 0;
              local_80 = (void *)0x0;
              local_7c = 0;
              local_78 = 0;
              uStack_74 = 0;
              local_70 = 0;
              uStack_6c = 0;
              local_68 = 0;
              uStack_64 = 0;
              local_60 = 0;
              uStack_5c = 0;
              local_58 = 0;
              uStack_54 = 0;
              local_50 = 0;
              Load(param_1,(GEAnimationTrack *)&local_a0);
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
                local_90 = (void *)0x0;
                local_8c = 0;
              }
              uVar10 = uVar10 + 1;
              if (local_f8 <= uVar10) goto LAB_0005c8ec;
            }
            Load(param_1,(GEAnimationTrack *)(uVar10 * 0x58 + iVar16));
            uVar10 = uVar10 + 1;
          } while (uVar10 < local_f8);
        }
LAB_0005c8ec:
        local_148 = local_148 + 1;
        local_14c = local_14c + 0x170;
      } while (local_148 < local_108);
    }
    if (3 < uVar1) {
      if (local_104 != 0) {
        local_14c = 0;
        local_148 = 0;
        do {
          iVar16 = *(int *)(param_2 + 0x1d0);
          FFileBase::Read(param_1,(uchar *)&local_f0,4);
          FFileBase::Read(param_1,(uchar *)&local_ec,4);
          *(uint *)(iVar16 + local_14c + 0x160) = local_ec;
          if (local_f0 != 0) {
            uVar10 = 0;
            do {
              while (3 < uVar10) {
                local_a0 = 0;
                local_9c = 0xc;
                local_98 = 0;
                uStack_94 = 0;
                local_90 = (void *)0x0;
                local_8c = 0;
                local_88 = (void *)0x0;
                local_84 = 0;
                local_80 = (void *)0x0;
                local_7c = 0;
                local_78 = 0;
                uStack_74 = 0;
                local_70 = 0;
                uStack_6c = 0;
                local_68 = 0;
                uStack_64 = 0;
                local_60 = 0;
                uStack_5c = 0;
                local_58 = 0;
                uStack_54 = 0;
                local_50 = 0;
                Load(param_1,(GEAnimationTrack *)&local_a0);
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
                  local_90 = (void *)0x0;
                  local_8c = 0;
                }
                uVar10 = uVar10 + 1;
                if (local_f0 <= uVar10) goto LAB_0005caa8;
              }
              Load(param_1,(GEAnimationTrack *)(uVar10 * 0x58 + iVar16 + local_14c));
              uVar10 = uVar10 + 1;
            } while (uVar10 < local_f0);
          }
LAB_0005caa8:
          local_14c = local_14c + 0x168;
          local_148 = local_148 + 1;
        } while (local_148 < local_104);
      }
      if (uVar1 != 4) {
        if (local_100 != 0) {
          local_14c = 0;
          local_148 = 0;
          do {
            iVar16 = *(int *)(param_2 + 0x1d4);
            FFileBase::Read(param_1,(uchar *)&local_f0,4);
            FFileBase::Read(param_1,(uchar *)&local_ec,4);
            *(uint *)((GEAnimationTrack *)(iVar16 + local_14c) + 0x58) = local_ec;
            if (local_f0 != 0) {
              uVar10 = 0;
              do {
                while (uVar10 != 0) {
                  local_a0 = 0;
                  local_9c = 0xc;
                  local_98 = 0;
                  uStack_94 = 0;
                  local_90 = (void *)0x0;
                  local_8c = 0;
                  local_88 = (void *)0x0;
                  local_84 = 0;
                  local_80 = (void *)0x0;
                  local_7c = 0;
                  local_78 = 0;
                  uStack_74 = 0;
                  local_70 = 0;
                  uStack_6c = 0;
                  local_68 = 0;
                  uStack_64 = 0;
                  local_60 = 0;
                  uStack_5c = 0;
                  local_58 = 0;
                  uStack_54 = 0;
                  local_50 = 0;
                  Load(param_1,(GEAnimationTrack *)&local_a0);
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
                    local_90 = (void *)0x0;
                    local_8c = 0;
                  }
                  uVar10 = uVar10 + 1;
                  if (local_f0 <= uVar10) goto LAB_0005cc54;
                }
                uVar10 = 1;
                Load(param_1,(GEAnimationTrack *)(iVar16 + local_14c));
              } while (1 < local_f0);
            }
LAB_0005cc54:
            local_14c = local_14c + 0x60;
            local_148 = local_148 + 1;
          } while (local_148 < local_100);
        }
        if ((0x10 < uVar1) && (local_fc != 0)) {
          local_14c = 0;
          local_148 = 0;
          do {
            iVar16 = *(int *)(param_2 + 0x1d8);
            FFileBase::Read(param_1,(uchar *)&local_f0,4);
            FFileBase::Read(param_1,(uchar *)&local_ec,4);
            *(uint *)((GEAnimationTrack *)(iVar16 + local_14c) + 0x58) = local_ec;
            if (local_f0 != 0) {
              uVar10 = 0;
              do {
                while (uVar10 != 0) {
                  local_a0 = 0;
                  local_9c = 0xc;
                  local_98 = 0;
                  uStack_94 = 0;
                  local_90 = (void *)0x0;
                  local_8c = 0;
                  local_88 = (void *)0x0;
                  local_84 = 0;
                  local_80 = (void *)0x0;
                  local_7c = 0;
                  local_78 = 0;
                  uStack_74 = 0;
                  local_70 = 0;
                  uStack_6c = 0;
                  local_68 = 0;
                  uStack_64 = 0;
                  local_60 = 0;
                  uStack_5c = 0;
                  local_58 = 0;
                  uStack_54 = 0;
                  local_50 = 0;
                  Load(param_1,(GEAnimationTrack *)&local_a0);
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
                    local_90 = (void *)0x0;
                    local_8c = 0;
                  }
                  uVar10 = uVar10 + 1;
                  if (local_f0 <= uVar10) goto LAB_0005ce00;
                }
                uVar10 = 1;
                Load(param_1,(GEAnimationTrack *)(iVar16 + local_14c));
              } while (1 < local_f0);
            }
LAB_0005ce00:
            local_14c = local_14c + 0x60;
            local_148 = local_148 + 1;
          } while (local_148 < local_fc);
        }
      }
    }
    if (0x16 < uVar1) {
      LLogicScene::Load(param_1,(UArrayFixed *)(param_2 + 0x5b0));
      iVar16 = *(int *)(param_2 + 0x5b4);
      goto LAB_0005be08;
    }
  }
  else {
    FFileBase::Read(param_1,(uchar *)&local_ec,4);
    GEScene::InitializeCameraSets(param_2,local_ec);
    if (local_ec != 0) {
      iVar16 = 0;
      uVar10 = 0;
      do {
        uVar10 = uVar10 + 1;
        pGVar4 = (GECameraSet *)(*(int *)(param_2 + 0xb8) + iVar16);
        iVar16 = iVar16 + 0x248;
        Load(param_1,pGVar4);
      } while (uVar10 < local_ec);
    }
LAB_0005bd38:
    if (uVar1 - 10 < 0xb) goto LAB_0005ced4;
LAB_0005bd48:
    if (10 < uVar1) goto LAB_0005cef0;
LAB_0005bd50:
    GEScene::InitializeVertexAnimation(param_2,0);
LAB_0005bd5c:
    GEScene::InitializeSkeleton(param_2,0);
    if (0xb < uVar1) goto LAB_0005d098;
    GEScene::InitializeIntersectables(param_2,0);
LAB_0005bd80:
    GEScene::InitializeInherit_Visibility(param_2,0);
    GEScene::InitializeInherit_Intersection(param_2,0);
    if (0xc < uVar1) goto LAB_0005be74;
    GEScene::InitializeModelVisMask_TimeOfDay(param_2,0);
    GEScene::InitializeModelVisMask_WeekDay(param_2,0);
    GEScene::InitializeModelVisMask_Date(param_2,0);
    GEScene::InitializeModelVisMask_Environment(param_2,0);
    if (1 < uVar1) goto LAB_0005bff4;
  }
  iVar16 = 0;
  if (*(int *)(param_2 + 0x5b4) != 0) {
    if (*(void **)(param_2 + 0x5b0) != (void *)0x0) {
      operator_delete__(*(void **)(param_2 + 0x5b0));
    }
    iVar16 = 0;
    *(undefined4 *)(param_2 + 0x5b0) = 0;
    *(undefined4 *)(param_2 + 0x5b4) = 0;
  }
LAB_0005be08:
  if (iVar16 != *(int *)(param_2 + 0x5bc)) {
    if (*(int *)(param_2 + 0x5bc) != 0) {
      if (*(void **)(param_2 + 0x5b8) != (void *)0x0) {
        operator_delete__(*(void **)(param_2 + 0x5b8));
      }
      *(undefined4 *)(param_2 + 0x5b8) = 0;
    }
    *(int *)(param_2 + 0x5bc) = iVar16;
    if (iVar16 != 0) {
      pvVar2 = operator_new__(iVar16 << 2);
      iVar16 = *(int *)(param_2 + 0x5bc);
      *(void **)(param_2 + 0x5b8) = pvVar2;
      if (iVar16 != 0) {
        iVar11 = 0;
        do {
          *(undefined4 *)(*(int *)(param_2 + 0x5b8) + iVar11 * 4) = 0;
          iVar11 = iVar11 + 1;
        } while (iVar16 != iVar11);
      }
    }
  }
  *(undefined4 *)(param_2 + 0x5c0) = 0;
  if (local_2c != *piVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

