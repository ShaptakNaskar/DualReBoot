/* 0004b374 | std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>::_M_assign */

/* std::basic_string<unsigned short, std::char_traits<unsigned short>, std::allocator<unsigned
   short> >::_M_assign(unsigned short const*, unsigned short const*) */

basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>> *
__thiscall
std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>::
_M_assign(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
          *this,ushort *param_1,ushort *param_2)

{
  uint uVar1;
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
  *pbVar2;
  int iVar3;
  uint uVar4;
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
  *pbVar5;
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
  *pbVar6;
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
  *pbVar7;
  uint uVar8;
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
  *pbVar9;
  uint uVar10;
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
  *pbVar11;
  bool bVar12;
  bool bVar13;
  int local_38;
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
  *local_34;
  uint local_2c [2];
  
  pbVar9 = *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
             **)(this + 0x20);
  pbVar2 = *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
             **)(this + 0x24);
  uVar10 = (int)pbVar9 - (int)pbVar2 >> 1;
  uVar1 = (int)param_2 - (int)param_1 >> 1;
  if (uVar1 <= uVar10) {
    if (uVar1 == 0) {
      if (pbVar2 == pbVar9) {
        return this;
      }
    }
    else {
      memmove(pbVar2,param_1,uVar1 * 2);
      pbVar9 = *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
                 **)(this + 0x20);
      pbVar2 = (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
                *)(*(int *)(this + 0x24) + uVar1 * 2);
      if (pbVar2 == pbVar9) {
        return this;
      }
    }
    memmove(pbVar2,pbVar9,2);
    *(uint *)(this + 0x20) = *(int *)(this + 0x20) - ((int)pbVar9 - (int)pbVar2 & 0xfffffffeU);
    return this;
  }
  if (uVar10 == 0) {
    local_38 = 0;
    uVar10 = 0;
    pbVar11 = (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
               *)param_1;
  }
  else {
    memmove(pbVar2,param_1,uVar10 << 1);
    pbVar9 = *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
               **)(this + 0x20);
    pbVar2 = *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
               **)(this + 0x24);
    uVar10 = (int)pbVar9 - (int)pbVar2 >> 1;
    local_38 = uVar10 * 2;
    pbVar11 = (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
               *)(param_1 + uVar10);
  }
  if ((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
       *)param_2 == pbVar11) {
    return this;
  }
  iVar3 = local_38;
  if (this != pbVar2) {
    iVar3 = *(int *)this;
  }
  uVar1 = (int)param_2 - (int)pbVar11 >> 1;
  if (this != pbVar2) {
    uVar4 = iVar3 - (int)pbVar9 >> 1;
  }
  else {
    uVar4 = 0x10 - uVar10;
  }
  if (uVar1 < uVar4) {
    pbVar2 = pbVar11 + 2;
    uVar10 = (int)param_2 - (int)pbVar2 >> 1;
    if (0 < (int)uVar10) {
      pbVar6 = pbVar9 + 2;
      bVar13 = pbVar9 + 6 <= pbVar2;
      bVar12 = pbVar2 == pbVar9 + 6;
      if (!bVar13 || bVar12) {
        bVar13 = pbVar11 + 6 <= pbVar6;
        bVar12 = pbVar6 == pbVar11 + 6;
      }
      uVar4 = uVar10 >> 1;
      if (uVar4 != 0 &&
          ((1 < uVar10 && (((uint)pbVar2 | (uint)pbVar6) & 3) == 0) && (bVar13 && !bVar12))) {
        pbVar11 = pbVar11 + -2;
        uVar8 = 0;
        pbVar5 = pbVar6;
        do {
          pbVar11 = pbVar11 + 4;
          uVar8 = uVar8 + 1;
          *(undefined4 *)pbVar5 = *(undefined4 *)pbVar11;
          pbVar5 = pbVar5 + 4;
        } while (uVar8 < uVar4);
        bVar12 = uVar10 == uVar4 * 2;
        uVar10 = uVar10 + uVar4 * -2;
        pbVar2 = pbVar2 + uVar4 * 4;
        pbVar6 = pbVar6 + uVar4 * 4;
        if (bVar12) goto LAB_0004b4fc;
      }
      do {
        uVar10 = uVar10 - 1;
        *(undefined2 *)pbVar6 = *(undefined2 *)pbVar2;
        pbVar2 = pbVar2 + 2;
        pbVar6 = pbVar6 + 2;
      } while (0 < (int)uVar10);
    }
LAB_0004b4fc:
    *(undefined2 *)(pbVar9 + uVar1 * 2) = 0;
    *(undefined2 *)pbVar9 = *(undefined2 *)((int)param_1 + local_38);
    *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
      **)(this + 0x20) = pbVar9 + uVar1 * 2;
    return this;
  }
  if (0x7ffffffe - uVar10 < uVar1) {
                    /* WARNING: Subroutine does not return */
    __stl_throw_length_error((char *)((int)&DAT_0004b7e8 + DAT_0004b7e8));
  }
  uVar4 = uVar1;
  if (uVar1 < uVar10) {
    uVar4 = uVar10;
  }
  uVar4 = uVar10 + 1 + uVar4;
  if ((uVar4 < 0x7fffffff) && (uVar10 <= uVar4)) {
    if (uVar4 != 0) {
      local_2c[0] = uVar4 * 2;
      if (0x80 < local_2c[0]) goto LAB_0004b5b0;
      pbVar9 = (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
                *)__node_alloc::_M_allocate(local_2c);
      goto LAB_0004b5bc;
    }
    pbVar9 = (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
              *)0x0;
    local_34 = (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
                *)0x0;
  }
  else {
    local_2c[0] = 0xfffffffc;
LAB_0004b5b0:
    pbVar9 = operator_new(local_2c[0]);
LAB_0004b5bc:
    pbVar2 = *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
               **)(this + 0x24);
    local_34 = pbVar9 + (local_2c[0] & 0xfffffffe);
    uVar10 = *(int *)(this + 0x20) - (int)pbVar2 >> 1;
  }
  pbVar6 = pbVar9;
  if (0 < (int)uVar10) {
    bVar13 = pbVar9 + 4 <= pbVar2;
    bVar12 = pbVar2 == pbVar9 + 4;
    if (!bVar13 || bVar12) {
      bVar13 = pbVar2 + 4 <= pbVar9;
      bVar12 = pbVar9 == pbVar2 + 4;
    }
    uVar4 = uVar10 >> 1;
    pbVar6 = pbVar2;
    pbVar5 = pbVar9;
    uVar8 = uVar10;
    if (uVar4 == 0 ||
        ((uVar10 < 2 || (((uint)pbVar9 | (uint)pbVar2) & 3) != 0) || (!bVar13 || bVar12))) {
LAB_0004b680:
      do {
        uVar8 = uVar8 - 1;
        *(undefined2 *)pbVar5 = *(undefined2 *)pbVar6;
        pbVar6 = pbVar6 + 2;
        pbVar5 = pbVar5 + 2;
      } while (0 < (int)uVar8);
    }
    else {
      uVar8 = 0;
      pbVar6 = pbVar9;
      pbVar5 = pbVar2;
      do {
        uVar8 = uVar8 + 1;
        *(undefined4 *)pbVar6 = *(undefined4 *)pbVar5;
        pbVar6 = pbVar6 + 4;
        pbVar5 = pbVar5 + 4;
      } while (uVar8 < uVar4);
      pbVar6 = pbVar2 + uVar4 * 4;
      pbVar5 = pbVar9 + uVar4 * 4;
      uVar8 = uVar10 + uVar4 * -2;
      if (uVar10 != uVar4 * 2) goto LAB_0004b680;
    }
    pbVar6 = pbVar9 + uVar10 * 2;
  }
  if ((int)uVar1 < 1) goto LAB_0004b74c;
  bVar13 = pbVar6 + 4 <= pbVar11;
  bVar12 = pbVar11 == pbVar6 + 4;
  if (!bVar13 || bVar12) {
    bVar13 = pbVar11 + 4 <= pbVar6;
    bVar12 = pbVar6 == pbVar11 + 4;
  }
  uVar10 = uVar1 >> 1;
  pbVar5 = pbVar6;
  uVar4 = uVar1;
  if (uVar10 == 0 ||
      ((uVar1 < 2 || (((uint)pbVar6 | (uint)pbVar11) & 3) != 0) || (!bVar13 || bVar12))) {
LAB_0004b734:
    do {
      uVar4 = uVar4 - 1;
      *(undefined2 *)pbVar5 = *(undefined2 *)pbVar11;
      pbVar5 = pbVar5 + 2;
      pbVar11 = pbVar11 + 2;
    } while (0 < (int)uVar4);
  }
  else {
    uVar4 = 0;
    pbVar5 = pbVar11;
    pbVar7 = pbVar6;
    do {
      uVar4 = uVar4 + 1;
      *(undefined4 *)pbVar7 = *(undefined4 *)pbVar5;
      pbVar5 = pbVar5 + 4;
      pbVar7 = pbVar7 + 4;
    } while (uVar4 < uVar10);
    pbVar5 = pbVar6 + uVar10 * 4;
    uVar4 = uVar1 + uVar10 * -2;
    pbVar11 = pbVar11 + uVar10 * 4;
    if (uVar1 != uVar10 * 2) goto LAB_0004b734;
  }
  pbVar6 = pbVar6 + uVar1 * 2;
LAB_0004b74c:
  *(undefined2 *)pbVar6 = 0;
  if ((this != pbVar2) &&
     (pbVar2 != (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
                 *)0x0)) {
    uVar10 = *(int *)this - (int)pbVar2 & 0xfffffffe;
    if (uVar10 < 0x81) {
      __node_alloc::_M_deallocate(pbVar2,uVar10);
    }
    else {
      operator_delete(pbVar2);
    }
  }
  *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>> **)
   (this + 0x20) = pbVar6;
  *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>> **)
   (this + 0x24) = pbVar9;
  *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>> **)
   this = local_34;
  return this;
}

