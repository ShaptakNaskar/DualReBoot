/* 00048ed0 | std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>::_M_assign */

/* std::basic_string<unsigned short, std::char_traits<unsigned short>, std::allocator<unsigned
   short> >::_M_assign(unsigned short const*, unsigned short const*) */

basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>> *
__thiscall
std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>::
_M_assign(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
          *this,ushort *param_1,ushort *param_2)

{
  int iVar1;
  uint uVar2;
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
  *pbVar3;
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
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
  *local_34;
  uint local_2c [2];
  
  pbVar9 = *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
             **)(this + 0x20);
  pbVar3 = *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
             **)(this + 0x24);
  uVar10 = (int)param_2 - (int)param_1 >> 1;
  uVar4 = (int)pbVar9 - (int)pbVar3 >> 1;
  if (uVar10 <= uVar4) {
    if (uVar10 == 0) {
      if (pbVar3 == pbVar9) {
        return this;
      }
    }
    else {
      memmove(pbVar3,param_1,uVar10 * 2);
      pbVar9 = *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
                 **)(this + 0x20);
      pbVar3 = (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
                *)(*(int *)(this + 0x24) + uVar10 * 2);
      if (pbVar3 == pbVar9) {
        return this;
      }
    }
    memmove(pbVar3,pbVar9,2);
    *(uint *)(this + 0x20) = *(int *)(this + 0x20) - ((int)pbVar9 - (int)pbVar3 & 0xfffffffeU);
    return this;
  }
  if (uVar4 == 0) {
    iVar1 = 0;
    uVar10 = 0;
    pbVar11 = (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
               *)param_1;
  }
  else {
    memmove(pbVar3,param_1,uVar4 << 1);
    pbVar9 = *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
               **)(this + 0x20);
    pbVar3 = *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
               **)(this + 0x24);
    uVar10 = (int)pbVar9 - (int)pbVar3 >> 1;
    iVar1 = uVar10 * 2;
    pbVar11 = (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
               *)(param_1 + uVar10);
  }
  if ((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
       *)param_2 == pbVar11) {
    return this;
  }
  if (this == pbVar3) {
    uVar4 = 0x10 - uVar10;
  }
  else {
    uVar4 = *(uint *)this;
  }
  uVar2 = (int)param_2 - (int)pbVar11 >> 1;
  if (this != pbVar3) {
    uVar4 = (int)(uVar4 - (int)pbVar9) >> 1;
  }
  if (uVar2 < uVar4) {
    pbVar3 = pbVar11 + 2;
    uVar10 = (int)param_2 - (int)pbVar3 >> 1;
    if (0 < (int)uVar10) {
      pbVar6 = pbVar9 + 2;
      uVar4 = uVar10 >> 1;
      bVar13 = pbVar9 + 6 <= pbVar3;
      bVar12 = pbVar3 == pbVar9 + 6;
      if (!bVar13 || bVar12) {
        bVar13 = pbVar11 + 6 <= pbVar6;
        bVar12 = pbVar6 == pbVar11 + 6;
      }
      if (uVar4 != 0 &&
          ((1 < uVar10 && (((uint)pbVar3 | (uint)pbVar6) & 3) == 0) && (bVar13 && !bVar12))) {
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
        pbVar3 = pbVar3 + uVar4 * 4;
        pbVar6 = pbVar6 + uVar4 * 4;
        if (bVar12) goto LAB_00049058;
      }
      do {
        uVar10 = uVar10 - 1;
        *(undefined2 *)pbVar6 = *(undefined2 *)pbVar3;
        pbVar3 = pbVar3 + 2;
        pbVar6 = pbVar6 + 2;
      } while (0 < (int)uVar10);
    }
LAB_00049058:
    *(undefined2 *)(pbVar9 + uVar2 * 2) = 0;
    *(undefined2 *)pbVar9 = *(undefined2 *)((int)param_1 + iVar1);
    *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
      **)(this + 0x20) = pbVar9 + uVar2 * 2;
    return this;
  }
  if (0x7ffffffe - uVar10 < uVar2) {
                    /* WARNING: Subroutine does not return */
    __stl_throw_length_error((char *)((int)&DAT_00049338 + DAT_00049338));
  }
  uVar4 = uVar2;
  if (uVar2 < uVar10) {
    uVar4 = uVar10;
  }
  uVar4 = uVar10 + 1 + uVar4;
  if ((uVar4 < 0x7fffffff) && (uVar10 <= uVar4)) {
    if (uVar4 != 0) {
      local_2c[0] = uVar4 * 2;
      if (0x80 < local_2c[0]) goto LAB_00049108;
      pbVar9 = (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
                *)__node_alloc::_M_allocate(local_2c);
      goto LAB_00049114;
    }
    pbVar9 = (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
              *)0x0;
    local_34 = (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
                *)0x0;
  }
  else {
    local_2c[0] = 0xfffffffc;
LAB_00049108:
    pbVar9 = operator_new(local_2c[0]);
LAB_00049114:
    pbVar3 = *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
               **)(this + 0x24);
    uVar10 = *(int *)(this + 0x20) - (int)pbVar3 >> 1;
    local_34 = pbVar9 + (local_2c[0] & 0xfffffffe);
  }
  pbVar6 = pbVar9;
  if (0 < (int)uVar10) {
    uVar4 = uVar10 >> 1;
    bVar13 = pbVar9 + 4 <= pbVar3;
    bVar12 = pbVar3 == pbVar9 + 4;
    if (!bVar13 || bVar12) {
      bVar13 = pbVar3 + 4 <= pbVar9;
      bVar12 = pbVar9 == pbVar3 + 4;
    }
    pbVar6 = pbVar3;
    pbVar5 = pbVar9;
    uVar8 = uVar10;
    if (uVar4 == 0 ||
        ((uVar10 < 2 || (((uint)pbVar9 | (uint)pbVar3) & 3) != 0) || (!bVar13 || bVar12))) {
LAB_000491d4:
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
      pbVar5 = pbVar3;
      do {
        uVar8 = uVar8 + 1;
        *(undefined4 *)pbVar6 = *(undefined4 *)pbVar5;
        pbVar6 = pbVar6 + 4;
        pbVar5 = pbVar5 + 4;
      } while (uVar8 < uVar4);
      pbVar6 = pbVar3 + uVar4 * 4;
      pbVar5 = pbVar9 + uVar4 * 4;
      uVar8 = uVar10 + uVar4 * -2;
      if (uVar10 != uVar4 * 2) goto LAB_000491d4;
    }
    pbVar6 = pbVar9 + uVar10 * 2;
  }
  if ((int)uVar2 < 1) goto LAB_0004929c;
  uVar10 = uVar2 >> 1;
  bVar13 = pbVar6 + 4 <= pbVar11;
  bVar12 = pbVar11 == pbVar6 + 4;
  if (!bVar13 || bVar12) {
    bVar13 = pbVar11 + 4 <= pbVar6;
    bVar12 = pbVar6 == pbVar11 + 4;
  }
  pbVar5 = pbVar6;
  uVar4 = uVar2;
  if (uVar10 == 0 ||
      ((uVar2 < 2 || (((uint)pbVar6 | (uint)pbVar11) & 3) != 0) || (!bVar13 || bVar12))) {
LAB_00049280:
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
    uVar4 = uVar2 + uVar10 * -2;
    pbVar11 = pbVar11 + uVar10 * 4;
    if (uVar2 != uVar10 * 2) goto LAB_00049280;
  }
  pbVar6 = pbVar6 + uVar2 * 2;
LAB_0004929c:
  *(undefined2 *)pbVar6 = 0;
  if ((this != pbVar3) &&
     (pbVar3 != (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
                 *)0x0)) {
    uVar10 = *(int *)this - (int)pbVar3 & 0xfffffffe;
    if (uVar10 < 0x81) {
      __node_alloc::_M_deallocate(pbVar3,uVar10);
    }
    else {
      operator_delete(pbVar3);
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

