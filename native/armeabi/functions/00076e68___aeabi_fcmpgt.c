/* 00076e68 | __aeabi_fcmpgt */

bool __aeabi_fcmpgt(void)

{
  undefined1 in_CY;
  
  __aeabi_cfrcmple();
  return !(bool)in_CY;
}

