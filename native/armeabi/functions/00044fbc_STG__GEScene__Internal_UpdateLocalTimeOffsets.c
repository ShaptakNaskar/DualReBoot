/* 00044fbc | STG::GEScene::Internal_UpdateLocalTimeOffsets */

/* STG::GEScene::Internal_UpdateLocalTimeOffsets() */

void __thiscall STG::GEScene::Internal_UpdateLocalTimeOffsets(GEScene *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  if ((*(int *)(this + 0x308) != 0 || *(int *)(this + 0x30c) != 0) &&
     (uVar1 = __floatundisf(), *(int *)(this + 0x1f8) != 0)) {
    iVar6 = 0;
    uVar7 = 0;
    do {
      iVar5 = *(int *)(*(int *)(this + 0x1d8) + iVar6 + 0x58);
      local_30 = 0;
      uStack_2c = 0;
      uVar2 = GEAnimationTrack::Evaluate
                        (*(int *)(this + 0x1d8) + iVar6,4,this + 0x238,
                         *(undefined1 *)(*(int *)(this + 0x118) + iVar5),&local_30);
      iVar3 = __aeabi_fcmpgt(uVar2,0);
      uVar7 = uVar7 + 1;
      if (iVar3 != 0) {
        __mulsf3(uVar2,uVar1);
        lVar9 = __fixunssfdi();
        iVar3 = *(int *)(this + 0x1a8);
        uVar4 = *(uint *)(*(int *)(this + 0x100) + iVar5 * 4);
        uVar8 = *(uint *)(this + 0x1ac);
        *(longlong *)(iVar3 + iVar5 * 8) = lVar9 + *(longlong *)(iVar3 + iVar5 * 8);
        if (uVar4 < uVar8) {
          iVar5 = uVar4 * 8;
          *(longlong *)(iVar3 + iVar5) = lVar9 + *(longlong *)(iVar3 + iVar5);
        }
      }
      iVar6 = iVar6 + 0x60;
    } while (uVar7 < *(uint *)(this + 0x1f8));
  }
  return;
}

