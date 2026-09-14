/* 0005b154 | STG::USerialize::Load<char,int> */

/* WARNING: Removing unreachable block (ram,0x0005b1a4) */
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
  uint uVar8;
  _String_base<char,std::allocator<char>> *p_Var9;
  uint uVar10;
  undefined4 *puVar11;
  _String_base<char,std::allocator<char>> *this;
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
  p_Var9 = *(_String_base<char,std::allocator<char>> **)(param_2 + 0x18);
  if (p_Var9 != *(_String_base<char,std::allocator<char>> **)(param_2 + 0x14)) {
    *p_Var9 = (_String_base<char,std::allocator<char>>)0x0;
    p_Var9 = *(_String_base<char,std::allocator<char>> **)(param_2 + 0x18);
    *(_String_base<char,std::allocator<char>> **)(param_2 + 0x14) = p_Var9;
  }
  if (local_30 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
    std::__stl_throw_length_error((char *)(DAT_0005b504 + 0x5b4c4));
  }
  this = (_String_base<char,std::allocator<char>> *)(param_2 + 4);
  if (p_Var9 == this) {
    uVar10 = 0x10;
  }
  else {
    uVar10 = *(int *)(param_2 + 4) - (int)p_Var9;
  }
  uVar8 = local_30 + 1;
  if (uVar8 < uVar10) goto LAB_0005b1c4;
  if (uVar8 == 0) {
    puVar4 = (undefined4 *)0x0;
    puVar12 = (undefined1 *)0x0;
    puVar5 = puVar4;
  }
  else {
    local_2c[0] = uVar8;
    if (uVar8 < 0x81) {
      puVar4 = (undefined4 *)std::__node_alloc::_M_allocate(local_2c);
    }
    else {
      puVar4 = operator_new(uVar8);
    }
    puVar11 = *(undefined4 **)(param_2 + 0x18);
    uVar10 = *(int *)(param_2 + 0x14) - (int)puVar11;
    puVar12 = (undefined1 *)((int)puVar4 + local_2c[0]);
    puVar5 = puVar4;
    if (0 < (int)uVar10) {
      bVar17 = puVar4 + 1 <= puVar11;
      bVar16 = puVar11 == puVar4 + 1;
      if (!bVar17 || bVar16) {
        bVar17 = puVar11 + 1 <= puVar4;
        bVar16 = puVar4 == puVar11 + 1;
      }
      uVar8 = uVar10 >> 2;
      uVar3 = uVar10;
      if (uVar8 == 0 ||
          ((uVar10 < 4 || (((uint)puVar4 | (uint)puVar11) & 3) != 0) || (!bVar17 || bVar16))) {
LAB_0005b458:
        do {
          uVar3 = uVar3 - 1;
          *(undefined1 *)puVar5 = *(undefined1 *)puVar11;
          puVar5 = (undefined4 *)((int)puVar5 + 1);
          puVar11 = (undefined4 *)((int)puVar11 + 1);
        } while (0 < (int)uVar3);
      }
      else {
        uVar3 = 0;
        puVar15 = puVar11;
        do {
          uVar3 = uVar3 + 1;
          *puVar5 = *puVar15;
          puVar5 = puVar5 + 1;
          puVar15 = puVar15 + 1;
        } while (uVar3 < uVar8);
        puVar5 = puVar4 + uVar8;
        uVar3 = uVar10 + uVar8 * -4;
        puVar11 = puVar11 + uVar8;
        if (uVar10 != uVar8 * 4) goto LAB_0005b458;
      }
      puVar5 = (undefined4 *)((int)puVar4 + uVar10);
    }
  }
  *(undefined1 *)puVar5 = 0;
  std::priv::_String_base<char,std::allocator<char>>::_M_deallocate_block(this);
  *(undefined1 **)(param_2 + 4) = puVar12;
  *(undefined4 **)(param_2 + 0x14) = puVar5;
  *(undefined4 **)(param_2 + 0x18) = puVar4;
LAB_0005b1c4:
  if (local_30 != 0) {
    uVar10 = 0;
    do {
      FFileBase::Read(param_1,&local_31,1);
      uVar2 = local_31;
      p_Var9 = *(_String_base<char,std::allocator<char>> **)(param_2 + 0x18);
      p_Var13 = *(_String_base<char,std::allocator<char>> **)(param_2 + 0x14);
      if (this == p_Var9) {
        p_Var7 = this + (0x10 - (int)p_Var13);
      }
      else {
        p_Var7 = (_String_base<char,std::allocator<char>> *)(*(int *)(param_2 + 4) - (int)p_Var13);
      }
      if (p_Var7 == (_String_base<char,std::allocator<char>> *)0x1) {
        uVar8 = (int)p_Var13 - (int)p_Var9;
        if (uVar8 == 0xfffffffe) {
                    /* WARNING: Subroutine does not return */
          std::__stl_throw_length_error((char *)(DAT_0005b500 + 0x5b4b8));
        }
        uVar3 = uVar8 * 2 + 1;
        if (uVar8 == 0) {
          uVar3 = 2;
        }
        if ((uVar3 == 0xffffffff) || (uVar3 < uVar8)) {
          local_2c[0] = 0xfffffffe;
LAB_0005b35c:
          p_Var7 = operator_new(local_2c[0]);
          p_Var9 = *(_String_base<char,std::allocator<char>> **)(param_2 + 0x18);
          local_3c = p_Var7 + local_2c[0];
          uVar8 = *(int *)(param_2 + 0x14) - (int)p_Var9;
        }
        else if (uVar3 == 0) {
          p_Var7 = (_String_base<char,std::allocator<char>> *)0x0;
          local_3c = (_String_base<char,std::allocator<char>> *)0x0;
        }
        else {
          local_2c[0] = uVar3;
          if (0x80 < uVar3) goto LAB_0005b35c;
          p_Var7 = (_String_base<char,std::allocator<char>> *)
                   std::__node_alloc::_M_allocate(local_2c);
          p_Var9 = *(_String_base<char,std::allocator<char>> **)(param_2 + 0x18);
          local_3c = p_Var7 + local_2c[0];
          uVar8 = *(int *)(param_2 + 0x14) - (int)p_Var9;
        }
        p_Var13 = p_Var7;
        if (0 < (int)uVar8) {
          bVar17 = p_Var9 + 4 <= p_Var7;
          bVar16 = p_Var7 == p_Var9 + 4;
          if (!bVar17 || bVar16) {
            bVar17 = p_Var7 + 4 <= p_Var9;
            bVar16 = p_Var9 == p_Var7 + 4;
          }
          uVar1 = uVar8 >> 2;
          uVar3 = uVar1 * 4;
          uVar6 = uVar8;
          if (uVar1 == 0 ||
              ((uVar8 < 4 || (((uint)p_Var9 | (uint)p_Var7) & 3) != 0) || (!bVar17 || bVar16))) {
LAB_0005b318:
            do {
              uVar6 = uVar6 - 1;
              *p_Var13 = *p_Var9;
              p_Var13 = p_Var13 + 1;
              p_Var9 = p_Var9 + 1;
            } while (0 < (int)uVar6);
          }
          else {
            uVar6 = 0;
            p_Var14 = p_Var9;
            do {
              uVar6 = uVar6 + 1;
              *(undefined4 *)p_Var13 = *(undefined4 *)p_Var14;
              p_Var13 = p_Var13 + 4;
              p_Var14 = p_Var14 + 4;
            } while (uVar6 < uVar1);
            p_Var13 = p_Var7 + uVar3;
            uVar6 = uVar8 + uVar1 * -4;
            p_Var9 = p_Var9 + uVar3;
            if (uVar3 != uVar8) goto LAB_0005b318;
          }
          p_Var13 = p_Var7 + uVar8;
        }
        *p_Var13 = (_String_base<char,std::allocator<char>>)0x0;
        std::priv::_String_base<char,std::allocator<char>>::_M_deallocate_block(this);
        *(_String_base<char,std::allocator<char>> **)(param_2 + 0x14) = p_Var13;
        *(_String_base<char,std::allocator<char>> **)(param_2 + 0x18) = p_Var7;
        *(_String_base<char,std::allocator<char>> **)(param_2 + 4) = local_3c;
      }
      p_Var13[1] = (_String_base<char,std::allocator<char>>)0x0;
      uVar10 = uVar10 + 1;
      **(uchar **)(param_2 + 0x14) = uVar2;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    } while (uVar10 < local_30);
  }
  return;
}

