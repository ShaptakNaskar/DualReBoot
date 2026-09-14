/* 000493a0 | STG::GEScene::Internal_UpdateLocalTimeOffsets */

/* STG::GEScene::Internal_UpdateLocalTimeOffsets() */

void __thiscall STG::GEScene::Internal_UpdateLocalTimeOffsets(GEScene *this)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  float fVar8;
  uint uVar9;
  int iVar10;
  int unaff_EBX;
  longdouble lVar11;
  undefined8 uVar12;
  uint local_44;
  int local_40;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 uStack_14;
  
  uStack_14 = 0x493a9;
  FUN_0002e044();
  if (*(int *)(this + 0x300) != 0 || *(int *)(this + 0x2fc) != 0) {
    fVar8 = (float)*(longlong *)(this + 0x2fc);
    if (*(int *)(this + 0x300) < 0) {
      fVar8 = fVar8 + *(float *)(unaff_EBX + 0x3e303);
    }
    if (*(int *)(this + 0x1f8) != 0) {
      local_40 = 0;
      local_44 = 0;
      do {
        iVar4 = *(int *)((GEAnimationTrack *)(local_40 + *(int *)(this + 0x1d8)) + 0x54);
        local_24 = 0;
        local_20 = 0;
        lVar11 = (longdouble)
                 GEAnimationTrack::Evaluate
                           ((GEAnimationTrack *)(local_40 + *(int *)(this + 0x1d8)),4,this + 0x22c,
                            *(undefined1 *)(*(int *)(this + 0x118) + iVar4),&local_24);
        if (0.0 < (float)lVar11) {
          uVar12 = __fixunssfdi((float)lVar11 * fVar8);
          iVar10 = (int)((ulonglong)uVar12 >> 0x20);
          uVar9 = (uint)uVar12;
          iVar5 = *(int *)(this + 0x1a8);
          iVar6 = *(int *)(this + 0x100);
          puVar2 = (uint *)(iVar5 + iVar4 * 8);
          uVar3 = *puVar2;
          *puVar2 = *puVar2 + uVar9;
          uVar7 = *(uint *)(iVar6 + iVar4 * 4);
          piVar1 = (int *)(iVar5 + 4 + iVar4 * 8);
          *piVar1 = *piVar1 + iVar10 + (uint)CARRY4(uVar3,uVar9);
          if (uVar7 < *(uint *)(this + 0x1ac)) {
            puVar2 = (uint *)(iVar5 + uVar7 * 8);
            uVar3 = *puVar2;
            *puVar2 = *puVar2 + uVar9;
            piVar1 = (int *)(iVar5 + 4 + uVar7 * 8);
            *piVar1 = *piVar1 + iVar10 + (uint)CARRY4(uVar3,uVar9);
          }
        }
        local_44 = local_44 + 1;
        local_40 = local_40 + 0x58;
      } while (local_44 < *(uint *)(this + 0x1f8));
    }
  }
  return;
}

