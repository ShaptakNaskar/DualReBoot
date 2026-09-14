/* 0002f26c | STG::FFileMemory::_FSeek */

/* STG::FFileMemory::_FSeek(long, int) const */

undefined4 __thiscall STG::FFileMemory::_FSeek(FFileMemory *this,long param_1,int param_2)

{
  if (param_2 == 1) {
    param_1 = param_1 + *(int *)(this + 0x38);
  }
  else if (param_2 == 2) {
    param_1 = param_1 + *(int *)(this + 0x34);
  }
  else if (param_2 != 0) goto LAB_0002f284;
  if (-1 < param_1) {
    *(long *)(this + 0x38) = param_1;
    if (*(uint *)(this + 0x34) < (uint)param_1) {
      *(uint *)(this + 0x38) = *(uint *)(this + 0x34);
    }
    return 1;
  }
LAB_0002f284:
  *(undefined4 *)(this + 0x38) = 0;
  return 1;
}

