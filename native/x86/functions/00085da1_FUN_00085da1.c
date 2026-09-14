/* 00085da1 | FUN_00085da1 */

void __regparm2 FUN_00085da1(int param_1,code *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = param_1;
  while( true ) {
    iVar5 = param_4 * 2 + 1;
    if (param_5 <= iVar5) {
      return;
    }
    iVar1 = param_4 * 2 + 2;
    if ((iVar1 < param_5) &&
       (iVar4 = (*param_2)(param_1,*(undefined4 *)(param_3 + iVar5 * 4),
                           *(undefined4 *)(param_3 + iVar1 * 4),iVar4), iVar4 < 0)) {
      iVar5 = iVar1;
    }
    piVar2 = (int *)(param_3 + iVar5 * 4);
    piVar3 = (int *)(param_3 + param_4 * 4);
    iVar4 = (*param_2)(param_1,*piVar3,*piVar2,iVar4);
    if (-1 < iVar4) break;
    iVar4 = *piVar3;
    *piVar3 = *piVar2;
    *piVar2 = iVar4;
    param_4 = iVar5;
  }
  return;
}

