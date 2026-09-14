/* 0005d3d0 | STG::USerialize::Load */

/* STG::USerialize::Load(STG::FFileBase const*, STG::UPreference_IAB&) */

void STG::USerialize::Load(FFileBase *param_1,UPreference_IAB *param_2)

{
  _String_base<char,std::allocator<char>> *p_Var1;
  _String_base<char,std::allocator<char>> *p_Var2;
  int iVar3;
  uint uVar4;
  size_t __n;
  _String_base<char,std::allocator<char>> *p_Var5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  _String_base<char,std::allocator<char>> *p_Var10;
  _String_base<char,std::allocator<char>> *p_Var11;
  int *piVar12;
  bool bVar13;
  bool bVar14;
  _String_base<char,std::allocator<char>> *local_cc;
  _String_base<char,std::allocator<char>> *local_bc;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  int local_a8;
  int iStack_a4;
  int local_9c;
  _String_base<char,std::allocator<char>> a_Stack_98 [24];
  int local_80;
  _String_base<char,std::allocator<char>> a_Stack_7c [24];
  int local_64;
  _String_base<char,std::allocator<char>> a_Stack_60 [24];
  int local_48;
  _String_base<char,std::allocator<char>> a_Stack_44 [16];
  _String_base<char,std::allocator<char>> *local_34;
  void *local_30;
  int local_2c;
  
  piVar12 = *(int **)(DAT_0005d9f0 + 0x5d3e8);
  local_2c = *piVar12;
  FFileBase::Peek((uchar *)param_1,(ulong)&local_a8);
  if (iStack_a4 == DAT_0005d9f8 && local_a8 == DAT_0005d9f4) {
    FFileBase::Read(param_1,(uchar *)&local_a8,8);
    FFileBase::Read(param_1,(uchar *)&local_b0,4);
    uVar8 = local_b0;
    UStringBase<char,int>::UStringBase((UStringBase<char,int> *)&local_9c);
    if (uVar8 < 3) goto LAB_0005d424;
    Load<char,int>(param_1,(UStringBase *)&local_9c);
    UStringBase<char,int>::UStringBase((UStringBase<char,int> *)&local_80);
    UStringBase<char,int>::UStringBase((UStringBase<char,int> *)&local_64);
    Load<char,int>(param_1,(UStringBase *)&local_80);
    Load<char,int>(param_1,(UStringBase *)&local_64);
    FFileBase::Read(param_1,(uchar *)&local_b4,4);
    UStringBase<char,int>::UStringBase((UStringBase<char,int> *)&local_48);
LAB_0005d72c:
    Load<char,int>(param_1,(UStringBase *)&local_48);
  }
  else {
    UStringBase<char,int>::UStringBase((UStringBase<char,int> *)&local_9c);
LAB_0005d424:
    FFileBase::Read(param_1,(uchar *)&local_b0,4);
    UStringBase<char,int>::UStringBase((UStringBase<char,int> *)&local_80);
    UStringBase<char,int>::UStringBase((UStringBase<char,int> *)&local_64);
    Load<char,int>(param_1,(UStringBase *)&local_80);
    Load<char,int>(param_1,(UStringBase *)&local_64);
    FFileBase::Read(param_1,(uchar *)&local_b4,4);
    UStringBase<char,int>::UStringBase((UStringBase<char,int> *)&local_48);
    if (1 < local_b0) goto LAB_0005d72c;
  }
  p_Var10 = (_String_base<char,std::allocator<char>> *)(param_2 + 0x5c);
  (**(code **)(*(int *)param_2 + 0x44))(param_2,&local_9c,&local_80,&local_64,local_b4);
  if (a_Stack_44 == p_Var10) goto LAB_0005d5f8;
  p_Var5 = *(_String_base<char,std::allocator<char>> **)(param_2 + 0x6c);
  p_Var1 = *(_String_base<char,std::allocator<char>> **)(param_2 + 0x70);
  uVar8 = (int)local_34 - (int)local_30;
  __n = (int)p_Var5 - (int)p_Var1;
  if (uVar8 <= __n) {
    if (uVar8 != 0) {
      memmove(p_Var1,local_30,uVar8);
      p_Var1 = *(_String_base<char,std::allocator<char>> **)(param_2 + 0x70);
      p_Var5 = *(_String_base<char,std::allocator<char>> **)(param_2 + 0x6c);
    }
    if (p_Var1 + uVar8 != p_Var5) {
      p_Var1[uVar8] = *p_Var5;
      *(_String_base<char,std::allocator<char>> **)(param_2 + 0x6c) =
           p_Var1 + uVar8 + (*(int *)(param_2 + 0x6c) - (int)p_Var5);
    }
    goto LAB_0005d5f8;
  }
  uVar8 = 0;
  if (__n != 0) {
    memmove(p_Var1,local_30,__n);
    p_Var5 = *(_String_base<char,std::allocator<char>> **)(param_2 + 0x6c);
    p_Var1 = *(_String_base<char,std::allocator<char>> **)(param_2 + 0x70);
    uVar8 = (int)p_Var5 - (int)p_Var1;
  }
  p_Var11 = (_String_base<char,std::allocator<char>> *)((int)local_30 + uVar8);
  if (local_34 == p_Var11) goto LAB_0005d5f8;
  if (p_Var1 != p_Var10) {
    iVar3 = *(int *)(param_2 + 0x5c);
  }
  else {
    iVar3 = (int)p_Var1 - (int)p_Var5;
  }
  uVar9 = (int)local_34 - (int)p_Var11;
  if (p_Var1 != p_Var10) {
    uVar4 = iVar3 - (int)p_Var5;
  }
  else {
    uVar4 = iVar3 + 0x10;
  }
  if (uVar9 < uVar4) {
    p_Var10 = p_Var11 + 1;
    uVar8 = (int)local_34 - (int)p_Var10;
    if (0 < (int)uVar8) {
      p_Var1 = p_Var5 + 1;
      bVar14 = p_Var5 + 5 <= p_Var10;
      bVar13 = p_Var10 == p_Var5 + 5;
      if (!bVar14 || bVar13) {
        bVar14 = p_Var11 + 5 <= p_Var1;
        bVar13 = p_Var1 == p_Var11 + 5;
      }
      uVar7 = uVar8 >> 2;
      uVar4 = uVar7 * 4;
      if (uVar7 == 0 ||
          ((uVar8 < 4 || (((uint)p_Var10 | (uint)p_Var1) & 3) != 0) || (!bVar14 || bVar13))) {
LAB_0005d5c0:
        do {
          uVar8 = uVar8 - 1;
          *p_Var1 = *p_Var10;
          p_Var1 = p_Var1 + 1;
          p_Var10 = p_Var10 + 1;
        } while (0 < (int)uVar8);
      }
      else {
        p_Var2 = p_Var11 + -3;
        uVar6 = 0;
        p_Var5 = p_Var1;
        do {
          p_Var2 = p_Var2 + 4;
          uVar6 = uVar6 + 1;
          *(undefined4 *)p_Var5 = *(undefined4 *)p_Var2;
          p_Var5 = p_Var5 + 4;
        } while (uVar6 < uVar7);
        bVar13 = uVar8 != uVar4;
        uVar8 = uVar8 + uVar7 * -4;
        p_Var1 = p_Var1 + uVar4;
        p_Var10 = p_Var10 + uVar4;
        if (bVar13) goto LAB_0005d5c0;
      }
      p_Var5 = *(_String_base<char,std::allocator<char>> **)(param_2 + 0x6c);
    }
    p_Var5[uVar9] = (_String_base<char,std::allocator<char>>)0x0;
    **(_String_base<char,std::allocator<char>> **)(param_2 + 0x6c) = *p_Var11;
    *(uint *)(param_2 + 0x6c) = *(int *)(param_2 + 0x6c) + uVar9;
    goto LAB_0005d5f8;
  }
  if (-uVar8 - 2 < uVar9) {
                    /* WARNING: Subroutine does not return */
    std::__stl_throw_length_error((char *)((int)&DAT_0005d9f0 + DAT_0005da00));
  }
  uVar4 = uVar9;
  if (uVar9 < uVar8) {
    uVar4 = uVar8;
  }
  uVar4 = uVar8 + 1 + uVar4;
  if ((uVar4 == 0xffffffff) || (uVar4 < uVar8)) {
    local_ac = 0xfffffffe;
LAB_0005d984:
    local_cc = operator_new(local_ac);
LAB_0005d994:
    p_Var1 = *(_String_base<char,std::allocator<char>> **)(param_2 + 0x70);
    local_bc = local_cc + local_ac;
    uVar8 = *(int *)(param_2 + 0x6c) - (int)p_Var1;
  }
  else {
    if (uVar4 != 0) {
      local_ac = uVar4;
      if (0x80 < uVar4) goto LAB_0005d984;
      local_cc = (_String_base<char,std::allocator<char>> *)
                 std::__node_alloc::_M_allocate(&local_ac);
      goto LAB_0005d994;
    }
    local_cc = (_String_base<char,std::allocator<char>> *)0x0;
    local_bc = (_String_base<char,std::allocator<char>> *)0x0;
  }
  p_Var5 = local_cc;
  if (0 < (int)uVar8) {
    uVar4 = uVar8 >> 2;
    bVar14 = local_cc + 4 <= p_Var1;
    bVar13 = p_Var1 == local_cc + 4;
    if (!bVar14 || bVar13) {
      bVar14 = p_Var1 + 4 <= local_cc;
      bVar13 = local_cc == p_Var1 + 4;
    }
    uVar7 = uVar4 * 4;
    uVar6 = uVar8;
    if (uVar4 == 0 ||
        ((uVar8 < 4 || (((uint)local_cc | (uint)p_Var1) & 3) != 0) || (!bVar14 || bVar13))) {
LAB_0005d888:
      do {
        uVar6 = uVar6 - 1;
        *p_Var5 = *p_Var1;
        p_Var1 = p_Var1 + 1;
        p_Var5 = p_Var5 + 1;
      } while (0 < (int)uVar6);
    }
    else {
      uVar6 = 0;
      p_Var2 = p_Var1;
      do {
        uVar6 = uVar6 + 1;
        *(undefined4 *)p_Var5 = *(undefined4 *)p_Var2;
        p_Var5 = p_Var5 + 4;
        p_Var2 = p_Var2 + 4;
      } while (uVar6 < uVar4);
      p_Var1 = p_Var1 + uVar7;
      uVar6 = uVar8 + uVar4 * -4;
      p_Var5 = local_cc + uVar7;
      if (uVar8 != uVar7) goto LAB_0005d888;
    }
    p_Var5 = local_cc + uVar8;
  }
  if (0 < (int)uVar9) {
    bVar14 = p_Var5 + 4 <= p_Var11;
    bVar13 = p_Var11 == p_Var5 + 4;
    if (!bVar14 || bVar13) {
      bVar14 = p_Var11 + 4 <= p_Var5;
      bVar13 = p_Var5 == p_Var11 + 4;
    }
    uVar4 = uVar9 >> 2;
    uVar8 = uVar4 * 4;
    p_Var1 = p_Var5;
    uVar7 = uVar9;
    if (uVar4 == 0 ||
        ((uVar9 < 4 || (((uint)p_Var5 | (uint)p_Var11) & 3) != 0) || (!bVar14 || bVar13))) {
LAB_0005d938:
      do {
        uVar7 = uVar7 - 1;
        *p_Var1 = *p_Var11;
        p_Var1 = p_Var1 + 1;
        p_Var11 = p_Var11 + 1;
      } while (0 < (int)uVar7);
    }
    else {
      uVar7 = 0;
      p_Var1 = p_Var11;
      p_Var2 = p_Var5;
      do {
        uVar7 = uVar7 + 1;
        *(undefined4 *)p_Var2 = *(undefined4 *)p_Var1;
        p_Var1 = p_Var1 + 4;
        p_Var2 = p_Var2 + 4;
      } while (uVar7 < uVar4);
      p_Var1 = p_Var5 + uVar8;
      uVar7 = uVar9 + uVar4 * -4;
      p_Var11 = p_Var11 + uVar8;
      if (uVar9 != uVar8) goto LAB_0005d938;
    }
    p_Var5 = p_Var5 + uVar9;
  }
  *p_Var5 = (_String_base<char,std::allocator<char>>)0x0;
  std::priv::_String_base<char,std::allocator<char>>::_M_deallocate_block(p_Var10);
  *(_String_base<char,std::allocator<char>> **)(param_2 + 0x6c) = p_Var5;
  *(_String_base<char,std::allocator<char>> **)(param_2 + 0x5c) = local_bc;
  *(_String_base<char,std::allocator<char>> **)(param_2 + 0x70) = local_cc;
LAB_0005d5f8:
  if (local_b4 != 0) {
    uVar9 = 0;
    uVar8 = uVar9;
    do {
      uVar8 = uVar8 + 1;
      Load<char,int>(param_1,(UStringBase *)(*(int *)(param_2 + 0x7c) + uVar9));
      Load<char,int>(param_1,(UStringBase *)(*(int *)(param_2 + 0x7c) + uVar9 + 0x1c));
      uVar9 = uVar9 + 0x38;
    } while (uVar8 < local_b4);
  }
  iVar3 = *(int *)(DAT_0005d9fc + 0x5d654) + 8;
  local_48 = iVar3;
  std::priv::_String_base<char,std::allocator<char>>::_M_deallocate_block(a_Stack_44);
  local_64 = iVar3;
  std::priv::_String_base<char,std::allocator<char>>::_M_deallocate_block(a_Stack_60);
  local_80 = iVar3;
  std::priv::_String_base<char,std::allocator<char>>::_M_deallocate_block(a_Stack_7c);
  local_9c = iVar3;
  std::priv::_String_base<char,std::allocator<char>>::_M_deallocate_block(a_Stack_98);
  if (local_2c != *piVar12) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

