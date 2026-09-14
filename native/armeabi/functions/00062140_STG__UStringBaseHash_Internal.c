/* 00062140 | STG::UStringBaseHash_Internal */

/* STG::UStringBaseHash_Internal(unsigned char const*, unsigned int) */

uint STG::UStringBaseHash_Internal(uchar *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  
  uVar5 = param_2 + 3;
  if (-1 < (int)param_2) {
    uVar5 = param_2;
  }
  iVar1 = (int)uVar5 >> 2;
  iVar2 = -iVar1;
  if (iVar1 == 0) {
    uVar5 = 0x2a;
  }
  else {
    uVar5 = 0x2a;
    piVar4 = (int *)param_1;
    do {
      iVar2 = iVar2 + 1;
      uVar5 = DAT_00062230 *
              ((uint)(DAT_0006222c * *piVar4) >> 0x11 | DAT_0006222c * *piVar4 * 0x8000) ^ uVar5;
      uVar5 = (uVar5 >> 0x13 | uVar5 << 0xd) * 5 + DAT_00062234;
      piVar4 = piVar4 + 1;
    } while (iVar2 != 0);
  }
  uVar3 = param_2 & 3;
  if (uVar3 == 2) {
    uVar3 = 0;
LAB_00062218:
    uVar3 = uVar3 | (uint)param_1[iVar1 * 4 + 1] << 8;
  }
  else {
    if (uVar3 == 3) {
      uVar3 = (uint)param_1[iVar1 * 4 + 2] << 0x10;
      goto LAB_00062218;
    }
    if (uVar3 != 1) goto LAB_000621c0;
    uVar3 = 0;
  }
  uVar3 = DAT_0006222c * (uVar3 ^ param_1[iVar1 * 4]);
  uVar5 = uVar5 ^ DAT_00062230 * (uVar3 >> 0x11 | uVar3 * 0x8000);
LAB_000621c0:
  uVar5 = (uVar5 ^ param_2 ^ (uVar5 ^ param_2) >> 0x10) * DAT_00062238;
  uVar5 = DAT_0006223c * (uVar5 ^ uVar5 >> 0xd);
  return uVar5 ^ uVar5 >> 0x10;
}

