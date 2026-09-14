/* 00073768 | FUN_00073768 */

int FUN_00073768(int param_1)

{
  void *__s;
  
  __s = malloc(param_1 + 0x90);
  if (__s != (void *)0x0) {
    memset(__s,0,0x90);
    return (int)__s + 0x90;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00073cc8(DAT_00073798 + 0x7378a);
}

