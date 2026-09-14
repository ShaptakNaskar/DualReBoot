/* 0005ad74 | STG::UStringBase<char,int>::operator= */

/* STG::UStringBase<char, int>::TEMPNAMEPLACEHOLDERVALUE(STG::UStringBase<char, int> const&) */

UStringBase<char,int> * __thiscall
STG::UStringBase<char,int>::operator=(UStringBase<char,int> *this,UStringBase *param_1)

{
  _String_base<char,std::allocator<char>> *p_Var1;
  size_t __n;
  uint uVar2;
  _String_base<char,std::allocator<char>> *p_Var3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  void *__src;
  _String_base<char,std::allocator<char>> *p_Var9;
  _String_base<char,std::allocator<char>> *p_Var10;
  _String_base<char,std::allocator<char>> *p_Var11;
  _String_base<char,std::allocator<char>> *p_Var12;
  bool bVar13;
  bool bVar14;
  _String_base<char,std::allocator<char>> *local_34;
  uint local_2c [2];
  
  if (this == (UStringBase<char,int> *)param_1) {
    return this;
  }
  p_Var12 = *(_String_base<char,std::allocator<char>> **)(this + 0x14);
  __src = *(void **)(param_1 + 0x18);
  p_Var10 = *(_String_base<char,std::allocator<char>> **)(param_1 + 0x14);
  p_Var1 = *(_String_base<char,std::allocator<char>> **)(this + 0x18);
  uVar7 = (int)p_Var10 - (int)__src;
  __n = (int)p_Var12 - (int)p_Var1;
  if (uVar7 <= __n) {
    if (uVar7 != 0) {
      memmove(p_Var1,__src,uVar7);
      p_Var1 = *(_String_base<char,std::allocator<char>> **)(this + 0x18);
      p_Var12 = *(_String_base<char,std::allocator<char>> **)(this + 0x14);
    }
    if (p_Var1 + uVar7 == p_Var12) {
      return this;
    }
    p_Var1[uVar7] = *p_Var12;
    *(_String_base<char,std::allocator<char>> **)(this + 0x14) =
         p_Var1 + uVar7 + (*(int *)(this + 0x14) - (int)p_Var12);
    return this;
  }
  uVar7 = 0;
  if (__n != 0) {
    memmove(p_Var1,__src,__n);
    p_Var12 = *(_String_base<char,std::allocator<char>> **)(this + 0x14);
    p_Var1 = *(_String_base<char,std::allocator<char>> **)(this + 0x18);
    uVar7 = (int)p_Var12 - (int)p_Var1;
  }
  p_Var9 = (_String_base<char,std::allocator<char>> *)((int)__src + uVar7);
  if (p_Var10 == p_Var9) {
    return this;
  }
  p_Var11 = (_String_base<char,std::allocator<char>> *)(this + 4);
  if (p_Var1 != p_Var11) {
    iVar4 = *(int *)(this + 4);
  }
  else {
    iVar4 = (int)p_Var1 - (int)p_Var12;
  }
  uVar8 = (int)p_Var10 - (int)p_Var9;
  if (p_Var1 != p_Var11) {
    uVar5 = iVar4 - (int)p_Var12;
  }
  else {
    uVar5 = iVar4 + 0x10;
  }
  if (uVar8 < uVar5) {
    p_Var1 = p_Var9 + 1;
    uVar7 = (int)p_Var10 - (int)p_Var1;
    if ((int)uVar7 < 1) goto LAB_0005aea0;
    p_Var10 = p_Var12 + 1;
    bVar14 = p_Var12 + 5 <= p_Var1;
    bVar13 = p_Var1 == p_Var12 + 5;
    if (!bVar14 || bVar13) {
      bVar14 = p_Var9 + 5 <= p_Var10;
      bVar13 = p_Var10 == p_Var9 + 5;
    }
    uVar6 = uVar7 >> 2;
    uVar5 = uVar6 * 4;
    if (uVar6 == 0 ||
        ((uVar7 < 4 || (((uint)p_Var1 | (uint)p_Var10) & 3) != 0) || (!bVar14 || bVar13))) {
LAB_0005ae88:
      do {
        uVar7 = uVar7 - 1;
        *p_Var10 = *p_Var1;
        p_Var10 = p_Var10 + 1;
        p_Var1 = p_Var1 + 1;
      } while (0 < (int)uVar7);
    }
    else {
      p_Var11 = p_Var9 + -3;
      uVar2 = 0;
      p_Var12 = p_Var10;
      do {
        p_Var11 = p_Var11 + 4;
        uVar2 = uVar2 + 1;
        *(undefined4 *)p_Var12 = *(undefined4 *)p_Var11;
        p_Var12 = p_Var12 + 4;
      } while (uVar2 < uVar6);
      bVar13 = uVar7 != uVar5;
      uVar7 = uVar7 + uVar6 * -4;
      p_Var10 = p_Var10 + uVar5;
      p_Var1 = p_Var1 + uVar5;
      if (bVar13) goto LAB_0005ae88;
    }
    p_Var12 = *(_String_base<char,std::allocator<char>> **)(this + 0x14);
LAB_0005aea0:
    p_Var12[uVar8] = (_String_base<char,std::allocator<char>>)0x0;
    **(_String_base<char,std::allocator<char>> **)(this + 0x14) = *p_Var9;
    *(uint *)(this + 0x14) = *(int *)(this + 0x14) + uVar8;
    return this;
  }
  if (-uVar7 - 2 < uVar8) {
                    /* WARNING: Subroutine does not return */
    std::__stl_throw_length_error((char *)(DAT_0005b150 + 0x5b12c));
  }
  uVar5 = uVar8;
  if (uVar8 < uVar7) {
    uVar5 = uVar7;
  }
  uVar5 = uVar7 + 1 + uVar5;
  if ((uVar5 == 0xffffffff) || (uVar5 < uVar7)) {
    local_2c[0] = 0xfffffffe;
LAB_0005b0f0:
    p_Var10 = operator_new(local_2c[0]);
LAB_0005b0fc:
    p_Var1 = *(_String_base<char,std::allocator<char>> **)(this + 0x18);
    local_34 = p_Var10 + local_2c[0];
    uVar7 = *(int *)(this + 0x14) - (int)p_Var1;
  }
  else {
    if (uVar5 != 0) {
      local_2c[0] = uVar5;
      if (0x80 < uVar5) goto LAB_0005b0f0;
      p_Var10 = (_String_base<char,std::allocator<char>> *)std::__node_alloc::_M_allocate(local_2c);
      goto LAB_0005b0fc;
    }
    p_Var10 = (_String_base<char,std::allocator<char>> *)0x0;
    local_34 = (_String_base<char,std::allocator<char>> *)0x0;
  }
  p_Var12 = p_Var10;
  if (0 < (int)uVar7) {
    bVar14 = p_Var10 + 4 <= p_Var1;
    bVar13 = p_Var1 == p_Var10 + 4;
    if (!bVar14 || bVar13) {
      bVar14 = p_Var1 + 4 <= p_Var10;
      bVar13 = p_Var10 == p_Var1 + 4;
    }
    uVar6 = uVar7 >> 2;
    uVar5 = uVar6 * 4;
    uVar2 = uVar7;
    if (uVar6 == 0 ||
        ((uVar7 < 4 || (((uint)p_Var10 | (uint)p_Var1) & 3) != 0) || (!bVar14 || bVar13))) {
LAB_0005b004:
      do {
        uVar2 = uVar2 - 1;
        *p_Var12 = *p_Var1;
        p_Var1 = p_Var1 + 1;
        p_Var12 = p_Var12 + 1;
      } while (0 < (int)uVar2);
    }
    else {
      uVar2 = 0;
      p_Var3 = p_Var1;
      do {
        uVar2 = uVar2 + 1;
        *(undefined4 *)p_Var12 = *(undefined4 *)p_Var3;
        p_Var12 = p_Var12 + 4;
        p_Var3 = p_Var3 + 4;
      } while (uVar2 < uVar6);
      p_Var1 = p_Var1 + uVar5;
      uVar2 = uVar7 + uVar6 * -4;
      p_Var12 = p_Var10 + uVar5;
      if (uVar7 != uVar5) goto LAB_0005b004;
    }
    p_Var12 = p_Var10 + uVar7;
  }
  if ((int)uVar8 < 1) goto LAB_0005b0c4;
  bVar14 = p_Var12 + 4 <= p_Var9;
  bVar13 = p_Var9 == p_Var12 + 4;
  if (!bVar14 || bVar13) {
    bVar14 = p_Var9 + 4 <= p_Var12;
    bVar13 = p_Var12 == p_Var9 + 4;
  }
  uVar5 = uVar8 >> 2;
  uVar7 = uVar5 * 4;
  p_Var1 = p_Var12;
  uVar6 = uVar8;
  if (uVar5 == 0 ||
      ((uVar8 < 4 || (((uint)p_Var12 | (uint)p_Var9) & 3) != 0) || (!bVar14 || bVar13))) {
LAB_0005b0ac:
    do {
      uVar6 = uVar6 - 1;
      *p_Var1 = *p_Var9;
      p_Var1 = p_Var1 + 1;
      p_Var9 = p_Var9 + 1;
    } while (0 < (int)uVar6);
  }
  else {
    uVar6 = 0;
    p_Var1 = p_Var9;
    p_Var3 = p_Var12;
    do {
      uVar6 = uVar6 + 1;
      *(undefined4 *)p_Var3 = *(undefined4 *)p_Var1;
      p_Var1 = p_Var1 + 4;
      p_Var3 = p_Var3 + 4;
    } while (uVar6 < uVar5);
    p_Var1 = p_Var12 + uVar7;
    uVar6 = uVar8 + uVar5 * -4;
    p_Var9 = p_Var9 + uVar7;
    if (uVar8 != uVar7) goto LAB_0005b0ac;
  }
  p_Var12 = p_Var12 + uVar8;
LAB_0005b0c4:
  *p_Var12 = (_String_base<char,std::allocator<char>>)0x0;
  std::priv::_String_base<char,std::allocator<char>>::_M_deallocate_block(p_Var11);
  *(_String_base<char,std::allocator<char>> **)(this + 0x14) = p_Var12;
  *(_String_base<char,std::allocator<char>> **)(this + 0x18) = p_Var10;
  *(_String_base<char,std::allocator<char>> **)(this + 4) = local_34;
  return this;
}

