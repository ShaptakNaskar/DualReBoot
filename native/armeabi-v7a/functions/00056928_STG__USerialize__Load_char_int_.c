/* 00056928 | STG::USerialize::Load<char,int> */

/* WARNING: Removing unreachable block (ram,0x00056978) */
/* void STG::USerialize::Load<char, int>(STG::FFileBase const*, STG::UStringBase<char, int>&) */

void STG::USerialize::Load<char,int>(FFileBase *param_1,UStringBase *param_2)

{
  uint uVar1;
  uchar uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  _String_base<char,std::allocator<char>> *p_Var7;
  _String_base<char,std::allocator<char>> *p_Var8;
  uint uVar9;
  undefined4 *puVar10;
  _String_base<char,std::allocator<char>> *this;
  uint uVar11;
  undefined1 *puVar12;
  _String_base<char,std::allocator<char>> *p_Var13;
  _String_base<char,std::allocator<char>> *p_Var14;
  undefined4 *puVar15;
  bool bVar16;
  bool bVar17;
  _String_base<char,std::allocator<char>> *local_3c;
  uchar local_31;
  uint local_30;
  uint local_2c [2];
  
  FFileBase::Read(param_1,(uchar *)&local_30,4);
  p_Var8 = *(_String_base<char,std::allocator<char>> **)(param_2 + 0x18);
  if (p_Var8 != *(_String_base<char,std::allocator<char>> **)(param_2 + 0x14)) {
    *p_Var8 = (_String_base<char,std::allocator<char>>)0x0;
    p_Var8 = *(_String_base<char,std::allocator<char>> **)(param_2 + 0x18);
    *(_String_base<char,std::allocator<char>> **)(param_2 + 0x14) = p_Var8;
  }
  if (local_30 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
    std::__stl_throw_length_error((char *)(DAT_00056cd0 + 0x56c90));
  }
  this = (_String_base<char,std::allocator<char>> *)(param_2 + 4);
  uVar11 = local_30 + 1;
  if (p_Var8 == this) {
    uVar9 = 0x10;
  }
  else {
    uVar9 = *(int *)(param_2 + 4) - (int)p_Var8;
  }
  if (uVar11 < uVar9) goto LAB_00056998;
  if (uVar11 == 0) {
    puVar4 = (undefined4 *)0x0;
    puVar12 = (undefined1 *)0x0;
    puVar5 = puVar4;
  }
  else {
    local_2c[0] = uVar11;
    if (uVar11 < 0x81) {
      puVar4 = (undefined4 *)std::__node_alloc::_M_allocate(local_2c);
    }
    else {
      puVar4 = operator_new(uVar11);
    }
    puVar10 = *(undefined4 **)(param_2 + 0x18);
    uVar11 = *(int *)(param_2 + 0x14) - (int)puVar10;
    puVar12 = (undefined1 *)((int)puVar4 + local_2c[0]);
    puVar5 = puVar4;
    if (0 < (int)uVar11) {
      uVar9 = uVar11 >> 2;
      bVar17 = puVar4 + 1 <= puVar10;
      bVar16 = puVar10 == puVar4 + 1;
      if (!bVar17 || bVar16) {
        bVar17 = puVar10 + 1 <= puVar4;
        bVar16 = puVar4 == puVar10 + 1;
      }
      uVar3 = uVar11;
      if (uVar9 == 0 ||
          ((uVar11 < 4 || (((uint)puVar4 | (uint)puVar10) & 3) != 0) || (!bVar17 || bVar16))) {
LAB_00056c24:
        do {
          uVar3 = uVar3 - 1;
          *(undefined1 *)puVar5 = *(undefined1 *)puVar10;
          puVar5 = (undefined4 *)((int)puVar5 + 1);
          puVar10 = (undefined4 *)((int)puVar10 + 1);
        } while (0 < (int)uVar3);
      }
      else {
        uVar3 = 0;
        puVar15 = puVar10;
        do {
          uVar3 = uVar3 + 1;
          *puVar5 = *puVar15;
          puVar5 = puVar5 + 1;
          puVar15 = puVar15 + 1;
        } while (uVar3 < uVar9);
        puVar5 = puVar4 + uVar9;
        uVar3 = uVar11 + uVar9 * -4;
        puVar10 = puVar10 + uVar9;
        if (uVar11 != uVar9 * 4) goto LAB_00056c24;
      }
      puVar5 = (undefined4 *)((int)puVar4 + uVar11);
    }
  }
  *(undefined1 *)puVar5 = 0;
  std::priv::_String_base<char,std::allocator<char>>::_M_deallocate_block(this);
  *(undefined1 **)(param_2 + 4) = puVar12;
  *(undefined4 **)(param_2 + 0x14) = puVar5;
  *(undefined4 **)(param_2 + 0x18) = puVar4;
LAB_00056998:
  if (local_30 != 0) {
    uVar11 = 0;
    do {
      FFileBase::Read(param_1,&local_31,1);
      uVar2 = local_31;
      p_Var8 = *(_String_base<char,std::allocator<char>> **)(param_2 + 0x18);
      p_Var13 = *(_String_base<char,std::allocator<char>> **)(param_2 + 0x14);
      if (this == p_Var8) {
        p_Var7 = this + (0x10 - (int)p_Var13);
      }
      else {
        p_Var7 = (_String_base<char,std::allocator<char>> *)(*(int *)(param_2 + 4) - (int)p_Var13);
      }
      if (p_Var7 == (_String_base<char,std::allocator<char>> *)0x1) {
        uVar9 = (int)p_Var13 - (int)p_Var8;
        if (uVar9 == 0xfffffffe) {
                    /* WARNING: Subroutine does not return */
          std::__stl_throw_length_error((char *)(DAT_00056ccc + 0x56c84));
        }
        uVar3 = uVar9 * 2 + 1;
        if (uVar9 == 0) {
          uVar3 = 2;
        }
        if ((uVar3 == 0xffffffff) || (uVar3 < uVar9)) {
          local_2c[0] = 0xfffffffe;
LAB_00056b28:
          p_Var7 = operator_new(local_2c[0]);
          p_Var8 = *(_String_base<char,std::allocator<char>> **)(param_2 + 0x18);
          uVar9 = *(int *)(param_2 + 0x14) - (int)p_Var8;
          local_3c = p_Var7 + local_2c[0];
        }
        else if (uVar3 == 0) {
          p_Var7 = (_String_base<char,std::allocator<char>> *)0x0;
          local_3c = (_String_base<char,std::allocator<char>> *)0x0;
        }
        else {
          local_2c[0] = uVar3;
          if (0x80 < uVar3) goto LAB_00056b28;
          p_Var7 = (_String_base<char,std::allocator<char>> *)
                   std::__node_alloc::_M_allocate(local_2c);
          p_Var8 = *(_String_base<char,std::allocator<char>> **)(param_2 + 0x18);
          uVar9 = *(int *)(param_2 + 0x14) - (int)p_Var8;
          local_3c = p_Var7 + local_2c[0];
        }
        p_Var13 = p_Var7;
        if (0 < (int)uVar9) {
          uVar3 = uVar9 >> 2;
          bVar17 = p_Var8 + 4 <= p_Var7;
          bVar16 = p_Var7 == p_Var8 + 4;
          if (!bVar17 || bVar16) {
            bVar17 = p_Var7 + 4 <= p_Var8;
            bVar16 = p_Var8 == p_Var7 + 4;
          }
          uVar1 = uVar3 * 4;
          uVar6 = uVar9;
          if (uVar3 == 0 ||
              ((uVar9 < 4 || (((uint)p_Var8 | (uint)p_Var7) & 3) != 0) || (!bVar17 || bVar16))) {
LAB_00056ae4:
            do {
              uVar6 = uVar6 - 1;
              *p_Var13 = *p_Var8;
              p_Var13 = p_Var13 + 1;
              p_Var8 = p_Var8 + 1;
            } while (0 < (int)uVar6);
          }
          else {
            uVar6 = 0;
            p_Var14 = p_Var8;
            do {
              uVar6 = uVar6 + 1;
              *(undefined4 *)p_Var13 = *(undefined4 *)p_Var14;
              p_Var13 = p_Var13 + 4;
              p_Var14 = p_Var14 + 4;
            } while (uVar6 < uVar3);
            p_Var13 = p_Var7 + uVar1;
            uVar6 = uVar9 + uVar3 * -4;
            p_Var8 = p_Var8 + uVar1;
            if (uVar1 != uVar9) goto LAB_00056ae4;
          }
          p_Var13 = p_Var7 + uVar9;
        }
        *p_Var13 = (_String_base<char,std::allocator<char>>)0x0;
        std::priv::_String_base<char,std::allocator<char>>::_M_deallocate_block(this);
        *(_String_base<char,std::allocator<char>> **)(param_2 + 0x14) = p_Var13;
        *(_String_base<char,std::allocator<char>> **)(param_2 + 0x18) = p_Var7;
        *(_String_base<char,std::allocator<char>> **)(param_2 + 4) = local_3c;
      }
      p_Var13[1] = (_String_base<char,std::allocator<char>>)0x0;
      uVar11 = uVar11 + 1;
      **(uchar **)(param_2 + 0x14) = uVar2;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    } while (uVar11 < local_30);
  }
  return;
}

