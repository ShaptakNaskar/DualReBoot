/* 00058330 | STG::MMatrix::Transform3x3_Transpose */

/* STG::MMatrix::Transform3x3_Transpose(STG::MMatrix const&, STG::MMatrix&) const */

void __thiscall
STG::MMatrix::Transform3x3_Transpose(MMatrix *this,MMatrix *param_1,MMatrix *param_2)

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
  undefined4 uVar14;
  
  fVar1 = *(float *)(this + 0x10);
  fVar2 = *(float *)(param_1 + 0x10);
  fVar3 = *(float *)param_1;
  fVar4 = *(float *)this;
  *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(this + 0x30);
  fVar5 = *(float *)(this + 0x20);
  fVar6 = *(float *)(param_1 + 0x18);
  fVar7 = *(float *)(this + 0x14);
  fVar8 = *(float *)(this + 4);
  fVar9 = *(float *)(param_1 + 4);
  *(float *)param_2 = fVar2 * fVar1 + fVar3 * fVar4 + *(float *)(param_1 + 0x20) * fVar5;
  fVar2 = *(float *)this;
  fVar3 = *(float *)(param_1 + 0x14);
  fVar4 = *(float *)(param_1 + 8);
  *(float *)(param_2 + 0x10) = fVar1 * fVar3 + fVar9 * fVar2 + *(float *)(param_1 + 0x24) * fVar5;
  fVar1 = *(float *)(param_1 + 0x28);
  fVar9 = *(float *)param_1;
  fVar10 = *(float *)(param_1 + 0x10);
  *(float *)(param_2 + 0x20) = *(float *)(this + 0x10) * fVar6 + fVar2 * fVar4 + fVar5 * fVar1;
  fVar2 = *(float *)(this + 0x24);
  *(float *)(param_2 + 4) = fVar10 * fVar7 + fVar8 * fVar9 + *(float *)(param_1 + 0x20) * fVar2;
  fVar4 = *(float *)(param_1 + 4);
  fVar5 = *(float *)(this + 4);
  *(float *)(param_2 + 0x14) = fVar3 * fVar7 + fVar4 * fVar5 + *(float *)(param_1 + 0x24) * fVar2;
  fVar3 = *(float *)(param_1 + 8);
  *(undefined4 *)(param_2 + 0x34) = *(undefined4 *)(this + 0x34);
  fVar7 = *(float *)(this + 0x18);
  fVar8 = *(float *)(this + 8);
  fVar10 = *(float *)(param_1 + 0x10);
  fVar11 = *(float *)(param_1 + 0x14);
  fVar12 = *(float *)(this + 0x28);
  fVar13 = *(float *)(param_1 + 0x20);
  *(float *)(param_2 + 0x24) = fVar6 * *(float *)(this + 0x14) + fVar5 * fVar3 + fVar2 * fVar1;
  *(float *)(param_2 + 8) = fVar10 * fVar7 + fVar9 * fVar8 + fVar13 * fVar12;
  fVar2 = *(float *)(this + 8);
  fVar3 = *(float *)(param_1 + 8);
  *(float *)(param_2 + 0x18) = fVar7 * fVar11 + fVar4 * fVar2 + *(float *)(param_1 + 0x24) * fVar12;
  fVar4 = *(float *)(param_1 + 0x18);
  fVar5 = *(float *)(this + 0x18);
  *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(this + 0x38);
  *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(this + 0xc);
  *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(this + 0x1c);
  uVar14 = *(undefined4 *)(this + 0x3c);
  *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(this + 0x2c);
  *(undefined4 *)(param_2 + 0x3c) = uVar14;
  *(float *)(param_2 + 0x28) = fVar4 * fVar5 + fVar2 * fVar3 + fVar1 * fVar12;
  return;
}

