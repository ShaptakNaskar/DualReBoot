/* 00037448 | STG::GEFont::GetCharacter */

/* STG::GEFont::GetCharacter(unsigned short) const */

int __thiscall STG::GEFont::GetCharacter(GEFont *this,ushort param_1)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  if (0x17f < uVar1) {
    uVar1 = 0x3f;
  }
  return *(int *)(this + 0x58) + (uint)*(ushort *)(this + uVar1 * 2 + 0x5e) * 0x24;
}

