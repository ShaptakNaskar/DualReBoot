/* 000674f4 | _INIT_3 */

void _INIT_3(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  
  uVar2 = DAT_0006755c;
  iVar1 = DAT_00067554;
  piVar4 = (int *)(DAT_00067554 + 0x67508);
  iVar5 = DAT_00067554 + 0x6750c;
  *piVar4 = *(int *)(DAT_00067558 + 0x6750c) + 8;
  *(int *)(iVar1 + 0x6751c) = iVar1 + 0x67516;
  uVar3 = DAT_00067560;
  *(undefined4 *)(iVar1 + 0x6750c) = uVar2;
  *(int *)(iVar1 + 0x67520) = iVar5;
  *(undefined2 *)(iVar1 + 0x67514) = 0x203a;
  *(undefined4 *)(iVar1 + 0x67510) = uVar3;
  *(undefined1 *)(iVar1 + 0x67516) = 0;
  __aeabi_atexit(piVar4,*(undefined4 *)(DAT_00067564 + 0x67550),
                 *(undefined4 *)((int)&DAT_00067554 + DAT_00067568));
  return;
}

