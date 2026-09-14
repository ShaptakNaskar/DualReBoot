/* 00037af0 | STG::GECamera::BuildFrustumPlanes */

/* STG::GECamera::BuildFrustumPlanes() */

void __thiscall STG::GECamera::BuildFrustumPlanes(GECamera *this)

{
  int unaff_EBX;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 in_XMM7 [16];
  undefined1 auVar10 [16];
  float local_d4;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_98;
  float local_90;
  float local_8c;
  float local_88;
  float local_80;
  float local_7c;
  float local_78;
  float local_70;
  float local_6c;
  float local_68;
  float local_60;
  float local_5c;
  float local_58;
  float local_50;
  float local_4c;
  float local_48;
  float local_40;
  float local_3c;
  float local_38;
  float local_30;
  float local_2c;
  float local_28;
  float local_1c;
  float local_18;
  float local_14;
  undefined4 uStack_10;
  
  uStack_10 = 0x37afa;
  FUN_0002e044();
  ConvertClipToWorld(this,-1.0,1.0,(MVector3 *)&local_1c,(MVector3 *)&local_90);
  ConvertClipToWorld(this,1.0,1.0,(MVector3 *)&local_80,(MVector3 *)&local_70);
  ConvertClipToWorld(this,-1.0,-1.0,(MVector3 *)&local_60,(MVector3 *)&local_50);
  ConvertClipToWorld(this,1.0,-1.0,(MVector3 *)&local_40,(MVector3 *)&local_30);
  fVar6 = local_14 - local_88;
  fVar7 = local_18 - local_8c;
  local_a0 = local_1c - local_90;
  fVar3 = local_88 - local_48;
  fVar4 = local_8c - local_4c;
  fVar5 = local_90 - local_50;
  fVar2 = fVar7 * fVar7 + local_a0 * local_a0 + fVar6 * fVar6;
  fVar1 = 0.0;
  if (fVar2 <= 0.0) {
    local_a0 = 0.0;
    fVar7 = fVar1;
    fVar2 = fVar1;
  }
  else {
    auVar10 = rsqrtss(in_XMM7,ZEXT416((uint)fVar2));
    fVar8 = auVar10._0_4_;
    fVar2 = (fVar2 * fVar8 * fVar8 + *(float *)(unaff_EBX + 0x4fbca)) *
            fVar8 * *(float *)(unaff_EBX + 0x4fbce);
    local_a0 = local_a0 * fVar2;
    fVar7 = fVar7 * fVar2;
    fVar2 = fVar2 * fVar6;
  }
  fVar6 = fVar4 * fVar4 + fVar5 * fVar5 + fVar3 * fVar3;
  if (fVar6 <= 0.0) {
    *(undefined4 *)(this + 4) = 0;
    *(undefined4 *)(this + 8) = 0;
    *(undefined4 *)(this + 0xc) = 0;
LAB_000388b7:
    *(undefined4 *)(this + 4) = 0;
    *(undefined4 *)(this + 8) = 0;
    *(undefined4 *)(this + 0xc) = 0;
    fVar2 = 0.0;
  }
  else {
    auVar10 = rsqrtss(ZEXT416((uint)(fVar3 * fVar3)),ZEXT416((uint)fVar6));
    fVar8 = auVar10._0_4_;
    fVar8 = (fVar6 * fVar8 * fVar8 + *(float *)(unaff_EBX + 0x4fbca)) *
            fVar8 * *(float *)(unaff_EBX + 0x4fbce);
    fVar6 = fVar4 * fVar8 * fVar2 - fVar8 * fVar3 * fVar7;
    fVar9 = fVar8 * fVar3 * local_a0 - fVar2 * fVar5 * fVar8;
    fVar3 = fVar7 * fVar5 * fVar8 - fVar4 * fVar8 * local_a0;
    *(float *)(this + 4) = fVar6;
    *(float *)(this + 8) = fVar9;
    *(float *)(this + 0xc) = fVar3;
    fVar2 = fVar9 * fVar9 + fVar6 * fVar6 + fVar3 * fVar3;
    if (fVar2 <= 0.0) goto LAB_000388b7;
    auVar10 = rsqrtss(ZEXT416((uint)(fVar3 * fVar3)),ZEXT416((uint)fVar2));
    fVar4 = auVar10._0_4_;
    fVar2 = (fVar2 * fVar4 * fVar4 + *(float *)(unaff_EBX + 0x4fbca)) *
            *(float *)(unaff_EBX + 0x4fbce) * fVar4;
    *(float *)(this + 4) = fVar6 * fVar2;
    *(float *)(this + 8) = fVar9 * fVar2;
    *(float *)(this + 0xc) = fVar3 * fVar2;
    fVar2 = fVar9 * fVar2 * local_18 + fVar6 * fVar2 * local_1c + fVar3 * fVar2 * local_14;
  }
  fVar6 = local_68 - local_78;
  fVar7 = local_6c - local_7c;
  local_a8 = local_70 - local_80;
  *(float *)(this + 0x10) = fVar2;
  fVar2 = local_78 - local_38;
  fVar4 = local_7c - local_3c;
  fVar5 = local_80 - local_40;
  fVar3 = fVar7 * fVar7 + local_a8 * local_a8 + fVar6 * fVar6;
  if (fVar3 <= 0.0) {
    local_a8 = 0.0;
    fVar7 = fVar1;
    fVar3 = fVar1;
  }
  else {
    auVar10 = rsqrtss(ZEXT416((uint)(fVar6 * fVar6)),ZEXT416((uint)fVar3));
    fVar8 = auVar10._0_4_;
    fVar3 = (fVar3 * fVar8 * fVar8 + *(float *)(unaff_EBX + 0x4fbca)) *
            fVar8 * *(float *)(unaff_EBX + 0x4fbce);
    local_a8 = local_a8 * fVar3;
    fVar7 = fVar7 * fVar3;
    fVar3 = fVar3 * fVar6;
  }
  fVar6 = fVar4 * fVar4 + fVar5 * fVar5 + fVar2 * fVar2;
  if (fVar6 <= 0.0) {
    *(undefined4 *)(this + 0x14) = 0;
    *(undefined4 *)(this + 0x18) = 0;
    *(undefined4 *)(this + 0x1c) = 0;
LAB_0003886f:
    *(undefined4 *)(this + 0x14) = 0;
    *(undefined4 *)(this + 0x18) = 0;
    *(undefined4 *)(this + 0x1c) = 0;
    fVar2 = 0.0;
  }
  else {
    auVar10 = rsqrtss(ZEXT416((uint)(fVar2 * fVar2)),ZEXT416((uint)fVar6));
    fVar8 = auVar10._0_4_;
    fVar8 = (fVar6 * fVar8 * fVar8 + *(float *)(unaff_EBX + 0x4fbca)) *
            fVar8 * *(float *)(unaff_EBX + 0x4fbce);
    fVar6 = fVar4 * fVar8 * fVar3 - fVar8 * fVar2 * fVar7;
    fVar9 = fVar8 * fVar2 * local_a8 - fVar3 * fVar5 * fVar8;
    fVar3 = fVar7 * fVar5 * fVar8 - fVar4 * fVar8 * local_a8;
    *(float *)(this + 0x14) = fVar6;
    *(float *)(this + 0x18) = fVar9;
    *(float *)(this + 0x1c) = fVar3;
    fVar2 = fVar9 * fVar9 + fVar6 * fVar6 + fVar3 * fVar3;
    if (fVar2 <= 0.0) goto LAB_0003886f;
    auVar10 = rsqrtss(ZEXT416((uint)(fVar3 * fVar3)),ZEXT416((uint)fVar2));
    fVar4 = auVar10._0_4_;
    fVar2 = (fVar2 * fVar4 * fVar4 + *(float *)(unaff_EBX + 0x4fbca)) *
            *(float *)(unaff_EBX + 0x4fbce) * fVar4;
    *(float *)(this + 0x14) = fVar6 * fVar2;
    *(float *)(this + 0x18) = fVar9 * fVar2;
    *(float *)(this + 0x1c) = fVar3 * fVar2;
    fVar2 = fVar9 * fVar2 * local_6c + fVar6 * fVar2 * local_70 + fVar3 * fVar2 * local_68;
  }
  fVar7 = local_18 - local_7c;
  local_a8 = local_1c - local_80;
  fVar3 = local_78 - local_68;
  fVar6 = local_14 - local_78;
  *(float *)(this + 0x20) = fVar2;
  fVar4 = local_7c - local_6c;
  fVar5 = local_80 - local_70;
  fVar2 = fVar7 * fVar7 + local_a8 * local_a8 + fVar6 * fVar6;
  if (fVar2 <= 0.0) {
    local_a8 = 0.0;
    fVar7 = fVar1;
    fVar2 = fVar1;
  }
  else {
    auVar10 = rsqrtss(ZEXT416((uint)(fVar6 * fVar6)),ZEXT416((uint)fVar2));
    fVar8 = auVar10._0_4_;
    fVar2 = (fVar2 * fVar8 * fVar8 + *(float *)(unaff_EBX + 0x4fbca)) *
            fVar8 * *(float *)(unaff_EBX + 0x4fbce);
    local_a8 = local_a8 * fVar2;
    fVar7 = fVar7 * fVar2;
    fVar2 = fVar2 * fVar6;
  }
  fVar6 = fVar4 * fVar4 + fVar5 * fVar5 + fVar3 * fVar3;
  if (fVar6 <= 0.0) {
    *(undefined4 *)(this + 0x24) = 0;
    *(undefined4 *)(this + 0x28) = 0;
    *(undefined4 *)(this + 0x2c) = 0;
LAB_00038827:
    *(undefined4 *)(this + 0x24) = 0;
    *(undefined4 *)(this + 0x28) = 0;
    *(undefined4 *)(this + 0x2c) = 0;
    fVar2 = 0.0;
  }
  else {
    auVar10 = rsqrtss(ZEXT416((uint)(fVar3 * fVar3)),ZEXT416((uint)fVar6));
    fVar8 = auVar10._0_4_;
    fVar8 = (fVar6 * fVar8 * fVar8 + *(float *)(unaff_EBX + 0x4fbca)) *
            fVar8 * *(float *)(unaff_EBX + 0x4fbce);
    fVar6 = fVar4 * fVar8 * fVar2 - fVar8 * fVar3 * fVar7;
    fVar9 = fVar8 * fVar3 * local_a8 - fVar2 * fVar5 * fVar8;
    fVar3 = fVar7 * fVar5 * fVar8 - fVar4 * fVar8 * local_a8;
    *(float *)(this + 0x24) = fVar6;
    *(float *)(this + 0x28) = fVar9;
    *(float *)(this + 0x2c) = fVar3;
    fVar2 = fVar9 * fVar9 + fVar6 * fVar6 + fVar3 * fVar3;
    if (fVar2 <= 0.0) goto LAB_00038827;
    auVar10 = rsqrtss(ZEXT416((uint)(fVar3 * fVar3)),ZEXT416((uint)fVar2));
    fVar4 = auVar10._0_4_;
    fVar2 = (fVar2 * fVar4 * fVar4 + *(float *)(unaff_EBX + 0x4fbca)) *
            *(float *)(unaff_EBX + 0x4fbce) * fVar4;
    *(float *)(this + 0x24) = fVar6 * fVar2;
    *(float *)(this + 0x28) = fVar9 * fVar2;
    *(float *)(this + 0x2c) = fVar3 * fVar2;
    fVar2 = fVar9 * fVar2 * local_18 + fVar6 * fVar2 * local_1c + fVar3 * fVar2 * local_14;
  }
  fVar3 = local_48 - local_28;
  fVar4 = local_4c - local_2c;
  local_d4 = local_50 - local_30;
  *(float *)(this + 0x30) = fVar2;
  local_38 = local_28 - local_38;
  local_3c = local_2c - local_3c;
  local_40 = local_30 - local_40;
  fVar2 = fVar4 * fVar4 + local_d4 * local_d4 + fVar3 * fVar3;
  if (fVar2 <= 0.0) {
    local_d4 = 0.0;
    fVar4 = fVar1;
    fVar2 = fVar1;
  }
  else {
    auVar10 = rsqrtss(ZEXT416((uint)(fVar3 * fVar3)),ZEXT416((uint)fVar2));
    fVar5 = auVar10._0_4_;
    fVar2 = (fVar2 * fVar5 * fVar5 + *(float *)(unaff_EBX + 0x4fbca)) *
            fVar5 * *(float *)(unaff_EBX + 0x4fbce);
    local_d4 = local_d4 * fVar2;
    fVar4 = fVar4 * fVar2;
    fVar2 = fVar2 * fVar3;
  }
  fVar3 = local_3c * local_3c + local_40 * local_40 + local_38 * local_38;
  if (fVar3 <= 0.0) {
    *(undefined4 *)(this + 0x34) = 0;
    *(undefined4 *)(this + 0x38) = 0;
    *(undefined4 *)(this + 0x3c) = 0;
LAB_000387df:
    *(undefined4 *)(this + 0x34) = 0;
    *(undefined4 *)(this + 0x38) = 0;
    *(undefined4 *)(this + 0x3c) = 0;
    fVar2 = 0.0;
  }
  else {
    auVar10 = rsqrtss(ZEXT416((uint)(local_38 * local_38)),ZEXT416((uint)fVar3));
    fVar5 = auVar10._0_4_;
    fVar3 = (fVar3 * fVar5 * fVar5 + *(float *)(unaff_EBX + 0x4fbca)) *
            fVar5 * *(float *)(unaff_EBX + 0x4fbce);
    fVar5 = local_3c * fVar3 * fVar2 - fVar3 * local_38 * fVar4;
    fVar6 = fVar3 * local_38 * local_d4 - fVar2 * local_40 * fVar3;
    fVar3 = fVar4 * local_40 * fVar3 - local_3c * fVar3 * local_d4;
    *(float *)(this + 0x34) = fVar5;
    *(float *)(this + 0x38) = fVar6;
    *(float *)(this + 0x3c) = fVar3;
    fVar2 = fVar6 * fVar6 + fVar5 * fVar5 + fVar3 * fVar3;
    if (fVar2 <= 0.0) goto LAB_000387df;
    auVar10 = rsqrtss(ZEXT416((uint)(fVar3 * fVar3)),ZEXT416((uint)fVar2));
    fVar4 = auVar10._0_4_;
    fVar2 = (fVar2 * fVar4 * fVar4 + *(float *)(unaff_EBX + 0x4fbca)) *
            *(float *)(unaff_EBX + 0x4fbce) * fVar4;
    *(float *)(this + 0x34) = fVar5 * fVar2;
    *(float *)(this + 0x38) = fVar6 * fVar2;
    *(float *)(this + 0x3c) = fVar3 * fVar2;
    fVar2 = fVar6 * fVar2 * local_4c + fVar5 * fVar2 * local_50 + fVar3 * fVar2 * local_48;
  }
  fVar3 = local_7c - local_18;
  local_a4 = local_80 - local_1c;
  local_58 = local_14 - local_58;
  local_14 = local_78 - local_14;
  *(float *)(this + 0x40) = fVar2;
  local_18 = local_18 - local_5c;
  local_1c = local_1c - local_60;
  fVar2 = fVar3 * fVar3 + local_a4 * local_a4 + local_14 * local_14;
  if (fVar2 <= 0.0) {
    local_a4 = 0.0;
    fVar3 = fVar1;
    fVar2 = fVar1;
  }
  else {
    auVar10 = rsqrtss(ZEXT416((uint)(local_14 * local_14)),ZEXT416((uint)fVar2));
    fVar4 = auVar10._0_4_;
    fVar2 = (fVar2 * fVar4 * fVar4 + *(float *)(unaff_EBX + 0x4fbca)) *
            fVar4 * *(float *)(unaff_EBX + 0x4fbce);
    local_a4 = local_a4 * fVar2;
    fVar3 = fVar3 * fVar2;
    fVar2 = fVar2 * local_14;
  }
  fVar4 = local_18 * local_18 + local_1c * local_1c + local_58 * local_58;
  if (fVar4 <= 0.0) {
    *(undefined4 *)(this + 0x44) = 0;
    *(undefined4 *)(this + 0x48) = 0;
    *(undefined4 *)(this + 0x4c) = 0;
  }
  else {
    auVar10 = rsqrtss(ZEXT416((uint)(local_58 * local_58)),ZEXT416((uint)fVar4));
    fVar5 = auVar10._0_4_;
    fVar5 = (fVar4 * fVar5 * fVar5 + *(float *)(unaff_EBX + 0x4fbca)) *
            fVar5 * *(float *)(unaff_EBX + 0x4fbce);
    fVar4 = local_18 * fVar5 * fVar2 - fVar5 * local_58 * fVar3;
    fVar6 = fVar5 * local_58 * local_a4 - fVar2 * local_1c * fVar5;
    fVar3 = fVar3 * local_1c * fVar5 - local_18 * fVar5 * local_a4;
    *(float *)(this + 0x44) = fVar4;
    *(float *)(this + 0x48) = fVar6;
    *(float *)(this + 0x4c) = fVar3;
    fVar2 = fVar6 * fVar6 + fVar4 * fVar4 + fVar3 * fVar3;
    if (0.0 < fVar2) {
      auVar10 = rsqrtss(ZEXT416((uint)(fVar3 * fVar3)),ZEXT416((uint)fVar2));
      fVar5 = auVar10._0_4_;
      fVar2 = (fVar2 * fVar5 * fVar5 + *(float *)(unaff_EBX + 0x4fbca)) *
              *(float *)(unaff_EBX + 0x4fbce) * fVar5;
      *(float *)(this + 0x44) = fVar4 * fVar2;
      *(float *)(this + 0x48) = fVar6 * fVar2;
      *(float *)(this + 0x4c) = fVar3 * fVar2;
      fVar2 = fVar6 * fVar2 * local_7c + fVar4 * fVar2 * local_80 + fVar3 * fVar2 * local_78;
      goto LAB_0003854b;
    }
  }
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  fVar2 = 0.0;
LAB_0003854b:
  fVar3 = local_8c - local_6c;
  local_98 = local_90 - local_70;
  local_28 = local_68 - local_28;
  local_68 = local_88 - local_68;
  *(float *)(this + 0x50) = fVar2;
  local_6c = local_6c - local_2c;
  local_70 = local_70 - local_30;
  fVar2 = fVar3 * fVar3 + local_98 * local_98 + local_68 * local_68;
  if (fVar2 <= 0.0) {
    local_98 = 0.0;
    fVar2 = fVar1;
  }
  else {
    auVar10 = rsqrtss(ZEXT416((uint)(local_68 * local_68)),ZEXT416((uint)fVar2));
    fVar1 = auVar10._0_4_;
    fVar2 = (fVar2 * fVar1 * fVar1 + *(float *)(unaff_EBX + 0x4fbca)) *
            fVar1 * *(float *)(unaff_EBX + 0x4fbce);
    local_98 = local_98 * fVar2;
    fVar1 = fVar3 * fVar2;
    fVar2 = fVar2 * local_68;
  }
  fVar3 = local_6c * local_6c + local_70 * local_70 + local_28 * local_28;
  if (fVar3 <= 0.0) {
    *(undefined4 *)(this + 0x54) = 0;
    *(undefined4 *)(this + 0x58) = 0;
    *(undefined4 *)(this + 0x5c) = 0;
  }
  else {
    auVar10 = rsqrtss(ZEXT416((uint)(local_28 * local_28)),ZEXT416((uint)fVar3));
    fVar4 = auVar10._0_4_;
    fVar4 = (fVar3 * fVar4 * fVar4 + *(float *)(unaff_EBX + 0x4fbca)) *
            fVar4 * *(float *)(unaff_EBX + 0x4fbce);
    fVar3 = local_6c * fVar4 * fVar2 - fVar4 * local_28 * fVar1;
    fVar5 = fVar4 * local_28 * local_98 - fVar2 * local_70 * fVar4;
    fVar2 = fVar1 * local_70 * fVar4 - local_6c * fVar4 * local_98;
    *(float *)(this + 0x54) = fVar3;
    *(float *)(this + 0x58) = fVar5;
    *(float *)(this + 0x5c) = fVar2;
    fVar1 = fVar5 * fVar5 + fVar3 * fVar3 + fVar2 * fVar2;
    if (0.0 < fVar1) {
      auVar10 = rsqrtss(ZEXT816(0),ZEXT416((uint)fVar1));
      fVar4 = auVar10._0_4_;
      fVar1 = (fVar1 * fVar4 * fVar4 + *(float *)(unaff_EBX + 0x4fbca)) *
              *(float *)(unaff_EBX + 0x4fbce) * fVar4;
      *(float *)(this + 0x54) = fVar3 * fVar1;
      *(float *)(this + 0x5c) = fVar1 * fVar2;
      *(float *)(this + 0x58) = fVar5 * fVar1;
      *(float *)(this + 0x60) =
           local_8c * fVar5 * fVar1 + fVar3 * fVar1 * local_90 + fVar1 * fVar2 * local_88;
      return;
    }
  }
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  return;
}

