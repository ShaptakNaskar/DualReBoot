/* 00035608 | STG::FFileManagerScoped::Open */

/* STG::FFileManagerScoped::Open(STG::UStringBase<char, int> const&) */

void __thiscall STG::FFileManagerScoped::Open(FFileManagerScoped *this,UStringBase *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint *puVar5;
  
  iVar4 = DAT_000356d8 + 0x35620;
  puVar5 = *(uint **)(iVar4 + DAT_000356dc);
  if ((*puVar5 & 1) == 0) {
    iVar1 = thunk_FUN_00074338(puVar5);
    piVar3 = *(int **)(iVar4 + DAT_000356e0);
    if (iVar1 != 0) {
      iVar2 = *(int *)(iVar4 + DAT_000356e4);
      piVar3[0xd] = (int)(piVar3 + 9);
      piVar3[0xe] = (int)(piVar3 + 9);
      iVar1 = DAT_000356e8;
      iVar2 = iVar2 + 8;
      piVar3[1] = iVar2;
      piVar3[6] = (int)(piVar3 + 2);
      piVar3[7] = (int)(piVar3 + 2);
      piVar3[8] = iVar2;
      *(undefined1 *)(piVar3 + 2) = 0;
      *(undefined1 *)(piVar3 + 9) = 0;
      iVar1 = *(int *)(iVar4 + iVar1);
      piVar3[0xf] = 0;
      piVar3[0x10] = 0;
      *piVar3 = iVar1 + 8;
      thunk_FUN_000743a0(puVar5);
      __aeabi_atexit(piVar3,*(undefined4 *)(iVar4 + DAT_000356ec),
                     *(undefined4 *)(iVar4 + DAT_000356f0));
    }
  }
  else {
    piVar3 = *(int **)(iVar4 + DAT_000356e0);
  }
  (**(code **)(*piVar3 + 4))(piVar3,param_1,0);
  return;
}

