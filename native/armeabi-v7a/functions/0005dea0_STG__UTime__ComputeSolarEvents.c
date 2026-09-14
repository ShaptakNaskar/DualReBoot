/* 0005dea0 | STG::UTime::ComputeSolarEvents */

/* STG::UTime::ComputeSolarEvents(long, STG::MLocation const&,
   STG::MExplicitType<STG::UTime::TimeStruct<(STG::UTime::ETimeValue)0>, unsigned long>&,
   STG::MExplicitType<STG::UTime::TimeStruct<(STG::UTime::ETimeValue)0>, unsigned long>&) const */

undefined4 __thiscall
STG::UTime::ComputeSolarEvents
          (UTime *this,long param_1,MLocation *param_2,MExplicitType *param_3,MExplicitType *param_4
          )

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  uint in_fpscr;
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
  
  iVar2 = MLocation::IsValid(param_2);
  fVar11 = DAT_0005e2d0;
  fVar8 = DAT_0005e2cc;
  fVar7 = DAT_0005e2c8;
  fVar6 = DAT_0005e2c4;
  fVar15 = DAT_0005e2c0;
  uVar3 = 0;
  if (iVar2 != 0) {
    fVar13 = (float)VectorSignedToFloat(*(undefined4 *)(param_2 + 4),(byte)(in_fpscr >> 0x16) & 3);
    fVar13 = fVar13 * DAT_0005e2b0;
    fVar18 = (float)VectorSignedToFloat(param_1 + 1,(byte)(in_fpscr >> 0x16) & 3);
    fVar17 = fVar18 + (6.0 - fVar13) * DAT_0005e2b4;
    fVar14 = fVar17 * DAT_0005e2bc - DAT_0005e2b8;
    fVar18 = fVar18 + (18.0 - fVar13) * DAT_0005e2b4;
    fVar16 = fVar18 * DAT_0005e2bc - DAT_0005e2b8;
    fVar19 = (float)VectorSignedToFloat(*(undefined4 *)param_2,(byte)(in_fpscr >> 0x16) & 3);
    fVar4 = sinf(fVar14 * DAT_0005e2c0);
    fVar5 = sinf(fVar14 * fVar6);
    fVar15 = sinf(fVar16 * fVar15);
    fVar6 = sinf(fVar16 * fVar6);
    fVar10 = DAT_0005e2dc;
    fVar9 = DAT_0005e2d8;
    fVar6 = fVar16 + fVar7 + fVar15 * fVar8 + fVar6 * fVar11;
    for (fVar15 = fVar14 + fVar7 + fVar4 * fVar8 + fVar5 * fVar11; fVar15 < 0.0;
        fVar15 = fVar15 + DAT_0005e2d4) {
    }
    for (; DAT_0005e2d4 < fVar15; fVar15 = fVar15 - DAT_0005e2d4) {
    }
    for (; fVar6 < 0.0; fVar6 = fVar6 + DAT_0005e2d4) {
    }
    for (; DAT_0005e2d4 < fVar6; fVar6 = fVar6 - DAT_0005e2d4) {
    }
    fVar4 = fVar15 * DAT_0005e2c0;
    fVar5 = fVar6 * DAT_0005e2c0;
    fVar7 = tanf(fVar4);
    fVar7 = atanf(fVar7 * fVar9);
    fVar7 = fVar7 * fVar10;
    fVar8 = tanf(fVar5);
    fVar8 = atanf(fVar8 * fVar9);
    fVar11 = DAT_0005e2e0;
    fVar8 = fVar8 * fVar10;
    for (; fVar7 < 0.0; fVar7 = fVar7 + DAT_0005e2d4) {
    }
    for (; DAT_0005e2d4 < fVar7; fVar7 = fVar7 - DAT_0005e2d4) {
    }
    for (; fVar8 < 0.0; fVar8 = fVar8 + DAT_0005e2d4) {
    }
    for (; DAT_0005e2d4 < fVar8; fVar8 = fVar8 - DAT_0005e2d4) {
    }
    fVar9 = floorf(fVar15 * DAT_0005e2e0);
    fVar1 = DAT_0005e2ec;
    fVar16 = DAT_0005e2e8;
    fVar14 = DAT_0005e2e4;
    fVar15 = floorf(fVar6 * fVar11);
    fVar10 = floorf(fVar7 * fVar11);
    fVar6 = floorf(fVar8 * fVar11);
    fVar15 = fVar15 * DAT_0005e2f0;
    fVar9 = fVar9 * DAT_0005e2f0;
    fVar6 = fVar6 * DAT_0005e2f0;
    fVar10 = fVar10 * DAT_0005e2f0;
    fVar11 = sinf(fVar4);
    fVar11 = fVar11 * fVar14;
    fVar4 = sinf(fVar5);
    fVar4 = fVar4 * fVar14;
    fVar5 = asinf(fVar11);
    fVar5 = cosf(fVar5);
    fVar14 = asinf(fVar4);
    fVar14 = cosf(fVar14);
    fVar19 = fVar19 * DAT_0005e2f4;
    fVar12 = sinf(fVar19);
    fVar19 = cosf(fVar19);
    fVar11 = acosf((fVar1 - fVar11 * fVar12) / (fVar19 * fVar5));
    fVar4 = acosf((fVar1 - fVar4 * fVar12) / (fVar19 * fVar14));
    for (fVar7 = ((DAT_0005e2f8 - fVar13) - fVar17 * DAT_0005e2fc) +
                 ((fVar7 + fVar9) - fVar10) * fVar16 +
                 (DAT_0005e2d4 - fVar11 * DAT_0005e2dc) * fVar16; fVar7 < 0.0; fVar7 = fVar7 + 24.0)
    {
    }
    for (; 24.0 < fVar7; fVar7 = fVar7 - 24.0) {
    }
    for (fVar15 = ((DAT_0005e2f8 - fVar13) - fVar18 * DAT_0005e2fc) + fVar4 * DAT_0005e300 +
                  ((fVar8 + fVar15) - fVar6) * fVar16; fVar15 < 0.0; fVar15 = fVar15 + 24.0) {
    }
    for (; 24.0 < fVar15; fVar15 = fVar15 - 24.0) {
    }
    if ((((fVar15 < 0.0) || (24.0 <= fVar15)) || (fVar7 < 0.0)) || (24.0 <= fVar7)) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
      fVar6 = fVar15 * DAT_0005e304 + 0.5;
      fVar15 = fVar7 * DAT_0005e304 + 0.5;
      *(uint *)param_3 = (uint)(0.0 < fVar15) * (int)fVar15;
      *(uint *)param_4 = (uint)(0.0 < fVar6) * (int)fVar6;
    }
  }
  return uVar3;
}

