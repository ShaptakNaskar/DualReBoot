/* 00086110 | FUN_00086110 */

int __regparm3 FUN_00086110(uint *param_1,int *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  int local_2c;
  int local_28;
  uint local_10;
  
  local_28 = 0;
  local_2c = 0;
  do {
    if (*param_2 == 0) {
      return local_28;
    }
    puVar2 = (uint *)param_2[1];
    if (puVar2 != (uint *)0x0) {
      iVar6 = (int)param_2 + (4 - (int)puVar2);
      if (iVar6 != local_2c) {
        puVar1 = (uint *)FUN_0008603b();
        if (puVar1 == (uint *)0xff) {
          return -1;
        }
        FUN_00085ef2();
        uVar4 = (ushort)param_1[4];
        local_2c = iVar6;
        if ((uVar4 & 0x7f8) == 0x7f8) {
          puVar2 = (uint *)(param_1[4] & 0xfffff807 | ((uint)puVar1 & 0xff) << 3);
          *(short *)(param_1 + 4) = (short)puVar2;
        }
        else {
          puVar2 = (uint *)(uint)(byte)(uVar4 >> 3);
          if (puVar2 != puVar1) {
            *(byte *)(param_1 + 4) = (byte)param_1[4] | 4;
            puVar2 = param_1;
          }
        }
      }
      FUN_00085f3a(param_2 + 2,&local_10,puVar2,puVar2);
      uVar3 = FUN_00085ea2();
      uVar5 = 0xffffffff;
      if (uVar3 < 4) {
        uVar5 = (1 << ((char)uVar3 * '\b' & 0x1fU)) - 1;
      }
      if (((uVar5 & local_10) != 0) && (local_28 = local_28 + 1, local_10 < *param_1)) {
        *param_1 = local_10;
      }
    }
    param_2 = (int *)((int)param_2 + *param_2 + 4);
  } while( true );
}

