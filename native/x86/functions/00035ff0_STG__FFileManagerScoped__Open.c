/* 00035ff0 | STG::FFileManagerScoped::Open */

/* STG::FFileManagerScoped::Open(STG::UStringBase<char, int> const&) */

void __thiscall STG::FFileManagerScoped::Open(FFileManagerScoped *this,UStringBase *param_1)

{
  char *pcVar1;
  int *piVar2;
  int iVar3;
  int unaff_EBX;
  
  FUN_0002e044();
  pcVar1 = *(char **)(unaff_EBX + 0x65e5b);
  piVar2 = *(int **)(unaff_EBX + 0x65e5f);
  if (*pcVar1 == '\0') {
    iVar3 = FUN_00080eb0(pcVar1);
    if (iVar3 != 0) {
      iVar3 = *(int *)(unaff_EBX + 0x65e3b) + 8;
      piVar2[6] = (int)(piVar2 + 2);
      piVar2[1] = iVar3;
      piVar2[8] = iVar3;
      piVar2[0xd] = (int)(piVar2 + 9);
      piVar2[0xe] = (int)(piVar2 + 9);
      iVar3 = *(int *)(unaff_EBX + 0x65e63);
      piVar2[7] = (int)(piVar2 + 2);
      *piVar2 = iVar3 + 8;
      *(undefined1 *)(piVar2 + 2) = 0;
      *(undefined1 *)(piVar2 + 9) = 0;
      piVar2[0xf] = 0;
      piVar2[0x10] = 0;
      FUN_00080f40(pcVar1);
      __cxa_atexit(*(undefined4 *)(unaff_EBX + 0x65e6b),piVar2,*(undefined4 *)(unaff_EBX + 0x65e67))
      ;
    }
  }
  (**(code **)(*piVar2 + 4))(piVar2,param_1,0);
  return;
}

