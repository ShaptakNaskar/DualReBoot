/* 000603c4 | STG::USerialize::Load */

/* STG::USerialize::Load(STG::FFileBase const*, STG::GEScene&) */

void STG::USerialize::Load(FFileBase *param_1,GEScene *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  void *pvVar3;
  int *piVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  uint uVar12;
  UStringBase<char,int> *this;
  int iVar13;
  int iVar14;
  int iVar15;
  GECameraSet *this_00;
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
  
  iVar13 = DAT_000611ec + 0x603dc;
  piVar4 = *(int **)(iVar13 + DAT_000611f0);
  local_2c = *piVar4;
  FFileBase::Read(param_1,(uchar *)&local_ec,4);
  uVar1 = local_ec;
  if (local_ec < 0x18) {
    if (0x15 < local_ec) {
      Load(param_1,(UPreference_Scene *)(param_2 + 0x2c));
    }
LAB_00060414:
    GEEnvironment::Initialize((GEEnvironment *)(param_2 + 0x314),1);
    if (7 < uVar1) {
      iVar7 = *(int *)(param_2 + 0x314);
      FFileBase::Read(param_1,(uchar *)&local_ec,4);
      if (local_ec != 0) {
        uVar12 = 0;
        uVar6 = local_ec;
        do {
          if (uVar12 < 8) {
            GETimeOfDay::GETimeOfDay(aGStack_e0);
            Load(param_1,aGStack_e0);
            Load(param_1,(GEColor *)&local_d0);
            iVar14 = iVar7 + uVar12 * 0x3c;
            *(undefined4 *)(iVar7 + uVar12 * 0x3c) = local_d0;
            *(undefined4 *)(iVar14 + 4) = local_cc;
            *(undefined4 *)(iVar14 + 8) = local_c8;
            *(undefined4 *)(iVar14 + 0xc) = local_c4;
            uVar6 = local_ec;
            if (0xf < uVar1) {
              Load(param_1,(GEColor *)&local_c0);
              *(undefined4 *)(iVar14 + 0x10) = local_c0;
              *(undefined4 *)(iVar14 + 0x14) = local_bc;
              *(undefined4 *)(iVar14 + 0x18) = local_b8;
              *(undefined4 *)(iVar14 + 0x1c) = local_b4;
              Load(param_1,(MVector2 *)&local_d8);
              *(undefined4 *)(iVar14 + 0x30) = local_d8;
              *(undefined4 *)(iVar14 + 0x34) = local_d4;
              FFileBase::Read(param_1,&local_129,1);
              *(uchar *)(iVar14 + 0x38) = local_129;
              uVar6 = local_ec;
              if (0x12 < uVar1) {
                FFileBase::Read(param_1,&local_129,1);
                *(uchar *)(iVar14 + 0x39) = local_129;
                Load(param_1,(GEColor *)&local_b0);
                *(undefined4 *)(iVar14 + 0x20) = local_b0;
                *(undefined4 *)(iVar14 + 0x24) = local_ac;
                *(undefined4 *)(iVar14 + 0x28) = local_a8;
                *(undefined4 *)(iVar14 + 0x2c) = local_a4;
                uVar6 = local_ec;
              }
            }
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 < uVar6);
      }
      goto LAB_00061b78;
    }
    if (2 < uVar1) goto LAB_00061b78;
  }
  else {
    FFileBase::Read(param_1,(uchar *)&local_ec,4);
    uVar6 = local_ec;
    if (local_ec != *(uint *)(param_2 + 0x78c)) {
      if (*(uint *)(param_2 + 0x78c) != 0) {
        iVar7 = *(int *)(param_2 + 0x788);
        if (iVar7 != 0) {
          iVar14 = *(int *)(iVar7 + -4) * 0x38 + iVar7;
          if (iVar7 != iVar14) {
            iVar15 = *(int *)(iVar13 + DAT_000611f4) + 8;
            iVar11 = iVar14;
            do {
              *(int *)((iVar11 - iVar14) + iVar14 + -0x1c) = iVar15;
              std::priv::_String_base<char,std::allocator<char>>::_M_deallocate_block
                        ((_String_base<char,std::allocator<char>> *)(iVar11 + -0x18));
              *(int *)((iVar11 - iVar14) + iVar14 + -0x38) = iVar15;
              std::priv::_String_base<char,std::allocator<char>>::_M_deallocate_block
                        ((_String_base<char,std::allocator<char>> *)(iVar11 + -0x34));
              iVar7 = *(int *)(param_2 + 0x788);
              iVar11 = iVar11 + -0x38;
            } while (iVar11 != iVar7);
          }
          operator_delete__((void *)(iVar7 + -8));
        }
        *(undefined4 *)(param_2 + 0x788) = 0;
      }
      *(uint *)(param_2 + 0x78c) = uVar6;
      if (uVar6 != 0) {
        puVar2 = operator_new__(uVar6 * 0x38 + 8);
        *puVar2 = 0x38;
        puVar2[1] = uVar6;
        this = (UStringBase<char,int> *)(puVar2 + 2);
        while (uVar6 = uVar6 - 1, uVar6 != 0xffffffff) {
          UStringBase<char,int>::UStringBase(this);
          UStringBase<char,int>::UStringBase(this + 0x1c);
          this = this + 0x38;
        }
        *(UStringBase<char,int> **)(param_2 + 0x788) = (UStringBase<char,int> *)(puVar2 + 2);
      }
    }
    if (local_ec != 0) {
      iVar7 = 0;
      uVar6 = 0;
      do {
        iVar14 = *(int *)(param_2 + 0x788);
        uVar6 = uVar6 + 1;
        Load<char,int>(param_1,(UStringBase *)(iVar14 + iVar7));
        Load<char,int>(param_1,(UStringBase *)(iVar14 + iVar7) + 0x1c);
        iVar7 = iVar7 + 0x38;
      } while (uVar6 < local_ec);
    }
    Load(param_1,(UPreference_Scene *)(param_2 + 0x2c));
    if (uVar1 < 0x19) goto LAB_00060414;
    Load(param_1,(GEEnvironment *)(param_2 + 0x314));
LAB_00061b78:
    Load(param_1,(GETextureModifier *)(param_2 + 0x324));
  }
  FFileBase::Read(param_1,(uchar *)&local_128,4);
  FFileBase::Read(param_1,(uchar *)&local_124,4);
  FFileBase::Read(param_1,(uchar *)&local_120,4);
  GEScene::Initialize(param_2,local_128,local_120);
  if (local_128 != 0) {
    uVar6 = 0;
    do {
      Load(param_1,*(GEModel **)(*(int *)(param_2 + 0xb0) + uVar6 * 4));
      uVar6 = uVar6 + 1;
    } while (uVar6 < local_128);
  }
  if (local_124 != 0) {
    uVar6 = 0;
    do {
      Load(param_1,(MMatrix *)(*(int *)(param_2 + 0xbc) + uVar6 * 0x40));
      uVar6 = uVar6 + 1;
    } while (uVar6 < local_124);
  }
  if (local_120 != 0) {
    iVar7 = 0;
    uVar6 = 0;
    do {
      uVar6 = uVar6 + 1;
      Load(param_1,(GECamera *)(*(int *)(param_2 + 0xb4) + iVar7));
      iVar7 = iVar7 + 0x210;
    } while (uVar6 < local_120);
  }
  if (uVar1 < 9) {
    GEScene::InitializeCameraSets(param_2,1);
    this_00 = *(GECameraSet **)(param_2 + 0xb8);
    uVar6 = 0;
    iVar13 = *(int *)(iVar13 + DAT_000611f4) + 8;
    local_44[0] = (_String_base<char,std::allocator<char>>)0x0;
    local_48 = iVar13;
    local_34 = local_44;
    local_30 = local_44;
    GECameraSet::Initialize(this_00,(UStringBase *)&local_48,local_120,0);
    local_48 = iVar13;
    std::priv::_String_base<char,std::allocator<char>>::_M_deallocate_block(local_44);
    if (local_120 == 0) goto LAB_00060570;
    puVar5 = *(uint **)(this_00 + 0x230);
    do {
      *puVar5 = uVar6;
      uVar6 = uVar6 + 1;
      puVar5 = puVar5 + 1;
    } while (uVar6 < local_120);
    if (10 < uVar1 - 10) goto LAB_00060580;
LAB_00061720:
    FFileBase::Read(param_1,auStack_11c,4);
    if (uVar1 < 0xb) goto LAB_0006058c;
LAB_0006173c:
    FFileBase::Read(param_1,(uchar *)(param_2 + 0xfc),4);
    if (local_124 != 0) {
      uVar6 = 0;
      do {
        FFileBase::Read(param_1,(uchar *)&local_f0,4);
        FFileBase::Read(param_1,(uchar *)&local_ec,4);
        iVar13 = *(int *)(param_2 + 0xf8);
        iVar7 = *(int *)(param_2 + 0x100);
        *(ulong *)(*(int *)(param_2 + 0xf4) + uVar6 * 4) = local_f0;
        *(uint *)(iVar13 + uVar6 * 4) = local_ec;
        uVar6 = uVar6 + 1;
        *(uint *)(iVar7 + local_f0 * 4) = local_ec;
        if (local_ec < local_124) {
          *(int *)(*(int *)(param_2 + 0x108) + local_ec * 4) =
               *(int *)(*(int *)(param_2 + 0x108) + local_ec * 4) + 1;
        }
      } while (uVar6 < local_124);
    }
    if (uVar1 < 0xe) goto LAB_0006058c;
    FFileBase::Read(param_1,(uchar *)&local_f0,4);
    GEScene::InitializeVertexAnimation(param_2,local_f0);
    if (local_f0 != 0) {
      iVar13 = 0;
      uVar8 = 0;
      do {
        FFileBase::Read(param_1,(uchar *)&local_ec,4);
        GEScene::SetVertexAnimationRemap(param_2,uVar8,local_ec);
        uVar8 = uVar8 + 1;
        Load(param_1,(GEVertexBlender *)(*(int *)(param_2 + 0x170) + iVar13));
        iVar13 = iVar13 + 0x24;
      } while (uVar8 < local_f0);
    }
    local_144 = &local_f0;
    if (uVar1 < 0x14) goto LAB_00060598;
    FFileBase::Read(param_1,(uchar *)local_144,4);
    GEScene::InitializeSkeleton(param_2,local_f0);
    if (local_f0 != 0) {
      iVar13 = 0;
      uVar8 = 0;
      do {
        FFileBase::Read(param_1,(uchar *)&local_ec,4);
        GEScene::SetSkeletonRemap(param_2,uVar8,local_ec);
        uVar8 = uVar8 + 1;
        Load(param_1,(Mesh *)(*(int *)(param_2 + 0x180) + iVar13));
        iVar13 = iVar13 + 0x2c;
      } while (uVar8 < local_f0);
    }
LAB_000618e4:
    local_144 = &local_f0;
    FFileBase::Read(param_1,(uchar *)local_144,4);
    GEScene::InitializeIntersectables(param_2,local_f0);
    if (local_f0 != 0) {
      uVar8 = 0;
      do {
        FFileBase::Read(param_1,(uchar *)&local_ec,4);
        GEScene::SetIntersectRemap(param_2,uVar8,local_ec);
        uVar8 = uVar8 + 1;
      } while (uVar8 < local_f0);
    }
    if (uVar1 < 0x12) goto LAB_000605bc;
    FFileBase::Read(param_1,(uchar *)&local_f4,4);
    GEScene::InitializeInherit_Visibility(param_2,local_f4);
    if (local_f4 != 0) {
      uVar8 = 0;
      do {
        FFileBase::Read(param_1,(uchar *)local_144,4);
        FFileBase::Read(param_1,(uchar *)&local_ec,4);
        GEScene::SetInherit_Visibility(param_2,uVar8,local_f0,local_ec);
        uVar8 = uVar8 + 1;
      } while (uVar8 < local_f4);
    }
    local_140 = &local_f4;
    if (uVar1 < 0x1a) {
      GEScene::InitializeInherit_Intersection(param_2,0);
    }
    else {
      FFileBase::Read(param_1,(uchar *)local_140,4);
      GEScene::InitializeInherit_Intersection(param_2,local_f4);
      if (local_f4 != 0) {
        uVar8 = 0;
        do {
          FFileBase::Read(param_1,(uchar *)local_144,4);
          FFileBase::Read(param_1,(uchar *)&local_ec,4);
          GEScene::SetInherit_Intersection(param_2,uVar8,local_f0,local_ec);
          uVar8 = uVar8 + 1;
        } while (uVar8 < local_f4);
      }
    }
LAB_000606b0:
    local_140 = &local_f4;
    local_144 = &local_f0;
    FFileBase::Read(param_1,(uchar *)local_140,4);
    GEScene::InitializeModelVisMask_TimeOfDay(param_2,local_f4);
    if (local_f4 != 0) {
      uVar8 = 0;
      do {
        FFileBase::Read(param_1,(uchar *)local_144,4);
        FFileBase::Read(param_1,(uchar *)&local_ec,4);
        GEScene::SetModelVisMask_TimeOfDay(param_2,uVar8,local_f0,local_ec);
        uVar8 = uVar8 + 1;
      } while (uVar8 < local_f4);
    }
    FFileBase::Read(param_1,(uchar *)local_144,4);
    GEScene::InitializeModelVisMask_WeekDay(param_2,local_f0);
    if (local_f0 != 0) {
      uVar8 = 0;
      do {
        FFileBase::Read(param_1,(uchar *)&local_ec,4);
        FFileBase::Read(param_1,(uchar *)local_140,1);
        GEScene::SetModelVisMask_WeekDay(param_2,uVar8,local_ec,(uchar)local_f4);
        uVar8 = uVar8 + 1;
      } while (uVar8 < local_f0);
    }
    FFileBase::Read(param_1,(uchar *)local_140,4);
    GEScene::InitializeModelVisMask_Date(param_2,local_f4);
    if (local_f4 != 0) {
      uVar8 = 0;
      do {
        FFileBase::Read(param_1,(uchar *)local_144,4);
        uVar9 = 0;
        do {
          FFileBase::Read(param_1,(uchar *)&local_ec,4);
          uVar10 = uVar9 + 1;
          GEScene::SetModelVisMask_Date(param_2,uVar8,local_f0,uVar9,local_ec);
          uVar9 = uVar10;
        } while (uVar10 != 0xc);
        uVar8 = uVar8 + 1;
      } while (uVar8 < local_f4);
    }
    if (0x18 < uVar1) {
      FFileBase::Read(param_1,(uchar *)local_140,4);
      GEScene::InitializeModelVisMask_Environment(param_2,local_f4);
      if (local_f4 != 0) {
        uVar8 = 0;
        do {
          FFileBase::Read(param_1,(uchar *)local_144,4);
          FFileBase::Read(param_1,(uchar *)&local_ec,4);
          GEScene::SetModelVisMask_Environment(param_2,uVar8,local_f0,local_ec);
          uVar8 = uVar8 + 1;
        } while (uVar8 < local_f4);
      }
    }
LAB_00060830:
    LoadLegacyTimeValue(aUStack_e8,param_1,0xf,uVar1);
    FFileBase::Read(param_1,(uchar *)&local_118,4);
    FFileBase::Read(param_1,(uchar *)&local_110,4);
    FFileBase::Read(param_1,(uchar *)&local_108,4);
    if (uVar1 < 4) {
      local_104 = 0;
LAB_00060888:
      local_100 = 0;
LAB_00060890:
      local_114 = 0;
LAB_00060898:
      local_10c = 0;
LAB_000608a0:
      local_fc = 0;
    }
    else {
      FFileBase::Read(param_1,(uchar *)&local_104,4);
      if (uVar1 == 4) goto LAB_00060888;
      FFileBase::Read(param_1,(uchar *)&local_100,4);
      if (uVar1 == 5) goto LAB_00060890;
      FFileBase::Read(param_1,(uchar *)&local_114,4);
      if (uVar1 == 6) goto LAB_00060898;
      FFileBase::Read(param_1,(uchar *)&local_10c,4);
      if (uVar1 < 0x11) goto LAB_000608a0;
      FFileBase::Read(param_1,(uchar *)&local_fc,4);
    }
    GEScene::InitializeAnimations
              (param_2,(UTimeValue *)aUStack_e8,local_118,local_114,local_110,local_10c,local_108,
               local_104,local_100,local_fc);
    if (local_118 != 0) {
      local_14c = 0;
      local_148 = 0;
      do {
        iVar13 = *(int *)(param_2 + 0x1bc);
        FFileBase::Read(param_1,(uchar *)&local_f0,4);
        FFileBase::Read(param_1,(uchar *)&local_ec,4);
        *(uint *)(iVar13 + local_14c + 0x108) = local_ec;
        if (local_f0 != 0) {
          uVar6 = 0;
          do {
            while (2 < uVar6) {
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
              uVar6 = uVar6 + 1;
              if (local_f0 <= uVar6) goto LAB_00060a4c;
            }
            Load(param_1,(GEAnimationTrack *)(uVar6 * 0x58 + iVar13 + local_14c));
            uVar6 = uVar6 + 1;
          } while (uVar6 < local_f0);
        }
LAB_00060a4c:
        local_148 = local_148 + 1;
        local_14c = local_14c + 0x110;
      } while (local_148 < local_118);
    }
    if ((5 < uVar1) && (local_114 != 0)) {
      local_14c = 0;
      local_148 = 0;
      do {
        iVar13 = *(int *)(param_2 + 0x1c0);
        FFileBase::Read(param_1,(uchar *)&local_f0,4);
        FFileBase::Read(param_1,(uchar *)&local_ec,4);
        *(uint *)(iVar13 + local_14c + 0x108) = local_ec;
        if (local_f0 != 0) {
          uVar6 = 0;
          do {
            while (2 < uVar6) {
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
              uVar6 = uVar6 + 1;
              if (local_f0 <= uVar6) goto LAB_00060bfc;
            }
            Load(param_1,(GEAnimationTrack *)(uVar6 * 0x58 + iVar13 + local_14c));
            uVar6 = uVar6 + 1;
          } while (uVar6 < local_f0);
        }
LAB_00060bfc:
        local_148 = local_148 + 1;
        local_14c = local_14c + 0x110;
      } while (local_148 < local_114);
    }
    if (local_110 != 0) {
      local_14c = 0;
      local_148 = 0;
      do {
        iVar13 = *(int *)(param_2 + 0x1c4);
        FFileBase::Read(param_1,(uchar *)&local_f0,4);
        FFileBase::Read(param_1,(uchar *)&local_ec,4);
        *(uint *)(iVar13 + local_14c + 0x108) = local_ec;
        if (local_f0 != 0) {
          uVar6 = 0;
          do {
            while (2 < uVar6) {
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
              uVar6 = uVar6 + 1;
              if (local_f0 <= uVar6) goto LAB_00060da0;
            }
            Load(param_1,(GEAnimationTrack *)(uVar6 * 0x58 + iVar13 + local_14c));
            uVar6 = uVar6 + 1;
          } while (uVar6 < local_f0);
        }
LAB_00060da0:
        local_148 = local_148 + 1;
        local_14c = local_14c + 0x110;
      } while (local_148 < local_110);
    }
    if ((6 < uVar1) && (local_10c != 0)) {
      local_14c = 0;
      local_148 = 0;
      do {
        iVar13 = *(int *)(param_2 + 0x1c8);
        FFileBase::Read(param_1,(uchar *)&local_f0,4);
        FFileBase::Read(param_1,(uchar *)&local_ec,4);
        *(uint *)(iVar13 + local_14c + 0x108) = local_ec;
        if (local_f0 != 0) {
          uVar6 = 0;
          do {
            while (2 < uVar6) {
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
              uVar6 = uVar6 + 1;
              if (local_f0 <= uVar6) goto LAB_00060f50;
            }
            Load(param_1,(GEAnimationTrack *)(uVar6 * 0x58 + iVar13 + local_14c));
            uVar6 = uVar6 + 1;
          } while (uVar6 < local_f0);
        }
LAB_00060f50:
        local_148 = local_148 + 1;
        local_14c = local_14c + 0x110;
      } while (local_148 < local_10c);
    }
    if (local_108 != 0) {
      local_14c = 0;
      local_148 = 0;
      do {
        iVar13 = *(int *)(param_2 + 0x1cc) + local_14c;
        FFileBase::Read(param_1,(uchar *)&local_f8,4);
        FFileBase::Read(param_1,(uchar *)&local_f4,4);
        FFileBase::Read(param_1,(uchar *)&local_f0,4);
        FFileBase::Read(param_1,(uchar *)&local_ec,4);
        *(ulong *)(iVar13 + 0x164) = local_f0;
        *(ulong *)(iVar13 + 0x160) = local_f4;
        *(uint *)(iVar13 + 0x168) = local_ec;
        if (local_f8 != 0) {
          uVar6 = 0;
          do {
            while (3 < uVar6) {
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
              uVar6 = uVar6 + 1;
              if (local_f8 <= uVar6) goto LAB_0006112c;
            }
            Load(param_1,(GEAnimationTrack *)(uVar6 * 0x58 + iVar13));
            uVar6 = uVar6 + 1;
          } while (uVar6 < local_f8);
        }
LAB_0006112c:
        local_148 = local_148 + 1;
        local_14c = local_14c + 0x170;
      } while (local_148 < local_108);
    }
    if (3 < uVar1) {
      if (local_104 != 0) {
        local_14c = 0;
        local_148 = 0;
        do {
          iVar13 = *(int *)(param_2 + 0x1d0);
          FFileBase::Read(param_1,(uchar *)&local_f0,4);
          FFileBase::Read(param_1,(uchar *)&local_ec,4);
          *(uint *)(iVar13 + local_14c + 0x160) = local_ec;
          if (local_f0 != 0) {
            uVar6 = 0;
            do {
              while (3 < uVar6) {
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
                uVar6 = uVar6 + 1;
                if (local_f0 <= uVar6) goto LAB_000612e8;
              }
              Load(param_1,(GEAnimationTrack *)(uVar6 * 0x58 + iVar13 + local_14c));
              uVar6 = uVar6 + 1;
            } while (uVar6 < local_f0);
          }
LAB_000612e8:
          local_148 = local_148 + 1;
          local_14c = local_14c + 0x168;
        } while (local_148 < local_104);
      }
      if (uVar1 != 4) {
        if (local_100 != 0) {
          local_14c = 0;
          local_148 = 0;
          do {
            iVar13 = *(int *)(param_2 + 0x1d4);
            FFileBase::Read(param_1,(uchar *)&local_f0,4);
            FFileBase::Read(param_1,(uchar *)&local_ec,4);
            *(uint *)((GEAnimationTrack *)(iVar13 + local_14c) + 0x58) = local_ec;
            if (local_f0 != 0) {
              uVar6 = 0;
              do {
                while (uVar6 != 0) {
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
                  uVar6 = uVar6 + 1;
                  if (local_f0 <= uVar6) goto LAB_00061498;
                }
                Load(param_1,(GEAnimationTrack *)(iVar13 + local_14c));
                uVar6 = 1;
              } while (1 < local_f0);
            }
LAB_00061498:
            local_148 = local_148 + 1;
            local_14c = local_14c + 0x60;
          } while (local_148 < local_100);
        }
        if ((0x10 < uVar1) && (local_fc != 0)) {
          local_14c = 0;
          local_148 = 0;
          do {
            iVar13 = *(int *)(param_2 + 0x1d8);
            FFileBase::Read(param_1,(uchar *)&local_f0,4);
            FFileBase::Read(param_1,(uchar *)&local_ec,4);
            *(uint *)((GEAnimationTrack *)(iVar13 + local_14c) + 0x58) = local_ec;
            if (local_f0 != 0) {
              uVar6 = 0;
              do {
                while (uVar6 != 0) {
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
                  uVar6 = uVar6 + 1;
                  if (local_f0 <= uVar6) goto LAB_00061648;
                }
                Load(param_1,(GEAnimationTrack *)(iVar13 + local_14c));
                uVar6 = 1;
              } while (1 < local_f0);
            }
LAB_00061648:
            local_148 = local_148 + 1;
            local_14c = local_14c + 0x60;
          } while (local_148 < local_fc);
        }
      }
    }
    if (0x16 < uVar1) {
      LLogicScene::Load(param_1,(UArrayFixed *)(param_2 + 0x5b0));
      iVar13 = *(int *)(param_2 + 0x5b4);
      goto LAB_00060644;
    }
  }
  else {
    FFileBase::Read(param_1,(uchar *)&local_ec,4);
    GEScene::InitializeCameraSets(param_2,local_ec);
    if (local_ec != 0) {
      iVar13 = 0;
      uVar6 = 0;
      do {
        uVar6 = uVar6 + 1;
        Load(param_1,(GECameraSet *)(*(int *)(param_2 + 0xb8) + iVar13));
        iVar13 = iVar13 + 0x248;
      } while (uVar6 < local_ec);
    }
LAB_00060570:
    if (uVar1 - 10 < 0xb) goto LAB_00061720;
LAB_00060580:
    if (10 < uVar1) goto LAB_0006173c;
LAB_0006058c:
    GEScene::InitializeVertexAnimation(param_2,0);
LAB_00060598:
    GEScene::InitializeSkeleton(param_2,0);
    if (0xb < uVar1) goto LAB_000618e4;
    GEScene::InitializeIntersectables(param_2,0);
LAB_000605bc:
    GEScene::InitializeInherit_Visibility(param_2,0);
    GEScene::InitializeInherit_Intersection(param_2,0);
    if (0xc < uVar1) goto LAB_000606b0;
    GEScene::InitializeModelVisMask_TimeOfDay(param_2,0);
    GEScene::InitializeModelVisMask_WeekDay(param_2,0);
    GEScene::InitializeModelVisMask_Date(param_2,0);
    GEScene::InitializeModelVisMask_Environment(param_2,0);
    if (1 < uVar1) goto LAB_00060830;
  }
  iVar13 = 0;
  if (*(int *)(param_2 + 0x5b4) != 0) {
    if (*(void **)(param_2 + 0x5b0) != (void *)0x0) {
      operator_delete__(*(void **)(param_2 + 0x5b0));
    }
    iVar13 = 0;
    *(undefined4 *)(param_2 + 0x5b0) = 0;
    *(undefined4 *)(param_2 + 0x5b4) = 0;
  }
LAB_00060644:
  if (iVar13 != *(int *)(param_2 + 0x5bc)) {
    if (*(int *)(param_2 + 0x5bc) != 0) {
      if (*(void **)(param_2 + 0x5b8) != (void *)0x0) {
        operator_delete__(*(void **)(param_2 + 0x5b8));
      }
      *(undefined4 *)(param_2 + 0x5b8) = 0;
    }
    *(int *)(param_2 + 0x5bc) = iVar13;
    if (iVar13 != 0) {
      pvVar3 = operator_new__(iVar13 << 2);
      iVar13 = *(int *)(param_2 + 0x5bc);
      *(void **)(param_2 + 0x5b8) = pvVar3;
      if (iVar13 != 0) {
        iVar7 = 0;
        do {
          *(undefined4 *)(*(int *)(param_2 + 0x5b8) + iVar7 * 4) = 0;
          iVar7 = iVar7 + 1;
        } while (iVar13 != iVar7);
      }
    }
  }
  iVar13 = *piVar4;
  *(undefined4 *)(param_2 + 0x5c0) = 0;
  if (local_2c != iVar13) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

