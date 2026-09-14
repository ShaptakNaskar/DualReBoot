/* 0002e300 | <EXTERNAL>::fopen */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen_0007de38)(__filename);
  return pFVar1;
}

