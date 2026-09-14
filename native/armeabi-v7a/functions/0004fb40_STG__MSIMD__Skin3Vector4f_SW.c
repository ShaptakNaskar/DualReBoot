/* 0004fb40 | STG::MSIMD::Skin3Vector4f_SW */

/* STG::MSIMD::Skin3Vector4f_SW(float*, float const*, float const*, float const*, float const*,
   float const*, unsigned long) */

void STG::MSIMD::Skin3Vector4f_SW
               (float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
               float *param_6,ulong param_7)

{
  int iVar1;
  uint uVar2;
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
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  
  if (param_7 * 4 != 0) {
    iVar1 = 0;
    fVar5 = param_3[0x19];
    uVar2 = 0;
    fVar11 = param_3[0x1d];
    fVar16 = param_3[0x12];
    fVar24 = param_3[0x16];
    fVar4 = param_3[0x15];
    fVar6 = param_3[0x1a];
    fVar12 = param_3[0x1e];
    fVar17 = param_3[0x20];
    fVar25 = param_3[0x24];
    fVar44 = *param_3;
    fVar43 = param_3[4];
    fVar42 = param_3[8];
    fVar41 = param_3[0xc];
    fVar40 = param_3[1];
    fVar39 = param_3[5];
    fVar38 = param_3[9];
    fVar37 = param_3[0xd];
    fVar36 = param_3[2];
    fVar35 = param_3[6];
    fVar34 = param_3[10];
    fVar33 = param_3[0xe];
    fVar32 = param_3[0x10];
    fVar31 = param_3[0x14];
    fVar30 = param_3[0x18];
    fVar29 = param_3[0x1c];
    fVar3 = param_3[0x11];
    fVar7 = param_3[0x28];
    fVar13 = param_3[0x2c];
    fVar18 = param_3[0x21];
    fVar26 = param_3[0x25];
    fVar8 = param_3[0x29];
    fVar14 = param_3[0x2d];
    fVar19 = param_3[0x22];
    fVar27 = param_3[0x26];
    fVar9 = param_3[0x2a];
    fVar15 = param_3[0x2e];
    do {
      fVar22 = param_2[1];
      fVar23 = *param_2;
      fVar28 = param_2[2];
      fVar10 = *(float *)((int)param_5 + iVar1);
      fVar20 = *(float *)((int)param_4 + iVar1);
      fVar21 = *(float *)((int)param_6 + iVar1);
      uVar2 = uVar2 + 4;
      param_2 = param_2 + 4;
      iVar1 = iVar1 + 0x10;
      *param_1 = (fVar22 * fVar31 + fVar23 * fVar32 + fVar29 + fVar28 * fVar30) * fVar10 +
                 (fVar22 * fVar43 + fVar23 * fVar44 + fVar41 + fVar28 * fVar42) * fVar20 +
                 (fVar22 * fVar25 + fVar23 * fVar17 + fVar13 + fVar28 * fVar7) * fVar21;
      param_1[1] = (fVar22 * fVar4 + fVar23 * fVar3 + fVar11 + fVar28 * fVar5) * fVar10 +
                   (fVar22 * fVar39 + fVar23 * fVar40 + fVar37 + fVar28 * fVar38) * fVar20 +
                   (fVar22 * fVar26 + fVar23 * fVar18 + fVar14 + fVar28 * fVar8) * fVar21;
      param_1[2] = (fVar22 * fVar24 + fVar23 * fVar16 + fVar12 + fVar28 * fVar6) * fVar10 +
                   (fVar22 * fVar35 + fVar23 * fVar36 + fVar33 + fVar28 * fVar34) * fVar20 +
                   (fVar22 * fVar27 + fVar23 * fVar19 + fVar15 + fVar28 * fVar9) * fVar21;
      param_1 = param_1 + 4;
    } while (uVar2 < param_7 * 4);
  }
  return;
}

