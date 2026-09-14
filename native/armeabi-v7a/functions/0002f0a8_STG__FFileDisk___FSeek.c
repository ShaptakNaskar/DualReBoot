/* 0002f0a8 | STG::FFileDisk::_FSeek */

/* STG::FFileDisk::_FSeek(long, int) const */

int __thiscall STG::FFileDisk::_FSeek(FFileDisk *this,long param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = fseek(*(FILE **)(this + 0x30),param_1,param_2);
  iVar2 = 1 - uVar1;
  if (1 < uVar1) {
    iVar2 = 0;
  }
  return iVar2;
}

