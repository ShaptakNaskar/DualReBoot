/* 000756d0 | tanf */

float tanf(float __x)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double local_28;
  double local_20;
  
  fVar3 = ABS(__x);
  if ((uint)fVar3 < 0x3f490fdb) {
    if (((uint)fVar3 < 0x39800000) && ((int)__x == 0)) {
      return __x;
    }
    dVar4 = (double)__x;
  }
  else {
    if ((uint)fVar3 < 0x407b53d2) {
      dVar4 = DAT_000759e0;
      dVar5 = DAT_000759d8;
      if ((uint)fVar3 < 0x4016cbe4) {
        dVar4 = DAT_00075a00;
        if (0 < (int)__x) {
          dVar4 = DAT_000759f8;
        }
        dVar4 = (double)__x + dVar4;
        dVar5 = dVar4 * dVar4;
        return (float)(-1.0 / (dVar4 + dVar4 * dVar5 * (DAT_000759d0 + dVar5 * DAT_000759c8) +
                              dVar5 * dVar5 * dVar4 * dVar5 *
                              (DAT_000759b0 + dVar5 * DAT_000759a8 +
                              (DAT_000759c0 + dVar5 * DAT_000759b8) * dVar5 * dVar5)));
      }
    }
    else {
      if (0x40e231d5 < (uint)fVar3) {
        if ((uint)fVar3 < 0x7f800000) {
          if ((uint)fVar3 < 0x4dc90fdb) {
            dVar4 = (DAT_00075a08 + (double)__x * DAT_00075a10) - DAT_00075a08;
            uVar1 = (uint)(longlong)dVar4;
            local_20 = ((double)__x - dVar4 * DAT_00075a18) - dVar4 * DAT_00075a20;
          }
          else {
            iVar2 = ((int)fVar3 >> 0x17) + -0x96;
            local_28 = (double)(float)((int)fVar3 + iVar2 * -0x800000);
            uVar1 = __kernel_rem_pio2(&local_28,&local_20,iVar2,1,0);
            if ((int)__x < 0) {
              uVar1 = -uVar1;
              local_20 = -local_20;
            }
          }
          dVar4 = local_20 * local_20;
          dVar4 = local_20 + local_20 * dVar4 * (DAT_000759d0 + dVar4 * DAT_000759c8) +
                  dVar4 * dVar4 * local_20 * dVar4 *
                  (DAT_000759b0 + dVar4 * DAT_000759a8 +
                  (DAT_000759c0 + dVar4 * DAT_000759b8) * dVar4 * dVar4);
          if ((uVar1 & 1) != 0) {
            dVar4 = -1.0 / dVar4;
          }
          return (float)dVar4;
        }
        return __x - __x;
      }
      dVar4 = DAT_00075a30;
      dVar5 = DAT_00075a28;
      if ((uint)fVar3 < 0x40afede0) {
        dVar4 = DAT_000759f0;
        if (0 < (int)__x) {
          dVar4 = DAT_000759e8;
        }
        dVar4 = (double)__x + dVar4;
        dVar5 = dVar4 * dVar4;
        return (float)(-1.0 / (dVar4 + dVar4 * dVar5 * (DAT_000759d0 + dVar5 * DAT_000759c8) +
                              dVar5 * dVar5 * dVar4 * dVar5 *
                              (DAT_000759b0 + dVar5 * DAT_000759a8 +
                              (DAT_000759c0 + dVar5 * DAT_000759b8) * dVar5 * dVar5)));
      }
    }
    if (0 < (int)__x) {
      dVar4 = dVar5;
    }
    dVar4 = (double)__x + dVar4;
  }
  dVar5 = dVar4 * dVar4;
  return (float)(dVar4 + dVar4 * dVar5 * (DAT_000759d0 + dVar5 * DAT_000759c8) +
                dVar5 * dVar5 * dVar4 * dVar5 *
                (DAT_000759b0 + dVar5 * DAT_000759a8 +
                (DAT_000759c0 + dVar5 * DAT_000759b8) * dVar5 * dVar5));
}

