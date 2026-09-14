/* 000626b4 | STG::UTime::ComputeSolarEvents */

/* STG::UTime::ComputeSolarEvents(long, STG::MLocation const&,
   STG::MExplicitType<STG::UTime::TimeStruct<(STG::UTime::ETimeValue)0>, unsigned long>&,
   STG::MExplicitType<STG::UTime::TimeStruct<(STG::UTime::ETimeValue)0>, unsigned long>&) const */

undefined4 __thiscall
STG::UTime::ComputeSolarEvents
          (UTime *this,long param_1,MLocation *param_2,MExplicitType *param_3,MExplicitType *param_4
          )

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 extraout_r0;
  undefined4 extraout_r0_00;
  undefined4 uVar8;
  undefined4 extraout_r0_01;
  undefined4 extraout_r0_02;
  undefined4 uVar9;
  undefined4 extraout_r0_03;
  undefined4 extraout_r0_04;
  undefined4 extraout_r0_05;
  undefined4 extraout_r0_06;
  undefined4 extraout_r0_07;
  undefined4 extraout_r0_08;
  undefined4 extraout_r0_09;
  undefined4 extraout_r0_10;
  undefined4 extraout_r0_11;
  float fVar10;
  float __x;
  float __x_00;
  float __x_01;
  
  iVar1 = MLocation::IsValid(param_2);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = __floatsisf(param_1 + 1);
    uVar3 = __floatsisf(*(undefined4 *)param_2);
    uVar4 = __floatsisf(*(undefined4 *)(param_2 + 4));
    uVar5 = __mulsf3(uVar4,DAT_00062e28);
    uVar4 = __subsf3(0x40c00000,uVar5);
    uVar4 = __mulsf3(uVar4,DAT_00062e2c);
    uVar6 = __addsf3(uVar4,uVar2);
    uVar4 = __subsf3(0x41900000,uVar5);
    uVar4 = __mulsf3(uVar4,DAT_00062e2c);
    uVar7 = __addsf3(uVar4,uVar2);
    uVar2 = __mulsf3(uVar6,DAT_00062e30);
    uVar2 = __subsf3(uVar2,DAT_00062e34);
    uVar4 = __mulsf3(uVar7,DAT_00062e30);
    uVar4 = __subsf3(uVar4,DAT_00062e34);
    fVar10 = (float)__mulsf3(uVar2,DAT_00062e38);
    sinf(fVar10);
    fVar10 = (float)__mulsf3(uVar2,DAT_00062e3c);
    sinf(fVar10);
    uVar2 = __addsf3(uVar2,DAT_00062e40);
    uVar8 = __mulsf3(extraout_r0,DAT_00062e44);
    uVar2 = __addsf3(uVar2,uVar8);
    uVar8 = __mulsf3(extraout_r0_00,DAT_00062e48);
    uVar2 = __addsf3(uVar2,uVar8);
    fVar10 = (float)__mulsf3(uVar4,DAT_00062e38);
    sinf(fVar10);
    fVar10 = (float)__mulsf3(uVar4,DAT_00062e3c);
    sinf(fVar10);
    uVar4 = __addsf3(uVar4,DAT_00062e40);
    uVar8 = __mulsf3(extraout_r0_01,DAT_00062e44);
    uVar4 = __addsf3(uVar4,uVar8);
    uVar8 = __mulsf3(extraout_r0_02,DAT_00062e48);
    uVar4 = __addsf3(uVar4,uVar8);
    iVar1 = __aeabi_fcmplt(uVar2,0);
    while (iVar1 != 0) {
      uVar2 = __addsf3(uVar2,0x43b40000);
      iVar1 = __aeabi_fcmplt(uVar2,0);
    }
    while (iVar1 = __aeabi_fcmpgt(uVar2,0x43b40000), iVar1 != 0) {
      uVar2 = __subsf3(uVar2,0x43b40000);
    }
    iVar1 = __aeabi_fcmplt(uVar4,0);
    while (iVar1 != 0) {
      uVar4 = __addsf3(uVar4,0x43b40000);
      iVar1 = __aeabi_fcmplt(uVar4,0);
    }
    while (iVar1 = __aeabi_fcmpgt(uVar4,0x43b40000), iVar1 != 0) {
      uVar4 = __subsf3(uVar4,0x43b40000);
    }
    fVar10 = (float)__mulsf3(uVar2,DAT_00062e38);
    tanf(fVar10);
    fVar10 = (float)__mulsf3();
    atanf(fVar10);
    uVar8 = __mulsf3();
    fVar10 = (float)__mulsf3(uVar4,DAT_00062e38);
    tanf(fVar10);
    fVar10 = (float)__mulsf3();
    atanf(fVar10);
    uVar9 = __mulsf3();
    iVar1 = __aeabi_fcmplt(uVar8,0);
    while (iVar1 != 0) {
      uVar8 = __addsf3(uVar8,0x43b40000);
      iVar1 = __aeabi_fcmplt(uVar8,0);
    }
    while (iVar1 = __aeabi_fcmpgt(uVar8,0x43b40000), iVar1 != 0) {
      uVar8 = __subsf3(uVar8,0x43b40000);
    }
    iVar1 = __aeabi_fcmplt(uVar9,0);
    while (iVar1 != 0) {
      uVar9 = __addsf3(uVar9,0x43b40000);
      iVar1 = __aeabi_fcmplt(uVar9,0);
    }
    while (iVar1 = __aeabi_fcmpgt(uVar9,0x43b40000), iVar1 != 0) {
      uVar9 = __subsf3(uVar9,0x43b40000);
    }
    fVar10 = (float)__mulsf3(uVar2,DAT_00062e54);
    floorf(fVar10);
    fVar10 = (float)__mulsf3(uVar4,DAT_00062e54);
    floorf(fVar10);
    fVar10 = (float)__mulsf3(uVar8,DAT_00062e54);
    floorf(fVar10);
    fVar10 = (float)__mulsf3(uVar9,DAT_00062e54);
    floorf(fVar10);
    uVar2 = __mulsf3(extraout_r0_03,0x42b40000);
    uVar2 = __addsf3(uVar2,uVar8);
    uVar4 = __mulsf3(extraout_r0_05,0x42b40000);
    uVar2 = __subsf3(uVar2,uVar4);
    uVar4 = __mulsf3(extraout_r0_04,0x42b40000);
    uVar4 = __addsf3(uVar4,uVar9);
    uVar8 = __mulsf3(extraout_r0_06,0x42b40000);
    uVar4 = __subsf3(uVar4,uVar8);
    uVar4 = __mulsf3(uVar4,DAT_00062e58);
    sinf(__x);
    uVar8 = __mulsf3();
    sinf(__x_00);
    uVar9 = __mulsf3();
    fVar10 = asinf(__x_01);
    fVar10 = cosf(fVar10);
    fVar10 = asinf(fVar10);
    cosf(fVar10);
    fVar10 = (float)__mulsf3(uVar3,DAT_00062e60);
    fVar10 = sinf(fVar10);
    cosf(fVar10);
    uVar3 = __mulsf3(uVar8,extraout_r0_09);
    uVar3 = __subsf3(DAT_00062e64,uVar3);
    uVar8 = __mulsf3(extraout_r0_10,extraout_r0_07);
    fVar10 = (float)__divsf3(uVar3,uVar8);
    acosf(fVar10);
    uVar3 = __mulsf3(uVar9,extraout_r0_09);
    uVar3 = __subsf3(DAT_00062e64,uVar3);
    uVar8 = __mulsf3(extraout_r0_10,extraout_r0_08);
    fVar10 = (float)__divsf3(uVar3,uVar8);
    acosf(fVar10);
    uVar3 = __mulsf3();
    uVar7 = __mulsf3(uVar7,DAT_00062e6c);
    uVar5 = __subsf3(DAT_00062e70,uVar5);
    uVar6 = __mulsf3(uVar6,DAT_00062e6c);
    uVar6 = __subsf3(uVar5,uVar6);
    uVar2 = __mulsf3(uVar2,DAT_00062e58);
    uVar2 = __addsf3(uVar6,uVar2);
    uVar6 = __mulsf3(extraout_r0_11,DAT_00062e50);
    uVar6 = __subsf3(0x43b40000,uVar6);
    uVar6 = __mulsf3(uVar6,DAT_00062e58);
    while( true ) {
      uVar2 = __addsf3(uVar2,uVar6);
      iVar1 = __aeabi_fcmplt(uVar2,0);
      if (iVar1 == 0) break;
      uVar6 = 0x41c00000;
    }
    while (iVar1 = __aeabi_fcmpgt(uVar2,0x41c00000), iVar1 != 0) {
      uVar2 = __subsf3(uVar2,0x41c00000);
    }
    uVar5 = __subsf3(uVar5,uVar7);
    uVar3 = __addsf3(uVar5,uVar3);
    while( true ) {
      uVar3 = __addsf3(uVar3,uVar4);
      iVar1 = __aeabi_fcmplt(uVar3,0);
      if (iVar1 == 0) break;
      uVar4 = 0x41c00000;
    }
    while (iVar1 = __aeabi_fcmpgt(uVar3,0x41c00000), iVar1 != 0) {
      uVar3 = __subsf3(uVar3,0x41c00000);
    }
    iVar1 = __aeabi_fcmpge(uVar3,0);
    if ((((iVar1 == 0) || (iVar1 = __aeabi_fcmplt(uVar3,0x41c00000), iVar1 == 0)) ||
        (iVar1 = __aeabi_fcmpge(uVar2,0), iVar1 == 0)) ||
       (iVar1 = __aeabi_fcmplt(uVar2,0x41c00000), iVar1 == 0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = __mulsf3(uVar2,0x45610000);
      __addsf3(uVar2,0x3f000000);
      uVar2 = __fixunssfsi();
      *(undefined4 *)param_3 = uVar2;
      uVar2 = __mulsf3(uVar3,0x45610000);
      __addsf3(uVar2,0x3f000000);
      uVar4 = __fixunssfsi();
      uVar2 = 1;
      *(undefined4 *)param_4 = uVar4;
    }
  }
  return uVar2;
}

