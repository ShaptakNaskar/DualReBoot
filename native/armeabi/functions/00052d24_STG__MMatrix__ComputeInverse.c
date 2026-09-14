/* 00052d24 | STG::MMatrix::ComputeInverse */

/* WARNING: Removing unreachable block (ram,0x00052d44) */
/* STG::MMatrix::ComputeInverse(STG::MMatrix&) const */

void STG::MMatrix::ComputeInverse(MMatrix *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  MMatrix *in_r1;
  
  ComputeAdjoint(param_1,in_r1);
  uVar1 = GetDeterminant(param_1);
  if (0xf < (uVar1 & 0x7fffffff)) {
    uVar2 = __divsf3(0x3f800000,uVar1);
    uVar3 = __mulsf3(*(undefined4 *)in_r1,uVar2);
    *(undefined4 *)in_r1 = uVar3;
    uVar3 = __mulsf3(*(undefined4 *)(in_r1 + 4),uVar2);
    *(undefined4 *)(in_r1 + 4) = uVar3;
    uVar3 = __mulsf3(*(undefined4 *)(in_r1 + 8),uVar2);
    *(undefined4 *)(in_r1 + 8) = uVar3;
    uVar3 = __mulsf3(*(undefined4 *)(in_r1 + 0xc),uVar2);
    *(undefined4 *)(in_r1 + 0xc) = uVar3;
    uVar3 = __mulsf3(*(undefined4 *)(in_r1 + 0x10),uVar2);
    *(undefined4 *)(in_r1 + 0x10) = uVar3;
    uVar3 = __mulsf3(*(undefined4 *)(in_r1 + 0x14),uVar2);
    *(undefined4 *)(in_r1 + 0x14) = uVar3;
    uVar3 = __mulsf3(*(undefined4 *)(in_r1 + 0x18),uVar2);
    *(undefined4 *)(in_r1 + 0x18) = uVar3;
    uVar3 = __mulsf3(*(undefined4 *)(in_r1 + 0x1c),uVar2);
    *(undefined4 *)(in_r1 + 0x1c) = uVar3;
    uVar3 = __mulsf3(*(undefined4 *)(in_r1 + 0x20),uVar2);
    *(undefined4 *)(in_r1 + 0x20) = uVar3;
    uVar3 = __mulsf3(*(undefined4 *)(in_r1 + 0x24),uVar2);
    *(undefined4 *)(in_r1 + 0x24) = uVar3;
    uVar3 = __mulsf3(*(undefined4 *)(in_r1 + 0x28),uVar2);
    *(undefined4 *)(in_r1 + 0x28) = uVar3;
    uVar3 = __mulsf3(*(undefined4 *)(in_r1 + 0x2c),uVar2);
    *(undefined4 *)(in_r1 + 0x2c) = uVar3;
    uVar3 = __mulsf3(*(undefined4 *)(in_r1 + 0x30),uVar2);
    *(undefined4 *)(in_r1 + 0x30) = uVar3;
    uVar3 = __mulsf3(*(undefined4 *)(in_r1 + 0x34),uVar2);
    *(undefined4 *)(in_r1 + 0x34) = uVar3;
    uVar3 = __mulsf3(*(undefined4 *)(in_r1 + 0x38),uVar2);
    *(undefined4 *)(in_r1 + 0x38) = uVar3;
    uVar2 = __mulsf3(*(undefined4 *)(in_r1 + 0x3c),uVar2);
    *(undefined4 *)(in_r1 + 0x3c) = uVar2;
  }
  return;
}

