/* 00066a60 | STG::USerialize::Save */

/* STG::USerialize::Save(STG::FFileBase*, STG::GEScene const&) */

void STG::USerialize::Save(FFileBase *param_1,GEScene *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int unaff_EBX;
  int iVar3;
  uint uVar4;
  int iVar5;
  GEAnimationTrack *pGVar6;
  uint uVar7;
  uint uVar8;
  uint local_3c;
  uint local_38;
  uint local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 uStack_14;
  
  uStack_14 = 0x66a69;
  FUN_0002e044();
  local_28 = 0x1a;
  FFileBase::Write(param_1,(uchar *)&local_28,4);
  uVar4 = *(uint *)(param_2 + 0x778);
  local_28 = uVar4;
  FFileBase::Write(param_1,(uchar *)&local_28,4);
  if (uVar4 != 0) {
    local_3c = 0;
    local_38 = 0;
    do {
      iVar3 = local_3c + *(int *)(param_2 + 0x774);
      uVar7 = *(int *)(iVar3 + 0x14) - *(int *)(iVar3 + 0x18);
      local_28 = uVar7;
      FFileBase::Write(param_1,(uchar *)&local_28,4);
      if (uVar7 != 0) {
        iVar5 = *(int *)(iVar3 + 0x18);
        if (*(int *)(iVar3 + 0x14) == iVar5) goto LAB_00067ac6;
        uVar8 = 0;
        while( true ) {
          puVar1 = (undefined1 *)(iVar5 + uVar8);
          uVar8 = uVar8 + 1;
          local_24 = CONCAT31(local_24._1_3_,*puVar1);
          FFileBase::Write(param_1,(uchar *)&local_24,1);
          if (uVar7 == uVar8) break;
          iVar5 = *(int *)(iVar3 + 0x18);
          if ((uint)(*(int *)(iVar3 + 0x14) - iVar5) <= uVar8) goto LAB_00067ac6;
        }
      }
      uVar7 = *(int *)(iVar3 + 0x30) - *(int *)(iVar3 + 0x34);
      local_28 = uVar7;
      FFileBase::Write(param_1,(uchar *)&local_28,4);
      if (uVar7 != 0) {
        iVar5 = *(int *)(iVar3 + 0x34);
        if (iVar5 == *(int *)(iVar3 + 0x30)) {
LAB_00067ac6:
                    /* WARNING: Subroutine does not return */
          std::__stl_throw_out_of_range
                    ("_ZN3STG11UPreferenceINS_11UStringBaseIciEELb1EED2Ev" + unaff_EBX + 8);
        }
        uVar8 = 0;
        while( true ) {
          puVar1 = (undefined1 *)(iVar5 + uVar8);
          uVar8 = uVar8 + 1;
          local_24 = CONCAT31(local_24._1_3_,*puVar1);
          FFileBase::Write(param_1,(uchar *)&local_24,1);
          if (uVar7 == uVar8) break;
          iVar5 = *(int *)(iVar3 + 0x34);
          if ((uint)(*(int *)(iVar3 + 0x30) - iVar5) <= uVar8) goto LAB_00067ac6;
        }
      }
      local_38 = local_38 + 1;
      local_3c = local_3c + 0x38;
    } while (local_38 != uVar4);
  }
  Save(param_1,(UPreference_Scene *)(param_2 + 0x2c));
  Save(param_1,(GEEnvironment *)(param_2 + 0x308));
  Save(param_1,(GETextureModifier *)(param_2 + 0x318));
  local_28 = *(uint *)(param_2 + 0xa4);
  FFileBase::Write(param_1,(uchar *)&local_28,4);
  local_28 = *(uint *)(param_2 + 0xa4);
  FFileBase::Write(param_1,(uchar *)&local_28,4);
  local_28 = *(uint *)(param_2 + 0xa8);
  FFileBase::Write(param_1,(uchar *)&local_28,4);
  if (*(int *)(param_2 + 0xa4) != 0) {
    uVar4 = 0;
    do {
      iVar3 = uVar4 * 4;
      uVar4 = uVar4 + 1;
      Save(param_1,*(GEModel **)(*(int *)(param_2 + 0xb0) + iVar3));
    } while (uVar4 < *(uint *)(param_2 + 0xa4));
    if (*(uint *)(param_2 + 0xa4) != 0) {
      uVar4 = 0;
      do {
        uVar7 = uVar4 + 1;
        Save(param_1,(MMatrix *)(uVar4 * 0x40 + *(int *)(param_2 + 0xbc)));
        uVar4 = uVar7;
      } while (uVar7 < *(uint *)(param_2 + 0xa4));
    }
  }
  if (*(int *)(param_2 + 0xa8) != 0) {
    uVar4 = 0;
    iVar3 = 0;
    do {
      uVar4 = uVar4 + 1;
      Save(param_1,(GECamera *)(*(int *)(param_2 + 0xb4) + iVar3));
      iVar3 = iVar3 + 0x210;
    } while (uVar4 < *(uint *)(param_2 + 0xa8));
  }
  local_28 = *(uint *)(param_2 + 0xac);
  FFileBase::Write(param_1,(uchar *)&local_28,4);
  if (*(int *)(param_2 + 0xac) != 0) {
    uVar4 = 0;
    do {
      iVar3 = uVar4 * 0x248;
      uVar4 = uVar4 + 1;
      Save(param_1,(GECameraSet *)(iVar3 + *(int *)(param_2 + 0xb8)));
    } while (uVar4 < *(uint *)(param_2 + 0xac));
  }
  local_28 = *(uint *)(param_2 + 0xfc);
  FFileBase::Write(param_1,(uchar *)&local_28,4);
  if (*(int *)(param_2 + 0xa4) != 0) {
    uVar4 = 0;
    do {
      local_28 = *(uint *)(*(int *)(param_2 + 0xf4) + uVar4 * 4);
      FFileBase::Write(param_1,(uchar *)&local_28,4);
      local_28 = *(uint *)(*(int *)(param_2 + 0xf8) + uVar4 * 4);
      uVar4 = uVar4 + 1;
      FFileBase::Write(param_1,(uchar *)&local_28,4);
    } while (uVar4 < *(uint *)(param_2 + 0xa4));
  }
  local_28 = *(uint *)(param_2 + 0x174);
  FFileBase::Write(param_1,(uchar *)&local_28,4);
  if (*(int *)(param_2 + 0x174) != 0) {
    uVar4 = 0;
    iVar3 = 0;
    do {
      local_28 = *(uint *)(*(int *)(param_2 + 0x168) + uVar4 * 4);
      FFileBase::Write(param_1,(uchar *)&local_28,4);
      uVar4 = uVar4 + 1;
      Save(param_1,(GEVertexBlender *)(*(int *)(param_2 + 0x170) + iVar3));
      iVar3 = iVar3 + 0x24;
    } while (uVar4 < *(uint *)(param_2 + 0x174));
  }
  local_28 = *(uint *)(param_2 + 0x184);
  FFileBase::Write(param_1,(uchar *)&local_28,4);
  if (*(int *)(param_2 + 0x184) != 0) {
    uVar4 = 0;
    do {
      local_28 = *(uint *)(*(int *)(param_2 + 0x178) + uVar4 * 4);
      FFileBase::Write(param_1,(uchar *)&local_28,4);
      iVar3 = uVar4 * 0x2c;
      uVar4 = uVar4 + 1;
      Save(param_1,(Mesh *)(iVar3 + *(int *)(param_2 + 0x180)));
    } while (uVar4 < *(uint *)(param_2 + 0x184));
  }
  local_28 = *(uint *)(param_2 + 0x114);
  FFileBase::Write(param_1,(uchar *)&local_28,4);
  if (*(int *)(param_2 + 0x114) != 0) {
    uVar4 = 0;
    do {
      local_28 = *(uint *)(*(int *)(param_2 + 0x110) + uVar4 * 4);
      uVar4 = uVar4 + 1;
      FFileBase::Write(param_1,(uchar *)&local_28,4);
    } while (uVar4 < *(uint *)(param_2 + 0x114));
  }
  local_28 = *(uint *)(param_2 + 0x18c);
  FFileBase::Write(param_1,(uchar *)&local_28,4);
  if (*(int *)(param_2 + 0x18c) != 0) {
    uVar4 = 0;
    do {
      local_28 = *(uint *)(*(int *)(param_2 + 0x188) + uVar4 * 4);
      FFileBase::Write(param_1,(uchar *)&local_28,4);
      local_28 = *(uint *)(*(int *)(param_2 + 400) + uVar4 * 4);
      uVar4 = uVar4 + 1;
      FFileBase::Write(param_1,(uchar *)&local_28,4);
    } while (uVar4 < *(uint *)(param_2 + 0x18c));
  }
  local_28 = *(uint *)(param_2 + 0x19c);
  FFileBase::Write(param_1,(uchar *)&local_28,4);
  if (*(int *)(param_2 + 0x19c) != 0) {
    uVar4 = 0;
    do {
      local_28 = *(uint *)(*(int *)(param_2 + 0x198) + uVar4 * 4);
      FFileBase::Write(param_1,(uchar *)&local_28,4);
      local_28 = *(uint *)(*(int *)(param_2 + 0x1a0) + uVar4 * 4);
      uVar4 = uVar4 + 1;
      FFileBase::Write(param_1,(uchar *)&local_28,4);
    } while (uVar4 < *(uint *)(param_2 + 0x19c));
  }
  local_28 = *(uint *)(param_2 + 300);
  FFileBase::Write(param_1,(uchar *)&local_28,4);
  if (*(int *)(param_2 + 300) != 0) {
    uVar4 = 0;
    do {
      local_28 = *(uint *)(*(int *)(param_2 + 0x128) + uVar4 * 4);
      FFileBase::Write(param_1,(uchar *)&local_28,4);
      local_28 = *(uint *)(*(int *)(param_2 + 0x130) + uVar4 * 4);
      uVar4 = uVar4 + 1;
      FFileBase::Write(param_1,(uchar *)&local_28,4);
    } while (uVar4 < *(uint *)(param_2 + 300));
  }
  local_28 = *(uint *)(param_2 + 0x13c);
  FFileBase::Write(param_1,(uchar *)&local_28,4);
  if (*(int *)(param_2 + 0x13c) != 0) {
    uVar4 = 0;
    do {
      local_28 = *(uint *)(*(int *)(param_2 + 0x138) + uVar4 * 4);
      FFileBase::Write(param_1,(uchar *)&local_28,4);
      local_24 = CONCAT31(local_24._1_3_,*(undefined1 *)(*(int *)(param_2 + 0x140) + uVar4));
      uVar4 = uVar4 + 1;
      FFileBase::Write(param_1,(uchar *)&local_24,1);
    } while (uVar4 < *(uint *)(param_2 + 0x13c));
  }
  local_28 = *(uint *)(param_2 + 0x14c);
  FFileBase::Write(param_1,(uchar *)&local_28,4);
  if (*(int *)(param_2 + 0x14c) != 0) {
    local_3c = 0;
    iVar3 = 0;
    do {
      iVar5 = 0;
      local_28 = *(uint *)(*(int *)(param_2 + 0x148) + local_3c * 4);
      FFileBase::Write(param_1,(uchar *)&local_28,4);
      do {
        iVar2 = iVar5 * 4;
        iVar5 = iVar5 + 1;
        local_28 = *(uint *)(iVar2 + *(int *)(param_2 + 0x150) + iVar3);
        FFileBase::Write(param_1,(uchar *)&local_28,4);
      } while (iVar5 != 0xc);
      local_3c = local_3c + 1;
      iVar3 = iVar3 + 0x30;
    } while (local_3c < *(uint *)(param_2 + 0x14c));
  }
  local_28 = *(uint *)(param_2 + 0x15c);
  FFileBase::Write(param_1,(uchar *)&local_28,4);
  if (*(int *)(param_2 + 0x15c) != 0) {
    uVar4 = 0;
    do {
      local_28 = *(uint *)(*(int *)(param_2 + 0x158) + uVar4 * 4);
      FFileBase::Write(param_1,(uchar *)&local_28,4);
      local_28 = *(uint *)(*(int *)(param_2 + 0x160) + uVar4 * 4);
      uVar4 = uVar4 + 1;
      FFileBase::Write(param_1,(uchar *)&local_28,4);
    } while (uVar4 < *(uint *)(param_2 + 0x15c));
  }
  local_20 = *(undefined4 *)(param_2 + 0x200);
  local_24 = *(undefined4 *)(param_2 + 0x1fc);
  FFileBase::Write(param_1,(uchar *)&local_24,8);
  local_28 = GEScene::GetValidAnimCount_Model_Pos(param_2);
  FFileBase::Write(param_1,(uchar *)&local_28,4);
  local_28 = GEScene::GetValidAnimCount_Camera_Pos(param_2);
  FFileBase::Write(param_1,(uchar *)&local_28,4);
  local_28 = GEScene::GetValidAnimCount_Texture(param_2);
  FFileBase::Write(param_1,(uchar *)&local_28,4);
  local_28 = GEScene::GetValidAnimCount_Interact(param_2);
  FFileBase::Write(param_1,(uchar *)&local_28,4);
  local_28 = GEScene::GetValidAnimCount_Visibility(param_2);
  FFileBase::Write(param_1,(uchar *)&local_28,4);
  local_28 = GEScene::GetValidAnimCount_Model_Rot(param_2);
  FFileBase::Write(param_1,(uchar *)&local_28,4);
  local_28 = GEScene::GetValidAnimCount_CameraTarget_Pos(param_2);
  FFileBase::Write(param_1,(uchar *)&local_28,4);
  local_28 = GEScene::GetValidAnimCount_LocalTimeOffset(param_2);
  FFileBase::Write(param_1,(uchar *)&local_28,4);
  uVar4 = *(uint *)(param_2 + 0x1dc);
  if (uVar4 != 0) {
    uVar7 = 0;
    do {
      pGVar6 = (GEAnimationTrack *)(uVar7 * 0x100 + *(int *)(param_2 + 0x1bc));
      if (((*(int *)(pGVar6 + 0x14) != 0) || (*(int *)(pGVar6 + 0x68) != 0)) ||
         (*(int *)(pGVar6 + 0xbc) != 0)) {
        local_28 = 3;
        FFileBase::Write(param_1,(uchar *)&local_28,4);
        local_28 = *(uint *)(pGVar6 + 0xfc);
        FFileBase::Write(param_1,(uchar *)&local_28,4);
        Save(param_1,pGVar6);
        Save(param_1,pGVar6 + 0x54);
        Save(param_1,pGVar6 + 0xa8);
        uVar4 = *(uint *)(param_2 + 0x1dc);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar4);
  }
  uVar4 = *(uint *)(param_2 + 0x1e0);
  if (uVar4 != 0) {
    uVar7 = 0;
    do {
      pGVar6 = (GEAnimationTrack *)(uVar7 * 0x100 + *(int *)(param_2 + 0x1c0));
      if (((*(int *)(pGVar6 + 0x14) != 0) || (*(int *)(pGVar6 + 0x68) != 0)) ||
         (*(int *)(pGVar6 + 0xbc) != 0)) {
        local_28 = 3;
        FFileBase::Write(param_1,(uchar *)&local_28,4);
        local_28 = *(uint *)(pGVar6 + 0xfc);
        FFileBase::Write(param_1,(uchar *)&local_28,4);
        Save(param_1,pGVar6);
        Save(param_1,pGVar6 + 0x54);
        Save(param_1,pGVar6 + 0xa8);
        uVar4 = *(uint *)(param_2 + 0x1e0);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar4);
  }
  uVar4 = *(uint *)(param_2 + 0x1e4);
  if (uVar4 != 0) {
    uVar7 = 0;
    do {
      pGVar6 = (GEAnimationTrack *)(uVar7 * 0x100 + *(int *)(param_2 + 0x1c4));
      if (((*(int *)(pGVar6 + 0x14) != 0) || (*(int *)(pGVar6 + 0x68) != 0)) ||
         (*(int *)(pGVar6 + 0xbc) != 0)) {
        local_28 = 3;
        FFileBase::Write(param_1,(uchar *)&local_28,4);
        local_28 = *(uint *)(pGVar6 + 0xfc);
        FFileBase::Write(param_1,(uchar *)&local_28,4);
        Save(param_1,pGVar6);
        Save(param_1,pGVar6 + 0x54);
        Save(param_1,pGVar6 + 0xa8);
        uVar4 = *(uint *)(param_2 + 0x1e4);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar4);
  }
  uVar4 = *(uint *)(param_2 + 0x1e8);
  if (uVar4 != 0) {
    uVar7 = 0;
    do {
      pGVar6 = (GEAnimationTrack *)(uVar7 * 0x100 + *(int *)(param_2 + 0x1c8));
      if (((*(int *)(pGVar6 + 0x14) != 0) || (*(int *)(pGVar6 + 0x68) != 0)) ||
         (*(int *)(pGVar6 + 0xbc) != 0)) {
        local_28 = 3;
        FFileBase::Write(param_1,(uchar *)&local_28,4);
        local_28 = *(uint *)(pGVar6 + 0xfc);
        FFileBase::Write(param_1,(uchar *)&local_28,4);
        Save(param_1,pGVar6);
        Save(param_1,pGVar6 + 0x54);
        Save(param_1,pGVar6 + 0xa8);
        uVar4 = *(uint *)(param_2 + 0x1e8);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar4);
  }
  uVar4 = *(uint *)(param_2 + 0x1ec);
  if (uVar4 != 0) {
    uVar7 = 0;
    do {
      pGVar6 = (GEAnimationTrack *)(uVar7 * 0x15c + *(int *)(param_2 + 0x1cc));
      if (((*(int *)(pGVar6 + 0x14) != 0) || (*(int *)(pGVar6 + 0x68) != 0)) ||
         ((*(int *)(pGVar6 + 0xbc) != 0 || (*(int *)(pGVar6 + 0x110) != 0)))) {
        local_28 = 4;
        FFileBase::Write(param_1,(uchar *)&local_28,4);
        uVar4 = *(uint *)(pGVar6 + 0x158);
        uVar8 = *(uint *)(pGVar6 + 0x154);
        local_28 = *(uint *)(pGVar6 + 0x150);
        FFileBase::Write(param_1,(uchar *)&local_28,4);
        local_28 = uVar8;
        FFileBase::Write(param_1,(uchar *)&local_28,4);
        local_28 = uVar4;
        FFileBase::Write(param_1,(uchar *)&local_28,4);
        Save(param_1,pGVar6);
        Save(param_1,pGVar6 + 0x54);
        Save(param_1,pGVar6 + 0xa8);
        Save(param_1,pGVar6 + 0xfc);
        uVar4 = *(uint *)(param_2 + 0x1ec);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar4);
  }
  uVar4 = *(uint *)(param_2 + 0x1f0);
  if (uVar4 != 0) {
    uVar7 = 0;
    do {
      pGVar6 = (GEAnimationTrack *)(uVar7 * 0x154 + *(int *)(param_2 + 0x1d0));
      if (((*(int *)(pGVar6 + 0x14) != 0) || (*(int *)(pGVar6 + 0x68) != 0)) ||
         ((*(int *)(pGVar6 + 0xbc) != 0 || (*(int *)(pGVar6 + 0x110) != 0)))) {
        local_28 = 4;
        FFileBase::Write(param_1,(uchar *)&local_28,4);
        local_28 = *(uint *)(pGVar6 + 0x150);
        FFileBase::Write(param_1,(uchar *)&local_28,4);
        Save(param_1,pGVar6);
        Save(param_1,pGVar6 + 0x54);
        Save(param_1,pGVar6 + 0xa8);
        Save(param_1,pGVar6 + 0xfc);
        uVar4 = *(uint *)(param_2 + 0x1f0);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar4);
  }
  uVar4 = *(uint *)(param_2 + 500);
  if (uVar4 != 0) {
    uVar7 = 0;
    do {
      pGVar6 = (GEAnimationTrack *)(uVar7 * 0x58 + *(int *)(param_2 + 0x1d4));
      if (*(int *)(pGVar6 + 0x14) != 0) {
        local_28 = 1;
        FFileBase::Write(param_1,(uchar *)&local_28,4);
        local_28 = *(uint *)(pGVar6 + 0x54);
        FFileBase::Write(param_1,(uchar *)&local_28,4);
        Save(param_1,pGVar6);
        uVar4 = *(uint *)(param_2 + 500);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar4);
  }
  uVar4 = *(uint *)(param_2 + 0x1f8);
  if (uVar4 != 0) {
    uVar7 = 0;
    do {
      pGVar6 = (GEAnimationTrack *)(uVar7 * 0x58 + *(int *)(param_2 + 0x1d8));
      if (*(int *)(pGVar6 + 0x14) != 0) {
        local_28 = 1;
        FFileBase::Write(param_1,(uchar *)&local_28,4);
        local_28 = *(uint *)(pGVar6 + 0x54);
        FFileBase::Write(param_1,(uchar *)&local_28,4);
        Save(param_1,pGVar6);
        uVar4 = *(uint *)(param_2 + 0x1f8);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar4);
  }
  LLogicScene::Save(param_1,(UArrayFixed *)(param_2 + 0x59c));
  return;
}

