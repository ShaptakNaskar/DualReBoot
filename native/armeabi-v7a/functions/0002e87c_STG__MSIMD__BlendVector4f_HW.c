/* 0002e87c | STG::MSIMD::BlendVector4f_HW */

/* WARNING: Restarted to delay deadcode elimination for space: register */
/* STG::MSIMD::BlendVector4f_HW(float*, float const*, float const*, float, unsigned long) */

void STG::MSIMD::BlendVector4f_HW
               (float *param_1,float *param_2,float *param_3,float param_4,ulong param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  uint uVar3;
  undefined1 auVar4 [16];
  
  auVar1._8_8_ = CONCAT44(param_4,param_4);
  auVar1._0_8_ = CONCAT44(param_4,param_4);
  if (param_5 * 4 == 0) {
    return;
  }
  uVar3 = 0;
  do {
    auVar4 = *(undefined1 (*) [16])param_2;
    uVar3 = uVar3 + 4;
    param_2 = (float *)((int)param_2 + 0x10);
    auVar2 = *(undefined1 (*) [16])param_3;
    param_3 = (float *)((int)param_3 + 0x10);
    auVar4 = FloatVectorSub(auVar2,auVar4,2,0x20);
    auVar4 = FloatVectorMultiplyAccumulate(auVar4,auVar1,2,0x10);
    *(longlong *)param_1 = auVar4._0_8_;
    *(longlong *)(param_1 + 2) = auVar4._8_8_;
    param_1 = param_1 + 4;
  } while (uVar3 < param_5 * 4);
  return;
}

