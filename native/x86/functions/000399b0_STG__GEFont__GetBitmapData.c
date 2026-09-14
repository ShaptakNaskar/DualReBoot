/* 000399b0 | STG::GEFont::GetBitmapData */

/* STG::GEFont::GetBitmapData(unsigned char const*&, unsigned long&) const */

void __thiscall STG::GEFont::GetBitmapData(GEFont *this,uchar **param_1,ulong *param_2)

{
  *param_1 = *(uchar **)(this + 0x360);
  *param_2 = *(ulong *)(this + 0x364);
  return;
}

