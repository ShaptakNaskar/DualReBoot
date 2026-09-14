/* 000356f4 | STG::FFileManagerScoped::Close */

/* STG::FFileManagerScoped::Close(STG::FFileBase*&) */

void __thiscall STG::FFileManagerScoped::Close(FFileManagerScoped *this,FFileBase **param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint *puVar5;
  
  iVar4 = DAT_000357d4 + 0x3570c;
  puVar5 = *(uint **)(iVar4 + DAT_000357d8);
  if ((*puVar5 & 1) == 0) {
    iVar1 = thunk_FUN_00074338(puVar5);
    piVar3 = *(int **)(iVar4 + DAT_000357dc);
    if (iVar1 != 0) {
      iVar2 = *(int *)(iVar4 + DAT_000357e0);
      piVar3[0xd] = (int)(piVar3 + 9);
      piVar3[0xe] = (int)(piVar3 + 9);
      iVar1 = DAT_000357e4;
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
      __aeabi_atexit(piVar3,*(undefined4 *)(iVar4 + DAT_000357e8),
                     *(undefined4 *)(iVar4 + DAT_000357ec));
      (**(code **)(*piVar3 + 8))(piVar3,param_1);
      return;
    }
  }
  else {
    piVar3 = *(int **)(iVar4 + DAT_000357dc);
  }
  (**(code **)(*piVar3 + 8))(piVar3,param_1);
  return;
}

