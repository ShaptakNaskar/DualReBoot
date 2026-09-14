/* 000364c0 | STG::GEAnimationTrack::Evaluate */

/* STG::GEAnimationTrack::Evaluate(STG::GEAnimationTimeData::EDriver, STG::GEAnimationTimeData
   const&, bool, STG::UTimeValue<unsigned long long, 1ul> const&, unsigned long&, float&) const */

undefined4 __thiscall
STG::GEAnimationTrack::Evaluate
          (GEAnimationTrack *this,int param_2,int param_3,char param_4,uint *param_5,int *param_6,
          float *param_7)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  float fVar4;
  undefined4 uVar5;
  uint uVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  int unaff_EBX;
  uint *puVar10;
  uint uVar11;
  bool bVar12;
  longlong lVar13;
  uint local_54;
  uint local_50;
  int local_28;
  
  uVar5 = FUN_0002e044();
  if (*(int *)(this + 0x14) != 0) {
    iVar8 = *(int *)(this + 4);
    if (0xb < *(int *)(this + 4)) {
      iVar8 = param_2;
    }
    puVar10 = (uint *)(iVar8 * 0x10 + param_3);
    uVar11 = *param_5 + *puVar10;
    iVar1 = param_5[1] + puVar10[1] + (uint)CARRY4(*param_5,*puVar10);
    lVar13 = CONCAT44(iVar1,uVar11);
    if (iVar8 == 2 || iVar8 == 4) {
      if (this[0x50] == (GEAnimationTrack)0x0) {
        if (iVar1 != 0 || uVar11 != 0) {
          cVar7 = '\x01';
          if (iVar8 == 4) {
            cVar7 = param_4;
          }
          uVar6 = *(uint *)(param_3 + 0xc0);
          iVar8 = *(int *)(param_3 + 0xc4);
          uVar9 = (iVar8 - iVar1) - (uint)(uVar6 < uVar11);
          if ((*(uint *)(this + 0x4c) <= uVar9) &&
             (((*(uint *)(this + 0x4c) < uVar9 || (*(uint *)(this + 0x48) < uVar6 - uVar11)) &&
              (cVar7 != '\0')))) {
            this[0x50] = (GEAnimationTrack)0x1;
            *(uint *)(this + 0x40) = uVar6;
            *(int *)(this + 0x44) = iVar8;
          }
          lVar13 = *(longlong *)(this + 0x30);
        }
      }
      else {
        uVar11 = *(uint *)(param_3 + 0xc0);
        iVar8 = *(int *)(param_3 + 0xc4);
        uVar6 = uVar11 - *(uint *)(this + 0x40);
        uVar9 = (iVar8 - *(int *)(this + 0x44)) - (uint)(uVar11 < *(uint *)(this + 0x40));
        lVar13 = CONCAT44(uVar9,uVar6);
        if ((*(uint *)(this + 0x34) <= uVar9) &&
           ((*(uint *)(this + 0x34) < uVar9 ||
            (lVar13 = CONCAT44(uVar9,uVar6), *(uint *)(this + 0x30) <= uVar6)))) {
          this[0x50] = (GEAnimationTrack)0x0;
          *(uint *)(this + 0x48) = uVar11;
          *(int *)(this + 0x4c) = iVar8;
          lVar13 = CONCAT44(uVar9,uVar6);
        }
      }
    }
    else {
      uVar6 = *(uint *)(this + 0x34);
      uVar9 = *(uint *)(this + 0x30);
      uVar3 = puVar10[3];
      if ((uVar6 <= uVar3) && ((uVar6 < uVar3 || (uVar9 < puVar10[2])))) {
        uVar6 = uVar3;
        uVar9 = puVar10[2];
      }
      lVar13 = __umoddi3(uVar11 + *(uint *)(this + 8),
                         iVar1 + *(int *)(this + 0xc) + (uint)CARRY4(uVar11,*(uint *)(this + 8)),
                         uVar9,uVar6);
    }
    local_50 = (uint)((ulonglong)lVar13 >> 0x20);
    local_54 = (uint)lVar13;
    if ((local_50 < *(uint *)(this + 0x2c)) ||
       ((((local_50 <= *(uint *)(this + 0x2c) && (local_54 < *(uint *)(this + 0x28))) ||
         (*(uint *)(this + 0x34) < local_50)) ||
        ((*(uint *)(this + 0x34) == local_50 && (*(uint *)(this + 0x30) <= local_54)))))) {
      uVar5 = 0;
    }
    else {
      puVar10 = *(uint **)(this + 0x18);
      iVar8 = 0;
      local_28 = *(int *)(this + 0x10);
      uVar11 = puVar10[1];
      bVar12 = uVar11 < local_50;
      uVar6 = *puVar10;
      if (uVar11 <= local_50) goto LAB_0003660e;
      do {
        do {
          iVar8 = iVar8 + 1;
          local_28 = local_28 + 0x3c;
          uVar11 = puVar10[iVar8 * 2 + 1];
          bVar12 = uVar11 < local_50;
          uVar6 = puVar10[iVar8 * 2];
        } while (!bVar12 && uVar11 != local_50);
LAB_0003660e:
      } while (((!bVar12) && (local_54 < uVar6)) ||
              ((uVar9 = *(uint *)(*(int *)(this + 0x20) + 4 + iVar8 * 8), uVar9 <= local_50 &&
               ((uVar9 < local_50 || (*(uint *)(*(int *)(this + 0x20) + iVar8 * 8) <= local_54))))))
      ;
      fVar4 = (float)(lVar13 - CONCAT44(uVar11,uVar6));
      if ((int)((local_50 - uVar11) - (uint)(local_54 < uVar6)) < 0) {
        fVar4 = fVar4 + *(float *)(unaff_EBX + 0x511cc);
      }
      fVar2 = *(float *)(local_28 + 0x38);
      *param_6 = iVar8;
      *param_7 = fVar4 * fVar2;
      uVar5 = 1;
    }
  }
  return uVar5;
}

