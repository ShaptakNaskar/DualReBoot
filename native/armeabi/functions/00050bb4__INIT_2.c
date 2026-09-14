/* 00050bb4 | _INIT_2 */

void _INIT_2(void)

{
  int iVar1;
  
  iVar1 = DAT_00050c00;
  *(undefined4 *)(DAT_00050c00 + 0x50bd4) = 0x9c000000;
  *(undefined4 *)(iVar1 + 0x50bd8) = 0xffffdcd8;
  *(undefined4 *)(iVar1 + 0x50bdc) = 9000;
  *(undefined4 *)(iVar1 + 0x50be0) = 0xffffb9b0;
  *(undefined4 *)(iVar1 + 0x50be4) = 18000;
  return;
}

