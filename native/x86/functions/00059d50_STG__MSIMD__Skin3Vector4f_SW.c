/* 00059d50 | STG::MSIMD::Skin3Vector4f_SW */

/* STG::MSIMD::Skin3Vector4f_SW(float*, float const*, float const*, float const*, float const*,
   float const*, unsigned long) */

void STG::MSIMD::Skin3Vector4f_SW
               (float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
               float *param_6,ulong param_7)

{
  float *pfVar1;
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
  uint uVar45;
  
  if (param_7 << 2 != 0) {
    fVar2 = *param_3;
    fVar3 = param_3[4];
    fVar4 = param_3[8];
    fVar5 = param_3[0xc];
    fVar6 = param_3[1];
    fVar7 = param_3[5];
    fVar8 = param_3[9];
    fVar9 = param_3[0xd];
    fVar10 = param_3[2];
    fVar11 = param_3[6];
    fVar12 = param_3[10];
    fVar13 = param_3[0xe];
    fVar14 = param_3[0x10];
    fVar15 = param_3[0x14];
    fVar16 = param_3[0x18];
    fVar17 = param_3[0x1c];
    fVar18 = param_3[0x11];
    fVar19 = param_3[0x15];
    fVar20 = param_3[0x19];
    fVar21 = param_3[0x1d];
    fVar22 = param_3[0x12];
    fVar23 = param_3[0x16];
    fVar24 = param_3[0x1a];
    fVar25 = param_3[0x1e];
    fVar26 = param_3[0x20];
    fVar27 = param_3[0x24];
    fVar28 = param_3[0x28];
    fVar29 = param_3[0x2c];
    fVar30 = param_3[0x21];
    fVar31 = param_3[0x25];
    fVar32 = param_3[0x29];
    fVar33 = param_3[0x2d];
    fVar34 = param_3[0x22];
    fVar35 = param_3[0x26];
    fVar36 = param_3[0x2a];
    fVar37 = param_3[0x2e];
    uVar45 = 0;
    do {
      fVar38 = param_6[uVar45];
      fVar39 = *param_2;
      fVar40 = param_2[1];
      fVar41 = param_2[2];
      param_2 = param_2 + 4;
      fVar42 = param_4[uVar45];
      pfVar1 = param_5 + uVar45;
      fVar43 = param_5[uVar45];
      fVar44 = param_5[uVar45];
      uVar45 = uVar45 + 4;
      *param_1 = (fVar14 * fVar39 + fVar15 * fVar40 + fVar17 + fVar16 * fVar41) * *pfVar1 +
                 (fVar2 * fVar39 + fVar3 * fVar40 + fVar5 + fVar4 * fVar41) * fVar42 +
                 (fVar26 * fVar39 + fVar27 * fVar40 + fVar29 + fVar28 * fVar41) * fVar38;
      param_1[1] = (fVar18 * fVar39 + fVar19 * fVar40 + fVar21 + fVar20 * fVar41) * fVar43 +
                   (fVar6 * fVar39 + fVar7 * fVar40 + fVar9 + fVar8 * fVar41) * fVar42 +
                   (fVar30 * fVar39 + fVar31 * fVar40 + fVar33 + fVar32 * fVar41) * fVar38;
      param_1[2] = (fVar22 * fVar39 + fVar23 * fVar40 + fVar25 + fVar24 * fVar41) * fVar44 +
                   (fVar10 * fVar39 + fVar11 * fVar40 + fVar13 + fVar12 * fVar41) * fVar42 +
                   (fVar39 * fVar34 + fVar40 * fVar35 + fVar37 + fVar41 * fVar36) * fVar38;
      param_1 = param_1 + 4;
    } while (uVar45 < param_7 << 2);
  }
  return;
}

