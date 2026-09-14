/* 00042c44 | STG::GEScene::Internal_UpdateLocalTimeOffsets */

/* STG::GEScene::Internal_UpdateLocalTimeOffsets() */

void __thiscall STG::GEScene::Internal_UpdateLocalTimeOffsets(GEScene *this)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  float fVar9;
  longlong lVar10;
  undefined4 local_38;
  undefined4 uStack_34;
  
  if ((*(int *)(this + 0x308) != 0 || *(int *)(this + 0x30c) != 0) &&
     (fVar1 = (float)__floatundisf(), *(int *)(this + 0x1f8) != 0)) {
    iVar7 = 0;
    uVar8 = 0;
    do {
      iVar2 = *(int *)(this + 0x1d8) + iVar7;
      uVar8 = uVar8 + 1;
      iVar6 = *(int *)(iVar2 + 0x58);
      iVar7 = iVar7 + 0x60;
      local_38 = 0;
      uStack_34 = 0;
      fVar9 = (float)GEAnimationTrack::Evaluate
                               (iVar2,4,this + 0x238,*(undefined1 *)(*(int *)(this + 0x118) + iVar6)
                                ,&local_38);
      if (0.0 < fVar9) {
        lVar10 = __fixunssfdi(fVar9 * fVar1);
        uVar5 = *(uint *)(*(int *)(this + 0x100) + iVar6 * 4);
        iVar4 = *(int *)(this + 0x1a8);
        uVar3 = *(uint *)(this + 0x1ac);
        *(longlong *)(iVar4 + iVar6 * 8) = lVar10 + *(longlong *)(iVar4 + iVar6 * 8);
        iVar2 = uVar5 * 8;
        if (uVar5 < uVar3) {
          *(longlong *)(iVar4 + iVar2) = lVar10 + *(longlong *)(iVar4 + iVar2);
        }
      }
    } while (uVar8 < *(uint *)(this + 0x1f8));
  }
  return;
}

