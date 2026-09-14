/* 00074d7c | ceilf */

float ceilf(float __x)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = ((uint)ABS(__x) >> 0x17) - 0x7f;
  if (0x16 < (int)uVar2) {
    if (uVar2 == 0x80) {
      __x = __x + __x;
    }
    return __x;
  }
  if ((int)uVar2 < 0) {
    if (0.0 < __x + DAT_00074e10) {
      if ((int)__x < 0) {
        __x = -0.0;
      }
      else if (__x != 0.0) {
        __x = 1.0;
      }
    }
  }
  else {
    uVar1 = 0x7fffff >> (uVar2 & 0xff);
    if ((uVar1 & (uint)__x) == 0) {
      return __x;
    }
    if (0.0 < __x + DAT_00074e10) {
      if (0 < (int)__x) {
        __x = (float)((int)__x + (0x800000 >> (uVar2 & 0xff)));
      }
      __x = (float)((uint)__x & ~uVar1);
    }
  }
  return __x;
}

