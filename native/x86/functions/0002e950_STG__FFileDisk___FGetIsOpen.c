/* 0002e950 | STG::FFileDisk::_FGetIsOpen */

/* STG::FFileDisk::_FGetIsOpen() const */

undefined4 __thiscall STG::FFileDisk::_FGetIsOpen(FFileDisk *this)

{
  return CONCAT31((int3)((uint)*(int *)(this + 0x30) >> 8),*(int *)(this + 0x30) != 0);
}

