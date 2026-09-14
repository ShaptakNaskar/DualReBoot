/* 00084241 | FUN_00084241 */

void __regparm3 FUN_00084241(byte *param_1,uint *param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint local_18;
  
  uVar3 = 0;
  local_18 = 0;
  do {
    bVar1 = *param_1;
    param_1 = param_1 + 1;
    bVar2 = (byte)uVar3;
    uVar3 = uVar3 + 7;
    local_18 = local_18 | (bVar1 & 0x7f) << (bVar2 & 0x1f);
  } while ((char)bVar1 < '\0');
  if ((uVar3 < 0x20) && ((bVar1 & 0x40) != 0)) {
    local_18 = local_18 | -1 << ((byte)uVar3 & 0x1f);
  }
  *param_2 = local_18;
  return;
}

