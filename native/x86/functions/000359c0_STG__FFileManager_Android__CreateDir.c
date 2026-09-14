/* 000359c0 | STG::FFileManager_Android::CreateDir */

/* STG::FFileManager_Android::CreateDir(STG::UStringBase<char, int> const&) const */

bool __thiscall
STG::FFileManager_Android::CreateDir(FFileManager_Android *this,UStringBase *param_1)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  
  FUN_0002e044();
  iVar1 = mkdir(*(char **)(param_1 + 0x18),0x1ed);
  bVar3 = true;
  if (iVar1 != 0) {
    piVar2 = (int *)__errno();
    bVar3 = *piVar2 == 0x11;
  }
  return bVar3;
}

