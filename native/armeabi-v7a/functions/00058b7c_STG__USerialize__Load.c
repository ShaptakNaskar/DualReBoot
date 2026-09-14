/* 00058b7c | STG::USerialize::Load */

/* STG::USerialize::Load(STG::FFileBase const*, STG::UPreference_IAB&) */

void STG::USerialize::Load(FFileBase *param_1,UPreference_IAB *param_2)

{
  uint uVar1;
  _String_base<char,std::allocator<char>> *p_Var2;
  _String_base<char,std::allocator<char>> *p_Var3;
  _String_base<char,std::allocator<char>> *p_Var4;
  int iVar5;
  size_t __n;
  _String_base<char,std::allocator<char>> *p_Var6;
  uint uVar7;
  _String_base<char,std::allocator<char>> *p_Var8;
  uint uVar9;
  _String_base<char,std::allocator<char>> *p_Var10;
  uint uVar11;
  _String_base<char,std::allocator<char>> *p_Var12;
  _String_base<char,std::allocator<char>> *p_Var13;
  int *piVar14;
  bool bVar15;
  bool bVar16;
  _String_base<char,std::allocator<char>> *local_cc;
  _String_base<char,std::allocator<char>> *local_bc;
  uint local_b4;
  uint local_b0;
  _String_base<char,std::allocator<char>> *local_ac;
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
  
  piVar14 = *(int **)(DAT_000591a8 + 0x58b9c);
  local_2c = *piVar14;
  FFileBase::Peek((uchar *)param_1,(ulong)&local_a8);
  if (iStack_a4 == 0x50414e49 && local_a8 == 0x46455250) {
    FFileBase::Read(param_1,(uchar *)&local_a8,8);
    FFileBase::Read(param_1,(uchar *)&local_b0,4);
    uVar9 = local_b0;
    UStringBase<char,int>::UStringBase((UStringBase<char,int> *)&local_9c);
    if (uVar9 < 3) goto LAB_00058bd8;
    Load<char,int>(param_1,(UStringBase *)&local_9c);
    UStringBase<char,int>::UStringBase((UStringBase<char,int> *)&local_80);
    UStringBase<char,int>::UStringBase((UStringBase<char,int> *)&local_64);
    Load<char,int>(param_1,(UStringBase *)&local_80);
    Load<char,int>(param_1,(UStringBase *)&local_64);
    FFileBase::Read(param_1,(uchar *)&local_b4,4);
    UStringBase<char,int>::UStringBase((UStringBase<char,int> *)&local_48);
LAB_00058ee0:
    Load<char,int>(param_1,(UStringBase *)&local_48);
  }
  else {
    UStringBase<char,int>::UStringBase((UStringBase<char,int> *)&local_9c);
LAB_00058bd8:
    FFileBase::Read(param_1,(uchar *)&local_b0,4);
    UStringBase<char,int>::UStringBase((UStringBase<char,int> *)&local_80);
    UStringBase<char,int>::UStringBase((UStringBase<char,int> *)&local_64);
    Load<char,int>(param_1,(UStringBase *)&local_80);
    Load<char,int>(param_1,(UStringBase *)&local_64);
    FFileBase::Read(param_1,(uchar *)&local_b4,4);
    UStringBase<char,int>::UStringBase((UStringBase<char,int> *)&local_48);
    if (1 < local_b0) goto LAB_00058ee0;
  }
  p_Var12 = (_String_base<char,std::allocator<char>> *)(param_2 + 0x5c);
  (**(code **)(*(int *)param_2 + 0x44))(param_2,&local_9c,&local_80,&local_64,local_b4);
  if (a_Stack_44 == p_Var12) goto LAB_00058dac;
  p_Var6 = *(_String_base<char,std::allocator<char>> **)(param_2 + 0x6c);
  p_Var2 = *(_String_base<char,std::allocator<char>> **)(param_2 + 0x70);
  uVar9 = (int)local_34 - (int)local_30;
  __n = (int)p_Var6 - (int)p_Var2;
  if (uVar9 <= __n) {
    if (uVar9 != 0) {
      memmove(p_Var2,local_30,uVar9);
      p_Var2 = *(_String_base<char,std::allocator<char>> **)(param_2 + 0x70);
      p_Var6 = *(_String_base<char,std::allocator<char>> **)(param_2 + 0x6c);
    }
    if (p_Var2 + uVar9 != p_Var6) {
      p_Var2[uVar9] = *p_Var6;
      *(_String_base<char,std::allocator<char>> **)(param_2 + 0x6c) =
           p_Var2 + uVar9 + (*(int *)(param_2 + 0x6c) - (int)p_Var6);
    }
    goto LAB_00058dac;
  }
  p_Var3 = (_String_base<char,std::allocator<char>> *)0x0;
  if (__n != 0) {
    memmove(p_Var2,local_30,__n);
    p_Var6 = *(_String_base<char,std::allocator<char>> **)(param_2 + 0x6c);
    p_Var2 = *(_String_base<char,std::allocator<char>> **)(param_2 + 0x70);
    p_Var3 = p_Var6 + -(int)p_Var2;
  }
  p_Var13 = (_String_base<char,std::allocator<char>> *)((int)local_30 + (int)p_Var3);
  if (local_34 == p_Var13) goto LAB_00058dac;
  p_Var10 = local_34 + -(int)p_Var13;
  if (p_Var2 == p_Var12) {
    p_Var4 = p_Var2 + (0x10 - (int)p_Var6);
  }
  else {
    p_Var4 = (_String_base<char,std::allocator<char>> *)(*(int *)(param_2 + 0x5c) - (int)p_Var6);
  }
  if (p_Var10 < p_Var4) {
    p_Var12 = p_Var13 + 1;
    uVar9 = (int)local_34 - (int)p_Var12;
    if (0 < (int)uVar9) {
      p_Var2 = p_Var6 + 1;
      uVar11 = uVar9 >> 2;
      bVar16 = p_Var6 + 5 <= p_Var12;
      bVar15 = p_Var12 == p_Var6 + 5;
      if (!bVar16 || bVar15) {
        bVar16 = p_Var13 + 5 <= p_Var2;
        bVar15 = p_Var2 == p_Var13 + 5;
      }
      uVar1 = uVar11 * 4;
      if (uVar11 == 0 ||
          ((uVar9 < 4 || (((uint)p_Var12 | (uint)p_Var2) & 3) != 0) || (!bVar16 || bVar15))) {
LAB_00058d74:
        do {
          uVar9 = uVar9 - 1;
          *p_Var2 = *p_Var12;
          p_Var2 = p_Var2 + 1;
          p_Var12 = p_Var12 + 1;
        } while (0 < (int)uVar9);
      }
      else {
        p_Var3 = p_Var13 + -3;
        uVar7 = 0;
        p_Var6 = p_Var2;
        do {
          p_Var3 = p_Var3 + 4;
          uVar7 = uVar7 + 1;
          *(undefined4 *)p_Var6 = *(undefined4 *)p_Var3;
          p_Var6 = p_Var6 + 4;
        } while (uVar7 < uVar11);
        bVar15 = uVar9 != uVar1;
        uVar9 = uVar9 + uVar11 * -4;
        p_Var2 = p_Var2 + uVar1;
        p_Var12 = p_Var12 + uVar1;
        if (bVar15) goto LAB_00058d74;
      }
      p_Var6 = *(_String_base<char,std::allocator<char>> **)(param_2 + 0x6c);
    }
    p_Var6[(int)p_Var10] = (_String_base<char,std::allocator<char>>)0x0;
    **(_String_base<char,std::allocator<char>> **)(param_2 + 0x6c) = *p_Var13;
    *(_String_base<char,std::allocator<char>> **)(param_2 + 0x6c) =
         p_Var10 + *(int *)(param_2 + 0x6c);
    goto LAB_00058dac;
  }
  if ((_String_base<char,std::allocator<char>> *)(-2 - (int)p_Var3) < p_Var10) {
                    /* WARNING: Subroutine does not return */
    std::__stl_throw_length_error((char *)((int)&DAT_000591a8 + DAT_000591b0));
  }
  p_Var6 = p_Var10;
  if (p_Var10 < p_Var3) {
    p_Var6 = p_Var3;
  }
  p_Var6 = p_Var3 + 1 + (int)p_Var6;
  if ((p_Var6 == (_String_base<char,std::allocator<char>> *)0xffffffff) || (p_Var6 < p_Var3)) {
    local_ac = (_String_base<char,std::allocator<char>> *)0xfffffffe;
LAB_0005913c:
    local_cc = operator_new((uint)local_ac);
LAB_0005914c:
    p_Var2 = *(_String_base<char,std::allocator<char>> **)(param_2 + 0x70);
    p_Var3 = (_String_base<char,std::allocator<char>> *)(*(int *)(param_2 + 0x6c) - (int)p_Var2);
    local_bc = local_cc + (int)local_ac;
  }
  else {
    if (p_Var6 != (_String_base<char,std::allocator<char>> *)0x0) {
      local_ac = p_Var6;
      if ((_String_base<char,std::allocator<char>> *)0x80 < p_Var6) goto LAB_0005913c;
      local_cc = (_String_base<char,std::allocator<char>> *)
                 std::__node_alloc::_M_allocate((uint *)&local_ac);
      goto LAB_0005914c;
    }
    local_cc = (_String_base<char,std::allocator<char>> *)0x0;
    local_bc = (_String_base<char,std::allocator<char>> *)0x0;
  }
  p_Var6 = local_cc;
  if (0 < (int)p_Var3) {
    uVar9 = (uint)p_Var3 >> 2;
    bVar16 = local_cc + 4 <= p_Var2;
    bVar15 = p_Var2 == local_cc + 4;
    if (!bVar16 || bVar15) {
      bVar16 = p_Var2 + 4 <= local_cc;
      bVar15 = local_cc == p_Var2 + 4;
    }
    p_Var6 = (_String_base<char,std::allocator<char>> *)(uVar9 * 4);
    p_Var4 = p_Var3;
    p_Var8 = local_cc;
    if (uVar9 == 0 ||
        ((p_Var3 < (_String_base<char,std::allocator<char>> *)0x4 ||
         (((uint)local_cc | (uint)p_Var2) & 3) != 0) || (!bVar16 || bVar15))) {
LAB_00059040:
      do {
        p_Var4 = p_Var4 + -1;
        *p_Var8 = *p_Var2;
        p_Var2 = p_Var2 + 1;
        p_Var8 = p_Var8 + 1;
      } while (0 < (int)p_Var4);
    }
    else {
      uVar11 = 0;
      p_Var4 = local_cc;
      p_Var8 = p_Var2;
      do {
        uVar11 = uVar11 + 1;
        *(undefined4 *)p_Var4 = *(undefined4 *)p_Var8;
        p_Var4 = p_Var4 + 4;
        p_Var8 = p_Var8 + 4;
      } while (uVar11 < uVar9);
      p_Var2 = p_Var2 + (int)p_Var6;
      p_Var4 = p_Var3 + uVar9 * -4;
      p_Var8 = local_cc + (int)p_Var6;
      if (p_Var3 != p_Var6) goto LAB_00059040;
    }
    p_Var6 = local_cc + (int)p_Var3;
  }
  if (0 < (int)p_Var10) {
    uVar9 = (uint)p_Var10 >> 2;
    bVar16 = p_Var6 + 4 <= p_Var13;
    bVar15 = p_Var13 == p_Var6 + 4;
    if (!bVar16 || bVar15) {
      bVar16 = p_Var13 + 4 <= p_Var6;
      bVar15 = p_Var6 == p_Var13 + 4;
    }
    p_Var2 = (_String_base<char,std::allocator<char>> *)(uVar9 * 4);
    p_Var3 = p_Var6;
    p_Var4 = p_Var10;
    if (uVar9 == 0 ||
        ((p_Var10 < (_String_base<char,std::allocator<char>> *)0x4 ||
         (((uint)p_Var6 | (uint)p_Var13) & 3) != 0) || (!bVar16 || bVar15))) {
LAB_000590f0:
      do {
        p_Var4 = p_Var4 + -1;
        *p_Var3 = *p_Var13;
        p_Var3 = p_Var3 + 1;
        p_Var13 = p_Var13 + 1;
      } while (0 < (int)p_Var4);
    }
    else {
      uVar11 = 0;
      p_Var3 = p_Var13;
      p_Var4 = p_Var6;
      do {
        uVar11 = uVar11 + 1;
        *(undefined4 *)p_Var4 = *(undefined4 *)p_Var3;
        p_Var3 = p_Var3 + 4;
        p_Var4 = p_Var4 + 4;
      } while (uVar11 < uVar9);
      p_Var3 = p_Var6 + (int)p_Var2;
      p_Var4 = p_Var10 + uVar9 * -4;
      p_Var13 = p_Var13 + (int)p_Var2;
      if (p_Var10 != p_Var2) goto LAB_000590f0;
    }
    p_Var6 = p_Var6 + (int)p_Var10;
  }
  *p_Var6 = (_String_base<char,std::allocator<char>>)0x0;
  std::priv::_String_base<char,std::allocator<char>>::_M_deallocate_block(p_Var12);
  *(_String_base<char,std::allocator<char>> **)(param_2 + 0x6c) = p_Var6;
  *(_String_base<char,std::allocator<char>> **)(param_2 + 0x5c) = local_bc;
  *(_String_base<char,std::allocator<char>> **)(param_2 + 0x70) = local_cc;
LAB_00058dac:
  if (local_b4 != 0) {
    uVar11 = 0;
    uVar9 = uVar11;
    do {
      uVar9 = uVar9 + 1;
      Load<char,int>(param_1,(UStringBase *)(*(int *)(param_2 + 0x7c) + uVar11));
      iVar5 = *(int *)(param_2 + 0x7c) + uVar11;
      uVar11 = uVar11 + 0x38;
      Load<char,int>(param_1,(UStringBase *)(iVar5 + 0x1c));
    } while (uVar9 < local_b4);
  }
  iVar5 = *(int *)(DAT_000591ac + 0x58e08) + 8;
  local_48 = iVar5;
  std::priv::_String_base<char,std::allocator<char>>::_M_deallocate_block(a_Stack_44);
  local_64 = iVar5;
  std::priv::_String_base<char,std::allocator<char>>::_M_deallocate_block(a_Stack_60);
  local_80 = iVar5;
  std::priv::_String_base<char,std::allocator<char>>::_M_deallocate_block(a_Stack_7c);
  local_9c = iVar5;
  std::priv::_String_base<char,std::allocator<char>>::_M_deallocate_block(a_Stack_98);
  if (local_2c == *piVar14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

