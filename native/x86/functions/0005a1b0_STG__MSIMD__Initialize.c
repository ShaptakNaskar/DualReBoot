/* 0005a1b0 | STG::MSIMD::Initialize */

/* STG::MSIMD::Initialize() */

void __thiscall STG::MSIMD::Initialize(MSIMD *this)

{
  MSIMD MVar1;
  int unaff_EBX;
  
  FUN_0002e044();
  MVar1 = (MSIMD)Platform_QueryHardwareSupported();
  this[9] = MVar1;
  if (MVar1 == (MSIMD)0x0) {
    *(undefined4 *)this = *(undefined4 *)(unaff_EBX + 0x41d1f);
    *(undefined4 *)(this + 4) = *(undefined4 *)(unaff_EBX + 0x41d23);
  }
  else {
    *(undefined4 *)this = *(undefined4 *)(unaff_EBX + 0x41d27);
    *(undefined4 *)(this + 4) = *(undefined4 *)(unaff_EBX + 0x41d2b);
  }
  this[8] = (MSIMD)0x1;
  return;
}

