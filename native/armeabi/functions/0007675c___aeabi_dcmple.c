/* 0007675c | __aeabi_dcmple */

bool __aeabi_dcmple(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  
  __aeabi_cdcmple();
  return !(bool)in_CY || (bool)in_ZR;
}

