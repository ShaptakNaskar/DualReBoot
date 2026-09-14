/* 00076748 | __aeabi_dcmplt */

bool __aeabi_dcmplt(void)

{
  undefined1 in_CY;
  
  __aeabi_cdcmple();
  return !(bool)in_CY;
}

