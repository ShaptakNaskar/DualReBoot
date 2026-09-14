/* 0006afb0 | STG::UStringBaseHash_Internal */

/* STG::UStringBaseHash_Internal(unsigned char const*, unsigned int) */

uint STG::UStringBaseHash_Internal(uchar *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  
  uVar2 = 0x2a;
  uVar1 = param_2 + 3;
  if (-1 < (int)param_2) {
    uVar1 = param_2;
  }
  pbVar4 = param_1 + ((int)uVar1 >> 2) * 4;
  for (iVar3 = -((int)uVar1 >> 2); iVar3 != 0; iVar3 = iVar3 + 1) {
    uVar2 = ((uint)(*(int *)(pbVar4 + iVar3 * 4) * -0x3361d2af) >> 0x11 |
            *(int *)(pbVar4 + iVar3 * 4) * 0x16a88000) * 0x1b873593 ^ uVar2;
    uVar2 = (uVar2 >> 0x13 | uVar2 << 0xd) * 5 + 0xe6546b64;
  }
  uVar1 = param_2 & 3;
  if (uVar1 == 2) {
    uVar1 = 0;
LAB_0006b05f:
    uVar1 = (uint)pbVar4[1] << 8 ^ uVar1;
  }
  else {
    if (uVar1 == 3) {
      uVar1 = (uint)pbVar4[2] << 0x10;
      goto LAB_0006b05f;
    }
    if (uVar1 != 1) goto LAB_0006b00d;
    uVar1 = 0;
  }
  uVar2 = uVar2 ^ ((*pbVar4 ^ uVar1) * -0x3361d2af >> 0x11 | (*pbVar4 ^ uVar1) * 0x16a88000) *
                  0x1b873593;
LAB_0006b00d:
  uVar2 = ((uVar2 ^ param_2) >> 0x10 ^ uVar2 ^ param_2) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  return uVar2 >> 0x10 ^ uVar2;
}

