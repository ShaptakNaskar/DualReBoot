/* 0002ea20 | STG::FFileDisk::_FRead */

/* STG::FFileDisk::_FRead(unsigned char*, unsigned long, unsigned long) const */

void __thiscall STG::FFileDisk::_FRead(FFileDisk *this,uchar *param_1,ulong param_2,ulong param_3)

{
  FUN_0002e044();
  fread(param_1,param_2,param_3,*(FILE **)(this + 0x30));
  return;
}

