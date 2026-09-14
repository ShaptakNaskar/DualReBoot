/* 0002fa5c | STG::FFileMemory::_FClose */

/* STG::FFileMemory::_FClose() */

undefined4 __thiscall STG::FFileMemory::_FClose(FFileMemory *this)

{
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  return 1;
}

