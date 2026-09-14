/* 00056544 | STG::UStringBase<char,int>::operator= */

/* STG::UStringBase<char, int>::TEMPNAMEPLACEHOLDERVALUE(STG::UStringBase<char, int> const&) */

UStringBase<char,int> * __thiscall
STG::UStringBase<char,int>::operator=(UStringBase<char,int> *this,UStringBase *param_1)

{
  uint uVar1;
  _String_base<char,std::allocator<char>> *p_Var2;
  size_t __n;
  uint uVar3;
  _String_base<char,std::allocator<char>> *p_Var4;
  uint uVar5;
  _String_base<char,std::allocator<char>> *p_Var6;
  uint uVar7;
  _String_base<char,std::allocator<char>> *p_Var8;
  void *__src;
  _String_base<char,std::allocator<char>> *p_Var9;
  _String_base<char,std::allocator<char>> *p_Var10;
  _String_base<char,std::allocator<char>> *p_Var11;
  _String_base<char,std::allocator<char>> *p_Var12;
  bool bVar13;
  bool bVar14;
  _String_base<char,std::allocator<char>> *local_34;
  _String_base<char,std::allocator<char>> *local_2c [2];
  
  if (this == (UStringBase<char,int> *)param_1) {
    return this;
  }
  p_Var11 = *(_String_base<char,std::allocator<char>> **)(this + 0x14);
  __src = *(void **)(param_1 + 0x18);
  p_Var10 = *(_String_base<char,std::allocator<char>> **)(param_1 + 0x14);
  p_Var2 = *(_String_base<char,std::allocator<char>> **)(this + 0x18);
  uVar7 = (int)p_Var10 - (int)__src;
  __n = (int)p_Var11 - (int)p_Var2;
  if (uVar7 <= __n) {
    if (uVar7 != 0) {
      memmove(p_Var2,__src,uVar7);
      p_Var2 = *(_String_base<char,std::allocator<char>> **)(this + 0x18);
      p_Var11 = *(_String_base<char,std::allocator<char>> **)(this + 0x14);
    }
    if (p_Var2 + uVar7 == p_Var11) {
      return this;
    }
    p_Var2[uVar7] = *p_Var11;
    *(_String_base<char,std::allocator<char>> **)(this + 0x14) =
         p_Var2 + uVar7 + (*(int *)(this + 0x14) - (int)p_Var11);
    return this;
  }
  p_Var12 = (_String_base<char,std::allocator<char>> *)0x0;
  if (__n != 0) {
    memmove(p_Var2,__src,__n);
    p_Var11 = *(_String_base<char,std::allocator<char>> **)(this + 0x14);
    p_Var2 = *(_String_base<char,std::allocator<char>> **)(this + 0x18);
    p_Var12 = p_Var11 + -(int)p_Var2;
  }
  p_Var9 = (_String_base<char,std::allocator<char>> *)((int)__src + (int)p_Var12);
  if (p_Var10 == p_Var9) {
    return this;
  }
  p_Var8 = p_Var10 + -(int)p_Var9;
  if (p_Var2 == (_String_base<char,std::allocator<char>> *)(this + 4)) {
    p_Var4 = p_Var2 + (0x10 - (int)p_Var11);
  }
  else {
    p_Var4 = (_String_base<char,std::allocator<char>> *)(*(int *)(this + 4) - (int)p_Var11);
  }
  if (p_Var8 < p_Var4) {
    p_Var2 = p_Var9 + 1;
    uVar7 = (int)p_Var10 - (int)p_Var2;
    if ((int)uVar7 < 1) goto LAB_00056670;
    p_Var10 = p_Var11 + 1;
    uVar5 = uVar7 >> 2;
    bVar14 = p_Var11 + 5 <= p_Var2;
    bVar13 = p_Var2 == p_Var11 + 5;
    if (!bVar14 || bVar13) {
      bVar14 = p_Var9 + 5 <= p_Var10;
      bVar13 = p_Var10 == p_Var9 + 5;
    }
    uVar1 = uVar5 * 4;
    if (uVar5 == 0 ||
        ((uVar7 < 4 || (((uint)p_Var2 | (uint)p_Var10) & 3) != 0) || (!bVar14 || bVar13))) {
LAB_00056658:
      do {
        uVar7 = uVar7 - 1;
        *p_Var10 = *p_Var2;
        p_Var10 = p_Var10 + 1;
        p_Var2 = p_Var2 + 1;
      } while (0 < (int)uVar7);
    }
    else {
      p_Var12 = p_Var9 + -3;
      uVar3 = 0;
      p_Var11 = p_Var10;
      do {
        p_Var12 = p_Var12 + 4;
        uVar3 = uVar3 + 1;
        *(undefined4 *)p_Var11 = *(undefined4 *)p_Var12;
        p_Var11 = p_Var11 + 4;
      } while (uVar3 < uVar5);
      bVar13 = uVar7 != uVar1;
      uVar7 = uVar7 + uVar5 * -4;
      p_Var10 = p_Var10 + uVar1;
      p_Var2 = p_Var2 + uVar1;
      if (bVar13) goto LAB_00056658;
    }
    p_Var11 = *(_String_base<char,std::allocator<char>> **)(this + 0x14);
LAB_00056670:
    p_Var11[(int)p_Var8] = (_String_base<char,std::allocator<char>>)0x0;
    **(_String_base<char,std::allocator<char>> **)(this + 0x14) = *p_Var9;
    *(_String_base<char,std::allocator<char>> **)(this + 0x14) = p_Var8 + *(int *)(this + 0x14);
    return this;
  }
  if ((_String_base<char,std::allocator<char>> *)(-2 - (int)p_Var12) < p_Var8) {
                    /* WARNING: Subroutine does not return */
    std::__stl_throw_length_error((char *)(DAT_00056924 + 0x56900));
  }
  p_Var10 = p_Var8;
  if (p_Var8 < p_Var12) {
    p_Var10 = p_Var12;
  }
  p_Var10 = p_Var12 + 1 + (int)p_Var10;
  if ((p_Var10 == (_String_base<char,std::allocator<char>> *)0xffffffff) || (p_Var10 < p_Var12)) {
    local_2c[0] = (_String_base<char,std::allocator<char>> *)0xfffffffe;
LAB_000568c4:
    p_Var10 = operator_new((uint)local_2c[0]);
LAB_000568d0:
    p_Var2 = *(_String_base<char,std::allocator<char>> **)(this + 0x18);
    p_Var12 = (_String_base<char,std::allocator<char>> *)(*(int *)(this + 0x14) - (int)p_Var2);
    local_34 = p_Var10 + (int)local_2c[0];
  }
  else {
    if (p_Var10 != (_String_base<char,std::allocator<char>> *)0x0) {
      local_2c[0] = p_Var10;
      if ((_String_base<char,std::allocator<char>> *)0x80 < p_Var10) goto LAB_000568c4;
      p_Var10 = (_String_base<char,std::allocator<char>> *)
                std::__node_alloc::_M_allocate((uint *)local_2c);
      goto LAB_000568d0;
    }
    p_Var10 = (_String_base<char,std::allocator<char>> *)0x0;
    local_34 = (_String_base<char,std::allocator<char>> *)0x0;
  }
  p_Var11 = p_Var10;
  if (0 < (int)p_Var12) {
    uVar7 = (uint)p_Var12 >> 2;
    bVar14 = p_Var10 + 4 <= p_Var2;
    bVar13 = p_Var2 == p_Var10 + 4;
    if (!bVar14 || bVar13) {
      bVar14 = p_Var2 + 4 <= p_Var10;
      bVar13 = p_Var10 == p_Var2 + 4;
    }
    p_Var11 = (_String_base<char,std::allocator<char>> *)(uVar7 * 4);
    p_Var4 = p_Var12;
    p_Var6 = p_Var10;
    if (uVar7 == 0 ||
        ((p_Var12 < (_String_base<char,std::allocator<char>> *)0x4 ||
         (((uint)p_Var10 | (uint)p_Var2) & 3) != 0) || (!bVar14 || bVar13))) {
LAB_000567d8:
      do {
        p_Var4 = p_Var4 + -1;
        *p_Var6 = *p_Var2;
        p_Var2 = p_Var2 + 1;
        p_Var6 = p_Var6 + 1;
      } while (0 < (int)p_Var4);
    }
    else {
      uVar5 = 0;
      p_Var4 = p_Var10;
      p_Var6 = p_Var2;
      do {
        uVar5 = uVar5 + 1;
        *(undefined4 *)p_Var4 = *(undefined4 *)p_Var6;
        p_Var4 = p_Var4 + 4;
        p_Var6 = p_Var6 + 4;
      } while (uVar5 < uVar7);
      p_Var2 = p_Var2 + (int)p_Var11;
      p_Var4 = p_Var12 + uVar7 * -4;
      p_Var6 = p_Var10 + (int)p_Var11;
      if (p_Var12 != p_Var11) goto LAB_000567d8;
    }
    p_Var11 = p_Var10 + (int)p_Var12;
  }
  if ((int)p_Var8 < 1) goto LAB_00056898;
  uVar7 = (uint)p_Var8 >> 2;
  bVar14 = p_Var11 + 4 <= p_Var9;
  bVar13 = p_Var9 == p_Var11 + 4;
  if (!bVar14 || bVar13) {
    bVar14 = p_Var9 + 4 <= p_Var11;
    bVar13 = p_Var11 == p_Var9 + 4;
  }
  p_Var2 = (_String_base<char,std::allocator<char>> *)(uVar7 * 4);
  p_Var12 = p_Var11;
  p_Var4 = p_Var8;
  if (uVar7 == 0 ||
      ((p_Var8 < (_String_base<char,std::allocator<char>> *)0x4 ||
       (((uint)p_Var11 | (uint)p_Var9) & 3) != 0) || (!bVar14 || bVar13))) {
LAB_00056880:
    do {
      p_Var4 = p_Var4 + -1;
      *p_Var12 = *p_Var9;
      p_Var12 = p_Var12 + 1;
      p_Var9 = p_Var9 + 1;
    } while (0 < (int)p_Var4);
  }
  else {
    uVar5 = 0;
    p_Var12 = p_Var9;
    p_Var4 = p_Var11;
    do {
      uVar5 = uVar5 + 1;
      *(undefined4 *)p_Var4 = *(undefined4 *)p_Var12;
      p_Var12 = p_Var12 + 4;
      p_Var4 = p_Var4 + 4;
    } while (uVar5 < uVar7);
    p_Var12 = p_Var11 + (int)p_Var2;
    p_Var4 = p_Var8 + uVar7 * -4;
    p_Var9 = p_Var9 + (int)p_Var2;
    if (p_Var8 != p_Var2) goto LAB_00056880;
  }
  p_Var11 = p_Var11 + (int)p_Var8;
LAB_00056898:
  *p_Var11 = (_String_base<char,std::allocator<char>>)0x0;
  std::priv::_String_base<char,std::allocator<char>>::_M_deallocate_block
            ((_String_base<char,std::allocator<char>> *)(this + 4));
  *(_String_base<char,std::allocator<char>> **)(this + 0x14) = p_Var11;
  *(_String_base<char,std::allocator<char>> **)(this + 0x18) = p_Var10;
  *(_String_base<char,std::allocator<char>> **)(this + 4) = local_34;
  return this;
}

