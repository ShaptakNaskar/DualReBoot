/* 0006f4f4 | FUN_0006f4f4 */

int FUN_0006f4f4(int param_1)

{
  void *__s;
  
  __s = malloc(param_1 + 0x90);
  if (__s != (void *)0x0) {
    memset(__s,0,0x90);
    return (int)__s + 0x90;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0006fa34(DAT_0006f524 + 0x6f514);
}

