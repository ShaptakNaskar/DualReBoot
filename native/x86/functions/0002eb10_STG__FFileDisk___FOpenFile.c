/* 0002eb10 | STG::FFileDisk::_FOpenFile */

/* STG::FFileDisk::_FOpenFile(char const*, char const*) */

bool __thiscall STG::FFileDisk::_FOpenFile(FFileDisk *this,char *param_1,char *param_2)

{
  FILE *pFVar1;
  
  FUN_0002e044();
  pFVar1 = fopen(param_1,param_2);
  *(FILE **)(this + 0x30) = pFVar1;
  return pFVar1 != (FILE *)0x0;
}

