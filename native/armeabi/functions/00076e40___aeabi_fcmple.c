/* 00076e40 | __aeabi_fcmple */

bool __aeabi_fcmple(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  
  __aeabi_cfcmple();
  return !(bool)in_CY || (bool)in_ZR;
}

