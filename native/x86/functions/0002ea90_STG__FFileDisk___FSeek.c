/* 0002ea90 | STG::FFileDisk::_FSeek */

/* STG::FFileDisk::_FSeek(long, int) const */

bool __thiscall STG::FFileDisk::_FSeek(FFileDisk *this,long param_1,int param_2)

{
  int iVar1;
  
  FUN_0002e044();
  iVar1 = fseek(*(FILE **)(this + 0x30),param_1,param_2);
  return iVar1 == 0;
}

