/* 0002e970 | STG::FFileDisk::_FFlush */

/* STG::FFileDisk::_FFlush() */

void __thiscall STG::FFileDisk::_FFlush(FFileDisk *this)

{
  FUN_0002e044();
  fflush(*(FILE **)(this + 0x30));
  return;
}

