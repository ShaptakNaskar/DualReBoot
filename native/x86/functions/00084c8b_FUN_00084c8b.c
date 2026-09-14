/* 00084c8b | FUN_00084c8b */

void __regparm3 FUN_00084c8b(undefined4 *param_1)

{
  int iVar1;
  undefined4 ***pppuVar2;
  uint uVar3;
  int extraout_ECX;
  int iVar4;
  undefined4 extraout_ECX_00;
  int iVar5;
  int unaff_EBX;
  int iVar6;
  undefined4 *puVar7;
  byte bVar8;
  undefined8 uVar9;
  int local_b4;
  undefined1 local_a4 [8];
  undefined4 local_9c [4];
  undefined4 **local_8c [20];
  byte local_39;
  char local_2c;
  undefined4 uStack_14;
  
  bVar8 = 0;
  uStack_14 = 0x84ca3;
  uVar9 = FUN_0002e044();
  iVar5 = (int)((ulonglong)uVar9 >> 0x20);
  iVar1 = (int)uVar9;
  puVar7 = local_9c;
  for (iVar4 = extraout_ECX; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = *param_1;
    param_1 = param_1 + (uint)bVar8 * -2 + 1;
    puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
  }
  if (((local_39 & 0x40) == 0) || (pppuVar2 = local_8c, local_2c == '\0')) {
    pppuVar2 = (undefined4 ***)local_8c[0];
  }
  if (pppuVar2 == (undefined4 ***)0x0) {
    FUN_0008428d(local_a4);
  }
  if ((*(byte *)(iVar1 + 99) & 0x40) != 0) {
    *(undefined1 *)(iVar1 + 0x70) = 0;
  }
  *(undefined4 *)(iVar1 + 0x10) = 0;
  if (*(int *)(iVar5 + 0xa0) == 1) {
    local_b4 = _Unwind_GetGR(local_9c,*(undefined4 *)(iVar5 + 0x98),param_1,param_1);
    local_b4 = local_b4 + *(int *)(iVar5 + 0x94);
  }
  else {
    if (*(int *)(iVar5 + 0xa0) != 2) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    FUN_00084210();
    local_b4 = FUN_0008467a(local_9c,0,extraout_ECX_00,extraout_ECX_00);
  }
  iVar6 = 0;
  *(int *)(iVar1 + 0x48) = local_b4;
  iVar4 = iVar5;
  do {
    uVar3 = *(int *)(iVar4 + 4) - 1;
    if (uVar3 < 5) {
                    /* WARNING: Could not recover jumptable at 0x00084dce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)("_ZN3STG9FFileDiskC2EPKcNS_9FFileBase7EAccessE" +
                *(int *)(unaff_EBX + 0x4589 + uVar3 * 4) + unaff_EBX + 0x29))();
      return;
    }
    iVar6 = iVar6 + 1;
    iVar4 = iVar4 + 8;
  } while (iVar6 != 0x12);
  if (*(char *)(iVar5 + 0xbb) == '\0') {
    *(uint *)(iVar1 + 0x60) = *(uint *)(iVar1 + 0x60) & 0x7fffffff;
  }
  else {
    *(uint *)(iVar1 + 0x60) = *(uint *)(iVar1 + 0x60) | 0x80000000;
  }
  return;
}

