/* 00055be4 | std::priv::_String_base<char,std::allocator<char>>::_M_deallocate_block */

/* std::priv::_String_base<char, std::allocator<char> >::_M_deallocate_block() */

void __thiscall
std::priv::_String_base<char,std::allocator<char>>::_M_deallocate_block
          (_String_base<char,std::allocator<char>> *this)

{
  _String_base<char,std::allocator<char>> *p_Var1;
  
  p_Var1 = *(_String_base<char,std::allocator<char>> **)(this + 0x14);
  if (p_Var1 == this) {
    return;
  }
  if (p_Var1 == (_String_base<char,std::allocator<char>> *)0x0) {
    return;
  }
  if ((uint)(*(int *)this - (int)p_Var1) < 0x81) {
    __node_alloc::_M_deallocate(p_Var1,*(int *)this - (int)p_Var1);
    return;
  }
  operator_delete(p_Var1);
  return;
}

