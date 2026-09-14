/* 0006b710 | STG::UTime::ComputeSolarEvents */

/* STG::UTime::ComputeSolarEvents(long, STG::MLocation const&,
   STG::MExplicitType<STG::UTime::TimeStruct<(STG::UTime::ETimeValue)0>, unsigned long>&,
   STG::MExplicitType<STG::UTime::TimeStruct<(STG::UTime::ETimeValue)0>, unsigned long>&) const */

undefined4 __thiscall
STG::UTime::ComputeSolarEvents
          (UTime *this,long param_1,MLocation *param_2,MExplicitType *param_3,MExplicitType *param_4
          )

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  undefined4 uVar5;
  int unaff_EBX;
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
  float local_bc;
  float local_1c;
  float local_18;
  
  FUN_0002e044();
  cVar4 = MLocation::IsValid(param_2);
  uVar5 = 0;
  if (cVar4 != '\0') {
    iVar1 = *(int *)param_2;
    fVar8 = (float)*(int *)(param_2 + 4) *
            *(float *)("_ZNK3STG5UTime13GetTime_LocalEv" + unaff_EBX + 0xd);
    fVar9 = (*(float *)("_ZNK3STG5UTime13GetTime_LocalEv" + unaff_EBX + 0x11) - fVar8) *
            *(float *)("_ZNK3STG5UTime13GetTime_LocalEv" + unaff_EBX + 0x15) + (float)(param_1 + 1);
    fVar6 = (float)(param_1 + 1) +
            *(float *)("_ZNK3STG5UTime13GetTime_LocalEv" + unaff_EBX + 0x15) *
            (*(float *)("_ZNK3STG5UTime13GetTime_LocalEv" + unaff_EBX + 0x19) - fVar8);
    fVar10 = fVar9 * *(float *)("_ZNK3STG5UTime13GetTime_LocalEv" + unaff_EBX + 0x1d) -
             *(float *)(
                       "_ZN3STG15GETimeOfDayAuto6UpdateERKNS_5UTime10TimeStructILNS1_10ETimeValueE0EEERKNS2_ILS3_1EEE"
                       + unaff_EBX + 1);
    fVar7 = *(float *)("_ZNK3STG5UTime13GetTime_LocalEv" + unaff_EBX + 0x1d) * fVar6 -
            *(float *)(
                      "_ZN3STG15GETimeOfDayAuto6UpdateERKNS_5UTime10TimeStructILNS1_10ETimeValueE0EEERKNS2_ILS3_1EEE"
                      + unaff_EBX + 1);
    fVar12 = sinf(*(float *)(
                            "_ZN3STG15GETimeOfDayAuto6UpdateERKNS_5UTime10TimeStructILNS1_10ETimeValueE0EEERKNS2_ILS3_1EEE"
                            + unaff_EBX + 5) * fVar10);
    fVar15 = *(float *)(
                       "_ZN3STG15GETimeOfDayAuto6UpdateERKNS_5UTime10TimeStructILNS1_10ETimeValueE0EEERKNS2_ILS3_1EEE"
                       + unaff_EBX + 9);
    fVar13 = sinf(fVar10 * fVar15);
    fVar11 = *(float *)(
                       "_ZN3STG15GETimeOfDayAuto6UpdateERKNS_5UTime10TimeStructILNS1_10ETimeValueE0EEERKNS2_ILS3_1EEE"
                       + unaff_EBX + 0xd);
    fVar17 = *(float *)(
                       "_ZN3STG15GETimeOfDayAuto6UpdateERKNS_5UTime10TimeStructILNS1_10ETimeValueE0EEERKNS2_ILS3_1EEE"
                       + unaff_EBX + 0x11);
    fVar16 = *(float *)(
                       "_ZN3STG15GETimeOfDayAuto6UpdateERKNS_5UTime10TimeStructILNS1_10ETimeValueE0EEERKNS2_ILS3_1EEE"
                       + unaff_EBX + 0x15);
    fVar14 = sinf(*(float *)(
                            "_ZN3STG15GETimeOfDayAuto6UpdateERKNS_5UTime10TimeStructILNS1_10ETimeValueE0EEERKNS2_ILS3_1EEE"
                            + unaff_EBX + 5) * fVar7);
    fVar15 = sinf(fVar15 * fVar7);
    fVar7 = fVar11 + fVar7 + fVar17 * fVar14 + fVar15 * fVar16;
    fVar15 = *(float *)(
                       "_ZN3STG15GETimeOfDayAuto6UpdateERKNS_5UTime10TimeStructILNS1_10ETimeValueE0EEERKNS2_ILS3_1EEE"
                       + unaff_EBX + 0x19);
    for (fVar11 = fVar10 + fVar11 + fVar12 * fVar17 + fVar13 * fVar16; fVar11 < 0.0;
        fVar11 = fVar11 + fVar15) {
    }
    for (; fVar15 < fVar11; fVar11 = fVar11 - fVar15) {
    }
    for (; fVar7 < 0.0; fVar7 = fVar7 + fVar15) {
    }
    for (; fVar15 < fVar7; fVar7 = fVar7 - fVar15) {
    }
    fVar17 = *(float *)(
                       "_ZN3STG15GETimeOfDayAuto6UpdateERKNS_5UTime10TimeStructILNS1_10ETimeValueE0EEERKNS2_ILS3_1EEE"
                       + unaff_EBX + 5);
    fVar10 = tanf(fVar17 * fVar11);
    fVar16 = *(float *)(
                       "_ZN3STG15GETimeOfDayAuto6UpdateERKNS_5UTime10TimeStructILNS1_10ETimeValueE0EEERKNS2_ILS3_1EEE"
                       + unaff_EBX + 0x1d);
    fVar12 = atanf(fVar10 * fVar16);
    fVar10 = *(float *)(
                       "_ZN3STG15GETimeOfDayAuto6UpdateERKNS_5UTime10TimeStructILNS1_10ETimeValueE0EEERKNS2_ILS3_1EEE"
                       + unaff_EBX + 0x21);
    fVar13 = tanf(fVar7 * 0.017453292);
    fVar16 = atanf(fVar13 * fVar16);
    fVar16 = fVar16 * *(float *)(
                                "_ZN3STG15GETimeOfDayAuto6UpdateERKNS_5UTime10TimeStructILNS1_10ETimeValueE0EEERKNS2_ILS3_1EEE"
                                + unaff_EBX + 0x21);
    for (fVar12 = fVar12 * fVar10; fVar12 < 0.0; fVar12 = fVar12 + fVar15) {
    }
    for (; fVar15 < fVar12; fVar12 = fVar12 - fVar15) {
    }
    for (; fVar16 < 0.0; fVar16 = fVar16 + fVar15) {
    }
    for (; fVar15 < fVar16; fVar16 = fVar16 - fVar15) {
    }
    local_1c = fVar11 * *(float *)(
                                  "_ZN3STG15GETimeOfDayAuto6UpdateERKNS_5UTime10TimeStructILNS1_10ETimeValueE0EEERKNS2_ILS3_1EEE"
                                  + unaff_EBX + 0x25);
    fVar10 = *(float *)("_ZN3STG7GEScene8LoadSelfEPKNS_9FFileBaseE" + unaff_EBX + 0x21);
    if ((float)((uint)local_1c & *(uint *)("_ZN3STG5MSIMDD1Ev" + unaff_EBX + 8)) < fVar10) {
      local_1c = (float)(int)local_1c -
                 (float)(*(uint *)("_ZN3STG7GEScene8LoadSelfERKNS_9FFileHashE" + unaff_EBX + 0x1b) &
                        -(uint)(local_1c < (float)(int)local_1c));
    }
    local_18 = fVar7 * *(float *)(
                                 "_ZN3STG15GETimeOfDayAuto6UpdateERKNS_5UTime10TimeStructILNS1_10ETimeValueE0EEERKNS2_ILS3_1EEE"
                                 + unaff_EBX + 0x25);
    if ((float)((uint)local_18 & *(uint *)("_ZN3STG5MSIMDD1Ev" + unaff_EBX + 8)) < fVar10) {
      local_18 = (float)(int)local_18 -
                 (float)(*(uint *)("_ZN3STG7GEScene8LoadSelfERKNS_9FFileHashE" + unaff_EBX + 0x1b) &
                        -(uint)(local_18 < (float)(int)local_18));
    }
    local_bc = *(float *)(
                         "_ZN3STG15GETimeOfDayAuto6UpdateERKNS_5UTime10TimeStructILNS1_10ETimeValueE0EEERKNS2_ILS3_1EEE"
                         + unaff_EBX + 0x25) * fVar12;
    if ((float)((uint)local_bc & *(uint *)("_ZN3STG5MSIMDD1Ev" + unaff_EBX + 8)) < fVar10) {
      local_bc = (float)(int)local_bc -
                 (float)(*(uint *)("_ZN3STG7GEScene8LoadSelfERKNS_9FFileHashE" + unaff_EBX + 0x1b) &
                        -(uint)(local_bc < (float)(int)local_bc));
    }
    fVar13 = *(float *)(
                       "_ZN3STG15GETimeOfDayAuto6UpdateERKNS_5UTime10TimeStructILNS1_10ETimeValueE0EEERKNS2_ILS3_1EEE"
                       + unaff_EBX + 0x25) * fVar16;
    if ((float)((uint)fVar13 &
               *(uint *)(
                        "_ZN3STG15GETimeOfDayAuto6UpdateERKNS_5UTime10TimeStructILNS1_10ETimeValueE0EEERKNS2_ILS3_1EEE"
                        + unaff_EBX + 0x51)) < fVar10) {
      fVar13 = (float)(int)fVar13 -
               (float)(*(uint *)("_ZN3STG7GEScene8LoadSelfERKNS_9FFileHashE" + unaff_EBX + 0x1b) &
                      -(uint)(fVar13 < (float)(int)fVar13));
    }
    fVar10 = *(float *)(
                       "_ZN3STG15GETimeOfDayAuto6UpdateERKNS_5UTime10TimeStructILNS1_10ETimeValueE0EEERKNS2_ILS3_1EEE"
                       + unaff_EBX + 0x29);
    fVar14 = *(float *)(
                       "_ZN3STG15GETimeOfDayAuto6UpdateERKNS_5UTime10TimeStructILNS1_10ETimeValueE0EEERKNS2_ILS3_1EEE"
                       + unaff_EBX + 0x2d);
    fVar17 = sinf(fVar17 * fVar11);
    fVar11 = *(float *)(
                       "_ZN3STG15GETimeOfDayAuto6UpdateERKNS_5UTime10TimeStructILNS1_10ETimeValueE0EEERKNS2_ILS3_1EEE"
                       + unaff_EBX + 0x31);
    fVar17 = fVar17 * fVar11;
    fVar7 = sinf(fVar7 * 0.017453292);
    fVar7 = fVar7 * fVar11;
    fVar11 = asinf(fVar17);
    fVar18 = cosf(fVar11);
    fVar11 = asinf(fVar7);
    fVar19 = cosf(fVar11);
    fVar11 = *(float *)(
                       "_ZN3STG15GETimeOfDayAuto6UpdateERKNS_5UTime10TimeStructILNS1_10ETimeValueE0EEERKNS2_ILS3_1EEE"
                       + unaff_EBX + 0x35);
    fVar20 = sinf((float)iVar1 * fVar11);
    fVar21 = cosf((float)iVar1 * fVar11);
    fVar11 = *(float *)(
                       "_ZN3STG15GETimeOfDayAuto6UpdateERKNS_5UTime10TimeStructILNS1_10ETimeValueE0EEERKNS2_ILS3_1EEE"
                       + unaff_EBX + 0x39);
    fVar17 = acosf((fVar11 - fVar17 * fVar20) / (fVar18 * fVar21));
    fVar7 = acosf((fVar11 - fVar20 * fVar7) / (fVar21 * fVar19));
    fVar11 = *(float *)(
                       "_ZN3STG15GETimeOfDayAuto6UpdateERKNS_5UTime10TimeStructILNS1_10ETimeValueE0EEERKNS2_ILS3_1EEE"
                       + unaff_EBX + 0x49);
    for (fVar15 = (fVar15 - *(float *)(
                                      "_ZN3STG15GETimeOfDayAuto6UpdateERKNS_5UTime10TimeStructILNS1_10ETimeValueE0EEERKNS2_ILS3_1EEE"
                                      + unaff_EBX + 0x21) * fVar17) *
                  *(float *)(
                            "_ZN3STG15GETimeOfDayAuto6UpdateERKNS_5UTime10TimeStructILNS1_10ETimeValueE0EEERKNS2_ILS3_1EEE"
                            + unaff_EBX + 0x2d) +
                  ((local_1c * fVar10 + fVar12) - local_bc * fVar10) *
                  *(float *)(
                            "_ZN3STG15GETimeOfDayAuto6UpdateERKNS_5UTime10TimeStructILNS1_10ETimeValueE0EEERKNS2_ILS3_1EEE"
                            + unaff_EBX + 0x2d) +
                  ((*(float *)(
                              "_ZN3STG15GETimeOfDayAuto6UpdateERKNS_5UTime10TimeStructILNS1_10ETimeValueE0EEERKNS2_ILS3_1EEE"
                              + unaff_EBX + 0x45) - fVar8) -
                  *(float *)(
                            "_ZN3STG15GETimeOfDayAuto6UpdateERKNS_5UTime10TimeStructILNS1_10ETimeValueE0EEERKNS2_ILS3_1EEE"
                            + unaff_EBX + 0x41) * fVar9); fVar15 < 0.0; fVar15 = fVar15 + fVar11) {
    }
    for (; fVar11 < fVar15; fVar15 = fVar15 - fVar11) {
    }
    for (fVar17 = ((*(float *)(
                              "_ZN3STG15GETimeOfDayAuto6UpdateERKNS_5UTime10TimeStructILNS1_10ETimeValueE0EEERKNS2_ILS3_1EEE"
                              + unaff_EBX + 0x45) - fVar8) -
                  fVar6 * *(float *)(
                                    "_ZN3STG15GETimeOfDayAuto6UpdateERKNS_5UTime10TimeStructILNS1_10ETimeValueE0EEERKNS2_ILS3_1EEE"
                                    + unaff_EBX + 0x41)) +
                  fVar7 * *(float *)(
                                    "_ZN3STG15GETimeOfDayAuto6UpdateERKNS_5UTime10TimeStructILNS1_10ETimeValueE0EEERKNS2_ILS3_1EEE"
                                    + unaff_EBX + 0x3d) +
                  ((local_18 * fVar10 + fVar16) - fVar13 * fVar10) * fVar14; fVar17 < 0.0;
        fVar17 = fVar17 + fVar11) {
    }
    for (; fVar11 < fVar17; fVar17 = fVar17 - fVar11) {
    }
    if ((((fVar17 < 0.0) || (fVar11 <= fVar17)) || (fVar15 < 0.0)) || (fVar11 <= fVar15)) {
      return 0;
    }
    fVar11 = *(float *)("_ZN3STG15GETimeOfDayAutoD1Ev" + unaff_EBX + 0xb);
    fVar16 = fVar15 * *(float *)(
                                "_ZN3STG15GETimeOfDayAuto6UpdateERKNS_5UTime10TimeStructILNS1_10ETimeValueE0EEERKNS2_ILS3_1EEE"
                                + unaff_EBX + 0x4d) +
             *(float *)("_ZN3STG7GEScene8LoadSelfEPKNS_9FFileBaseE" + unaff_EBX + 0x19);
    fVar15 = fVar17 * *(float *)(
                                "_ZN3STG15GETimeOfDayAuto6UpdateERKNS_5UTime10TimeStructILNS1_10ETimeValueE0EEERKNS2_ILS3_1EEE"
                                + unaff_EBX + 0x4d) +
             *(float *)("_ZN3STG7GEScene8LoadSelfEPKNS_9FFileBaseE" + unaff_EBX + 0x19);
    uVar2 = (uint)(fVar11 <= fVar16);
    uVar3 = (uint)(fVar11 <= fVar15);
    *(uint *)param_3 = (int)(fVar16 - (float)((uint)fVar11 & -uVar2)) ^ uVar2 * -0x80000000;
    *(uint *)param_4 = (int)(fVar15 - (float)((uint)fVar11 & -uVar3)) ^ uVar3 * -0x80000000;
    uVar5 = 1;
  }
  return uVar5;
}

