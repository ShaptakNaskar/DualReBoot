/* 0002ed10 | STG::FFileMemory::_FGetIsOpen */

/* STG::FFileMemory::_FGetIsOpen() const */

undefined4 __thiscall STG::FFileMemory::_FGetIsOpen(FFileMemory *this)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(this + 0x30) != 0) {
    uVar1 = CONCAT31((int3)((uint)*(int *)(this + 0x34) >> 8),*(int *)(this + 0x34) != 0);
  }
  return uVar1;
}

