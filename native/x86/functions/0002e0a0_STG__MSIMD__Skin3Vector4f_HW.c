/* 0002e0a0 | STG::MSIMD::Skin3Vector4f_HW */

/* STG::MSIMD::Skin3Vector4f_HW(float*, float const*, float const*, float const*, float const*,
   float const*, unsigned long) */

void STG::MSIMD::Skin3Vector4f_HW
               (float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
               float *param_6,ulong param_7)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
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
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  uint uVar65;
  
  fVar25 = *param_3;
  fVar26 = param_3[1];
  fVar27 = param_3[2];
  fVar28 = param_3[3];
  fVar29 = param_3[4];
  fVar30 = param_3[5];
  fVar31 = param_3[6];
  fVar32 = param_3[7];
  fVar33 = param_3[8];
  fVar34 = param_3[9];
  fVar35 = param_3[10];
  fVar36 = param_3[0xb];
  fVar37 = param_3[0xc];
  fVar38 = param_3[0xd];
  fVar39 = param_3[0xe];
  fVar40 = param_3[0xf];
  fVar41 = param_3[0x10];
  fVar42 = param_3[0x11];
  fVar43 = param_3[0x12];
  fVar44 = param_3[0x13];
  fVar45 = param_3[0x14];
  fVar46 = param_3[0x15];
  fVar47 = param_3[0x16];
  fVar48 = param_3[0x17];
  fVar49 = param_3[0x18];
  fVar50 = param_3[0x19];
  fVar51 = param_3[0x1a];
  fVar52 = param_3[0x1b];
  fVar53 = param_3[0x1c];
  fVar54 = param_3[0x1d];
  fVar55 = param_3[0x1e];
  fVar56 = param_3[0x1f];
  fVar57 = param_3[0x20];
  fVar58 = param_3[0x21];
  fVar59 = param_3[0x22];
  fVar60 = param_3[0x23];
  fVar61 = param_3[0x24];
  fVar62 = param_3[0x25];
  fVar63 = param_3[0x26];
  fVar64 = param_3[0x27];
  fVar8 = param_3[0x28];
  fVar9 = param_3[0x29];
  fVar10 = param_3[0x2a];
  fVar11 = param_3[0x2b];
  fVar12 = param_3[0x2c];
  fVar13 = param_3[0x2d];
  fVar14 = param_3[0x2e];
  fVar15 = param_3[0x2f];
  if (param_7 << 2 != 0) {
    uVar65 = 0;
    do {
      fVar5 = param_2[2];
      fVar6 = param_2[1];
      fVar7 = *param_2;
      param_2 = param_2 + 4;
      pfVar1 = param_4 + uVar65;
      fVar16 = pfVar1[1];
      fVar17 = pfVar1[2];
      fVar18 = pfVar1[3];
      pfVar2 = param_5 + uVar65;
      fVar19 = pfVar2[1];
      fVar20 = pfVar2[2];
      fVar21 = pfVar2[3];
      pfVar3 = param_6 + uVar65;
      fVar22 = pfVar3[1];
      fVar23 = pfVar3[2];
      fVar24 = pfVar3[3];
      pfVar4 = param_1 + uVar65;
      *pfVar4 = (fVar33 * fVar5 + fVar37 + fVar29 * fVar6 + fVar25 * fVar7) * *pfVar1 +
                (fVar49 * fVar5 + fVar53 + fVar45 * fVar6 + fVar41 * fVar7) * *pfVar2 +
                (fVar5 * fVar8 + fVar12 + fVar6 * fVar61 + fVar7 * fVar57) * *pfVar3;
      pfVar4[1] = (fVar34 * fVar5 + fVar38 + fVar30 * fVar6 + fVar26 * fVar7) * fVar16 +
                  (fVar50 * fVar5 + fVar54 + fVar46 * fVar6 + fVar42 * fVar7) * fVar19 +
                  (fVar5 * fVar9 + fVar13 + fVar6 * fVar62 + fVar7 * fVar58) * fVar22;
      pfVar4[2] = (fVar35 * fVar5 + fVar39 + fVar31 * fVar6 + fVar27 * fVar7) * fVar17 +
                  (fVar51 * fVar5 + fVar55 + fVar47 * fVar6 + fVar43 * fVar7) * fVar20 +
                  (fVar5 * fVar10 + fVar14 + fVar6 * fVar63 + fVar7 * fVar59) * fVar23;
      pfVar4[3] = (fVar36 * fVar5 + fVar40 + fVar32 * fVar6 + fVar28 * fVar7) * fVar18 +
                  (fVar52 * fVar5 + fVar56 + fVar48 * fVar6 + fVar44 * fVar7) * fVar21 +
                  (fVar5 * fVar11 + fVar15 + fVar6 * fVar64 + fVar7 * fVar60) * fVar24;
      uVar65 = uVar65 + 4;
    } while (uVar65 < param_7 << 2);
  }
  return;
}

