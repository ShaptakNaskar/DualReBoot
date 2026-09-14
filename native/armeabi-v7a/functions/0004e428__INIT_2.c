/* 0004e428 | _INIT_2 */

void _INIT_2(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_0004e460;
  puVar2 = (undefined4 *)(DAT_0004e460 + 0x4e440);
  *(undefined4 *)(DAT_0004e460 + 0x4e44c) = 0xffffb9b0;
  *puVar2 = 0x9c000000;
  *(undefined4 *)(iVar1 + 0x4e444) = 0xffffdcd8;
  *(undefined4 *)(iVar1 + 0x4e450) = 18000;
  *(undefined4 *)(iVar1 + 0x4e448) = 9000;
  return;
}

