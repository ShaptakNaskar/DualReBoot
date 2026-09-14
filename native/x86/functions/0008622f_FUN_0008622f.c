/* 0008622f | FUN_0008622f */

void __regparm2 FUN_0008622f(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int local_28;
  uint local_20;
  uint local_10;
  
  local_20 = *(uint *)(param_1 + 0x10) >> 3 & 0xff;
  FUN_00085ef2();
  local_28 = 0;
  for (; *param_3 != 0; param_3 = (int *)((int)param_3 + *param_3 + 4)) {
    iVar1 = param_3[1];
    if (iVar1 != 0) {
      if (((*(byte *)(param_1 + 0x10) & 4) != 0) &&
         (iVar4 = (int)param_3 + (4 - iVar1), iVar4 != local_28)) {
        local_20 = FUN_0008603b();
        iVar1 = FUN_00085ef2();
        local_28 = iVar4;
      }
      if (local_20 == 0) {
        uVar3 = param_3[2];
      }
      else {
        FUN_00085f3a(param_3 + 2,&local_10,iVar1,iVar1);
        uVar2 = FUN_00085ea2();
        uVar3 = 0xffffffff;
        if (uVar2 < 4) {
          uVar3 = (1 << ((char)uVar2 * '\b' & 0x1fU)) - 1;
        }
        uVar3 = local_10 & uVar3;
      }
      if ((uVar3 != 0) && (iVar1 = *param_2, iVar1 != 0)) {
        iVar4 = *(int *)(iVar1 + 4);
        *(int **)(iVar1 + 8 + iVar4 * 4) = param_3;
        *(int *)(iVar1 + 4) = iVar4 + 1;
      }
    }
  }
  return;
}

