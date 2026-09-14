/* 0004b0dc | STG::GETextureFont::SetCountdown */

/* STG::GETextureFont::SetCountdown(unsigned char, unsigned char) */

void __thiscall STG::GETextureFont::SetCountdown(GETextureFont *this,uchar param_1,uchar param_2)

{
  if ((param_1 - 1 < 0xc && param_2 != '\0') && (param_2 < 0x20)) {
    this[0x29] = (GETextureFont)0x1;
    this[0x2a] = (GETextureFont)param_1;
    this[0x2b] = (GETextureFont)param_2;
    return;
  }
  this[0x29] = (GETextureFont)0x0;
  this[0x2a] = (GETextureFont)0x0;
  this[0x2b] = (GETextureFont)0x0;
  return;
}

