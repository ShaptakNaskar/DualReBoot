/* 0002f068 | STG::FFileDisk::_FPrintf */

/* STG::FFileDisk::_FPrintf(char const*, char const*) */

void STG::FFileDisk::_FPrintf(char *param_1,char *param_2)

{
  fprintf(*(FILE **)(param_1 + 0x30),param_2);
  return;
}

