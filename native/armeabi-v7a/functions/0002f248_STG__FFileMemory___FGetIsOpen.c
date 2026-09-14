/* 0002f248 | STG::FFileMemory::_FGetIsOpen */

/* STG::FFileMemory::_FGetIsOpen() const */

bool __thiscall STG::FFileMemory::_FGetIsOpen(FFileMemory *this)

{
  if (*(int *)(this + 0x30) != 0) {
    return *(int *)(this + 0x34) != 0;
  }
  return false;
}

