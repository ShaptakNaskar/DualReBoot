/* 00058180 | STG::MMatrix::Transform3x3 */

/* STG::MMatrix::Transform3x3(STG::MMatrix const&, STG::MMatrix&) const */

void __thiscall STG::MMatrix::Transform3x3(MMatrix *this,MMatrix *param_1,MMatrix *param_2)

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
  
  fVar1 = *(float *)(param_1 + 0x10);
  fVar2 = *(float *)(this + 4);
  fVar3 = *(float *)param_1;
  fVar4 = *(float *)this;
  *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(this + 0xc);
  fVar5 = *(float *)(param_1 + 0x20);
  fVar6 = *(float *)(this + 8);
  fVar7 = *(float *)(param_1 + 0x24);
  fVar8 = *(float *)(param_1 + 4);
  *(float *)param_2 = fVar1 * fVar2 + fVar3 * fVar4 + fVar5 * fVar6;
  fVar3 = *(float *)this;
  fVar4 = *(float *)(param_1 + 0x14);
  fVar9 = *(float *)(param_1 + 8);
  fVar10 = *(float *)(param_1 + 0x18);
  *(float *)(param_2 + 4) = fVar2 * fVar4 + fVar8 * fVar3 + fVar7 * fVar6;
  fVar2 = *(float *)(param_1 + 0x28);
  fVar8 = *(float *)param_1;
  fVar11 = *(float *)(this + 0x10);
  fVar12 = *(float *)(this + 0x14);
  fVar13 = *(float *)(param_1 + 4);
  *(float *)(param_2 + 8) = fVar10 * *(float *)(this + 4) + fVar3 * fVar9 + fVar6 * fVar2;
  fVar3 = *(float *)(this + 0x18);
  *(float *)(param_2 + 0x10) = fVar1 * fVar12 + fVar8 * fVar11 + fVar3 * fVar5;
  fVar1 = *(float *)(this + 0x10);
  fVar6 = *(float *)(param_1 + 8);
  *(float *)(param_2 + 0x14) = fVar4 * fVar12 + fVar13 * fVar1 + fVar3 * fVar7;
  *(float *)(param_2 + 0x18) =
       *(float *)(param_1 + 0x18) * *(float *)(this + 0x14) + fVar1 * fVar6 + fVar3 * fVar2;
  fVar1 = *(float *)(this + 0x24);
  *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(this + 0x1c);
  fVar3 = *(float *)(this + 0x28);
  fVar4 = *(float *)(param_1 + 0x14);
  *(float *)(param_2 + 0x20) =
       *(float *)(param_1 + 0x10) * fVar1 + *(float *)param_1 * *(float *)(this + 0x20) +
       fVar5 * fVar3;
  fVar5 = *(float *)(this + 0x20);
  fVar8 = *(float *)(param_1 + 4);
  fVar9 = *(float *)(param_1 + 0x18);
  *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(this + 0x2c);
  *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(this + 0x30);
  *(undefined4 *)(param_2 + 0x34) = *(undefined4 *)(this + 0x34);
  *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(this + 0x38);
  *(float *)(param_2 + 0x24) = fVar1 * fVar4 + fVar8 * fVar5 + fVar7 * fVar3;
  fVar1 = *(float *)(this + 0x24);
  *(undefined4 *)(param_2 + 0x3c) = *(undefined4 *)(this + 0x3c);
  *(float *)(param_2 + 0x28) = fVar9 * fVar1 + fVar6 * fVar5 + fVar2 * fVar3;
  return;
}

