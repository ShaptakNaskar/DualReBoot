/* 0002f8a0 | STG::FFileDisk::_FWrite */

/* STG::FFileDisk::_FWrite(unsigned char const*, unsigned long, unsigned long) */

void __thiscall STG::FFileDisk::_FWrite(FFileDisk *this,uchar *param_1,ulong param_2,ulong param_3)

{
  (*(code *)PTR_fwrite_00080e1c)(param_1,param_2,param_3,*(undefined4 *)(this + 0x30));
  return;
}

