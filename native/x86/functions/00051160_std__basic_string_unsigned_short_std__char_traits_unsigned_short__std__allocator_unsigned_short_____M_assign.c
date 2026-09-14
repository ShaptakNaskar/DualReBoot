/* 00051160 | std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>::_M_assign */

/* std::basic_string<unsigned short, std::char_traits<unsigned short>, std::allocator<unsigned
   short> >::_M_assign(unsigned short const*, unsigned short const*) */

basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>> *
__thiscall
std::basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>::
_M_assign(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
          *this,ushort *param_1,ushort *param_2)

{
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
  *pbVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
  *pbVar8;
  int unaff_EBX;
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
  *pbVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
  *pbVar13;
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
  *local_38;
  uint local_30;
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
  *local_28;
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
  *local_24;
  uint local_20 [3];
  undefined4 uStack_14;
  
  uStack_14 = 0x5116b;
  FUN_0002e044();
  uVar7 = (int)param_2 - (int)param_1 >> 1;
  local_28 = *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
               **)(this + 0x20);
  pbVar9 = *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
             **)(this + 0x24);
  iVar10 = (int)local_28 - (int)pbVar9;
  uVar6 = iVar10 >> 1;
  if (uVar7 <= uVar6) {
    if (uVar7 == 0) {
      if (pbVar9 == local_28) {
        return this;
      }
    }
    else {
      memmove(pbVar9,param_1,uVar7 * 2);
      local_28 = *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
                   **)(this + 0x20);
      pbVar9 = (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
                *)(uVar7 * 2 + *(int *)(this + 0x24));
      if (pbVar9 == local_28) {
        return this;
      }
    }
    memmove(pbVar9,local_28,2);
    *(uint *)(this + 0x20) = *(int *)(this + 0x20) - ((int)local_28 - (int)pbVar9 & 0xfffffffeU);
    return this;
  }
  local_30 = 0;
  if (uVar6 != 0) {
    memmove(pbVar9,param_1,uVar6 * 2);
    local_28 = *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
                 **)(this + 0x20);
    pbVar9 = *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
               **)(this + 0x24);
    iVar10 = (int)local_28 - (int)pbVar9;
    local_30 = iVar10 >> 1;
    param_1 = param_1 + local_30;
  }
  if (param_2 == param_1) {
    return this;
  }
  uVar6 = (int)param_2 - (int)param_1 >> 1;
  if (this == pbVar9) {
    uVar7 = 0x10 - (iVar10 >> 1);
  }
  else {
    uVar7 = *(int *)this - (int)local_28 >> 1;
  }
  if (uVar6 < uVar7) {
    pbVar9 = (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
              *)((int)param_1 + 2);
    uVar7 = (int)param_2 - (int)pbVar9 >> 1;
    if (0 < (int)uVar7) {
      uVar11 = uVar7 >> 3;
      pbVar8 = local_28 + 2;
      uVar12 = uVar7;
      if ((uVar11 != 0) &&
         (10 < uVar7 &&
          ((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
            *)((int)param_1 + 0x12) < pbVar8 || local_28 + 0x12 < pbVar9))) {
        iVar10 = 0;
        uVar12 = 0;
        do {
          pbVar13 = (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
                     *)((int)param_1 + iVar10 + 2);
          uVar3 = *(undefined4 *)(pbVar13 + 4);
          uVar4 = *(undefined4 *)(pbVar13 + 8);
          uVar5 = *(undefined4 *)(pbVar13 + 0xc);
          uVar12 = uVar12 + 1;
          pbVar1 = local_28 + iVar10 + 2;
          *(undefined4 *)pbVar1 = *(undefined4 *)pbVar13;
          *(undefined4 *)(pbVar1 + 4) = uVar3;
          *(undefined4 *)(pbVar1 + 8) = uVar4;
          *(undefined4 *)(pbVar1 + 0xc) = uVar5;
          iVar10 = iVar10 + 0x10;
        } while (uVar12 < uVar11);
        pbVar9 = pbVar9 + uVar11 * 0x10;
        pbVar8 = pbVar8 + uVar11 * 0x10;
        uVar12 = uVar7 + uVar11 * -8;
        if (uVar7 == uVar11 * 8) goto LAB_00051303;
      }
      do {
        uVar12 = uVar12 - 1;
        *(undefined2 *)pbVar8 = *(undefined2 *)pbVar9;
        pbVar9 = pbVar9 + 2;
        pbVar8 = pbVar8 + 2;
      } while (0 < (int)uVar12);
    }
LAB_00051303:
    *(undefined2 *)(local_28 + uVar6 * 2) = 0;
    puVar2 = *(undefined2 **)(this + 0x20);
    *puVar2 = *param_1;
    *(undefined2 **)(this + 0x20) = puVar2 + uVar6;
    return this;
  }
  if (0x7ffffffe - local_30 < uVar6) {
                    /* WARNING: Subroutine does not return */
    __stl_throw_length_error((char *)(unaff_EBX + 0x361a1));
  }
  uVar7 = local_30;
  if (local_30 <= uVar6) {
    uVar7 = uVar6;
  }
  uVar7 = local_30 + 1 + uVar7;
  if ((uVar7 < 0x7fffffff) && (local_30 <= uVar7)) {
    local_38 = (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
                *)0x0;
    local_24 = (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
                *)0x0;
    if (uVar7 != 0) {
      local_20[0] = uVar7 * 2;
      if (0x80 < local_20[0]) goto LAB_00051405;
      local_24 = (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
                  *)__node_alloc::_M_allocate(local_20);
      goto LAB_00051411;
    }
  }
  else {
    local_20[0] = 0xfffffffc;
LAB_00051405:
    local_24 = operator_new(local_20[0]);
LAB_00051411:
    local_38 = local_24 + (local_20[0] & 0xfffffffe);
    pbVar9 = *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
               **)(this + 0x24);
    local_30 = *(int *)(this + 0x20) - (int)pbVar9 >> 1;
  }
  pbVar8 = local_24;
  if (0 < (int)local_30) {
    uVar12 = local_30 >> 3;
    uVar7 = local_30;
    pbVar8 = pbVar9;
    pbVar13 = local_24;
    if ((uVar12 == 0) || (local_30 < 0xb || local_24 <= pbVar9 + 0x10 && pbVar9 <= local_24 + 0x10))
    {
LAB_000514e8:
      do {
        uVar7 = uVar7 - 1;
        *(undefined2 *)pbVar13 = *(undefined2 *)pbVar8;
        pbVar8 = pbVar8 + 2;
        pbVar13 = pbVar13 + 2;
      } while (0 < (int)uVar7);
    }
    else {
      iVar10 = 0;
      uVar7 = 0;
      do {
        pbVar8 = pbVar9 + iVar10;
        uVar3 = *(undefined4 *)(pbVar8 + 4);
        uVar4 = *(undefined4 *)(pbVar8 + 8);
        uVar5 = *(undefined4 *)(pbVar8 + 0xc);
        uVar7 = uVar7 + 1;
        pbVar13 = local_24 + iVar10;
        *(undefined4 *)pbVar13 = *(undefined4 *)pbVar8;
        *(undefined4 *)(pbVar13 + 4) = uVar3;
        *(undefined4 *)(pbVar13 + 8) = uVar4;
        *(undefined4 *)(pbVar13 + 0xc) = uVar5;
        iVar10 = iVar10 + 0x10;
      } while (uVar7 < uVar12);
      uVar7 = local_30 + uVar12 * -8;
      pbVar8 = pbVar9 + uVar12 * 0x10;
      pbVar13 = local_24 + uVar12 * 0x10;
      if (local_30 != uVar12 * 8) goto LAB_000514e8;
    }
    pbVar8 = local_24 + local_30 * 2;
  }
  if ((int)uVar6 < 1) goto LAB_000515be;
  uVar12 = uVar6 >> 3;
  pbVar13 = pbVar8;
  uVar7 = uVar6;
  if ((uVar12 == 0) ||
     (uVar6 < 0xb ||
      pbVar8 <= (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
                 *)((int)param_1 + 0x10) && param_1 <= pbVar8 + 0x10)) {
LAB_000515a0:
    do {
      uVar7 = uVar7 - 1;
      *(ushort *)pbVar13 = *param_1;
      param_1 = (ushort *)((int)param_1 + 2);
      pbVar13 = pbVar13 + 2;
    } while (0 < (int)uVar7);
  }
  else {
    iVar10 = 0;
    uVar7 = 0;
    do {
      pbVar13 = (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
                 *)((int)param_1 + iVar10);
      uVar3 = *(undefined4 *)(pbVar13 + 4);
      uVar4 = *(undefined4 *)(pbVar13 + 8);
      uVar5 = *(undefined4 *)(pbVar13 + 0xc);
      uVar7 = uVar7 + 1;
      pbVar1 = pbVar8 + iVar10;
      *(undefined4 *)pbVar1 = *(undefined4 *)pbVar13;
      *(undefined4 *)(pbVar1 + 4) = uVar3;
      *(undefined4 *)(pbVar1 + 8) = uVar4;
      *(undefined4 *)(pbVar1 + 0xc) = uVar5;
      iVar10 = iVar10 + 0x10;
    } while (uVar7 < uVar12);
    uVar7 = uVar6 + uVar12 * -8;
    param_1 = (ushort *)((int)param_1 + uVar12 * 0x10);
    pbVar13 = pbVar8 + uVar12 * 0x10;
    if (uVar6 != uVar12 * 8) goto LAB_000515a0;
  }
  pbVar8 = pbVar8 + uVar6 * 2;
LAB_000515be:
  *(undefined2 *)pbVar8 = 0;
  if ((this != pbVar9) &&
     (pbVar9 != (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
                 *)0x0)) {
    uVar6 = *(int *)this - (int)pbVar9 & 0xfffffffe;
    if (uVar6 < 0x81) {
      __node_alloc::_M_deallocate(pbVar9,uVar6);
    }
    else {
      operator_delete(pbVar9);
    }
  }
  *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>> **)
   this = local_38;
  *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>> **)
   (this + 0x20) = pbVar8;
  *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>> **)
   (this + 0x24) = local_24;
  return this;
}

