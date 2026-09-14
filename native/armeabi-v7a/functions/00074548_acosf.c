/* 00074548 | acosf */

/* WARNING: Removing unreachable block (ram,0x000746f8) */
/* WARNING: Removing unreachable block (ram,0x00074708) */

float acosf(float __x)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = ABS(__x);
  if ((uint)fVar1 < 0x3f800000) {
    if ((uint)fVar1 < 0x3f000000) {
      if ((uint)fVar1 < 0x32800001) {
        fVar1 = *(float *)(DAT_00074734 + 0x74614) + DAT_00074728;
      }
      else {
        fVar1 = __x * __x;
        fVar1 = DAT_00074728 -
                (__x - (*(float *)(DAT_00074738 + 0x74650) -
                       __x * (((DAT_00074720 + (fVar1 * DAT_00074718 - DAT_0007471c) * fVar1) *
                              fVar1) / (fVar1 * DAT_00074724 + 1.0))));
      }
    }
    else if ((int)__x < 0) {
      fVar1 = (__x + 1.0) * 0.5;
      fVar1 = SQRT(fVar1) +
              ((((DAT_00074720 + (fVar1 * DAT_00074718 - DAT_0007471c) * fVar1) * fVar1) /
               (fVar1 * DAT_00074724 + 1.0)) * SQRT(fVar1) - *(float *)(DAT_00074740 + 0x746d0));
      fVar1 = DAT_00074730 - (fVar1 + fVar1);
    }
    else {
      fVar3 = (1.0 - __x) * 0.5;
      fVar2 = SQRT(fVar3);
      fVar1 = (float)((uint)fVar2 & 0xfffff000);
      fVar1 = fVar1 + (fVar3 - fVar1 * fVar1) / (fVar2 + fVar1) +
                      (((DAT_00074720 + (fVar3 * DAT_00074718 - DAT_0007471c) * fVar3) * fVar3) /
                      (fVar3 * DAT_00074724 + 1.0)) * fVar2;
      fVar1 = fVar1 + fVar1;
    }
  }
  else if (fVar1 == 1.0) {
    fVar1 = DAT_0007472c;
    if ((int)__x < 1) {
      fVar1 = *(float *)(DAT_0007473c + 0x74688) + *(float *)(DAT_0007473c + 0x74688) + DAT_00074730
      ;
    }
  }
  else {
    fVar1 = (__x - __x) / (__x - __x);
  }
  return fVar1;
}

