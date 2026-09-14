/* 00077d94 | FUN_00077d94 */

uint FUN_00077d94(uint param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  
  pcVar4 = DAT_00077df4;
  iVar1 = (param_1 & 3) << 3;
  uVar2 = 0xff << iVar1;
  do {
    uVar5 = *(uint *)(param_1 & 0xfffffffc);
    uVar3 = (uVar5 & uVar2) >> iVar1;
    if (uVar3 != param_2) {
      return uVar3 & 0xff;
    }
    iVar6 = (*pcVar4)(uVar5,~uVar2 & uVar5 | uVar2 & param_3 << iVar1,(uint *)(param_1 & 0xfffffffc)
                     );
  } while (iVar6 != 0);
  return param_2;
}

