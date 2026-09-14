/* 00034df8 | STG::FFileManagerScoped::Open */

/* STG::FFileManagerScoped::Open(STG::UStringBase<char, int> const&) */

void STG::FFileManagerScoped::Open(UStringBase *param_1)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  int *piVar4;
  int iVar5;
  
  iVar5 = DAT_00034ec8 + 0x34e10;
  puVar3 = *(uint **)(iVar5 + DAT_00034ecc);
  if (((*puVar3 & 1) == 0) && (iVar1 = thunk_FUN_0007004c(puVar3), iVar1 != 0)) {
    piVar4 = *(int **)(iVar5 + DAT_00034ed0);
    iVar2 = *(int *)(iVar5 + DAT_00034ed4);
    piVar4[0xd] = (int)(piVar4 + 9);
    piVar4[0xe] = (int)(piVar4 + 9);
    iVar1 = DAT_00034ed8;
    iVar2 = iVar2 + 8;
    piVar4[6] = (int)(piVar4 + 2);
    piVar4[1] = iVar2;
    piVar4[7] = (int)(piVar4 + 2);
    piVar4[8] = iVar2;
    *(undefined1 *)(piVar4 + 2) = 0;
    *(undefined1 *)(piVar4 + 9) = 0;
    iVar1 = *(int *)(iVar5 + iVar1);
    piVar4[0xf] = 0;
    piVar4[0x10] = 0;
    *piVar4 = iVar1 + 8;
    thunk_FUN_000700b0(puVar3);
    __aeabi_atexit(piVar4,*(undefined4 *)(iVar5 + DAT_00034edc),
                   *(undefined4 *)(iVar5 + DAT_00034ee0));
  }
  else {
    piVar4 = *(int **)(iVar5 + DAT_00034ed0);
  }
  (**(code **)(*piVar4 + 4))(piVar4);
  return;
}

