/* 0005a220 | STG::MSIMD::Platform_QueryHardwareSupported */

/* STG::MSIMD::Platform_QueryHardwareSupported() const */

bool STG::MSIMD::Platform_QueryHardwareSupported(void)

{
  int iVar1;
  
  FUN_0002e044();
  iVar1 = android_getCpuFamily();
  return iVar1 == 2;
}

