/* 00035f38 | STG::GECamera::BuildFrustumPlanes */

/* STG::GECamera::BuildFrustumPlanes() */

void __thiscall STG::GECamera::BuildFrustumPlanes(GECamera *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 unaff_d12;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50 [3];
  float local_44 [3];
  
  ConvertClipToWorld(this,-1.0,1.0,(MVector3 *)&local_98,(MVector3 *)&local_8c);
  ConvertClipToWorld(this,1.0,1.0,(MVector3 *)&local_80,(MVector3 *)&local_74);
  ConvertClipToWorld(this,-1.0,-1.0,(MVector3 *)&local_68,(MVector3 *)&local_5c);
  ConvertClipToWorld(this,1.0,-1.0,(MVector3 *)local_50,(MVector3 *)local_44);
  fVar1 = local_98 - local_8c;
  fVar2 = local_94 - local_88;
  fVar3 = local_90 - local_84;
  fVar8 = fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3;
  fVar6 = fVar8;
  fVar4 = DAT_000363b8;
  if (0.0 < fVar8) {
    fVar6 = 1.0 / SQRT(fVar8);
    fVar4 = fVar3;
  }
  fVar3 = local_8c - local_5c;
  if (0.0 < fVar8) {
    fVar1 = fVar6 * fVar1;
    fVar2 = fVar6 * fVar2;
    fVar4 = fVar6 * fVar4;
  }
  fVar7 = local_88 - local_58;
  fVar6 = local_84 - local_54;
  fVar9 = fVar3 * fVar3 + fVar7 * fVar7 + fVar6 * fVar6;
  if (fVar8 <= 0.0) {
    fVar1 = fVar4;
    fVar2 = fVar4;
  }
  if (fVar9 <= 0.0) {
    *(undefined4 *)(this + 4) = 0;
    *(undefined4 *)(this + 8) = 0;
    *(undefined4 *)(this + 0xc) = 0;
LAB_000365c4:
    fVar4 = 0.0;
    *(undefined4 *)(this + 4) = 0;
    *(undefined4 *)(this + 8) = 0;
    *(undefined4 *)(this + 0xc) = 0;
  }
  else {
    fVar9 = 1.0 / SQRT(fVar9);
    fVar8 = fVar9 * fVar6 * fVar1 - fVar9 * fVar3 * fVar4;
    *(float *)(this + 8) = fVar8;
    fVar6 = fVar9 * fVar7 * fVar4 - fVar9 * fVar6 * fVar2;
    *(float *)(this + 4) = fVar6;
    fVar2 = fVar9 * fVar3 * fVar2 - fVar9 * fVar7 * fVar1;
    fVar4 = fVar8 * fVar8 + fVar6 * fVar6 + fVar2 * fVar2;
    *(float *)(this + 0xc) = fVar2;
    if (fVar4 <= 0.0) goto LAB_000365c4;
    fVar1 = 1.0 / SQRT(fVar4);
    *(float *)(this + 8) = fVar8 * fVar1;
    *(float *)(this + 4) = fVar6 * fVar1;
    fVar4 = fVar8 * fVar1 * local_94 + fVar6 * fVar1 * local_98 + fVar1 * fVar2 * local_90;
    *(float *)(this + 0xc) = fVar1 * fVar2;
  }
  fVar2 = (float)((ulonglong)unaff_d12 >> 0x20);
  fVar6 = local_74 - local_80;
  *(float *)(this + 0x10) = fVar4;
  fVar1 = local_70 - local_7c;
  fVar7 = local_6c - local_78;
  fVar8 = fVar6 * fVar6 + fVar1 * fVar1 + fVar7 * fVar7;
  fVar3 = fVar8;
  fVar4 = DAT_000363b8;
  if (0.0 < fVar8) {
    fVar2 = 1.0;
    fVar3 = 1.0 / SQRT(fVar8);
    fVar4 = fVar7;
  }
  fVar7 = local_80 - local_50[0];
  if (0.0 < fVar8) {
    fVar6 = fVar3 * fVar6;
    fVar1 = fVar3 * fVar1;
    fVar4 = fVar3 * fVar4;
  }
  fVar9 = local_7c - (float)local_50._4_8_;
  fVar3 = local_78 - SUB84(local_50._4_8_,4);
  fVar5 = fVar7 * fVar7 + fVar9 * fVar9 + fVar3 * fVar3;
  if (fVar8 <= 0.0) {
    fVar6 = fVar4;
    fVar1 = fVar4;
  }
  if (fVar5 <= 0.0) {
    *(undefined4 *)(this + 0x14) = 0;
    *(undefined4 *)(this + 0x18) = 0;
    *(undefined4 *)(this + 0x1c) = 0;
LAB_00036678:
    fVar4 = 0.0;
    *(undefined4 *)(this + 0x14) = 0;
    *(undefined4 *)(this + 0x18) = 0;
    *(undefined4 *)(this + 0x1c) = 0;
  }
  else {
    fVar2 = 1.0;
    fVar5 = 1.0 / SQRT(fVar5);
    fVar8 = fVar5 * fVar3 * fVar6 - fVar5 * fVar7 * fVar4;
    *(float *)(this + 0x18) = fVar8;
    fVar3 = fVar5 * fVar9 * fVar4 - fVar5 * fVar3 * fVar1;
    *(float *)(this + 0x14) = fVar3;
    fVar1 = fVar5 * fVar7 * fVar1 - fVar5 * fVar9 * fVar6;
    fVar4 = fVar8 * fVar8 + fVar3 * fVar3 + fVar1 * fVar1;
    *(float *)(this + 0x1c) = fVar1;
    if (fVar4 <= 0.0) goto LAB_00036678;
    fVar6 = 1.0 / SQRT(fVar4);
    *(float *)(this + 0x18) = fVar6 * fVar8;
    *(float *)(this + 0x14) = fVar6 * fVar3;
    fVar4 = fVar6 * fVar8 * local_70 + fVar6 * fVar3 * local_74 + fVar6 * fVar1 * local_6c;
    *(float *)(this + 0x1c) = fVar6 * fVar1;
  }
  fVar6 = local_98 - local_80;
  *(float *)(this + 0x20) = fVar4;
  fVar1 = local_94 - local_7c;
  fVar7 = local_90 - local_78;
  fVar8 = fVar6 * fVar6 + fVar1 * fVar1 + fVar7 * fVar7;
  fVar3 = fVar8;
  fVar4 = DAT_000363b8;
  if (0.0 < fVar8) {
    fVar2 = 1.0;
    fVar3 = 1.0 / SQRT(fVar8);
    fVar4 = fVar7;
  }
  fVar7 = local_80 - local_74;
  if (0.0 < fVar8) {
    fVar6 = fVar3 * fVar6;
    fVar1 = fVar3 * fVar1;
    fVar4 = fVar3 * fVar4;
  }
  fVar9 = local_7c - local_70;
  fVar3 = local_78 - local_6c;
  fVar5 = fVar7 * fVar7 + fVar9 * fVar9 + fVar3 * fVar3;
  if (fVar8 <= 0.0) {
    fVar6 = fVar4;
    fVar1 = fVar4;
  }
  if (fVar5 <= 0.0) {
    *(undefined4 *)(this + 0x24) = 0;
    *(undefined4 *)(this + 0x28) = 0;
    *(undefined4 *)(this + 0x2c) = 0;
LAB_00036654:
    fVar4 = 0.0;
    *(undefined4 *)(this + 0x24) = 0;
    *(undefined4 *)(this + 0x28) = 0;
    *(undefined4 *)(this + 0x2c) = 0;
  }
  else {
    fVar2 = 1.0;
    fVar5 = 1.0 / SQRT(fVar5);
    fVar8 = fVar5 * fVar3 * fVar6 - fVar5 * fVar7 * fVar4;
    *(float *)(this + 0x28) = fVar8;
    fVar3 = fVar5 * fVar9 * fVar4 - fVar5 * fVar3 * fVar1;
    *(float *)(this + 0x24) = fVar3;
    fVar1 = fVar5 * fVar7 * fVar1 - fVar5 * fVar9 * fVar6;
    fVar4 = fVar8 * fVar8 + fVar3 * fVar3 + fVar1 * fVar1;
    *(float *)(this + 0x2c) = fVar1;
    if (fVar4 <= 0.0) goto LAB_00036654;
    fVar6 = 1.0 / SQRT(fVar4);
    *(float *)(this + 0x28) = fVar6 * fVar8;
    *(float *)(this + 0x24) = fVar6 * fVar3;
    fVar4 = fVar6 * fVar8 * local_94 + fVar6 * fVar3 * local_98 + fVar6 * fVar1 * local_90;
    *(float *)(this + 0x2c) = fVar6 * fVar1;
  }
  fVar1 = local_5c - local_44[0];
  *(float *)(this + 0x30) = fVar4;
  fVar9 = (float)local_44._4_8_;
  fVar3 = local_58 - fVar9;
  fVar5 = SUB84(local_44._4_8_,4);
  fVar8 = local_54 - fVar5;
  fVar7 = fVar1 * fVar1 + fVar3 * fVar3 + fVar8 * fVar8;
  fVar6 = fVar7;
  fVar4 = DAT_000363b8;
  if (0.0 < fVar7) {
    fVar2 = 1.0;
    fVar6 = 1.0 / SQRT(fVar7);
    fVar4 = fVar8;
  }
  local_50[0] = local_44[0] - local_50[0];
  if (0.0 < fVar7) {
    fVar2 = fVar6 * fVar1;
    fVar4 = fVar6 * fVar4;
    fVar1 = fVar6 * fVar3;
  }
  fVar3 = fVar9 - (float)local_50._4_8_;
  fVar8 = fVar5 - SUB84(local_50._4_8_,4);
  fVar6 = local_50[0] * local_50[0] + fVar3 * fVar3 + fVar8 * fVar8;
  if (fVar7 <= 0.0) {
    fVar2 = fVar4;
    fVar1 = fVar4;
  }
  if (fVar6 <= 0.0) {
    *(undefined4 *)(this + 0x34) = 0;
    *(undefined4 *)(this + 0x38) = 0;
    *(undefined4 *)(this + 0x3c) = 0;
LAB_00036630:
    fVar2 = 0.0;
    *(undefined4 *)(this + 0x34) = 0;
    *(undefined4 *)(this + 0x38) = 0;
    *(undefined4 *)(this + 0x3c) = 0;
  }
  else {
    fVar7 = 1.0 / SQRT(fVar6);
    fVar6 = fVar7 * fVar8 * fVar2 - fVar7 * local_50[0] * fVar4;
    *(float *)(this + 0x38) = fVar6;
    fVar8 = fVar7 * fVar3 * fVar4 - fVar7 * fVar8 * fVar1;
    *(float *)(this + 0x34) = fVar8;
    fVar4 = fVar7 * local_50[0] * fVar1 - fVar7 * fVar3 * fVar2;
    *(float *)(this + 0x3c) = fVar4;
    fVar2 = fVar6 * fVar6 + fVar8 * fVar8 + fVar4 * fVar4;
    if (fVar2 <= 0.0) goto LAB_00036630;
    fVar1 = 1.0 / SQRT(fVar2);
    *(float *)(this + 0x38) = fVar1 * fVar6;
    *(float *)(this + 0x34) = fVar1 * fVar8;
    fVar2 = fVar1 * fVar6 * local_58 + fVar1 * fVar8 * local_5c + fVar1 * fVar4 * local_54;
    *(float *)(this + 0x3c) = fVar1 * fVar4;
  }
  fVar1 = local_80 - local_98;
  *(float *)(this + 0x40) = fVar2;
  fVar2 = local_7c - local_94;
  fVar3 = local_78 - local_90;
  fVar8 = fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3;
  fVar6 = DAT_000363b8;
  fVar4 = fVar8;
  if (0.0 < fVar8) {
    fVar6 = fVar3;
    fVar4 = SQRT(fVar8);
  }
  local_98 = local_98 - local_68;
  local_94 = local_94 - local_64;
  local_90 = local_90 - local_60;
  if (0.0 < fVar8) {
    fVar4 = 1.0 / fVar4;
    fVar1 = fVar4 * fVar1;
    fVar2 = fVar4 * fVar2;
    fVar6 = fVar4 * fVar6;
  }
  fVar4 = local_98 * local_98 + local_94 * local_94 + local_90 * local_90;
  if (fVar8 <= 0.0) {
    fVar1 = fVar6;
    fVar2 = fVar6;
  }
  if (fVar4 <= 0.0) {
    *(undefined4 *)(this + 0x44) = 0;
    *(undefined4 *)(this + 0x48) = 0;
    *(undefined4 *)(this + 0x4c) = 0;
LAB_0003660c:
    fVar4 = 0.0;
    *(undefined4 *)(this + 0x44) = 0;
    *(undefined4 *)(this + 0x48) = 0;
    *(undefined4 *)(this + 0x4c) = 0;
  }
  else {
    fVar3 = 1.0 / SQRT(fVar4);
    fVar8 = fVar3 * local_98;
    fVar4 = fVar3 * local_90 * fVar1 - fVar8 * fVar6;
    *(float *)(this + 0x48) = fVar4;
    local_98 = fVar3 * local_94 * fVar6 - fVar3 * local_90 * fVar2;
    *(float *)(this + 0x44) = local_98;
    fVar1 = fVar8 * fVar2 - fVar3 * local_94 * fVar1;
    fVar2 = fVar4 * fVar4 + local_98 * local_98 + fVar1 * fVar1;
    *(float *)(this + 0x4c) = fVar1;
    if (fVar2 <= 0.0) goto LAB_0003660c;
    fVar2 = 1.0 / SQRT(fVar2);
    local_98 = fVar2 * local_98;
    *(float *)(this + 0x48) = fVar2 * fVar4;
    *(float *)(this + 0x44) = local_98;
    fVar4 = fVar2 * fVar4 * local_7c + local_98 * local_80 + fVar2 * fVar1 * local_78;
    *(float *)(this + 0x4c) = fVar2 * fVar1;
  }
  fVar2 = local_8c - local_74;
  *(float *)(this + 0x50) = fVar4;
  fVar6 = local_88 - local_70;
  fVar3 = local_84 - local_6c;
  fVar8 = fVar2 * fVar2 + fVar6 * fVar6 + fVar3 * fVar3;
  fVar1 = fVar8;
  fVar4 = DAT_000363b8;
  if (0.0 < fVar8) {
    local_98 = 1.0;
    fVar1 = 1.0 / SQRT(fVar8);
    fVar4 = fVar3;
  }
  local_74 = local_74 - local_44[0];
  if (0.0 < fVar8) {
    fVar2 = fVar1 * fVar2;
    local_98 = fVar1 * fVar6;
    fVar4 = fVar1 * fVar4;
  }
  local_70 = local_70 - fVar9;
  local_6c = local_6c - fVar5;
  fVar1 = local_74 * local_74 + local_70 * local_70 + local_6c * local_6c;
  if (fVar8 <= 0.0) {
    fVar2 = fVar4;
    local_98 = fVar4;
  }
  if (fVar1 <= 0.0) {
    *(undefined4 *)(this + 0x54) = 0;
    *(undefined4 *)(this + 0x58) = 0;
    *(undefined4 *)(this + 0x5c) = 0;
  }
  else {
    fVar6 = 1.0 / SQRT(fVar1);
    fVar1 = fVar6 * local_6c * fVar2 - fVar6 * local_74 * fVar4;
    *(float *)(this + 0x58) = fVar1;
    fVar3 = fVar6 * local_70 * fVar4 - fVar6 * local_6c * local_98;
    *(float *)(this + 0x54) = fVar3;
    fVar2 = fVar6 * local_74 * local_98 - fVar6 * local_70 * fVar2;
    *(float *)(this + 0x5c) = fVar2;
    fVar4 = fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2;
    if (0.0 < fVar4) {
      fVar6 = 1.0 / SQRT(fVar4);
      *(float *)(this + 0x58) = fVar6 * fVar1;
      *(float *)(this + 0x54) = fVar6 * fVar3;
      fVar4 = fVar6 * fVar1 * local_88 + fVar6 * fVar3 * local_8c + fVar6 * fVar2 * local_84;
      *(float *)(this + 0x5c) = fVar6 * fVar2;
      goto LAB_000365a8;
    }
  }
  fVar4 = 0.0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
LAB_000365a8:
  *(float *)(this + 0x60) = fVar4;
  return;
}

