/* 0004b7ec | STG::GETextureFont::SetMessage */

/* STG::GETextureFont::SetMessage(unsigned long, STG::UStringBase<unsigned short, unsigned short>
   const&) */

void __thiscall
STG::GETextureFont::SetMessage(GETextureFont *this,ulong param_1,UStringBase *param_2)

{
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
  *this_00;
  
  this_00 = (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
             *)(param_1 * 0x2c + *(int *)(this + 0x24) + 4);
  if (this_00 ==
      (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
       *)(param_2 + 4)) {
    return;
  }
  std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
  ::_M_assign(this_00,*(ushort **)(param_2 + 0x28),*(ushort **)(param_2 + 0x24));
  return;
}

