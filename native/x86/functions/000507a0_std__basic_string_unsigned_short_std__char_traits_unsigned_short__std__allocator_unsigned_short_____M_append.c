/* 000507a0 | std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>::_M_append */

/* std::basic_string<unsigned short, std::char_traits<unsigned short>, std::allocator<unsigned
   short> >::_M_append(unsigned short const*, unsigned short const*) */

basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>> *
__thiscall
std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>::
_M_append(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
          *this,ushort *param_1,ushort *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ushort *puVar9;
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
  *pbVar10;
  uint uVar11;
  ushort *puVar12;
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
  *pbVar13;
  int unaff_EBX;
  uint uVar14;
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
  *local_44;
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
  *local_2c;
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
  *local_24;
  uint local_20 [3];
  undefined4 uStack_14;
  
  uStack_14 = 0x507ab;
  FUN_0002e044();
  if (param_1 == param_2) {
    return this;
  }
  uVar11 = (int)param_2 - (int)param_1 >> 1;
  local_24 = *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
               **)(this + 0x24);
  if (local_24 == this) {
    local_2c = *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
                 **)(local_24 + 0x20);
    uVar6 = 0x10 - ((int)local_2c - (int)local_24 >> 1);
  }
  else {
    local_2c = *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
                 **)(this + 0x20);
    uVar6 = *(int *)this - (int)local_2c >> 1;
  }
  if (uVar11 < uVar6) {
    puVar12 = param_1 + 1;
    uVar6 = (int)param_2 - (int)puVar12 >> 1;
    if (0 < (int)uVar6) {
      uVar7 = uVar6 >> 3;
      puVar9 = (ushort *)((int)local_2c + 2);
      uVar14 = uVar6;
      if ((uVar7 != 0) &&
         (10 < uVar6 && (param_1 + 9 < puVar9 || (ushort *)((int)local_2c + 0x12) < puVar12))) {
        iVar8 = 0;
        uVar14 = 0;
        do {
          puVar1 = (undefined4 *)((int)param_1 + iVar8 + 2);
          uVar3 = puVar1[1];
          uVar4 = puVar1[2];
          uVar5 = puVar1[3];
          uVar14 = uVar14 + 1;
          puVar2 = (undefined4 *)((int)local_2c + 2 + iVar8);
          *puVar2 = *puVar1;
          puVar2[1] = uVar3;
          puVar2[2] = uVar4;
          puVar2[3] = uVar5;
          iVar8 = iVar8 + 0x10;
        } while (uVar14 < uVar7);
        puVar12 = puVar12 + uVar7 * 8;
        puVar9 = puVar9 + uVar7 * 8;
        uVar14 = uVar6 + uVar7 * -8;
        if (uVar6 == uVar7 * 8) goto LAB_000508d3;
      }
      do {
        uVar14 = uVar14 - 1;
        *puVar9 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar9 = puVar9 + 1;
      } while (0 < (int)uVar14);
    }
LAB_000508d3:
    *(undefined2 *)((int)local_2c + uVar11 * 2) = 0;
    puVar12 = *(ushort **)(this + 0x20);
    *puVar12 = *param_1;
    *(ushort **)(this + 0x20) = puVar12 + uVar11;
    return this;
  }
  uVar6 = (int)local_2c - (int)local_24 >> 1;
  if (0x7ffffffe - uVar6 < uVar11) {
                    /* WARNING: Subroutine does not return */
    __stl_throw_length_error((char *)(unaff_EBX + 0x36b61));
  }
  uVar14 = uVar11;
  if (uVar11 <= uVar6) {
    uVar14 = uVar6;
  }
  uVar14 = uVar6 + 1 + uVar14;
  if ((uVar14 < 0x7fffffff) && (uVar6 <= uVar14)) {
    if (uVar14 != 0) {
      local_20[0] = uVar14 * 2;
      if (0x80 < local_20[0]) goto LAB_00050b55;
      local_2c = (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
                  *)__node_alloc::_M_allocate(local_20);
      goto LAB_00050b61;
    }
    local_44 = (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
                *)0x0;
    local_2c = (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
                *)0x0;
  }
  else {
    local_20[0] = 0xfffffffc;
LAB_00050b55:
    local_2c = operator_new(local_20[0]);
LAB_00050b61:
    local_24 = *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
                 **)(this + 0x24);
    local_44 = local_2c + (local_20[0] & 0xfffffffe);
    uVar6 = *(int *)(this + 0x20) - (int)local_24 >> 1;
  }
  pbVar10 = local_2c;
  if (0 < (int)uVar6) {
    uVar7 = uVar6 >> 3;
    uVar14 = uVar6;
    pbVar13 = local_24;
    if ((uVar7 == 0) || (uVar6 < 0xb || local_2c <= local_24 + 0x10 && local_24 <= local_2c + 0x10))
    {
LAB_00050a28:
      do {
        uVar14 = uVar14 - 1;
        *(undefined2 *)pbVar10 = *(undefined2 *)pbVar13;
        pbVar10 = pbVar10 + 2;
        pbVar13 = pbVar13 + 2;
      } while (0 < (int)uVar14);
    }
    else {
      iVar8 = 0;
      uVar14 = 0;
      do {
        pbVar10 = local_24 + iVar8;
        uVar3 = *(undefined4 *)(pbVar10 + 4);
        uVar4 = *(undefined4 *)(pbVar10 + 8);
        uVar5 = *(undefined4 *)(pbVar10 + 0xc);
        uVar14 = uVar14 + 1;
        pbVar13 = local_2c + iVar8;
        *(undefined4 *)pbVar13 = *(undefined4 *)pbVar10;
        *(undefined4 *)(pbVar13 + 4) = uVar3;
        *(undefined4 *)(pbVar13 + 8) = uVar4;
        *(undefined4 *)(pbVar13 + 0xc) = uVar5;
        iVar8 = iVar8 + 0x10;
      } while (uVar14 < uVar7);
      pbVar13 = local_24 + uVar7 * 0x10;
      pbVar10 = local_2c + uVar7 * 0x10;
      uVar14 = uVar6 + uVar7 * -8;
      if (uVar6 != uVar7 * 8) goto LAB_00050a28;
    }
    pbVar10 = local_2c + uVar6 * 2;
  }
  if ((int)uVar11 < 1) goto LAB_00050aea;
  uVar14 = uVar11 >> 3;
  pbVar13 = pbVar10;
  uVar6 = uVar11;
  if ((uVar14 == 0) ||
     (uVar11 < 0xb ||
      pbVar10 <=
      (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
       *)(param_1 + 8) && param_1 <= pbVar10 + 0x10)) {
LAB_00050ad0:
    do {
      uVar6 = uVar6 - 1;
      *(ushort *)pbVar13 = *param_1;
      param_1 = param_1 + 1;
      pbVar13 = pbVar13 + 2;
    } while (0 < (int)uVar6);
  }
  else {
    iVar8 = 0;
    uVar6 = 0;
    do {
      puVar1 = (undefined4 *)((int)param_1 + iVar8);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      uVar6 = uVar6 + 1;
      pbVar13 = pbVar10 + iVar8;
      *(undefined4 *)pbVar13 = *puVar1;
      *(undefined4 *)(pbVar13 + 4) = uVar3;
      *(undefined4 *)(pbVar13 + 8) = uVar4;
      *(undefined4 *)(pbVar13 + 0xc) = uVar5;
      iVar8 = iVar8 + 0x10;
    } while (uVar6 < uVar14);
    param_1 = param_1 + uVar14 * 8;
    pbVar13 = pbVar10 + uVar14 * 0x10;
    uVar6 = uVar11 + uVar14 * -8;
    if (uVar11 != uVar14 * 8) goto LAB_00050ad0;
  }
  pbVar10 = pbVar10 + uVar11 * 2;
LAB_00050aea:
  *(undefined2 *)pbVar10 = 0;
  if ((this != local_24) &&
     (local_24 !=
      (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
       *)0x0)) {
    uVar11 = *(int *)this - (int)local_24 & 0xfffffffe;
    if (uVar11 < 0x81) {
      __node_alloc::_M_deallocate(local_24,uVar11);
    }
    else {
      operator_delete(local_24);
    }
  }
  *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>> **)
   this = local_44;
  *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>> **)
   (this + 0x20) = pbVar10;
  *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>> **)
   (this + 0x24) = local_2c;
  return this;
}

