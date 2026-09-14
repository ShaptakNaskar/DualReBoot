/* 00074748 | asinf */

/* WARNING: Removing unreachable block (ram,0x00074850) */

float asinf(float __x)

{
  float fVar1;
  double dVar2;
  
  fVar1 = ABS(__x);
  if ((uint)fVar1 < 0x3f800000) {
    if ((uint)fVar1 < 0x3f000000) {
      if ((0x397fffff < (uint)fVar1) || (fVar1 = __x, __x + DAT_00074868 <= 1.0)) {
        fVar1 = __x * __x;
        fVar1 = __x + __x * (((DAT_00074874 + (fVar1 * DAT_0007486c - DAT_00074870) * fVar1) * fVar1
                             ) / (fVar1 * DAT_00074878 + 1.0));
      }
    }
    else {
      fVar1 = (1.0 - ABS(__x)) * 0.5;
      dVar2 = SQRT((double)fVar1) +
              (double)(((DAT_00074874 + (fVar1 * DAT_0007486c - DAT_00074870) * fVar1) * fVar1) /
                      (fVar1 * DAT_00074878 + 1.0)) * SQRT((double)fVar1);
      fVar1 = (float)(DAT_00074860 - (dVar2 + dVar2));
      if ((int)__x < 1) {
        fVar1 = -fVar1;
      }
    }
  }
  else if (fVar1 == 1.0) {
    fVar1 = (float)((double)__x * DAT_00074860);
  }
  else {
    fVar1 = (__x - __x) / (__x - __x);
  }
  return fVar1;
}

