/* 00035e14 | STG::GECamera::ConvertClipToWorld */

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
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  fVar10 = *(float *)(this + 0x1f0);
  fVar8 = *(float *)(this + 500);
  fVar5 = *(float *)(this + 0x1b0);
  fVar6 = *(float *)(this + 0x1b4);
  fVar7 = *(float *)(this + 0x1b8);
  fVar21 = *(float *)(this + 0x1a0);
  fVar20 = *(float *)(this + 0x1a4);
  fVar19 = *(float *)(this + 0x1a8);
  fVar18 = *(float *)(this + 0x180);
  fVar17 = *(float *)(this + 0x184);
  fVar16 = *(float *)(this + 0x188);
  fVar15 = *(float *)(this + 400);
  fVar14 = *(float *)(this + 0x194);
  fVar13 = *(float *)(this + 0x198);
  fVar12 = -fVar10;
  fVar1 = param_1 * fVar10;
  fVar2 = param_1 * fVar8;
  fVar3 = param_2 * fVar10;
  fVar4 = param_2 * fVar8;
  fVar9 = 1.0 / (*(float *)(this + 0x1bc) * fVar10 + fVar12 * *(float *)(this + 0x1ac) +
                 fVar1 * *(float *)(this + 0x18c) + fVar3 * *(float *)(this + 0x19c));
  fVar11 = 1.0 / ((*(float *)(this + 0x1bc) + *(float *)(this + 0x1ac)) * fVar8 +
                  fVar2 * *(float *)(this + 0x18c) + fVar4 * *(float *)(this + 0x19c));
  *(float *)param_3 = fVar9 * (fVar5 * fVar10 + fVar12 * fVar21 + fVar1 * fVar18 + fVar3 * fVar15);
  *(float *)(param_3 + 4) =
       fVar9 * (fVar6 * fVar10 + fVar12 * fVar20 + fVar1 * fVar17 + fVar3 * fVar14);
  *(float *)(param_3 + 8) =
       fVar9 * (fVar7 * fVar10 + fVar12 * fVar19 + fVar1 * fVar16 + fVar3 * fVar13);
  *(float *)param_4 = fVar11 * ((fVar5 + fVar21) * fVar8 + fVar2 * fVar18 + fVar4 * fVar15);
  *(float *)(param_4 + 4) = fVar11 * ((fVar6 + fVar20) * fVar8 + fVar2 * fVar17 + fVar4 * fVar14);
  *(float *)(param_4 + 8) = fVar11 * ((fVar7 + fVar19) * fVar8 + fVar2 * fVar16 + fVar4 * fVar13);
  return;
}

