/* 00034ee4 | STG::FFileManagerScoped::Close */

/* STG::FFileManagerScoped::Close(STG::FFileBase*&) */

void __thiscall STG::FFileManagerScoped::Close(FFileManagerScoped *this,FFileBase **param_1)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  int *piVar4;
  int iVar5;
  
  iVar5 = DAT_00034fc4 + 0x34efc;
  puVar3 = *(uint **)(iVar5 + DAT_00034fc8);
  if (((*puVar3 & 1) == 0) && (iVar1 = thunk_FUN_0007004c(puVar3), iVar1 != 0)) {
    piVar4 = *(int **)(iVar5 + DAT_00034fcc);
    iVar2 = *(int *)(iVar5 + DAT_00034fd0);
    piVar4[0xd] = (int)(piVar4 + 9);
    piVar4[0xe] = (int)(piVar4 + 9);
    iVar1 = DAT_00034fd4;
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
    __aeabi_atexit(piVar4,*(undefined4 *)(iVar5 + DAT_00034fd8),
                   *(undefined4 *)(iVar5 + DAT_00034fdc));
    (**(code **)(*piVar4 + 8))(piVar4,param_1);
    return;
  }
  (**(code **)(**(int **)(iVar5 + DAT_00034fcc) + 8))(*(int **)(iVar5 + DAT_00034fcc),param_1);
  return;
}

