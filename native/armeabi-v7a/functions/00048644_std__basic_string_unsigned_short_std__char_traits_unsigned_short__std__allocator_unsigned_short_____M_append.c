/* 00048644 | std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>::_M_append */

/* std::basic_string<unsigned short, std::char_traits<unsigned short>, std::allocator<unsigned
   short> >::_M_append(unsigned short const*, unsigned short const*) */

basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>> *
__thiscall
std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>::
_M_append(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
          *this,ushort *param_1,ushort *param_2)

{
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
  *pbVar1;
  ushort *puVar2;
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
  *pbVar3;
  uint uVar4;
  uint uVar5;
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
  *pbVar6;
  uint uVar7;
  uint uVar8;
  ushort *puVar9;
  ushort *puVar10;
  ushort *puVar11;
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
  *pbVar12;
  ushort *puVar13;
  bool bVar14;
  bool bVar15;
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
  *local_34;
  uint local_2c [2];
  
  if (param_1 == param_2) {
    return this;
  }
  pbVar1 = *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
             **)(this + 0x24);
  uVar4 = (int)param_2 - (int)param_1 >> 1;
  if (pbVar1 == this) {
    puVar11 = *(ushort **)(pbVar1 + 0x20);
    uVar7 = 0x10 - ((int)puVar11 - (int)pbVar1 >> 1);
  }
  else {
    puVar11 = *(ushort **)(this + 0x20);
    uVar7 = *(int *)this - (int)puVar11 >> 1;
  }
  if (uVar4 < uVar7) {
    puVar10 = param_1 + 1;
    uVar7 = (int)param_2 - (int)puVar10 >> 1;
    if (0 < (int)uVar7) {
      puVar2 = puVar11 + 1;
      uVar8 = uVar7 >> 1;
      bVar15 = puVar11 + 3 <= puVar10;
      bVar14 = puVar10 == puVar11 + 3;
      if (!bVar15 || bVar14) {
        bVar15 = param_1 + 3 <= puVar2;
        bVar14 = puVar2 == param_1 + 3;
      }
      uVar5 = uVar7;
      if (uVar8 != 0 &&
          ((1 < uVar7 && (((uint)puVar2 | (uint)puVar10) & 3) == 0) && (bVar15 && !bVar14))) {
        puVar9 = param_1 + -1;
        uVar5 = 0;
        puVar13 = puVar2;
        do {
          puVar9 = puVar9 + 2;
          uVar5 = uVar5 + 1;
          *(undefined4 *)puVar13 = *(undefined4 *)puVar9;
          puVar13 = puVar13 + 2;
        } while (uVar5 < uVar8);
        uVar5 = uVar7 + uVar8 * -2;
        puVar2 = puVar2 + uVar8 * 2;
        puVar10 = puVar10 + uVar8 * 2;
        if (uVar7 == uVar8 * 2) goto LAB_00048750;
      }
      do {
        uVar5 = uVar5 - 1;
        *puVar2 = *puVar10;
        puVar2 = puVar2 + 1;
        puVar10 = puVar10 + 1;
      } while (0 < (int)uVar5);
    }
LAB_00048750:
    puVar11[uVar4] = 0;
    *puVar11 = *param_1;
    *(ushort **)(this + 0x20) = puVar11 + uVar4;
    return this;
  }
  uVar7 = (int)puVar11 - (int)pbVar1 >> 1;
  if (0x7ffffffe - uVar7 < uVar4) {
                    /* WARNING: Subroutine does not return */
    __stl_throw_length_error((char *)((int)&DAT_00048a10 + DAT_00048a10));
  }
  uVar8 = uVar7;
  if (uVar7 < uVar4) {
    uVar8 = uVar4;
  }
  uVar8 = uVar7 + 1 + uVar8;
  if ((uVar8 < 0x7fffffff) && (uVar7 <= uVar8)) {
    if (uVar8 != 0) {
      local_2c[0] = uVar8 * 2;
      if (0x80 < local_2c[0]) goto LAB_00048978;
      pbVar3 = (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
                *)__node_alloc::_M_allocate(local_2c);
      goto LAB_0004898c;
    }
    pbVar3 = (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
              *)0x0;
    local_34 = (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
                *)0x0;
  }
  else {
    local_2c[0] = 0xfffffffc;
LAB_00048978:
    pbVar3 = operator_new(local_2c[0]);
LAB_0004898c:
    pbVar1 = *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
               **)(this + 0x24);
    local_34 = pbVar3 + (local_2c[0] & 0xfffffffe);
    uVar7 = *(int *)(this + 0x20) - (int)pbVar1 >> 1;
  }
  pbVar12 = pbVar3;
  if (0 < (int)uVar7) {
    uVar8 = uVar7 >> 1;
    bVar15 = pbVar3 + 4 <= pbVar1;
    bVar14 = pbVar1 == pbVar3 + 4;
    if (!bVar15 || bVar14) {
      bVar15 = pbVar1 + 4 <= pbVar3;
      bVar14 = pbVar3 == pbVar1 + 4;
    }
    pbVar12 = pbVar1;
    pbVar6 = pbVar3;
    uVar5 = uVar7;
    if (uVar8 == 0 ||
        ((uVar7 < 2 || (((uint)pbVar3 | (uint)pbVar1) & 3) != 0) || (!bVar15 || bVar14))) {
LAB_00048864:
      do {
        uVar5 = uVar5 - 1;
        *(undefined2 *)pbVar6 = *(undefined2 *)pbVar12;
        pbVar12 = pbVar12 + 2;
        pbVar6 = pbVar6 + 2;
      } while (0 < (int)uVar5);
    }
    else {
      uVar5 = 0;
      pbVar12 = pbVar3;
      pbVar6 = pbVar1;
      do {
        uVar5 = uVar5 + 1;
        *(undefined4 *)pbVar12 = *(undefined4 *)pbVar6;
        pbVar12 = pbVar12 + 4;
        pbVar6 = pbVar6 + 4;
      } while (uVar5 < uVar8);
      pbVar12 = pbVar1 + uVar8 * 4;
      pbVar6 = pbVar3 + uVar8 * 4;
      uVar5 = uVar7 + uVar8 * -2;
      if (uVar7 != uVar8 * 2) goto LAB_00048864;
    }
    pbVar12 = pbVar3 + uVar7 * 2;
  }
  if ((int)uVar4 < 1) goto LAB_0004892c;
  uVar7 = uVar4 >> 1;
  bVar15 = (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
            *)(param_1 + 2) <= pbVar12;
  bVar14 = pbVar12 ==
           (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
            *)(param_1 + 2);
  if (!bVar15 || bVar14) {
    bVar15 = pbVar12 + 4 <= param_1;
    bVar14 = (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
              *)param_1 == pbVar12 + 4;
  }
  pbVar6 = pbVar12;
  uVar8 = uVar4;
  if (uVar7 == 0 ||
      ((uVar4 < 2 || (((uint)pbVar12 | (uint)param_1) & 3) != 0) || (!bVar15 || bVar14))) {
LAB_00048910:
    do {
      uVar8 = uVar8 - 1;
      *(ushort *)pbVar6 = *param_1;
      param_1 = param_1 + 1;
      pbVar6 = pbVar6 + 2;
    } while (0 < (int)uVar8);
  }
  else {
    uVar8 = 0;
    puVar11 = param_1;
    do {
      uVar8 = uVar8 + 1;
      *(undefined4 *)pbVar6 = *(undefined4 *)puVar11;
      pbVar6 = pbVar6 + 4;
      puVar11 = puVar11 + 2;
    } while (uVar8 < uVar7);
    param_1 = param_1 + uVar7 * 2;
    pbVar6 = pbVar12 + uVar7 * 4;
    uVar8 = uVar4 + uVar7 * -2;
    if (uVar4 != uVar7 * 2) goto LAB_00048910;
  }
  pbVar12 = pbVar12 + uVar4 * 2;
LAB_0004892c:
  *(undefined2 *)pbVar12 = 0;
  if ((this != pbVar1) &&
     (pbVar1 != (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
                 *)0x0)) {
    uVar4 = *(int *)this - (int)pbVar1 & 0xfffffffe;
    if (uVar4 < 0x81) {
      __node_alloc::_M_deallocate(pbVar1,uVar4);
      *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
        **)(this + 0x20) = pbVar12;
      *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
        **)(this + 0x24) = pbVar3;
      *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
        **)this = local_34;
      return this;
    }
    operator_delete(pbVar1);
  }
  *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>> **)
   (this + 0x20) = pbVar12;
  *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>> **)
   (this + 0x24) = pbVar3;
  *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>> **)
   this = local_34;
  return this;
}

