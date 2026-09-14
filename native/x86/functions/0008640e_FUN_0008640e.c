/* 0008640e | FUN_0008640e */

int * __regparm2 FUN_0008640e(int param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int extraout_ECX;
  int iVar3;
  int extraout_ECX_00;
  uint uVar4;
  int local_28;
  uint local_20;
  uint local_14;
  uint local_10;
  
  local_20 = *(uint *)(param_1 + 0x10) >> 3 & 0xff;
  FUN_00085ef2();
  local_28 = 0;
  iVar3 = extraout_ECX;
  do {
    if (*param_2 == 0) {
      return (int *)0x0;
    }
    if (param_2[1] != 0) {
      if (((*(byte *)(param_1 + 0x10) & 4) != 0) &&
         (iVar3 = (int)param_2 + (4 - param_2[1]), iVar3 != local_28)) {
        local_20 = FUN_0008603b();
        FUN_00085ef2();
        local_28 = iVar3;
      }
      if (local_20 == 0) {
        uVar4 = param_2[2];
        local_10 = param_2[3];
        local_14 = uVar4;
      }
      else {
        uVar1 = FUN_00085f3a(param_2 + 2,&local_14,iVar3,iVar3);
        FUN_00085f3a(uVar1,&local_10);
        uVar2 = FUN_00085ea2();
        uVar4 = 0xffffffff;
        iVar3 = extraout_ECX_00;
        if (uVar2 < 4) {
          iVar3 = uVar2 * 8;
          uVar4 = (1 << ((byte)iVar3 & 0x1f)) - 1;
        }
        uVar4 = local_14 & uVar4;
      }
      if ((uVar4 != 0) && (param_3 - local_14 < local_10)) {
        return param_2;
      }
    }
    param_2 = (int *)((int)param_2 + *param_2 + 4);
  } while( true );
}

