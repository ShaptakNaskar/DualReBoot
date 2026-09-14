/* 0002e8bc | STG::MSIMD::Skin3Vector4f_HW */

/* STG::MSIMD::Skin3Vector4f_HW(float*, float const*, float const*, float const*, float const*,
   float const*, unsigned long) */

void STG::MSIMD::Skin3Vector4f_HW
               (float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
               float *param_6,ulong param_7)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  uint uVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  auVar13 = *(undefined1 (*) [16])param_3;
  auVar12 = *(undefined1 (*) [16])(param_3 + 4);
  auVar11 = *(undefined1 (*) [16])(param_3 + 8);
  auVar6 = *(undefined1 (*) [16])(param_3 + 0x24);
  auVar7 = *(undefined1 (*) [16])(param_3 + 0x10);
  auVar5 = *(undefined1 (*) [16])(param_3 + 0x14);
  auVar3 = *(undefined1 (*) [16])(param_3 + 0x18);
  auVar8 = *(undefined1 (*) [16])(param_3 + 0x20);
  auVar4 = *(undefined1 (*) [16])(param_3 + 0x28);
  if (param_7 << 2 != 0) {
    uVar14 = 0;
    do {
      auVar9 = *(undefined1 (*) [16])param_4;
      uVar14 = uVar14 + 4;
      param_4 = (float *)((int)param_4 + 0x10);
      uVar1 = CONCAT44(param_2[2],param_2[2]);
      auVar19._8_8_ = uVar1;
      auVar19._0_8_ = uVar1;
      FloatVectorMultiplyAccumulate(auVar11,auVar19,2,0x10);
      auVar10 = *(undefined1 (*) [16])param_6;
      FloatVectorMultiplyAccumulate(auVar3,auVar19,2,0x10);
      param_6 = (float *)((int)param_6 + 0x10);
      uVar1 = CONCAT44(param_2[1],param_2[1]);
      auVar16._8_8_ = uVar1;
      auVar16._0_8_ = uVar1;
      fVar15 = *param_2;
      FloatVectorMultiplyAccumulate(auVar4,auVar19,2,0x10);
      param_2 = param_2 + 4;
      uVar1 = CONCAT44(fVar15,fVar15);
      auVar2._8_8_ = uVar1;
      auVar2._0_8_ = uVar1;
      FloatVectorMultiplyAccumulate(auVar12,auVar16,2,0x10);
      FloatVectorMultiplyAccumulate(auVar5,auVar16,2,0x10);
      auVar19 = *(undefined1 (*) [16])param_5;
      param_5 = (float *)((int)param_5 + 0x10);
      FloatVectorMultiplyAccumulate(auVar6,auVar16,2,0x10);
      auVar18 = FloatVectorMultiplyAccumulate(auVar13,auVar2,2,0x10);
      auVar17 = FloatVectorMultiplyAccumulate(auVar7,auVar2,2,0x10);
      auVar16 = FloatVectorMultiplyAccumulate(auVar8,auVar2,2,0x10);
      FloatVectorMult(auVar9,auVar18,2,0x20);
      FloatVectorMultiplyAccumulate(auVar19,auVar17,2,0x10);
      auVar19 = FloatVectorMultiplyAccumulate(auVar10,auVar16,2,0x10);
      *(longlong *)param_1 = auVar19._0_8_;
      *(longlong *)(param_1 + 2) = auVar19._8_8_;
      param_1 = param_1 + 4;
    } while (uVar14 < param_7 << 2);
  }
  return;
}

