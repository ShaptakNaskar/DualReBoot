/* 0005d908 | STG::UStringBaseHash_Internal */

/* STG::UStringBaseHash_Internal(unsigned char const*, unsigned int) */

uint STG::UStringBaseHash_Internal(uchar *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = param_2 + 3;
  if (-1 < (int)param_2) {
    uVar2 = param_2;
  }
  iVar1 = (int)uVar2 >> 2;
  iVar4 = -iVar1;
  if (iVar1 == 0) {
    uVar2 = 0x2a;
  }
  else {
    uVar2 = 0x2a;
    piVar3 = (int *)param_1;
    do {
      iVar4 = iVar4 + 1;
      uVar2 = ((uint)(*piVar3 * -0x3361d2af) >> 0x11 | *piVar3 * 0x16a88000) * 0x1b873593 ^ uVar2;
      uVar2 = (uVar2 >> 0x13 | uVar2 << 0xd) * 5 + 0xe6546b64;
      piVar3 = piVar3 + 1;
    } while (iVar4 != 0);
  }
  uVar5 = param_2 & 3;
  if (uVar5 == 2) {
    uVar5 = 0;
LAB_0005d9fc:
    uVar5 = uVar5 | (uint)param_1[iVar1 * 4 + 1] << 8;
  }
  else {
    if (uVar5 == 3) {
      uVar5 = (uint)param_1[iVar1 * 4 + 2] << 0x10;
      goto LAB_0005d9fc;
    }
    if (uVar5 != 1) goto LAB_0005d994;
    uVar5 = 0;
  }
  uVar2 = uVar2 ^ ((uVar5 ^ param_1[iVar1 * 4]) * -0x3361d2af >> 0x11 |
                  (uVar5 ^ param_1[iVar1 * 4]) * 0x16a88000) * 0x1b873593;
LAB_0005d994:
  uVar2 = (uVar2 ^ param_2 ^ (uVar2 ^ param_2) >> 0x10) * -0x7a143595;
  uVar2 = (uVar2 ^ uVar2 >> 0xd) * -0x3d4d51cb;
  return uVar2 ^ uVar2 >> 0x10;
}

