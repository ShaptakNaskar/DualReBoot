/* 00057ec0 | STG::MMatrix::Transform4x3 */

/* STG::MMatrix::Transform4x3(STG::MMatrix const&, STG::MMatrix&) const */

void __thiscall STG::MMatrix::Transform4x3(MMatrix *this,MMatrix *param_1,MMatrix *param_2)

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
  
  fVar1 = *(float *)(param_1 + 0x10);
  fVar2 = *(float *)(this + 4);
  fVar3 = *(float *)param_1;
  fVar4 = *(float *)this;
  fVar5 = *(float *)(param_1 + 0x20);
  fVar6 = *(float *)(this + 8);
  fVar7 = *(float *)(this + 0xc);
  fVar8 = *(float *)(param_1 + 0x14);
  fVar9 = *(float *)(this + 0x10);
  *(float *)(param_2 + 0xc) = fVar7;
  *(float *)param_2 =
       fVar1 * fVar2 + fVar3 * fVar4 + fVar5 * fVar6 + *(float *)(param_1 + 0x30) * fVar7;
  fVar3 = *(float *)this;
  fVar4 = *(float *)(param_1 + 8);
  fVar10 = *(float *)(param_1 + 0x28);
  fVar11 = *(float *)(param_1 + 0x18);
  *(float *)(param_2 + 4) =
       fVar2 * fVar8 + *(float *)(param_1 + 4) * fVar3 + *(float *)(param_1 + 0x24) * fVar6 +
       *(float *)(param_1 + 0x34) * fVar7;
  fVar2 = *(float *)(param_1 + 0x38);
  fVar8 = *(float *)(this + 0x18);
  fVar12 = *(float *)(this + 0x14);
  fVar13 = *(float *)(param_1 + 0x14);
  fVar14 = *(float *)param_1;
  *(float *)(param_2 + 8) =
       fVar11 * *(float *)(this + 4) + fVar3 * fVar4 + fVar6 * fVar10 + fVar2 * fVar7;
  fVar3 = *(float *)(this + 0x1c);
  fVar4 = *(float *)(param_1 + 4);
  *(float *)(param_2 + 0x10) =
       fVar1 * fVar12 + fVar9 * fVar14 + fVar8 * fVar5 + *(float *)(param_1 + 0x30) * fVar3;
  fVar1 = *(float *)(this + 0x10);
  *(float *)(param_2 + 0x14) =
       fVar12 * fVar13 + fVar4 * fVar1 + *(float *)(param_1 + 0x24) * fVar8 +
       *(float *)(param_1 + 0x34) * fVar3;
  fVar4 = *(float *)(param_1 + 8);
  fVar6 = *(float *)(param_1 + 0x18);
  fVar7 = *(float *)(this + 0x14);
  fVar9 = *(float *)(param_1 + 0x28);
  *(float *)(param_2 + 0x1c) = fVar3;
  fVar10 = *(float *)(this + 0x2c);
  *(float *)(param_2 + 0x2c) = fVar10;
  fVar11 = *(float *)(this + 0x28);
  fVar12 = *(float *)(param_1 + 0x10);
  fVar13 = *(float *)(this + 0x24);
  *(float *)(param_2 + 0x18) = fVar6 * fVar7 + fVar1 * fVar4 + fVar8 * fVar9 + fVar3 * fVar2;
  fVar1 = *(float *)(this + 0x30);
  fVar3 = *(float *)(param_1 + 4);
  *(float *)(param_2 + 0x20) =
       fVar12 * fVar13 + *(float *)(this + 0x20) * fVar14 + fVar5 * fVar11 +
       *(float *)(param_1 + 0x30) * fVar10;
  fVar5 = *(float *)(this + 0x20);
  fVar6 = *(float *)(param_1 + 0x28);
  fVar7 = *(float *)(param_1 + 0x18);
  *(float *)(param_2 + 0x24) =
       *(float *)(param_1 + 0x14) * *(float *)(this + 0x24) + fVar3 * fVar5 +
       *(float *)(param_1 + 0x24) * fVar11 + *(float *)(param_1 + 0x34) * fVar10;
  fVar3 = *(float *)(param_1 + 0x10);
  fVar8 = *(float *)(this + 0x38);
  fVar9 = *(float *)(this + 0x34);
  fVar12 = *(float *)(param_1 + 0x14);
  fVar13 = *(float *)(param_1 + 0x20);
  *(float *)(param_2 + 0x28) =
       *(float *)(this + 0x24) * fVar7 + fVar5 * fVar4 + fVar11 * fVar6 + fVar10 * fVar2;
  fVar5 = *(float *)(this + 0x3c);
  *(float *)(param_2 + 0x30) =
       fVar3 * fVar9 + fVar14 * fVar1 + fVar13 * fVar8 + *(float *)(param_1 + 0x30) * fVar5;
  fVar1 = *(float *)(this + 0x30);
  *(float *)(param_2 + 0x34) =
       fVar9 * fVar12 + *(float *)(param_1 + 4) * fVar1 + *(float *)(param_1 + 0x24) * fVar8 +
       *(float *)(param_1 + 0x34) * fVar5;
  fVar3 = *(float *)(this + 0x34);
  fVar6 = *(float *)(param_1 + 0x28);
  *(float *)(param_2 + 0x3c) = fVar5;
  *(float *)(param_2 + 0x38) = fVar7 * fVar3 + fVar4 * fVar1 + fVar8 * fVar6 + fVar2 * fVar5;
  return;
}

