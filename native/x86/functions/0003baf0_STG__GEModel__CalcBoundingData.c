/* 0003baf0 | STG::GEModel::CalcBoundingData */

/* STG::GEModel::CalcBoundingData(STG::MMatrix const&, STG::UArrayFixed<STG::MVector3, unsigned
   long> const&) */

void __thiscall STG::GEModel::CalcBoundingData(GEModel *this,MMatrix *param_1,UArrayFixed *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float *pfVar4;
  undefined4 uVar5;
  uint uVar6;
  int unaff_EBX;
  uint uVar7;
  int iVar8;
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
  float fVar19;
  undefined8 uVar20;
  float local_dc;
  float local_d0;
  float local_bc;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_5c;
  float local_58;
  float local_54;
  float local_4c;
  float local_48;
  float local_44;
  float local_3c;
  float local_38;
  float local_34;
  float local_2c;
  float local_28;
  float local_24;
  undefined4 uStack_14;
  
  uStack_14 = 0x3bb00;
  uVar20 = FUN_0002e044();
  uVar5 = (undefined4)((ulonglong)uVar20 >> 0x20);
  local_bc = (float)uVar20;
  uVar1 = *(uint *)(param_2 + 4);
  *(undefined4 *)(this + 0x60) = 0xff7fffff;
  *(undefined4 *)(this + 100) = 0xff7fffff;
  *(undefined4 *)(this + 0x68) = 0xff7fffff;
  *(undefined4 *)(this + 0x54) = uVar5;
  *(undefined4 *)(this + 0x58) = uVar5;
  *(undefined4 *)(this + 0x5c) = uVar5;
  *(float *)(this + 0x6c) = local_bc;
  *(float *)(this + 0x70) = local_bc;
  *(float *)(this + 0x74) = local_bc;
  *(float *)(this + 0x78) = local_bc;
  if (uVar1 == 0) {
    local_78 = -3.4028235e+38;
    local_6c = -3.4028235e+38;
    local_68 = -3.4028235e+38;
    uVar2 = uVar20;
    uVar3 = uVar20;
  }
  else {
    local_78 = -3.4028235e+38;
    iVar8 = 0;
    uVar7 = 0;
    local_6c = -3.4028235e+38;
    local_68 = -3.4028235e+38;
    local_94 = local_bc;
    local_90 = local_bc;
    local_8c = local_bc;
    local_88 = local_bc;
    uVar2 = uVar20;
    uVar3 = uVar20;
    do {
      local_70 = (float)((ulonglong)uVar3 >> 0x20);
      local_98 = (float)uVar3;
      local_74 = (float)((ulonglong)uVar2 >> 0x20);
      local_9c = (float)uVar2;
      local_7c = (float)((ulonglong)uVar20 >> 0x20);
      local_d0 = (float)uVar20;
      pfVar4 = (float *)(*(int *)param_2 + iVar8);
      fVar11 = *pfVar4;
      fVar10 = pfVar4[1];
      fVar16 = *(float *)(param_1 + 0x10) * fVar10;
      local_dc = *(float *)param_1 * fVar11;
      fVar9 = pfVar4[2];
      fVar19 = *(float *)(param_1 + 0x14) * fVar10;
      fVar10 = fVar10 * *(float *)(param_1 + 0x18);
      fVar18 = *(float *)(param_1 + 0x24) * fVar9;
      fVar12 = *(float *)(param_1 + 0x20) * fVar9;
      fVar9 = fVar9 * *(float *)(param_1 + 0x28);
      fVar17 = local_dc + fVar16 + *(float *)(param_1 + 0x30) + fVar12;
      fVar13 = *(float *)(param_1 + 4) * fVar11;
      fVar11 = fVar11 * *(float *)(param_1 + 8);
      if (local_68 <= fVar17) {
        local_68 = fVar17;
      }
      fVar14 = fVar13 + fVar19 + *(float *)(param_1 + 0x34) + fVar18;
      fVar15 = fVar11 + fVar10 + *(float *)(param_1 + 0x38) + fVar9;
      if (local_6c <= fVar14) {
        local_6c = fVar14;
      }
      if (local_78 <= fVar15) {
        local_78 = fVar15;
      }
      if (fVar17 <= local_70) {
        local_70 = fVar17;
      }
      if (fVar14 <= local_74) {
        local_74 = fVar14;
      }
      if (fVar15 <= local_7c) {
        local_7c = fVar15;
      }
      if (uVar7 < uVar1) {
        pfVar4 = (float *)(*(int *)param_2 + 0x14 + iVar8);
        uVar6 = uVar7;
        while( true ) {
          fVar12 = fVar16 + local_dc + *(float *)(param_1 + 0x30) + fVar12;
          fVar18 = fVar13 + fVar19 + *(float *)(param_1 + 0x34) + fVar18;
          fVar9 = fVar11 + fVar10 + *(float *)(param_1 + 0x38) + fVar9;
          fVar11 = fVar18 - fVar14;
          fVar13 = fVar12 - fVar17;
          fVar10 = fVar9 - fVar15;
          fVar11 = fVar11 * fVar11 + fVar13 * fVar13 + fVar10 * fVar10;
          if (local_d0 < fVar11) {
            local_d0 = fVar11;
            local_9c = fVar12;
            local_98 = fVar15;
            local_94 = fVar14;
            local_90 = fVar17;
            local_8c = fVar9;
            local_88 = fVar18;
          }
          uVar6 = uVar6 + 1;
          if (uVar1 <= uVar6) break;
          fVar11 = pfVar4[-2];
          local_dc = *(float *)param_1 * fVar11;
          fVar9 = *pfVar4;
          fVar10 = pfVar4[-1];
          pfVar4 = pfVar4 + 3;
          fVar16 = *(float *)(param_1 + 0x10) * fVar10;
          fVar12 = *(float *)(param_1 + 0x20) * fVar9;
          fVar13 = *(float *)(param_1 + 4) * fVar11;
          fVar19 = *(float *)(param_1 + 0x14) * fVar10;
          fVar18 = *(float *)(param_1 + 0x24) * fVar9;
          fVar11 = fVar11 * *(float *)(param_1 + 8);
          fVar10 = fVar10 * *(float *)(param_1 + 0x18);
          fVar9 = fVar9 * *(float *)(param_1 + 0x28);
        }
      }
      uVar3 = CONCAT44(local_70,local_98);
      uVar2 = CONCAT44(local_74,local_9c);
      uVar20 = CONCAT44(local_7c,local_d0);
      uVar7 = uVar7 + 1;
      iVar8 = iVar8 + 0xc;
    } while (uVar7 != uVar1);
    fVar11 = *(float *)(unaff_EBX + 0x4bbd0);
    fVar10 = (local_88 - local_94) * fVar11 + local_94;
    fVar9 = (local_9c - local_90) * fVar11 + local_90;
    local_94 = local_94 - fVar10;
    fVar11 = (local_8c - local_98) * fVar11 + local_98;
    uVar20 = CONCAT44(local_7c,fVar11);
    local_90 = local_90 - fVar9;
    local_98 = local_98 - fVar11;
    local_bc = SQRT(local_94 * local_94 + local_90 * local_90 + local_98 * local_98);
    uVar2 = CONCAT44(local_74,fVar10);
    uVar3 = CONCAT44(local_70,fVar9);
  }
  local_70 = (float)((ulonglong)uVar3 >> 0x20);
  fVar10 = (float)uVar3;
  local_74 = (float)((ulonglong)uVar2 >> 0x20);
  fVar11 = (float)uVar2;
  local_7c = (float)((ulonglong)uVar20 >> 0x20);
  fVar9 = (float)uVar20;
  MMatrix::ComputeInverse(param_1,(MMatrix *)&local_5c);
  *(float *)(this + 0x60) =
       local_68 * local_5c + local_6c * local_4c + local_2c + local_78 * local_3c;
  *(float *)(this + 100) =
       local_68 * local_58 + local_6c * local_48 + local_28 + local_78 * local_38;
  *(float *)(this + 0x68) =
       local_68 * local_54 + local_6c * local_44 + local_24 + local_78 * local_34;
  *(float *)(this + 0x54) =
       local_70 * local_5c + local_74 * local_4c + local_2c + local_7c * local_3c;
  *(float *)(this + 0x58) =
       local_70 * local_58 + local_74 * local_48 + local_28 + local_7c * local_38;
  *(float *)(this + 0x5c) =
       local_70 * local_54 + local_74 * local_44 + local_24 + local_7c * local_34;
  *(float *)(this + 0x70) = local_58 * fVar10 + local_48 * fVar11 + local_28 + local_38 * fVar9;
  *(float *)(this + 0x6c) = local_5c * fVar10 + local_4c * fVar11 + local_2c + local_3c * fVar9;
  *(float *)(this + 0x74) = fVar10 * local_54 + fVar11 * local_44 + local_24 + fVar9 * local_34;
  *(float *)(this + 0x78) = local_bc;
  return;
}

