/* 0002fa30 | STG::FFileMemory::_FOpenMemory */

/* STG::FFileMemory::_FOpenMemory(unsigned char const*, unsigned long) */

bool __thiscall STG::FFileMemory::_FOpenMemory(FFileMemory *this,uchar *param_1,ulong param_2)

{
  *(uchar **)(this + 0x30) = param_1;
  *(ulong *)(this + 0x34) = param_2;
  *(undefined4 *)(this + 0x38) = 0;
  if (param_1 != (uchar *)0x0) {
    return param_2 != 0;
  }
  return false;
}

