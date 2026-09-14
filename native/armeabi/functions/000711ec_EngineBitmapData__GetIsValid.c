/* 000711ec | EngineBitmapData::GetIsValid */

/* EngineBitmapData::GetIsValid() const */

bool __thiscall EngineBitmapData::GetIsValid(EngineBitmapData *this)

{
  if (*(int *)(this + 0x18) == *(int *)(this + 0x14)) {
    return false;
  }
  if ((*(int *)(this + 0x1c) != 0) && (*(int *)(this + 0x20) != 0)) {
    if (*(short *)(this + 0x24) == 0) {
      return false;
    }
    return *(short *)(this + 0x26) != 0;
  }
  return false;
}

