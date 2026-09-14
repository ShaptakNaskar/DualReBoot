/* 0008573d | FUN_0008573d */

undefined4 __regparm3 FUN_0008573d(undefined4 *param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  code *local_24;
  
  pcVar1 = (code *)param_1[3];
  uVar2 = param_1[4];
  while( true ) {
    iVar3 = FUN_000853d5();
    if ((iVar3 != 5) && (iVar3 != 0)) {
      return 2;
    }
    uVar4 = 10;
    if (iVar3 == 5) {
      uVar4 = 0x1a;
    }
    iVar5 = (*pcVar1)(1,uVar4,*param_1,param_1[1],param_1,param_2,uVar2,0x1a);
    if (iVar5 != 0) break;
    if (iVar3 == 5) {
      return 5;
    }
    if (local_24 != (code *)0x0) {
      iVar3 = (*local_24)(1,10,*param_1,param_1[1],param_1,param_2,iVar3,iVar3);
      if (iVar3 == 7) {
        return 7;
      }
      if (iVar3 != 8) {
        return 2;
      }
    }
    FUN_00084f0b();
  }
  return 2;
}

