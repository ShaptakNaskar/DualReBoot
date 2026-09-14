/* 00076784 | __aeabi_dcmpgt */

bool __aeabi_dcmpgt(void)

{
  undefined1 in_CY;
  
  __aeabi_cdrcmple();
  return !(bool)in_CY;
}

