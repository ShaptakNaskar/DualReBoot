/* 0002f088 | STG::FFileDisk::_FRead */

/* STG::FFileDisk::_FRead(unsigned char*, unsigned long, unsigned long) const */

void __thiscall STG::FFileDisk::_FRead(FFileDisk *this,uchar *param_1,ulong param_2,ulong param_3)

{
  (*(code *)PTR_fread_0007de28)(param_1,param_2,param_3,*(undefined4 *)(this + 0x30));
  return;
}

