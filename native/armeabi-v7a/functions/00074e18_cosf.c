/* 00074e18 | cosf */

float cosf(float __x)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  double local_20;
  double local_18;
  
  fVar2 = ABS(__x);
  if ((uint)fVar2 < 0x3f490fdb) {
    if (((uint)fVar2 < 0x39800000) && ((int)__x == 0)) {
      return 1.0;
    }
    dVar4 = (double)__x;
LAB_00074e68:
    dVar4 = dVar4 * dVar4;
    dVar4 = dVar4 * DAT_000751a0 + 1.0 + dVar4 * dVar4 * DAT_000751a8 +
            (dVar4 * DAT_000751b0 - DAT_000751b8) * dVar4 * dVar4 * dVar4;
  }
  else {
    if ((uint)fVar2 < 0x407b53d2) {
      if (0x4016cbe3 < (uint)fVar2) {
        dVar4 = DAT_00075200;
        if (0 < (int)__x) {
          dVar4 = DAT_000751f8;
        }
        dVar4 = ((double)__x + dVar4) * ((double)__x + dVar4);
        return -(float)(dVar4 * DAT_000751a0 + 1.0 + dVar4 * dVar4 * DAT_000751a8 +
                       (dVar4 * DAT_000751b0 - DAT_000751b8) * dVar4 * dVar4 * dVar4);
      }
      dVar4 = DAT_000751c0;
      if (0 < (int)__x) {
LAB_00074ec4:
        dVar4 = dVar4 - (double)__x;
        dVar5 = dVar4 * dVar4;
        return (float)(dVar4 + dVar4 * dVar5 * (dVar5 * DAT_000751c8 - DAT_000751d0) +
                      (dVar5 * DAT_000751d8 - DAT_000751e0) * dVar5 * dVar5 * dVar4 * dVar5);
      }
      local_18 = (double)__x + DAT_000751c0;
      dVar4 = local_18 * local_18;
    }
    else if ((uint)fVar2 < 0x40e231d6) {
      if (0x40afeddf < (uint)fVar2) {
        dVar4 = DAT_000751f0;
        if (0 < (int)__x) {
          dVar4 = DAT_000751e8;
        }
        dVar4 = (double)__x + dVar4;
        goto LAB_00074e68;
      }
      dVar4 = DAT_00075230;
      if ((int)__x < 1) goto LAB_00074ec4;
      local_18 = (double)__x - DAT_00075228;
      dVar4 = local_18 * local_18;
    }
    else {
      if (0x7f7fffff < (uint)fVar2) {
        return __x - __x;
      }
      if ((uint)fVar2 < 0x4dc90fdb) {
        dVar4 = (DAT_00075208 + (double)__x * DAT_00075210) - DAT_00075208;
        uVar3 = (uint)(longlong)dVar4;
        local_18 = ((double)__x - dVar4 * DAT_00075218) - dVar4 * DAT_00075220;
      }
      else {
        iVar1 = ((int)fVar2 >> 0x17) + -0x96;
        local_20 = (double)(float)((int)fVar2 + iVar1 * -0x800000);
        uVar3 = __kernel_rem_pio2(&local_20,&local_18,iVar1,1,0);
        if ((int)__x < 0) {
          uVar3 = -uVar3;
          local_18 = -local_18;
        }
      }
      uVar3 = uVar3 & 3;
      if (uVar3 == 1) {
        dVar4 = -local_18;
        dVar5 = dVar4 * dVar4;
        return (float)((dVar4 * dVar5 * (dVar5 * DAT_000751c8 - DAT_000751d0) - local_18) +
                      (dVar5 * DAT_000751d8 - DAT_000751e0) * dVar5 * dVar5 * dVar4 * dVar5);
      }
      if (uVar3 == 2) {
        local_18 = local_18 * local_18;
        return -(float)(local_18 * DAT_000751a0 + 1.0 + local_18 * local_18 * DAT_000751a8 +
                       (local_18 * DAT_000751b0 - DAT_000751b8) * local_18 * local_18 * local_18);
      }
      if (uVar3 == 0) {
        local_18 = local_18 * local_18;
        return (float)(local_18 * DAT_000751a0 + 1.0 + local_18 * local_18 * DAT_000751a8 +
                      (local_18 * DAT_000751b0 - DAT_000751b8) * local_18 * local_18 * local_18);
      }
      dVar4 = local_18 * local_18;
    }
    dVar4 = local_18 + local_18 * dVar4 * (dVar4 * DAT_000751c8 - DAT_000751d0) +
            (dVar4 * DAT_000751d8 - DAT_000751e0) * dVar4 * dVar4 * local_18 * dVar4;
  }
  return (float)dVar4;
}

