/* 0006ae80 | STG::UCrypto::TransformAndPrint */

/* STG::UCrypto::TransformAndPrint(char const*) */

uint STG::UCrypto::TransformAndPrint(char *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int unaff_EBX;
  uint uVar5;
  byte local_420 [1036];
  int local_14;
  
  local_14 = 0x6ae8b;
  FUN_0002e044();
  local_14 = **(int **)(unaff_EBX + 0x30fad);
  uVar1 = 0;
  do {
    uVar3 = uVar1;
    uVar1 = uVar3 + 1;
  } while (param_1[uVar3] != '\0');
  uVar3 = uVar3 + 5 >> 2;
  Transform((char *)local_420,0x400,param_1);
  if (uVar3 != 0) {
    uVar5 = 0;
    do {
      uVar2 = uVar5 * 4;
      uVar4 = 0;
      if (uVar2 < uVar1) {
        uVar4 = (uint)local_420[uVar5 * 4];
      }
      if (uVar2 + 1 < uVar1) {
        uVar4 = uVar4 | (uint)local_420[uVar5 * 4 + 1] << 8;
      }
      if (uVar2 + 2 < uVar1) {
        uVar4 = uVar4 | (uint)local_420[uVar5 * 4 + 2] << 0x10;
      }
      if (uVar2 + 3 < uVar1) {
        uVar4 = uVar4 | (uint)local_420[uVar5 * 4 + 3] << 0x18;
      }
      uVar5 = uVar5 + 1;
      FUN_0006ad10(1,"_ZN3STG7GEScene23SetInherit_IntersectionEmmm" + unaff_EBX,uVar4);
    } while (uVar5 != uVar3);
  }
  FUN_0006ad10(1,"_ZN3STG7GEScene23SetInherit_IntersectionEmmm" + unaff_EBX + 8,uVar3,param_1);
  if (local_14 != **(int **)(unaff_EBX + 0x30fad)) {
                    /* WARNING: Subroutine does not return */
    FUN_0002e000();
  }
  return uVar3;
}

