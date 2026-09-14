/* 00058ba0 | STG::MMatrix::ComputeInverse */

/* WARNING: Removing unreachable block (ram,0x00058c80) */
/* STG::MMatrix::ComputeInverse(STG::MMatrix&) const */

void __thiscall STG::MMatrix::ComputeInverse(MMatrix *this,MMatrix *param_1)

{
  int unaff_EBX;
  longdouble lVar1;
  float fVar2;
  float fVar4;
  float fVar5;
  undefined1 auVar3 [16];
  float fVar6;
  
  FUN_0002e044();
  ComputeAdjoint(this,param_1);
  lVar1 = (longdouble)GetDeterminant(this);
  fVar2 = (float)lVar1;
  if (0xf < (uint)ABS(fVar2)) {
    auVar3._4_4_ = fVar2;
    auVar3._0_4_ = fVar2;
    auVar3._8_4_ = fVar2;
    auVar3._12_4_ = fVar2;
    auVar3 = divps(*(undefined1 (*) [16])(unaff_EBX + 0x2ec1a),auVar3);
    fVar2 = auVar3._0_4_;
    fVar4 = auVar3._4_4_;
    fVar5 = auVar3._8_4_;
    fVar6 = auVar3._12_4_;
    *(ulonglong *)(param_1 + 0x10) =
         CONCAT44((float)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20) * fVar4,
                  (float)*(undefined8 *)(param_1 + 0x10) * fVar2);
    *(ulonglong *)(param_1 + 0x18) =
         CONCAT44((float)((ulonglong)*(undefined8 *)(param_1 + 0x18) >> 0x20) * fVar6,
                  (float)*(undefined8 *)(param_1 + 0x18) * fVar5);
    *(float *)(param_1 + 0x20) = (float)*(undefined8 *)(param_1 + 0x20) * fVar2;
    *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) * fVar4;
    *(ulonglong *)param_1 =
         CONCAT44((float)((ulonglong)*(undefined8 *)param_1 >> 0x20) * fVar4,
                  (float)*(undefined8 *)param_1 * fVar2);
    *(ulonglong *)(param_1 + 8) =
         CONCAT44((float)((ulonglong)*(undefined8 *)(param_1 + 8) >> 0x20) * fVar6,
                  (float)*(undefined8 *)(param_1 + 8) * fVar5);
    *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) * fVar5;
    *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) * fVar6;
    *(ulonglong *)(param_1 + 0x30) =
         CONCAT44((float)((ulonglong)*(undefined8 *)(param_1 + 0x30) >> 0x20) * fVar4,
                  (float)*(undefined8 *)(param_1 + 0x30) * fVar2);
    *(ulonglong *)(param_1 + 0x38) =
         CONCAT44((float)((ulonglong)*(undefined8 *)(param_1 + 0x38) >> 0x20) * fVar6,
                  (float)*(undefined8 *)(param_1 + 0x38) * fVar5);
  }
  return;
}

