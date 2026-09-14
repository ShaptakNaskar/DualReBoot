/* 00054af8 | STG::USerialize::Save */

/* STG::USerialize::Save(STG::FFileBase*, STG::GEScene const&) */

void STG::USerialize::Save(FFileBase *param_1,GEScene *param_2)

{
  undefined1 *puVar1;
  GECamera *pGVar2;
  GECameraSet *pGVar3;
  GEVertexBlender *pGVar4;
  Mesh *pMVar5;
  int iVar6;
  uint uVar7;
  GEAnimationTrack *pGVar8;
  int iVar9;
  UStringBase *pUVar10;
  int iVar11;
  uint uVar12;
  int local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  local_34 = 0x1a;
  FFileBase::Write(param_1,(uchar *)&local_34,4);
  iVar6 = *(int *)(param_2 + 0x78c);
  local_34 = iVar6;
  FFileBase::Write(param_1,(uchar *)&local_34,4);
  if (iVar6 != 0) {
    iVar9 = 0;
    iVar11 = 0;
    do {
      iVar11 = iVar11 + 1;
      pUVar10 = (UStringBase *)(*(int *)(param_2 + 0x788) + iVar9);
      iVar9 = iVar9 + 0x38;
      Save<char,int>(param_1,pUVar10);
      Save<char,int>(param_1,pUVar10 + 0x1c);
    } while (iVar11 != iVar6);
  }
  Save(param_1,(UPreference_Scene *)(param_2 + 0x2c));
  Save(param_1,(GEEnvironment *)(param_2 + 0x314));
  Save(param_1,(GETextureModifier *)(param_2 + 0x324));
  local_34 = *(int *)(param_2 + 0xa4);
  FFileBase::Write(param_1,(uchar *)&local_34,4);
  local_34 = *(int *)(param_2 + 0xa4);
  FFileBase::Write(param_1,(uchar *)&local_34,4);
  local_34 = *(int *)(param_2 + 0xa8);
  FFileBase::Write(param_1,(uchar *)&local_34,4);
  if (*(int *)(param_2 + 0xa4) != 0) {
    uVar7 = 0;
    do {
      iVar6 = uVar7 * 4;
      uVar7 = uVar7 + 1;
      Save(param_1,*(GEModel **)(*(int *)(param_2 + 0xb0) + iVar6));
    } while (uVar7 < *(uint *)(param_2 + 0xa4));
    if (*(uint *)(param_2 + 0xa4) != 0) {
      uVar7 = 0;
      do {
        iVar6 = uVar7 * 0x40;
        uVar7 = uVar7 + 1;
        Save(param_1,(MMatrix *)(*(int *)(param_2 + 0xbc) + iVar6));
      } while (uVar7 < *(uint *)(param_2 + 0xa4));
    }
  }
  if (*(int *)(param_2 + 0xa8) != 0) {
    iVar6 = 0;
    uVar7 = 0;
    do {
      uVar7 = uVar7 + 1;
      pGVar2 = (GECamera *)(*(int *)(param_2 + 0xb4) + iVar6);
      iVar6 = iVar6 + 0x210;
      Save(param_1,pGVar2);
    } while (uVar7 < *(uint *)(param_2 + 0xa8));
  }
  local_34 = *(int *)(param_2 + 0xac);
  FFileBase::Write(param_1,(uchar *)&local_34,4);
  if (*(int *)(param_2 + 0xac) != 0) {
    iVar6 = 0;
    uVar7 = 0;
    do {
      uVar7 = uVar7 + 1;
      pGVar3 = (GECameraSet *)(*(int *)(param_2 + 0xb8) + iVar6);
      iVar6 = iVar6 + 0x248;
      Save(param_1,pGVar3);
    } while (uVar7 < *(uint *)(param_2 + 0xac));
  }
  local_34 = *(int *)(param_2 + 0xfc);
  FFileBase::Write(param_1,(uchar *)&local_34,4);
  if (*(int *)(param_2 + 0xa4) != 0) {
    uVar7 = 0;
    do {
      local_34 = *(int *)(*(int *)(param_2 + 0xf4) + uVar7 * 4);
      FFileBase::Write(param_1,(uchar *)&local_34,4);
      local_34 = *(int *)(*(int *)(param_2 + 0xf8) + uVar7 * 4);
      uVar7 = uVar7 + 1;
      FFileBase::Write(param_1,(uchar *)&local_34,4);
    } while (uVar7 < *(uint *)(param_2 + 0xa4));
  }
  local_34 = *(int *)(param_2 + 0x174);
  FFileBase::Write(param_1,(uchar *)&local_34,4);
  if (*(int *)(param_2 + 0x174) != 0) {
    iVar6 = 0;
    uVar7 = 0;
    do {
      local_34 = *(int *)(*(int *)(param_2 + 0x168) + uVar7 * 4);
      uVar7 = uVar7 + 1;
      FFileBase::Write(param_1,(uchar *)&local_34,4);
      pGVar4 = (GEVertexBlender *)(*(int *)(param_2 + 0x170) + iVar6);
      iVar6 = iVar6 + 0x24;
      Save(param_1,pGVar4);
    } while (uVar7 < *(uint *)(param_2 + 0x174));
  }
  local_34 = *(int *)(param_2 + 0x184);
  FFileBase::Write(param_1,(uchar *)&local_34,4);
  if (*(int *)(param_2 + 0x184) != 0) {
    iVar6 = 0;
    uVar7 = 0;
    do {
      local_34 = *(int *)(*(int *)(param_2 + 0x178) + uVar7 * 4);
      uVar7 = uVar7 + 1;
      FFileBase::Write(param_1,(uchar *)&local_34,4);
      pMVar5 = (Mesh *)(*(int *)(param_2 + 0x180) + iVar6);
      iVar6 = iVar6 + 0x2c;
      Save(param_1,pMVar5);
    } while (uVar7 < *(uint *)(param_2 + 0x184));
  }
  local_34 = *(int *)(param_2 + 0x114);
  FFileBase::Write(param_1,(uchar *)&local_34,4);
  if (*(int *)(param_2 + 0x114) != 0) {
    uVar7 = 0;
    do {
      local_34 = *(int *)(*(int *)(param_2 + 0x110) + uVar7 * 4);
      uVar7 = uVar7 + 1;
      FFileBase::Write(param_1,(uchar *)&local_34,4);
    } while (uVar7 < *(uint *)(param_2 + 0x114));
  }
  local_34 = *(int *)(param_2 + 0x18c);
  FFileBase::Write(param_1,(uchar *)&local_34,4);
  if (*(int *)(param_2 + 0x18c) != 0) {
    uVar7 = 0;
    do {
      local_34 = *(int *)(*(int *)(param_2 + 0x188) + uVar7 * 4);
      FFileBase::Write(param_1,(uchar *)&local_34,4);
      local_34 = *(int *)(*(int *)(param_2 + 400) + uVar7 * 4);
      uVar7 = uVar7 + 1;
      FFileBase::Write(param_1,(uchar *)&local_34,4);
    } while (uVar7 < *(uint *)(param_2 + 0x18c));
  }
  local_34 = *(int *)(param_2 + 0x19c);
  FFileBase::Write(param_1,(uchar *)&local_34,4);
  if (*(int *)(param_2 + 0x19c) != 0) {
    uVar7 = 0;
    do {
      local_34 = *(int *)(*(int *)(param_2 + 0x198) + uVar7 * 4);
      FFileBase::Write(param_1,(uchar *)&local_34,4);
      local_34 = *(int *)(*(int *)(param_2 + 0x1a0) + uVar7 * 4);
      uVar7 = uVar7 + 1;
      FFileBase::Write(param_1,(uchar *)&local_34,4);
    } while (uVar7 < *(uint *)(param_2 + 0x19c));
  }
  local_34 = *(int *)(param_2 + 300);
  FFileBase::Write(param_1,(uchar *)&local_34,4);
  if (*(int *)(param_2 + 300) != 0) {
    uVar7 = 0;
    do {
      local_34 = *(int *)(*(int *)(param_2 + 0x128) + uVar7 * 4);
      FFileBase::Write(param_1,(uchar *)&local_34,4);
      local_34 = *(int *)(*(int *)(param_2 + 0x130) + uVar7 * 4);
      uVar7 = uVar7 + 1;
      FFileBase::Write(param_1,(uchar *)&local_34,4);
    } while (uVar7 < *(uint *)(param_2 + 300));
  }
  local_34 = *(int *)(param_2 + 0x13c);
  FFileBase::Write(param_1,(uchar *)&local_34,4);
  if (*(int *)(param_2 + 0x13c) != 0) {
    uVar7 = 0;
    do {
      local_34 = *(int *)(*(int *)(param_2 + 0x138) + uVar7 * 4);
      FFileBase::Write(param_1,(uchar *)&local_34,4);
      puVar1 = (undefined1 *)(*(int *)(param_2 + 0x140) + uVar7);
      uVar7 = uVar7 + 1;
      local_30 = CONCAT31(local_30._1_3_,*puVar1);
      FFileBase::Write(param_1,(uchar *)&local_30,1);
    } while (uVar7 < *(uint *)(param_2 + 0x13c));
  }
  local_34 = *(int *)(param_2 + 0x14c);
  FFileBase::Write(param_1,(uchar *)&local_34,4);
  if (*(int *)(param_2 + 0x14c) != 0) {
    iVar6 = 0;
    uVar7 = 0;
    do {
      iVar9 = 0;
      local_34 = *(int *)(*(int *)(param_2 + 0x148) + uVar7 * 4);
      FFileBase::Write(param_1,(uchar *)&local_34,4);
      do {
        iVar11 = iVar9 * 4;
        iVar9 = iVar9 + 1;
        local_34 = *(int *)(*(int *)(param_2 + 0x150) + iVar11 + iVar6);
        FFileBase::Write(param_1,(uchar *)&local_34,4);
      } while (iVar9 != 0xc);
      uVar7 = uVar7 + 1;
      iVar6 = iVar6 + 0x30;
    } while (uVar7 < *(uint *)(param_2 + 0x14c));
  }
  local_34 = *(int *)(param_2 + 0x15c);
  FFileBase::Write(param_1,(uchar *)&local_34,4);
  if (*(int *)(param_2 + 0x15c) != 0) {
    uVar7 = 0;
    do {
      local_34 = *(int *)(*(int *)(param_2 + 0x158) + uVar7 * 4);
      FFileBase::Write(param_1,(uchar *)&local_34,4);
      local_34 = *(int *)(*(int *)(param_2 + 0x160) + uVar7 * 4);
      uVar7 = uVar7 + 1;
      FFileBase::Write(param_1,(uchar *)&local_34,4);
    } while (uVar7 < *(uint *)(param_2 + 0x15c));
  }
  local_30 = *(undefined4 *)(param_2 + 0x200);
  uStack_2c = *(undefined4 *)(param_2 + 0x204);
  FFileBase::Write(param_1,(uchar *)&local_30,8);
  local_34 = GEScene::GetValidAnimCount_Model_Pos(param_2);
  FFileBase::Write(param_1,(uchar *)&local_34,4);
  local_34 = GEScene::GetValidAnimCount_Camera_Pos(param_2);
  FFileBase::Write(param_1,(uchar *)&local_34,4);
  local_34 = GEScene::GetValidAnimCount_Texture(param_2);
  FFileBase::Write(param_1,(uchar *)&local_34,4);
  local_34 = GEScene::GetValidAnimCount_Interact(param_2);
  FFileBase::Write(param_1,(uchar *)&local_34,4);
  local_34 = GEScene::GetValidAnimCount_Visibility(param_2);
  FFileBase::Write(param_1,(uchar *)&local_34,4);
  local_34 = GEScene::GetValidAnimCount_Model_Rot(param_2);
  FFileBase::Write(param_1,(uchar *)&local_34,4);
  local_34 = GEScene::GetValidAnimCount_CameraTarget_Pos(param_2);
  FFileBase::Write(param_1,(uchar *)&local_34,4);
  local_34 = GEScene::GetValidAnimCount_LocalTimeOffset(param_2);
  FFileBase::Write(param_1,(uchar *)&local_34,4);
  uVar7 = *(uint *)(param_2 + 0x1dc);
  if (uVar7 != 0) {
    iVar6 = 0;
    uVar12 = 0;
    do {
      uVar12 = uVar12 + 1;
      pGVar8 = (GEAnimationTrack *)(*(int *)(param_2 + 0x1bc) + iVar6);
      iVar6 = iVar6 + 0x110;
      if (((*(int *)(pGVar8 + 0x14) != 0) || (*(int *)(pGVar8 + 0x6c) != 0)) ||
         (*(int *)(pGVar8 + 0xc4) != 0)) {
        local_34 = 3;
        FFileBase::Write(param_1,(uchar *)&local_34,4);
        local_34 = *(int *)(pGVar8 + 0x108);
        FFileBase::Write(param_1,(uchar *)&local_34,4);
        Save(param_1,pGVar8);
        Save(param_1,pGVar8 + 0x58);
        Save(param_1,pGVar8 + 0xb0);
        uVar7 = *(uint *)(param_2 + 0x1dc);
      }
    } while (uVar12 < uVar7);
  }
  uVar7 = *(uint *)(param_2 + 0x1e0);
  if (uVar7 != 0) {
    iVar6 = 0;
    uVar12 = 0;
    do {
      uVar12 = uVar12 + 1;
      pGVar8 = (GEAnimationTrack *)(*(int *)(param_2 + 0x1c0) + iVar6);
      iVar6 = iVar6 + 0x110;
      if (((*(int *)(pGVar8 + 0x14) != 0) || (*(int *)(pGVar8 + 0x6c) != 0)) ||
         (*(int *)(pGVar8 + 0xc4) != 0)) {
        local_34 = 3;
        FFileBase::Write(param_1,(uchar *)&local_34,4);
        local_34 = *(int *)(pGVar8 + 0x108);
        FFileBase::Write(param_1,(uchar *)&local_34,4);
        Save(param_1,pGVar8);
        Save(param_1,pGVar8 + 0x58);
        Save(param_1,pGVar8 + 0xb0);
        uVar7 = *(uint *)(param_2 + 0x1e0);
      }
    } while (uVar12 < uVar7);
  }
  uVar7 = *(uint *)(param_2 + 0x1e4);
  if (uVar7 != 0) {
    iVar6 = 0;
    uVar12 = 0;
    do {
      uVar12 = uVar12 + 1;
      pGVar8 = (GEAnimationTrack *)(*(int *)(param_2 + 0x1c4) + iVar6);
      iVar6 = iVar6 + 0x110;
      if (((*(int *)(pGVar8 + 0x14) != 0) || (*(int *)(pGVar8 + 0x6c) != 0)) ||
         (*(int *)(pGVar8 + 0xc4) != 0)) {
        local_34 = 3;
        FFileBase::Write(param_1,(uchar *)&local_34,4);
        local_34 = *(int *)(pGVar8 + 0x108);
        FFileBase::Write(param_1,(uchar *)&local_34,4);
        Save(param_1,pGVar8);
        Save(param_1,pGVar8 + 0x58);
        Save(param_1,pGVar8 + 0xb0);
        uVar7 = *(uint *)(param_2 + 0x1e4);
      }
    } while (uVar12 < uVar7);
  }
  uVar7 = *(uint *)(param_2 + 0x1e8);
  if (uVar7 != 0) {
    iVar6 = 0;
    uVar12 = 0;
    do {
      uVar12 = uVar12 + 1;
      pGVar8 = (GEAnimationTrack *)(*(int *)(param_2 + 0x1c8) + iVar6);
      iVar6 = iVar6 + 0x110;
      if (((*(int *)(pGVar8 + 0x14) != 0) || (*(int *)(pGVar8 + 0x6c) != 0)) ||
         (*(int *)(pGVar8 + 0xc4) != 0)) {
        local_34 = 3;
        FFileBase::Write(param_1,(uchar *)&local_34,4);
        local_34 = *(int *)(pGVar8 + 0x108);
        FFileBase::Write(param_1,(uchar *)&local_34,4);
        Save(param_1,pGVar8);
        Save(param_1,pGVar8 + 0x58);
        Save(param_1,pGVar8 + 0xb0);
        uVar7 = *(uint *)(param_2 + 0x1e8);
      }
    } while (uVar12 < uVar7);
  }
  uVar7 = *(uint *)(param_2 + 0x1ec);
  if (uVar7 != 0) {
    iVar6 = 0;
    uVar12 = 0;
    do {
      uVar12 = uVar12 + 1;
      pGVar8 = (GEAnimationTrack *)(*(int *)(param_2 + 0x1cc) + iVar6);
      iVar6 = iVar6 + 0x170;
      if (((*(int *)(pGVar8 + 0x14) != 0) || (*(int *)(pGVar8 + 0x6c) != 0)) ||
         ((*(int *)(pGVar8 + 0xc4) != 0 || (*(int *)(pGVar8 + 0x11c) != 0)))) {
        local_34 = 4;
        FFileBase::Write(param_1,(uchar *)&local_34,4);
        local_34 = *(int *)(pGVar8 + 0x160);
        iVar9 = *(int *)(pGVar8 + 0x168);
        iVar11 = *(int *)(pGVar8 + 0x164);
        FFileBase::Write(param_1,(uchar *)&local_34,4);
        local_34 = iVar11;
        FFileBase::Write(param_1,(uchar *)&local_34,4);
        local_34 = iVar9;
        FFileBase::Write(param_1,(uchar *)&local_34,4);
        Save(param_1,pGVar8);
        Save(param_1,pGVar8 + 0x58);
        Save(param_1,pGVar8 + 0xb0);
        Save(param_1,pGVar8 + 0x108);
        uVar7 = *(uint *)(param_2 + 0x1ec);
      }
    } while (uVar12 < uVar7);
  }
  uVar7 = *(uint *)(param_2 + 0x1f0);
  if (uVar7 != 0) {
    iVar6 = 0;
    uVar12 = 0;
    do {
      uVar12 = uVar12 + 1;
      pGVar8 = (GEAnimationTrack *)(*(int *)(param_2 + 0x1d0) + iVar6);
      iVar6 = iVar6 + 0x168;
      if (((*(int *)(pGVar8 + 0x14) != 0) || (*(int *)(pGVar8 + 0x6c) != 0)) ||
         ((*(int *)(pGVar8 + 0xc4) != 0 || (*(int *)(pGVar8 + 0x11c) != 0)))) {
        local_34 = 4;
        FFileBase::Write(param_1,(uchar *)&local_34,4);
        local_34 = *(int *)(pGVar8 + 0x160);
        FFileBase::Write(param_1,(uchar *)&local_34,4);
        Save(param_1,pGVar8);
        Save(param_1,pGVar8 + 0x58);
        Save(param_1,pGVar8 + 0xb0);
        Save(param_1,pGVar8 + 0x108);
        uVar7 = *(uint *)(param_2 + 0x1f0);
      }
    } while (uVar12 < uVar7);
  }
  uVar7 = *(uint *)(param_2 + 500);
  if (uVar7 != 0) {
    iVar6 = 0;
    uVar12 = 0;
    do {
      uVar12 = uVar12 + 1;
      pGVar8 = (GEAnimationTrack *)(*(int *)(param_2 + 0x1d4) + iVar6);
      iVar6 = iVar6 + 0x60;
      if (*(int *)(pGVar8 + 0x14) != 0) {
        local_34 = 1;
        FFileBase::Write(param_1,(uchar *)&local_34,4);
        local_34 = *(int *)(pGVar8 + 0x58);
        FFileBase::Write(param_1,(uchar *)&local_34,4);
        Save(param_1,pGVar8);
        uVar7 = *(uint *)(param_2 + 500);
      }
    } while (uVar12 < uVar7);
  }
  uVar7 = *(uint *)(param_2 + 0x1f8);
  if (uVar7 != 0) {
    iVar6 = 0;
    uVar12 = 0;
    do {
      uVar12 = uVar12 + 1;
      pGVar8 = (GEAnimationTrack *)(*(int *)(param_2 + 0x1d8) + iVar6);
      iVar6 = iVar6 + 0x60;
      if (*(int *)(pGVar8 + 0x14) != 0) {
        local_34 = 1;
        FFileBase::Write(param_1,(uchar *)&local_34,4);
        local_34 = *(int *)(pGVar8 + 0x58);
        FFileBase::Write(param_1,(uchar *)&local_34,4);
        Save(param_1,pGVar8);
        uVar7 = *(uint *)(param_2 + 0x1f8);
      }
    } while (uVar12 < uVar7);
  }
  LLogicScene::Save(param_1,(UArrayFixed *)(param_2 + 0x5b0));
  return;
}

