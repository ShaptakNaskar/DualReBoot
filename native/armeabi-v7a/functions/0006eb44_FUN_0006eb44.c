/* 0006eb44 | FUN_0006eb44 */

undefined4 FUN_0006eb44(char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  size_t __n;
  int iVar3;
  char *__s1;
  
  __n = strlen(param_2);
  if (param_1 == (char *)0x0) {
    return 0;
  }
  do {
    if (*param_1 == '\0') {
      return 0;
    }
    do {
      __s1 = param_1;
      pcVar2 = __s1;
      param_1 = __s1 + 1;
    } while (*__s1 == '\t' || *__s1 == ' ');
    do {
      param_1 = pcVar2;
      cVar1 = *param_1;
      if (cVar1 == ' ' || cVar1 == '\0') break;
      pcVar2 = param_1 + 1;
    } while (cVar1 != '\t');
    if ((__n == (int)param_1 - (int)__s1) && (iVar3 = memcmp(__s1,param_2,__n), iVar3 == 0)) {
      return 1;
    }
  } while( true );
}

