/* 0002e9a0 | STG::FFileDisk::_FPrintf */

/* STG::FFileDisk::_FPrintf(char const*, char const*) */

void __thiscall STG::FFileDisk::_FPrintf(FFileDisk *this,char *param_1,char *param_2)

{
  FUN_0002e044();
  fprintf(*(FILE **)(this + 0x30),param_1,param_2);
  return;
}

