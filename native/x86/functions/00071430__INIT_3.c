/* 00071430 | _INIT_3 */

void _INIT_3(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int unaff_EBX;
  
  FUN_0002e044();
  iVar1 = *(int *)((int)&__DT_REL[0x76].r_info + unaff_EBX + 2);
  *(undefined4 *)((int)&__DT_REL[0x377].r_info + unaff_EBX + 2) = 0x65746e49;
  *(int *)((int)&__DT_REL[0x377].r_offset + unaff_EBX + 2) = iVar1 + 8;
  *(int *)((int)&__DT_REL[0x37a].r_offset + unaff_EBX + 2) = unaff_EBX + 0x2c20e;
  *(int *)((int)&__DT_REL[0x379].r_info + unaff_EBX + 2) = unaff_EBX + 0x2c218;
  uVar2 = *(undefined4 *)((int)&__DT_REL[0x7c].r_offset + unaff_EBX + 2);
  uVar3 = *(undefined4 *)((int)&__DT_REL[0x95].r_offset + unaff_EBX + 2);
  *(undefined4 *)((int)&__DT_REL[0x378].r_offset + unaff_EBX + 2) = 0x6c616e72;
  *(undefined2 *)((int)&__DT_REL[0x378].r_info + unaff_EBX + 2) = 0x203a;
  *(undefined1 *)((int)&__DT_REL[0x379].r_offset + unaff_EBX) = 0;
  __cxa_atexit(uVar3,unaff_EBX + 0x2c20a,uVar2);
  return;
}

