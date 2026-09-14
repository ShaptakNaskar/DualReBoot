/* 0004fdb8 | STG::MSIMD::Initialize */

/* STG::MSIMD::Initialize() */

void __thiscall STG::MSIMD::Initialize(MSIMD *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = Platform_QueryHardwareSupported();
  iVar2 = DAT_0004fe20 + 0x4fdd0;
  this[9] = SUB41(iVar1,0);
  if (iVar1 == 0) {
    *(undefined4 *)this = *(undefined4 *)(iVar2 + DAT_0004fe24);
    *(undefined4 *)(this + 4) = *(undefined4 *)(iVar2 + DAT_0004fe28);
    this[8] = (MSIMD)0x1;
    return;
  }
  *(undefined4 *)this = *(undefined4 *)(iVar2 + DAT_0004fe2c);
  *(undefined4 *)(this + 4) = *(undefined4 *)(iVar2 + DAT_0004fe30);
  this[8] = (MSIMD)0x1;
  return;
}

