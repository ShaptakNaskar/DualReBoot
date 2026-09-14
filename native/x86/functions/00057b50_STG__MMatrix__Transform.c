/* 00057b50 | STG::MMatrix::Transform */

/* STG::MMatrix::Transform(STG::MMatrix const&, STG::MMatrix&) const */

void __thiscall STG::MMatrix::Transform(MMatrix *this,MMatrix *param_1,MMatrix *param_2)

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
  fVar3 = *(float *)(param_1 + 0x20);
  fVar4 = *(float *)(this + 8);
  fVar5 = *(float *)(this + 0xc);
  fVar6 = *(float *)(param_1 + 0x14);
  fVar7 = *(float *)(param_1 + 8);
  fVar8 = *(float *)(param_1 + 4);
  *(float *)param_2 =
       fVar1 * fVar2 + *(float *)param_1 * *(float *)this + fVar3 * fVar4 +
       *(float *)(param_1 + 0x30) * fVar5;
  fVar9 = *(float *)this;
  fVar10 = *(float *)(param_1 + 0xc);
  fVar11 = *(float *)(param_1 + 0x28);
  *(float *)(param_2 + 4) =
       fVar2 * fVar6 + fVar8 * fVar9 + *(float *)(param_1 + 0x24) * fVar4 +
       *(float *)(param_1 + 0x34) * fVar5;
  fVar2 = *(float *)(this + 4);
  fVar6 = *(float *)(param_1 + 0x1c);
  fVar8 = *(float *)(param_1 + 0x2c);
  fVar12 = *(float *)(this + 0x18);
  *(float *)(param_2 + 8) =
       *(float *)(param_1 + 0x18) * fVar2 + fVar7 * fVar9 + fVar4 * fVar11 +
       *(float *)(param_1 + 0x38) * fVar5;
  fVar4 = *(float *)(param_1 + 0x3c);
  fVar7 = *(float *)param_1;
  fVar11 = *(float *)(this + 0x10);
  fVar13 = *(float *)(this + 0x1c);
  *(float *)(param_2 + 0xc) =
       fVar2 * fVar6 + fVar9 * fVar10 + fVar8 * *(float *)(this + 8) + fVar5 * fVar4;
  fVar2 = *(float *)(this + 0x14);
  *(float *)(param_2 + 0x10) =
       fVar1 * fVar2 + fVar7 * fVar11 + fVar12 * fVar3 + *(float *)(param_1 + 0x30) * fVar13;
  fVar1 = *(float *)(this + 0x10);
  fVar5 = *(float *)(param_1 + 8);
  fVar6 = *(float *)(param_1 + 0xc);
  fVar7 = *(float *)(param_1 + 0x28);
  fVar8 = *(float *)(param_1 + 0x18);
  *(float *)(param_2 + 0x14) =
       fVar2 * *(float *)(param_1 + 0x14) + *(float *)(param_1 + 4) * fVar1 +
       *(float *)(param_1 + 0x24) * fVar12 + *(float *)(param_1 + 0x34) * fVar13;
  fVar2 = *(float *)(this + 0x14);
  fVar9 = *(float *)(param_1 + 0x1c);
  fVar10 = *(float *)(param_1 + 8);
  fVar11 = *(float *)(this + 0x28);
  fVar14 = *(float *)(this + 0x24);
  *(float *)(param_2 + 0x18) =
       fVar8 * fVar2 + fVar5 * fVar1 + fVar12 * fVar7 + *(float *)(param_1 + 0x38) * fVar13;
  fVar5 = *(float *)(param_1 + 0x10);
  fVar7 = *(float *)(param_1 + 0x14);
  fVar8 = *(float *)(this + 0x2c);
  *(float *)(param_2 + 0x1c) =
       fVar2 * fVar9 + fVar1 * fVar6 + *(float *)(param_1 + 0x2c) * *(float *)(this + 0x18) +
       fVar13 * fVar4;
  *(float *)(param_2 + 0x20) =
       fVar5 * fVar14 + *(float *)param_1 * *(float *)(this + 0x20) + fVar3 * fVar11 +
       *(float *)(param_1 + 0x30) * fVar8;
  fVar1 = *(float *)(this + 0x20);
  fVar2 = *(float *)(param_1 + 0x28);
  *(float *)(param_2 + 0x24) =
       fVar14 * fVar7 + *(float *)(param_1 + 4) * fVar1 + *(float *)(param_1 + 0x24) * fVar11 +
       *(float *)(param_1 + 0x34) * fVar8;
  fVar3 = *(float *)(param_1 + 0x18);
  fVar5 = *(float *)(this + 0x24);
  *(float *)(param_2 + 0x28) =
       fVar3 * fVar5 + fVar10 * fVar1 + fVar11 * fVar2 + *(float *)(param_1 + 0x38) * fVar8;
  fVar2 = *(float *)(param_1 + 0x1c);
  fVar6 = *(float *)(this + 0x34);
  fVar7 = *(float *)param_1;
  fVar9 = *(float *)(this + 0x30);
  fVar10 = *(float *)(this + 0x38);
  fVar11 = *(float *)(this + 0x3c);
  *(float *)(param_2 + 0x2c) =
       fVar5 * fVar2 + fVar1 * *(float *)(param_1 + 0xc) +
       *(float *)(param_1 + 0x2c) * *(float *)(this + 0x28) + fVar8 * fVar4;
  fVar1 = *(float *)(param_1 + 0x14);
  fVar5 = *(float *)(param_1 + 4);
  *(float *)(param_2 + 0x30) =
       *(float *)(param_1 + 0x10) * fVar6 + fVar7 * fVar9 + *(float *)(param_1 + 0x20) * fVar10 +
       *(float *)(param_1 + 0x30) * fVar11;
  fVar7 = *(float *)(this + 0x30);
  *(float *)(param_2 + 0x34) =
       fVar6 * fVar1 + fVar5 * fVar7 + *(float *)(param_1 + 0x24) * fVar10 +
       *(float *)(param_1 + 0x34) * fVar11;
  *(float *)(param_2 + 0x38) =
       fVar3 * *(float *)(this + 0x34) + *(float *)(param_1 + 8) * fVar7 +
       fVar10 * *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x38) * fVar11;
  *(float *)(param_2 + 0x3c) =
       fVar2 * *(float *)(this + 0x34) + fVar7 * *(float *)(param_1 + 0xc) +
       *(float *)(param_1 + 0x2c) * *(float *)(this + 0x38) + fVar4 * fVar11;
  return;
}

