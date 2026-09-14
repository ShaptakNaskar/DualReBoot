/* 0007c370 | EngineBitmapData::GetIsValid */

/* EngineBitmapData::GetIsValid() const */

bool __thiscall EngineBitmapData::GetIsValid(EngineBitmapData *this)

{
  bool bVar1;
  
  bVar1 = false;
  if ((((*(int *)(this + 0x18) != *(int *)(this + 0x14)) && (*(int *)(this + 0x1c) != 0)) &&
      (*(int *)(this + 0x20) != 0)) && (*(short *)(this + 0x24) != 0)) {
    bVar1 = *(short *)(this + 0x26) != 0;
  }
  return bVar1;
}

