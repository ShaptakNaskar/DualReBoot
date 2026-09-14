/* 0002ea60 | STG::FFileDisk::_FTell */

/* STG::FFileDisk::_FTell() const */

void __thiscall STG::FFileDisk::_FTell(FFileDisk *this)

{
  FUN_0002e044();
  ftell(*(FILE **)(this + 0x30));
  return;
}

