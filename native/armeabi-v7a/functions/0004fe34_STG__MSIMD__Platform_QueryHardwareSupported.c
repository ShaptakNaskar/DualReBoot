/* 0004fe34 | STG::MSIMD::Platform_QueryHardwareSupported */

/* STG::MSIMD::Platform_QueryHardwareSupported() const */

bool STG::MSIMD::Platform_QueryHardwareSupported(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = android_getCpuFamily();
  if (iVar1 == 1) {
    uVar2 = android_getCpuFeatures();
    return (uVar2 & 5) == 5;
  }
  return false;
}

