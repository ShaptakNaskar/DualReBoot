/* 0006297c | _INIT_3 */

void _INIT_3(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  
  iVar2 = DAT_000629e8;
  iVar1 = DAT_000629e4;
  piVar7 = (int *)(DAT_000629e4 + 0x6298c);
  puVar5 = (undefined4 *)(DAT_000629e8 + 0x62994);
  puVar8 = (undefined4 *)(DAT_000629e4 + 0x62990);
  *piVar7 = *(int *)(DAT_000629ec + 0x6299c) + 8;
  *(undefined4 **)(iVar1 + 0x629a4) = puVar8;
  uVar3 = *puVar5;
  uVar4 = *(undefined4 *)(iVar2 + 0x62998);
  uVar6 = *(undefined4 *)(iVar2 + 0x6299c);
  *(int *)(iVar1 + 0x629a0) = iVar1 + 0x6299a;
  *puVar8 = uVar3;
  *(undefined4 *)(iVar1 + 0x62994) = uVar4;
  *(short *)(iVar1 + 0x62998) = (short)uVar6;
  iVar2 = DAT_000629f4;
  uVar3 = *(undefined4 *)(DAT_000629f0 + 0x629d8);
  *(undefined1 *)(iVar1 + 0x6299a) = 0;
  __aeabi_atexit(piVar7,uVar3,*(undefined4 *)(iVar2 + 0x629e0));
  return;
}

