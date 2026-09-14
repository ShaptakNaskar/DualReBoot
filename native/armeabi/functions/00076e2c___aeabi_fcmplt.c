/* 00076e2c | __aeabi_fcmplt */

bool __aeabi_fcmplt(void)

{
  undefined1 in_CY;
  
  __aeabi_cfcmple();
  return !(bool)in_CY;
}

