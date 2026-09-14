/* 00076e54 | __aeabi_fcmpge */

bool __aeabi_fcmpge(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  
  __aeabi_cfrcmple();
  return !(bool)in_CY || (bool)in_ZR;
}

