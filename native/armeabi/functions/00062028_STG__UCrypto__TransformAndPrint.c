/* 00062028 | STG::UCrypto::TransformAndPrint */

/* STG::UCrypto::TransformAndPrint(char const*) */

void STG::UCrypto::TransformAndPrint(char *param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  int iVar8;
  byte local_42c [1024];
  int local_2c;
  
  piVar1 = *(int **)(DAT_00062134 + 0x62040);
  local_2c = *piVar1;
  uVar5 = 0;
  do {
    uVar3 = uVar5;
    uVar5 = uVar3 + 1;
  } while (param_1[uVar3] != '\0');
  uVar3 = uVar3 + 5 >> 2;
  Transform((char *)local_42c,0x400,param_1);
  if (uVar3 != 0) {
    pbVar7 = local_42c + 3;
    uVar4 = 3;
    iVar8 = DAT_00062138 + 0x620a0;
    uVar6 = 0;
    do {
      if (uVar6 * 4 < uVar5) {
        uVar2 = (uint)pbVar7[-3];
      }
      else {
        uVar2 = 0;
      }
      if (uVar4 - 2 < uVar5) {
        uVar2 = uVar2 | (uint)pbVar7[-2] << 8;
      }
      uVar6 = uVar6 + 1;
      if (uVar4 - 1 < uVar5) {
        uVar2 = uVar2 | (uint)pbVar7[-1] << 0x10;
      }
      pbVar7 = pbVar7 + 4;
      if (uVar4 < uVar5) {
        uVar2 = uVar2 | (uint)local_42c[uVar4] << 0x18;
      }
      uVar4 = uVar4 + 4;
      FUN_00061eec(1,iVar8,uVar2);
    } while (uVar6 != uVar3);
  }
  FUN_00061eec(1,DAT_0006213c + 0x62108,uVar3,param_1);
  if (local_2c == *piVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

