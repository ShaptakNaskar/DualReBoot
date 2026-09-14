/* 000752e0 | sinf */

float sinf(float __x)

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
      return __x;
    }
    local_18 = (double)__x;
  }
  else if ((uint)fVar2 < 0x407b53d2) {
    dVar4 = (double)__x;
    if ((uint)fVar2 < 0x4016cbe4) {
      if ((int)__x < 1) {
        dVar4 = dVar4 + DAT_00075660;
LAB_00075408:
        dVar4 = dVar4 * dVar4;
        return -(float)(dVar4 * DAT_00075668 + 1.0 + dVar4 * dVar4 * DAT_00075670 +
                       (dVar4 * DAT_00075678 - DAT_00075680) * dVar4 * dVar4 * dVar4);
      }
      dVar4 = dVar4 - DAT_00075660;
LAB_0007539c:
      dVar4 = dVar4 * dVar4;
      return (float)(dVar4 * DAT_00075668 + 1.0 + dVar4 * dVar4 * DAT_00075670 +
                    (dVar4 * DAT_00075678 - DAT_00075680) * dVar4 * dVar4 * dVar4);
    }
    local_18 = DAT_00075698;
    if ((int)__x < 1) {
      local_18 = DAT_00075690;
    }
    local_18 = local_18 - dVar4;
  }
  else {
    if (0x40e231d5 < (uint)fVar2) {
      if (0x7f7fffff < (uint)fVar2) {
        return __x - __x;
      }
      if ((uint)fVar2 < 0x4dc90fdb) {
        dVar4 = (DAT_000756a0 + (double)__x * DAT_000756a8) - DAT_000756a0;
        uVar3 = (uint)(longlong)dVar4;
        local_18 = ((double)__x - dVar4 * DAT_000756b0) - dVar4 * DAT_000756b8;
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
        local_18 = local_18 * local_18;
        return (float)(local_18 * DAT_00075668 + 1.0 + local_18 * local_18 * DAT_00075670 +
                      (local_18 * DAT_00075678 - DAT_00075680) * local_18 * local_18 * local_18);
      }
      if (uVar3 == 2) {
        dVar4 = -local_18;
        dVar5 = dVar4 * dVar4;
        return (float)((dVar4 * dVar5 * (dVar5 * DAT_00075640 - DAT_00075648) - local_18) +
                      (dVar5 * DAT_00075650 - DAT_00075658) * dVar5 * dVar5 * dVar4 * dVar5);
      }
      if (uVar3 != 0) {
        local_18 = local_18 * local_18;
        return -(float)(local_18 * DAT_00075668 + 1.0 + local_18 * local_18 * DAT_00075670 +
                       (local_18 * DAT_00075678 - DAT_00075680) * local_18 * local_18 * local_18);
      }
      dVar4 = local_18 * local_18;
      goto LAB_00075330;
    }
    dVar4 = (double)__x;
    if ((uint)fVar2 < 0x40afede0) {
      if (0 < (int)__x) {
        dVar4 = dVar4 - DAT_00075688;
        goto LAB_00075408;
      }
      dVar4 = dVar4 + DAT_00075688;
      goto LAB_0007539c;
    }
    local_18 = DAT_000756c0;
    if ((int)__x < 1) {
      local_18 = DAT_000756c8;
    }
    local_18 = dVar4 + local_18;
  }
  dVar4 = local_18 * local_18;
LAB_00075330:
  return (float)(local_18 + local_18 * dVar4 * (dVar4 * DAT_00075640 - DAT_00075648) +
                (dVar4 * DAT_00075650 - DAT_00075658) * dVar4 * dVar4 * local_18 * dVar4);
}

