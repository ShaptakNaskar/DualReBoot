/* 00072274 | __popcountsi2 */

int __popcountsi2(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  uVar2 = 0;
  do {
    uVar1 = uVar2 & 0xff;
    uVar2 = uVar2 + 8;
    iVar3 = iVar3 + (uint)*(byte *)(*(int *)(DAT_000722a8 + 0x72288) + (param_1 >> uVar1 & 0xff));
  } while (uVar2 != 0x20);
  return iVar3;
}

