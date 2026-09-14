/* 00058e30 | STG::MMatrix::MakeLookAtTransform */

/* STG::MMatrix::MakeLookAtTransform(STG::MVector3 const&, STG::MVector3 const&, STG::MVector3
   const&) */

void __thiscall
STG::MMatrix::MakeLookAtTransform
          (MMatrix *this,MVector3 *param_1,MVector3 *param_2,MVector3 *param_3)

{
  float fVar1;
  float fVar2;
  int unaff_EBX;
  float fVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  undefined1 in_XMM5 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  uint uVar13;
  float local_2c;
  float local_28;
  float local_18;
  float local_14;
  float local_10;
  
  FUN_0002e044();
  fVar7 = *(float *)(param_1 + 4);
  fVar1 = *(float *)param_1;
  local_14 = fVar7 - *(float *)(param_2 + 4);
  local_10 = fVar1 - *(float *)param_2;
  fVar2 = *(float *)(param_1 + 8);
  local_18 = fVar2 - *(float *)(param_2 + 8);
  fVar3 = local_14 * local_14 + local_10 * local_10 + local_18 * local_18;
  if (fVar3 <= 0.0) {
    local_10 = 0.0;
    uVar6 = 0x80000000;
    local_14 = 0.0;
    local_18 = 0.0;
  }
  else {
    auVar9 = rsqrtss(in_XMM5,ZEXT416((uint)fVar3));
    fVar4 = auVar9._0_4_;
    fVar3 = (fVar3 * fVar4 * fVar4 + *(float *)(unaff_EBX + 0x2e88a)) *
            fVar4 * *(float *)(unaff_EBX + 0x2e88e);
    local_18 = local_18 * fVar3;
    local_14 = local_14 * fVar3;
    local_10 = local_10 * fVar3;
    fVar3 = local_18 * *(float *)(param_3 + 4) - local_14 * *(float *)(param_3 + 8);
    uVar6 = (uint)(fVar1 * local_10 + fVar7 * local_14 + local_18 * fVar2) ^
            *(uint *)(FFileDisk::_FFlush + unaff_EBX + 6);
    local_2c = *(float *)(param_3 + 8) * local_10 - local_18 * *(float *)param_3;
    local_28 = *(float *)param_3 * local_14 - *(float *)(param_3 + 4) * local_10;
    fVar4 = fVar3 * fVar3 + local_28 * local_28 + local_2c * local_2c;
    if (0.0 < fVar4) {
      auVar9 = rsqrtss(ZEXT416((uint)(local_2c * local_2c)),ZEXT416((uint)fVar4));
      fVar8 = auVar9._0_4_;
      fVar4 = (fVar4 * fVar8 * fVar8 + *(float *)(unaff_EBX + 0x2e88a)) *
              fVar8 * *(float *)(unaff_EBX + 0x2e88e);
      local_2c = local_2c * fVar4;
      fVar3 = fVar3 * fVar4;
      local_28 = local_28 * fVar4;
      fVar10 = local_14 * local_28 - local_18 * local_2c;
      uVar5 = (uint)(fVar1 * fVar3 + fVar2 * local_28 + local_2c * fVar7) ^
              *(uint *)(FFileDisk::_FFlush + unaff_EBX + 6);
      fVar8 = local_18 * fVar3 - local_10 * local_28;
      fVar11 = local_10 * local_2c - local_14 * fVar3;
      fVar4 = fVar8 * fVar8 + fVar10 * fVar10 + fVar11 * fVar11;
      if (fVar4 <= 0.0) {
        uVar13 = *(uint *)(unaff_EBX + 0x2e8ba);
        fVar8 = 0.0;
        fVar10 = 0.0;
        fVar7 = 0.0;
      }
      else {
        auVar9 = rsqrtss(ZEXT416((uint)(fVar11 * fVar11)),ZEXT416((uint)fVar4));
        fVar12 = auVar9._0_4_;
        fVar4 = (fVar4 * fVar12 * fVar12 + *(float *)(unaff_EBX + 0x2e88a)) *
                *(float *)(unaff_EBX + 0x2e88e) * fVar12;
        fVar10 = fVar10 * fVar4;
        fVar8 = fVar8 * fVar4;
        uVar13 = (uint)(fVar7 * fVar8 + fVar1 * fVar10 + fVar2 * fVar4 * fVar11) ^
                 *(uint *)(FFileDisk::_FFlush + unaff_EBX + 6);
        fVar7 = fVar4 * fVar11;
      }
      goto LAB_000590d6;
    }
  }
  uVar5 = 0x80000000;
  local_2c = 0.0;
  uVar13 = 0x80000000;
  local_28 = 0.0;
  fVar7 = 0.0;
  fVar8 = 0.0;
  fVar10 = 0.0;
  fVar3 = 0.0;
LAB_000590d6:
  *(float *)this = fVar3;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(float *)(this + 8) = local_10;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x3c) = 0x3f800000;
  *(float *)(this + 0x10) = local_2c;
  *(float *)(this + 0x18) = local_14;
  *(float *)(this + 0x24) = fVar7;
  *(float *)(this + 4) = fVar10;
  *(float *)(this + 0x14) = fVar8;
  *(float *)(this + 0x20) = local_28;
  *(float *)(this + 0x28) = local_18;
  *(uint *)(this + 0x30) = uVar5;
  *(uint *)(this + 0x34) = uVar13;
  *(uint *)(this + 0x38) = uVar6;
  return;
}

