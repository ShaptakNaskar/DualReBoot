/* 000541f0 | STG::MSIMD::Skin3Vector4f_SW */

/* STG::MSIMD::Skin3Vector4f_SW(float*, float const*, float const*, float const*, float const*,
   float const*, unsigned long) */

void STG::MSIMD::Skin3Vector4f_SW
               (float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
               float *param_6,ulong param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
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
  int iVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  float *pfVar26;
  float *pfVar27;
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
  
  if (param_7 << 2 != 0) {
    fVar10 = *param_3;
    fVar28 = param_3[4];
    iVar22 = 0;
    fVar11 = param_3[8];
    fVar29 = param_3[0xc];
    fVar12 = param_3[1];
    fVar30 = param_3[5];
    fVar13 = param_3[9];
    fVar31 = param_3[0xd];
    fVar14 = param_3[2];
    fVar32 = param_3[6];
    fVar15 = param_3[10];
    fVar33 = param_3[0xe];
    fVar16 = param_3[0x10];
    fVar34 = param_3[0x14];
    fVar17 = param_3[0x18];
    fVar35 = param_3[0x1c];
    fVar18 = param_3[0x11];
    fVar36 = param_3[0x15];
    fVar19 = param_3[0x19];
    fVar37 = param_3[0x1d];
    fVar20 = param_3[0x12];
    fVar38 = param_3[0x16];
    fVar21 = param_3[0x1a];
    fVar8 = param_3[0x1e];
    uVar9 = 0;
    pfVar26 = param_1;
    pfVar27 = param_2;
    do {
      uVar1 = __mulsf3(*(undefined4 *)((int)param_6 + iVar22),0x3f000000);
      uVar25 = *(undefined4 *)((int)param_2 + iVar22);
      uVar2 = __addsf3(uVar1,*(undefined4 *)((int)param_4 + iVar22));
      uVar1 = __addsf3(uVar1,*(undefined4 *)((int)param_5 + iVar22));
      uVar3 = __mulsf3(uVar25,fVar10);
      uVar3 = __addsf3(uVar3,fVar29);
      fVar24 = pfVar27[1];
      fVar23 = pfVar27[2];
      uVar4 = __mulsf3(fVar24,fVar28);
      pfVar27 = pfVar27 + 4;
      uVar3 = __addsf3(uVar3,uVar4);
      uVar4 = __mulsf3(fVar23,fVar11);
      uVar3 = __addsf3(uVar3,uVar4);
      uVar3 = __mulsf3(uVar3,uVar2);
      uVar4 = __mulsf3(uVar25,fVar12);
      uVar4 = __addsf3(uVar4,fVar31);
      uVar5 = __mulsf3(fVar24,fVar30);
      uVar4 = __addsf3(uVar4,uVar5);
      uVar5 = __mulsf3(fVar23,fVar13);
      uVar4 = __addsf3(uVar4,uVar5);
      uVar4 = __mulsf3(uVar4,uVar2);
      uVar5 = __mulsf3(uVar25,fVar14);
      uVar5 = __addsf3(uVar5,fVar33);
      uVar6 = __mulsf3(fVar24,fVar32);
      uVar5 = __addsf3(uVar5,uVar6);
      uVar6 = __mulsf3(fVar23,fVar15);
      uVar5 = __addsf3(uVar5,uVar6);
      uVar2 = __mulsf3(uVar5,uVar2);
      uVar5 = __mulsf3(uVar25,fVar16);
      uVar5 = __addsf3(uVar5,fVar35);
      uVar6 = __mulsf3(fVar24,fVar34);
      uVar5 = __addsf3(uVar5,uVar6);
      uVar6 = __mulsf3(fVar23,fVar17);
      uVar5 = __addsf3(uVar5,uVar6);
      uVar5 = __mulsf3(uVar5,uVar1);
      uVar3 = __addsf3(uVar5,uVar3);
      *(undefined4 *)((int)param_1 + iVar22) = uVar3;
      uVar3 = __mulsf3(uVar25,fVar18);
      uVar3 = __addsf3(uVar3,fVar37);
      uVar5 = __mulsf3(fVar24,fVar36);
      uVar3 = __addsf3(uVar3,uVar5);
      uVar5 = __mulsf3(fVar23,fVar19);
      uVar3 = __addsf3(uVar3,uVar5);
      uVar3 = __mulsf3(uVar3,uVar1);
      fVar7 = (float)__addsf3(uVar3,uVar4);
      pfVar26[1] = fVar7;
      uVar3 = __mulsf3(uVar25,fVar20);
      uVar3 = __addsf3(uVar3,fVar8);
      uVar4 = __mulsf3(fVar24,fVar38);
      uVar3 = __addsf3(uVar3,uVar4);
      uVar4 = __mulsf3(fVar23,fVar21);
      uVar3 = __addsf3(uVar3,uVar4);
      uVar1 = __mulsf3(uVar3,uVar1);
      iVar22 = iVar22 + 0x10;
      fVar7 = (float)__addsf3(uVar1,uVar2);
      pfVar26[2] = fVar7;
      uVar9 = uVar9 + 4;
      pfVar26 = pfVar26 + 4;
    } while (uVar9 < param_7 << 2);
  }
  return;
}

