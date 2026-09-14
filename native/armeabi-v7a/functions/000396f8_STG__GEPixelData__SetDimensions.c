/* 000396f8 | STG::GEPixelData::SetDimensions */

/* STG::GEPixelData::SetDimensions(unsigned long, unsigned long) */

void __thiscall STG::GEPixelData::SetDimensions(GEPixelData *this,ulong param_1,ulong param_2)

{
  *(ulong *)(this + 0x18) = param_1;
  *(ulong *)(this + 0x1c) = param_2;
  return;
}

