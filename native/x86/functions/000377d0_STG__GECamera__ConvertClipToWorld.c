/* 000377d0 | STG::GECamera::ConvertClipToWorld */

/* STG::GECamera::ConvertClipToWorld(float, float, STG::MVector3&, STG::MVector3&) const */

void __thiscall
STG::GECamera::ConvertClipToWorld
          (GECamera *this,float param_1,float param_2,MVector3 *param_3,MVector3 *param_4)

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
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  int unaff_EBX;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  FUN_0002e044();
  fVar1 = *(float *)(this + 500);
  fVar18 = param_2 * fVar1;
  fVar19 = *(float *)(this + 0x1f0);
  fVar22 = fVar19 * param_1;
  fVar21 = (float)(*(uint *)(unaff_EBX + 0x4ffd7) ^ (uint)fVar19);
  fVar2 = *(float *)(this + 0x180);
  fVar3 = *(float *)(this + 400);
  fVar4 = *(float *)(this + 0x1a0);
  fVar5 = *(float *)(this + 0x1b0);
  fVar23 = param_1 * fVar1;
  fVar20 = param_2 * fVar19;
  fVar6 = *(float *)(this + 0x184);
  fVar7 = *(float *)(this + 0x194);
  fVar8 = *(float *)(this + 0x1a4);
  fVar9 = *(float *)(this + 0x1b4);
  fVar10 = *(float *)(this + 0x188);
  fVar11 = *(float *)(this + 0x198);
  fVar12 = *(float *)(this + 0x1a8);
  fVar13 = *(float *)(this + 0x1b8);
  fVar14 = *(float *)(this + 0x1bc);
  fVar15 = *(float *)(this + 0x1ac);
  fVar16 = *(float *)(this + 0x18c);
  fVar17 = *(float *)(this + 0x19c);
  fVar24 = *(float *)(unaff_EBX + 0x4fecf) /
           (fVar16 * fVar22 + fVar15 * fVar21 + fVar14 * fVar19 + fVar17 * fVar20);
  *(float *)param_3 = (fVar2 * fVar22 + fVar4 * fVar21 + fVar5 * fVar19 + fVar3 * fVar20) * fVar24;
  *(float *)(param_3 + 4) =
       (fVar6 * fVar22 + fVar8 * fVar21 + fVar9 * fVar19 + fVar7 * fVar20) * fVar24;
  *(float *)(param_3 + 8) =
       (fVar22 * fVar10 + fVar21 * fVar12 + fVar19 * fVar13 + fVar20 * fVar11) * fVar24;
  fVar19 = *(float *)(unaff_EBX + 0x4fecf) /
           (fVar23 * fVar16 + (fVar14 + fVar15) * fVar1 + fVar18 * fVar17);
  *(float *)param_4 = (fVar23 * fVar2 + (fVar5 + fVar4) * fVar1 + fVar18 * fVar3) * fVar19;
  *(float *)(param_4 + 4) = (fVar23 * fVar6 + (fVar9 + fVar8) * fVar1 + fVar18 * fVar7) * fVar19;
  *(float *)(param_4 + 8) = (fVar23 * fVar10 + fVar1 * (fVar13 + fVar12) + fVar18 * fVar11) * fVar19
  ;
  return;
}

