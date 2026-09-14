/* 00034808 | STG::FFileManager_Android::CreateDir */

/* STG::FFileManager_Android::CreateDir(STG::UStringBase<char, int> const&) const */

bool __thiscall
STG::FFileManager_Android::CreateDir(FFileManager_Android *this,UStringBase *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = mkdir(*(char **)(param_1 + 0x18),0x1ed);
  if (iVar1 == 0) {
    return true;
  }
  piVar2 = (int *)__errno();
  return *piVar2 == 0x11;
}

