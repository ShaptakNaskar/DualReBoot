/* 00038e58 | STG::GEModel::CalcBoundingData */

/* STG::GEModel::CalcBoundingData(STG::MMatrix const&, STG::UArrayFixed<STG::MVector3, unsigned
   long> const&) */

void __thiscall STG::GEModel::CalcBoundingData(GEModel *this,MMatrix *param_1,UArrayFixed *param_2)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_88;
  float local_84;
  float local_80;
  float local_78;
  float local_74;
  float local_70;
  float local_68;
  float local_64;
  float local_60;
  
  *(undefined4 *)(this + 0x60) = 0xff7fffff;
  *(undefined4 *)(this + 100) = 0xff7fffff;
  *(undefined4 *)(this + 0x68) = 0xff7fffff;
  *(undefined4 *)(this + 0x54) = 0x7f7fffff;
  *(undefined4 *)(this + 0x58) = 0x7f7fffff;
  *(undefined4 *)(this + 0x5c) = 0x7f7fffff;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  uVar2 = *(uint *)(param_2 + 4);
  *(undefined4 *)(this + 0x78) = 0;
  if (uVar2 == 0) {
    fVar9 = 0.0;
    local_ac = 3.4028235e+38;
    fVar18 = -3.4028235e+38;
    fVar6 = 0.0;
    fVar8 = 0.0;
    fVar7 = 0.0;
    local_a4 = 3.4028235e+38;
    local_a0 = 3.4028235e+38;
    local_a8 = -3.4028235e+38;
    local_9c = -3.4028235e+38;
  }
  else {
    iVar4 = 0;
    uVar3 = 0;
    local_ac = 3.4028235e+38;
    fVar18 = -3.4028235e+38;
    local_a4 = 3.4028235e+38;
    local_a0 = 3.4028235e+38;
    local_a8 = -3.4028235e+38;
    uVar19 = 0;
    local_9c = -3.4028235e+38;
    uVar21 = 0;
    uVar20 = 0;
    local_b0 = 0.0;
    do {
      pfVar1 = (float *)(*(int *)param_2 + iVar4);
      fVar15 = *pfVar1;
      fVar16 = pfVar1[1];
      fVar14 = *(float *)param_1 * fVar15;
      fVar17 = pfVar1[2];
      fVar12 = *(float *)(param_1 + 0x10) * fVar16;
      fVar11 = *(float *)(param_1 + 4) * fVar15;
      fVar9 = *(float *)(param_1 + 0x14) * fVar16;
      fVar15 = *(float *)(param_1 + 8) * fVar15;
      fVar16 = *(float *)(param_1 + 0x18) * fVar16;
      fVar13 = *(float *)(param_1 + 0x20) * fVar17;
      fVar10 = *(float *)(param_1 + 0x24) * fVar17;
      fVar17 = *(float *)(param_1 + 0x28) * fVar17;
      fVar8 = fVar14 + fVar12 + *(float *)(param_1 + 0x30) + fVar13;
      fVar7 = fVar11 + fVar9 + *(float *)(param_1 + 0x34) + fVar10;
      fVar6 = fVar15 + fVar16 + *(float *)(param_1 + 0x38) + fVar17;
      if (local_9c < fVar8) {
        local_9c = fVar8;
      }
      if (local_a8 < fVar7) {
        local_a8 = fVar7;
      }
      if (fVar18 < fVar6) {
        fVar18 = fVar6;
      }
      if (fVar8 < local_a0) {
        local_a0 = fVar8;
      }
      if (fVar7 < local_a4) {
        local_a4 = fVar7;
      }
      if (fVar6 < local_ac) {
        local_ac = fVar6;
      }
      if (uVar3 < uVar2) {
        pfVar1 = (float *)(*(int *)param_2 + iVar4 + 0x14);
        uVar5 = uVar3;
        while( true ) {
          uVar5 = uVar5 + 1;
          fVar13 = fVar14 + fVar12 + *(float *)(param_1 + 0x30) + fVar13;
          fVar12 = fVar13 - fVar8;
          fVar10 = fVar11 + fVar9 + *(float *)(param_1 + 0x34) + fVar10;
          fVar9 = fVar10 - fVar7;
          fVar17 = fVar15 + fVar16 + *(float *)(param_1 + 0x38) + fVar17;
          fVar11 = fVar17 - fVar6;
          fVar9 = fVar12 * fVar12 + fVar9 * fVar9 + fVar11 * fVar11;
          if (local_b0 < fVar9) {
            uVar21 = CONCAT44(fVar10,fVar13);
            uVar20 = CONCAT44(fVar17,fVar7);
            uVar19 = CONCAT44(fVar6,fVar8);
            local_b0 = fVar9;
          }
          if (uVar2 <= uVar5) break;
          fVar17 = *pfVar1;
          fVar15 = pfVar1[-2];
          fVar16 = pfVar1[-1];
          fVar14 = *(float *)param_1 * fVar15;
          fVar12 = *(float *)(param_1 + 0x10) * fVar16;
          fVar13 = *(float *)(param_1 + 0x20) * fVar17;
          fVar11 = *(float *)(param_1 + 4) * fVar15;
          fVar9 = *(float *)(param_1 + 0x14) * fVar16;
          fVar10 = *(float *)(param_1 + 0x24) * fVar17;
          fVar15 = *(float *)(param_1 + 8) * fVar15;
          fVar16 = *(float *)(param_1 + 0x18) * fVar16;
          fVar17 = *(float *)(param_1 + 0x28) * fVar17;
          pfVar1 = pfVar1 + 3;
        }
      }
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + 0xc;
    } while (uVar3 != uVar2);
    fVar11 = (float)uVar20;
    fVar8 = fVar11 + ((float)((ulonglong)uVar21 >> 0x20) - fVar11) * 0.5;
    fVar9 = (float)uVar19;
    fVar7 = fVar9 + ((float)uVar21 - fVar9) * 0.5;
    fVar10 = (float)((ulonglong)uVar19 >> 0x20);
    fVar6 = fVar10 + ((float)((ulonglong)uVar20 >> 0x20) - fVar10) * 0.5;
    fVar9 = SQRT((fVar11 - fVar8) * (fVar11 - fVar8) + (fVar9 - fVar7) * (fVar9 - fVar7) +
                 (fVar10 - fVar6) * (fVar10 - fVar6));
  }
  MMatrix::ComputeInverse(param_1,(MMatrix *)&local_98);
  *(float *)(this + 0x78) = fVar9;
  *(float *)(this + 0x60) = local_a8 * local_88 + local_9c * local_98 + local_68 + fVar18 * local_78
  ;
  *(float *)(this + 100) = local_a8 * local_84 + local_9c * local_94 + local_64 + fVar18 * local_74;
  *(float *)(this + 0x68) = local_a8 * local_80 + local_9c * local_90 + local_60 + fVar18 * local_70
  ;
  *(float *)(this + 0x54) =
       local_a4 * local_88 + local_a0 * local_98 + local_68 + local_ac * local_78;
  *(float *)(this + 0x58) =
       local_a4 * local_84 + local_a0 * local_94 + local_64 + local_ac * local_74;
  *(float *)(this + 0x5c) =
       local_a4 * local_80 + local_a0 * local_90 + local_60 + local_ac * local_70;
  *(float *)(this + 0x6c) = fVar8 * local_88 + fVar7 * local_98 + local_68 + fVar6 * local_78;
  *(float *)(this + 0x70) = fVar8 * local_84 + fVar7 * local_94 + local_64 + fVar6 * local_74;
  *(float *)(this + 0x74) = fVar8 * local_80 + fVar7 * local_90 + local_60 + fVar6 * local_70;
  return;
}

