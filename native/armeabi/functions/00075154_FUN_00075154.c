/* 00075154 | FUN_00075154 */

undefined4 * FUN_00075154(uint param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  iVar1 = DAT_000752ac;
  iVar4 = *(int *)(DAT_000752a0 + 0x75168);
  puVar3 = *(undefined4 **)(DAT_000752a4 + 0x75170);
  iVar7 = DAT_000752a8 + 0x75182;
  do {
    uVar5 = iVar4 - (int)puVar3;
    uVar6 = *param_2 * param_1;
    if (uVar5 != 0) {
      if (uVar6 < uVar5 || uVar6 - uVar5 == 0) {
        *(undefined4 **)(DAT_000752c4 + 0x751f4) = (undefined4 *)((int)puVar3 + uVar6);
        return puVar3;
      }
      if (param_1 <= uVar5) {
        iVar1 = __udivsi3(uVar5,param_1);
        puVar2 = (undefined4 *)(DAT_000752c8 + 0x75210);
        *param_2 = iVar1;
        *puVar2 = (undefined4 *)((int)puVar3 + iVar1 * param_1);
        return puVar3;
      }
      iVar4 = (uVar5 - 1 >> 3) * 4;
      *puVar3 = *(undefined4 *)(iVar4 + iVar7);
      *(undefined4 *)(iVar4 + iVar7) = *(undefined4 *)(iVar1 + 0x75198);
      *(undefined4 *)(DAT_000752b0 + 0x751a6) = 0;
      *(undefined4 *)(iVar1 + 0x75198) = 0;
    }
    uVar5 = uVar6 * 2 + (*(int *)(DAT_000752b4 + 0x751b0) + 7U & 0xfffffff8);
    puVar3 = operator_new(uVar5);
    *(undefined4 **)(DAT_000752b8 + 0x751c6) = puVar3;
    iVar4 = (int)puVar3 + uVar5;
    *(int *)(DAT_000752bc + 0x751ce) = (uVar5 >> 4) + *(int *)(DAT_000752bc + 0x751ce);
    *(int *)(DAT_000752c0 + 0x751da) = iVar4;
  } while( true );
}

