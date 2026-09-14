/* 0002e9e0 | STG::FFileDisk::_FWrite */

/* STG::FFileDisk::_FWrite(unsigned char const*, unsigned long, unsigned long) */

void __thiscall STG::FFileDisk::_FWrite(FFileDisk *this,uchar *param_1,ulong param_2,ulong param_3)

{
  FUN_0002e044();
  fwrite(param_1,param_2,param_3,*(FILE **)(this + 0x30));
  return;
}

