/* 0002f2d8 | STG::FFileMemory::_FReadDirect */

/* STG::FFileMemory::_FReadDirect(unsigned char const*&, unsigned long) const */

ulong __thiscall STG::FFileMemory::_FReadDirect(FFileMemory *this,uchar **param_1,ulong param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x38);
  *param_1 = (uchar *)(*(int *)(this + 0x30) + iVar1);
  *(ulong *)(this + 0x38) = param_2 + iVar1;
  return param_2;
}

