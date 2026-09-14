/* 00074b90 | atanf */

float atanf(float __x)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  
  fVar2 = ABS(__x);
  if (0x4c7fffff < (uint)fVar2) {
    if (0x7f800000 < (uint)fVar2) {
      return __x + __x;
    }
    if ((int)__x < 1) {
      return DAT_00074d68 - *(float *)((int)&DAT_00074d50 + DAT_00074d78);
    }
    return *(float *)(DAT_00074d6c + 0x74bdc) + DAT_00074d4c;
  }
  if ((uint)fVar2 < 0x3ee00000) {
    if (((uint)fVar2 < 0x39800000) && (1.0 < __x + DAT_00074d50)) {
      return __x;
    }
    fVar2 = __x * __x;
    fVar4 = fVar2 * fVar2;
    return __x - __x * ((fVar4 * DAT_00074d5c - DAT_00074d60) * fVar4 +
                       (DAT_00074d64 + (DAT_00074d58 + fVar4 * DAT_00074d54) * fVar4) * fVar2);
  }
  fVar4 = ABS(__x);
  if ((uint)fVar2 < 0x3f980000) {
    if ((uint)fVar2 < 0x3f300000) {
      fVar5 = 2.0;
      fVar1 = fVar4 + fVar4;
    }
    else {
      fVar5 = 1.0;
      fVar1 = fVar4;
    }
    uVar3 = (uint)((uint)fVar2 >= 0x3f300000);
    fVar4 = (fVar1 - 1.0) / (fVar4 + fVar5);
  }
  else if ((uint)fVar2 < 0x401c0000) {
    uVar3 = 2;
    fVar4 = (fVar4 - 1.5) / (fVar4 * 1.5 + 1.0);
  }
  else {
    uVar3 = 3;
    fVar4 = -1.0 / fVar4;
  }
  fVar2 = fVar4 * fVar4;
  fVar5 = fVar2 * fVar2;
  fVar2 = *(float *)(DAT_00074d74 + 0x74cc0 + uVar3 * 4) -
          ((((fVar5 * DAT_00074d5c - DAT_00074d60) * fVar5 +
            (DAT_00074d64 + (DAT_00074d58 + fVar5 * DAT_00074d54) * fVar5) * fVar2) * fVar4 -
           *(float *)(DAT_00074d70 + 0x74cb4 + uVar3 * 4)) - fVar4);
  if ((int)__x < 0) {
    return -fVar2;
  }
  return fVar2;
}

