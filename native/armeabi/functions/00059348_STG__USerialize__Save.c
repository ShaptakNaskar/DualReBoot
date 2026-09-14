/* 00059348 | STG::USerialize::Save */

/* STG::USerialize::Save(STG::FFileBase*, STG::GEScene const&) */

void STG::USerialize::Save(FFileBase *param_1,GEScene *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  GEAnimationTrack *pGVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  local_34 = 0x1a;
  FFileBase::Write(param_1,(uchar *)&local_34,4);
  iVar2 = *(int *)(param_2 + 0x78c);
  local_34 = iVar2;
  FFileBase::Write(param_1,(uchar *)&local_34,4);
  if (iVar2 != 0) {
    iVar5 = 0;
    iVar7 = 0;
    do {
      iVar6 = *(int *)(param_2 + 0x788);
      iVar7 = iVar7 + 1;
      Save<char,int>(param_1,(UStringBase *)(iVar6 + iVar5));
      Save<char,int>(param_1,(UStringBase *)(iVar6 + iVar5) + 0x1c);
      iVar5 = iVar5 + 0x38;
    } while (iVar7 != iVar2);
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
    uVar3 = 0;
    do {
      Save(param_1,*(GEModel **)(*(int *)(param_2 + 0xb0) + uVar3 * 4));
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_2 + 0xa4));
    if (*(uint *)(param_2 + 0xa4) != 0) {
      uVar3 = 0;
      do {
        Save(param_1,(MMatrix *)(*(int *)(param_2 + 0xbc) + uVar3 * 0x40));
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)(param_2 + 0xa4));
    }
  }
  if (*(int *)(param_2 + 0xa8) != 0) {
    iVar2 = 0;
    uVar3 = 0;
    do {
      uVar3 = uVar3 + 1;
      Save(param_1,(GECamera *)(*(int *)(param_2 + 0xb4) + iVar2));
      iVar2 = iVar2 + 0x210;
    } while (uVar3 < *(uint *)(param_2 + 0xa8));
  }
  local_34 = *(int *)(param_2 + 0xac);
  FFileBase::Write(param_1,(uchar *)&local_34,4);
  if (*(int *)(param_2 + 0xac) != 0) {
    iVar2 = 0;
    uVar3 = 0;
    do {
      uVar3 = uVar3 + 1;
      Save(param_1,(GECameraSet *)(*(int *)(param_2 + 0xb8) + iVar2));
      iVar2 = iVar2 + 0x248;
    } while (uVar3 < *(uint *)(param_2 + 0xac));
  }
  local_34 = *(int *)(param_2 + 0xfc);
  FFileBase::Write(param_1,(uchar *)&local_34,4);
  if (*(int *)(param_2 + 0xa4) != 0) {
    uVar3 = 0;
    do {
      local_34 = *(int *)(*(int *)(param_2 + 0xf4) + uVar3 * 4);
      FFileBase::Write(param_1,(uchar *)&local_34,4);
      local_34 = *(int *)(*(int *)(param_2 + 0xf8) + uVar3 * 4);
      uVar3 = uVar3 + 1;
      FFileBase::Write(param_1,(uchar *)&local_34,4);
    } while (uVar3 < *(uint *)(param_2 + 0xa4));
  }
  local_34 = *(int *)(param_2 + 0x174);
  FFileBase::Write(param_1,(uchar *)&local_34,4);
  if (*(int *)(param_2 + 0x174) != 0) {
    iVar2 = 0;
    uVar3 = 0;
    do {
      local_34 = *(int *)(*(int *)(param_2 + 0x168) + uVar3 * 4);
      uVar3 = uVar3 + 1;
      FFileBase::Write(param_1,(uchar *)&local_34,4);
      Save(param_1,(GEVertexBlender *)(*(int *)(param_2 + 0x170) + iVar2));
      iVar2 = iVar2 + 0x24;
    } while (uVar3 < *(uint *)(param_2 + 0x174));
  }
  local_34 = *(int *)(param_2 + 0x184);
  FFileBase::Write(param_1,(uchar *)&local_34,4);
  if (*(int *)(param_2 + 0x184) != 0) {
    iVar2 = 0;
    uVar3 = 0;
    do {
      local_34 = *(int *)(*(int *)(param_2 + 0x178) + uVar3 * 4);
      uVar3 = uVar3 + 1;
      FFileBase::Write(param_1,(uchar *)&local_34,4);
      Save(param_1,(Mesh *)(*(int *)(param_2 + 0x180) + iVar2));
      iVar2 = iVar2 + 0x2c;
    } while (uVar3 < *(uint *)(param_2 + 0x184));
  }
  local_34 = *(int *)(param_2 + 0x114);
  FFileBase::Write(param_1,(uchar *)&local_34,4);
  if (*(int *)(param_2 + 0x114) != 0) {
    uVar3 = 0;
    do {
      local_34 = *(int *)(*(int *)(param_2 + 0x110) + uVar3 * 4);
      uVar3 = uVar3 + 1;
      FFileBase::Write(param_1,(uchar *)&local_34,4);
    } while (uVar3 < *(uint *)(param_2 + 0x114));
  }
  local_34 = *(int *)(param_2 + 0x18c);
  FFileBase::Write(param_1,(uchar *)&local_34,4);
  if (*(int *)(param_2 + 0x18c) != 0) {
    uVar3 = 0;
    do {
      local_34 = *(int *)(*(int *)(param_2 + 0x188) + uVar3 * 4);
      FFileBase::Write(param_1,(uchar *)&local_34,4);
      local_34 = *(int *)(*(int *)(param_2 + 400) + uVar3 * 4);
      uVar3 = uVar3 + 1;
      FFileBase::Write(param_1,(uchar *)&local_34,4);
    } while (uVar3 < *(uint *)(param_2 + 0x18c));
  }
  local_34 = *(int *)(param_2 + 0x19c);
  FFileBase::Write(param_1,(uchar *)&local_34,4);
  if (*(int *)(param_2 + 0x19c) != 0) {
    uVar3 = 0;
    do {
      local_34 = *(int *)(*(int *)(param_2 + 0x198) + uVar3 * 4);
      FFileBase::Write(param_1,(uchar *)&local_34,4);
      local_34 = *(int *)(*(int *)(param_2 + 0x1a0) + uVar3 * 4);
      uVar3 = uVar3 + 1;
      FFileBase::Write(param_1,(uchar *)&local_34,4);
    } while (uVar3 < *(uint *)(param_2 + 0x19c));
  }
  local_34 = *(int *)(param_2 + 300);
  FFileBase::Write(param_1,(uchar *)&local_34,4);
  if (*(int *)(param_2 + 300) != 0) {
    uVar3 = 0;
    do {
      local_34 = *(int *)(*(int *)(param_2 + 0x128) + uVar3 * 4);
      FFileBase::Write(param_1,(uchar *)&local_34,4);
      local_34 = *(int *)(*(int *)(param_2 + 0x130) + uVar3 * 4);
      uVar3 = uVar3 + 1;
      FFileBase::Write(param_1,(uchar *)&local_34,4);
    } while (uVar3 < *(uint *)(param_2 + 300));
  }
  local_34 = *(int *)(param_2 + 0x13c);
  FFileBase::Write(param_1,(uchar *)&local_34,4);
  if (*(int *)(param_2 + 0x13c) != 0) {
    uVar3 = 0;
    do {
      local_34 = *(int *)(*(int *)(param_2 + 0x138) + uVar3 * 4);
      FFileBase::Write(param_1,(uchar *)&local_34,4);
      puVar1 = (undefined1 *)(*(int *)(param_2 + 0x140) + uVar3);
      uVar3 = uVar3 + 1;
      local_30 = CONCAT31(local_30._1_3_,*puVar1);
      FFileBase::Write(param_1,(uchar *)&local_30,1);
    } while (uVar3 < *(uint *)(param_2 + 0x13c));
  }
  local_34 = *(int *)(param_2 + 0x14c);
  FFileBase::Write(param_1,(uchar *)&local_34,4);
  if (*(int *)(param_2 + 0x14c) != 0) {
    iVar2 = 0;
    uVar3 = 0;
    do {
      local_34 = *(int *)(*(int *)(param_2 + 0x148) + uVar3 * 4);
      iVar5 = 0;
      FFileBase::Write(param_1,(uchar *)&local_34,4);
      do {
        local_34 = *(int *)(*(int *)(param_2 + 0x150) + iVar5 * 4 + iVar2);
        iVar5 = iVar5 + 1;
        FFileBase::Write(param_1,(uchar *)&local_34,4);
      } while (iVar5 != 0xc);
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 0x30;
    } while (uVar3 < *(uint *)(param_2 + 0x14c));
  }
  local_34 = *(int *)(param_2 + 0x15c);
  FFileBase::Write(param_1,(uchar *)&local_34,4);
  if (*(int *)(param_2 + 0x15c) != 0) {
    uVar3 = 0;
    do {
      local_34 = *(int *)(*(int *)(param_2 + 0x158) + uVar3 * 4);
      FFileBase::Write(param_1,(uchar *)&local_34,4);
      local_34 = *(int *)(*(int *)(param_2 + 0x160) + uVar3 * 4);
      uVar3 = uVar3 + 1;
      FFileBase::Write(param_1,(uchar *)&local_34,4);
    } while (uVar3 < *(uint *)(param_2 + 0x15c));
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
  uVar3 = *(uint *)(param_2 + 0x1dc);
  if (uVar3 != 0) {
    iVar2 = 0;
    uVar8 = 0;
    do {
      uVar8 = uVar8 + 1;
      pGVar4 = (GEAnimationTrack *)(*(int *)(param_2 + 0x1bc) + iVar2);
      iVar2 = iVar2 + 0x110;
      if (((*(int *)(pGVar4 + 0x14) != 0) || (*(int *)(pGVar4 + 0x6c) != 0)) ||
         (*(int *)(pGVar4 + 0xc4) != 0)) {
        local_34 = 3;
        FFileBase::Write(param_1,(uchar *)&local_34,4);
        local_34 = *(int *)(pGVar4 + 0x108);
        FFileBase::Write(param_1,(uchar *)&local_34,4);
        Save(param_1,pGVar4);
        Save(param_1,pGVar4 + 0x58);
        Save(param_1,pGVar4 + 0xb0);
        uVar3 = *(uint *)(param_2 + 0x1dc);
      }
    } while (uVar8 < uVar3);
  }
  uVar3 = *(uint *)(param_2 + 0x1e0);
  if (uVar3 != 0) {
    iVar2 = 0;
    uVar8 = 0;
    do {
      uVar8 = uVar8 + 1;
      pGVar4 = (GEAnimationTrack *)(*(int *)(param_2 + 0x1c0) + iVar2);
      iVar2 = iVar2 + 0x110;
      if (((*(int *)(pGVar4 + 0x14) != 0) || (*(int *)(pGVar4 + 0x6c) != 0)) ||
         (*(int *)(pGVar4 + 0xc4) != 0)) {
        local_34 = 3;
        FFileBase::Write(param_1,(uchar *)&local_34,4);
        local_34 = *(int *)(pGVar4 + 0x108);
        FFileBase::Write(param_1,(uchar *)&local_34,4);
        Save(param_1,pGVar4);
        Save(param_1,pGVar4 + 0x58);
        Save(param_1,pGVar4 + 0xb0);
        uVar3 = *(uint *)(param_2 + 0x1e0);
      }
    } while (uVar8 < uVar3);
  }
  uVar3 = *(uint *)(param_2 + 0x1e4);
  if (uVar3 != 0) {
    iVar2 = 0;
    uVar8 = 0;
    do {
      uVar8 = uVar8 + 1;
      pGVar4 = (GEAnimationTrack *)(*(int *)(param_2 + 0x1c4) + iVar2);
      iVar2 = iVar2 + 0x110;
      if (((*(int *)(pGVar4 + 0x14) != 0) || (*(int *)(pGVar4 + 0x6c) != 0)) ||
         (*(int *)(pGVar4 + 0xc4) != 0)) {
        local_34 = 3;
        FFileBase::Write(param_1,(uchar *)&local_34,4);
        local_34 = *(int *)(pGVar4 + 0x108);
        FFileBase::Write(param_1,(uchar *)&local_34,4);
        Save(param_1,pGVar4);
        Save(param_1,pGVar4 + 0x58);
        Save(param_1,pGVar4 + 0xb0);
        uVar3 = *(uint *)(param_2 + 0x1e4);
      }
    } while (uVar8 < uVar3);
  }
  uVar3 = *(uint *)(param_2 + 0x1e8);
  if (uVar3 != 0) {
    iVar2 = 0;
    uVar8 = 0;
    do {
      uVar8 = uVar8 + 1;
      pGVar4 = (GEAnimationTrack *)(*(int *)(param_2 + 0x1c8) + iVar2);
      iVar2 = iVar2 + 0x110;
      if (((*(int *)(pGVar4 + 0x14) != 0) || (*(int *)(pGVar4 + 0x6c) != 0)) ||
         (*(int *)(pGVar4 + 0xc4) != 0)) {
        local_34 = 3;
        FFileBase::Write(param_1,(uchar *)&local_34,4);
        local_34 = *(int *)(pGVar4 + 0x108);
        FFileBase::Write(param_1,(uchar *)&local_34,4);
        Save(param_1,pGVar4);
        Save(param_1,pGVar4 + 0x58);
        Save(param_1,pGVar4 + 0xb0);
        uVar3 = *(uint *)(param_2 + 0x1e8);
      }
    } while (uVar8 < uVar3);
  }
  uVar3 = *(uint *)(param_2 + 0x1ec);
  if (uVar3 != 0) {
    iVar2 = 0;
    uVar8 = 0;
    do {
      uVar8 = uVar8 + 1;
      pGVar4 = (GEAnimationTrack *)(*(int *)(param_2 + 0x1cc) + iVar2);
      iVar2 = iVar2 + 0x170;
      if (((*(int *)(pGVar4 + 0x14) != 0) || (*(int *)(pGVar4 + 0x6c) != 0)) ||
         ((*(int *)(pGVar4 + 0xc4) != 0 || (*(int *)(pGVar4 + 0x11c) != 0)))) {
        local_34 = 4;
        FFileBase::Write(param_1,(uchar *)&local_34,4);
        local_34 = *(int *)(pGVar4 + 0x160);
        iVar5 = *(int *)(pGVar4 + 0x168);
        iVar7 = *(int *)(pGVar4 + 0x164);
        FFileBase::Write(param_1,(uchar *)&local_34,4);
        local_34 = iVar7;
        FFileBase::Write(param_1,(uchar *)&local_34,4);
        local_34 = iVar5;
        FFileBase::Write(param_1,(uchar *)&local_34,4);
        Save(param_1,pGVar4);
        Save(param_1,pGVar4 + 0x58);
        Save(param_1,pGVar4 + 0xb0);
        Save(param_1,pGVar4 + 0x108);
        uVar3 = *(uint *)(param_2 + 0x1ec);
      }
    } while (uVar8 < uVar3);
  }
  uVar3 = *(uint *)(param_2 + 0x1f0);
  if (uVar3 != 0) {
    iVar2 = 0;
    uVar8 = 0;
    do {
      uVar8 = uVar8 + 1;
      pGVar4 = (GEAnimationTrack *)(*(int *)(param_2 + 0x1d0) + iVar2);
      iVar2 = iVar2 + 0x168;
      if (((*(int *)(pGVar4 + 0x14) != 0) || (*(int *)(pGVar4 + 0x6c) != 0)) ||
         ((*(int *)(pGVar4 + 0xc4) != 0 || (*(int *)(pGVar4 + 0x11c) != 0)))) {
        local_34 = 4;
        FFileBase::Write(param_1,(uchar *)&local_34,4);
        local_34 = *(int *)(pGVar4 + 0x160);
        FFileBase::Write(param_1,(uchar *)&local_34,4);
        Save(param_1,pGVar4);
        Save(param_1,pGVar4 + 0x58);
        Save(param_1,pGVar4 + 0xb0);
        Save(param_1,pGVar4 + 0x108);
        uVar3 = *(uint *)(param_2 + 0x1f0);
      }
    } while (uVar8 < uVar3);
  }
  uVar3 = *(uint *)(param_2 + 500);
  if (uVar3 != 0) {
    iVar2 = 0;
    uVar8 = 0;
    do {
      uVar8 = uVar8 + 1;
      pGVar4 = (GEAnimationTrack *)(*(int *)(param_2 + 0x1d4) + iVar2);
      iVar2 = iVar2 + 0x60;
      if (*(int *)(pGVar4 + 0x14) != 0) {
        local_34 = 1;
        FFileBase::Write(param_1,(uchar *)&local_34,4);
        local_34 = *(int *)(pGVar4 + 0x58);
        FFileBase::Write(param_1,(uchar *)&local_34,4);
        Save(param_1,pGVar4);
        uVar3 = *(uint *)(param_2 + 500);
      }
    } while (uVar8 < uVar3);
  }
  uVar3 = *(uint *)(param_2 + 0x1f8);
  if (uVar3 != 0) {
    iVar2 = 0;
    uVar8 = 0;
    do {
      uVar8 = uVar8 + 1;
      pGVar4 = (GEAnimationTrack *)(*(int *)(param_2 + 0x1d8) + iVar2);
      iVar2 = iVar2 + 0x60;
      if (*(int *)(pGVar4 + 0x14) != 0) {
        local_34 = 1;
        FFileBase::Write(param_1,(uchar *)&local_34,4);
        local_34 = *(int *)(pGVar4 + 0x58);
        FFileBase::Write(param_1,(uchar *)&local_34,4);
        Save(param_1,pGVar4);
        uVar3 = *(uint *)(param_2 + 0x1f8);
      }
    } while (uVar8 < uVar3);
  }
  LLogicScene::Save(param_1,(UArrayFixed *)(param_2 + 0x5b0));
  return;
}

