/* 0002f8f0 | STG::FFileDisk::_FClose */

/* STG::FFileDisk::_FClose() */

bool __thiscall STG::FFileDisk::_FClose(FFileDisk *this)

{
  int iVar1;
  
  iVar1 = fclose(*(FILE **)(this + 0x30));
  *(undefined4 *)(this + 0x30) = 0;
  return iVar1 == 0;
}

