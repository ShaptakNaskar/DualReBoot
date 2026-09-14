/* 00070e68 | FUN_00070e68 */

undefined4 * FUN_00070e68(uint param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  
  iVar1 = DAT_00070fc0;
  iVar4 = *(int *)(DAT_00070fb4 + 0x70e86);
  iVar9 = DAT_00070fb0 + 0x70e8e;
  puVar6 = *(undefined4 **)(DAT_00070fbc + 0x70e90);
  do {
    uVar5 = iVar4 - (int)puVar6;
    uVar8 = *param_2 * param_1;
    if (uVar5 != 0) {
      if (uVar8 < uVar5 || uVar8 - uVar5 == 0) {
        *(undefined4 **)(DAT_00070fd8 + 0x70f04) = (undefined4 *)((int)puVar6 + uVar8);
        return puVar6;
      }
      if (param_1 <= uVar5) {
        iVar1 = __udivsi3(uVar5,param_1);
        puVar2 = (undefined4 *)(DAT_00070fdc + 0x70f1e);
        *param_2 = iVar1;
        *puVar2 = (undefined4 *)(param_1 * iVar1 + (int)puVar6);
        return puVar6;
      }
      uVar5 = uVar5 - 1 >> 3;
      uVar10 = *(undefined4 *)(iVar1 + 0x70ea2);
      puVar2 = (undefined4 *)(DAT_00070fc4 + 0x70eae);
      *puVar6 = *(undefined4 *)(iVar9 + uVar5 * 4);
      *(undefined4 *)(iVar9 + uVar5 * 4) = uVar10;
      *puVar2 = 0;
      *(undefined4 *)(iVar1 + 0x70ea2) = 0;
    }
    uVar5 = (*(int *)(DAT_00070fc8 + 0x70ec2) + 7U & 0xfffffff8) + uVar8 * 2;
    puVar6 = operator_new(uVar5);
    *(undefined4 **)(DAT_00070fcc + 0x70eda) = puVar6;
    iVar4 = (int)puVar6 + uVar5;
    piVar3 = (int *)(DAT_00070fd0 + 0x70ee4);
    iVar7 = *piVar3;
    *(int *)(DAT_00070fd4 + 0x70ee6) = iVar4;
    *piVar3 = iVar7 + (uVar5 >> 4);
  } while( true );
}

