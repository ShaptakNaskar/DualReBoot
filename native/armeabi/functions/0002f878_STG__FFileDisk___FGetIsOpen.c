/* 0002f878 | STG::FFileDisk::_FGetIsOpen */

/* STG::FFileDisk::_FGetIsOpen() const */

bool __thiscall STG::FFileDisk::_FGetIsOpen(FFileDisk *this)

{
  return *(int *)(this + 0x30) != 0;
}

