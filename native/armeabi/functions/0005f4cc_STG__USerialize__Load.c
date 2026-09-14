/* 0005f4cc | STG::USerialize::Load */

/* STG::USerialize::Load(STG::FFileBase const*, STG::GETextureFont&) */

void STG::USerialize::Load(FFileBase *param_1,GETextureFont *param_2)

{
  uint uVar1;
  uint uVar2;
  string *psVar3;
  string *psVar4;
  uint uVar5;
  string *psVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  string *psVar10;
  string *psVar11;
  int iVar12;
  uint uVar13;
  string *psVar14;
  string *psVar15;
  bool bVar16;
  bool bVar17;
  _String_base<char,std::allocator<char>> *local_94;
  string *local_7c;
  bool local_76;
  uchar local_75;
  ulong local_74;
  uint local_70;
  uint local_6c;
  int local_68;
  _String_base<char,std::allocator<char>> a_Stack_64 [16];
  string *local_54;
  void *local_50;
  int local_4c;
  string *local_48 [4];
  string *local_38;
  string *local_34;
  undefined4 local_30;
  int local_2c;
  
  iVar8 = DAT_0005faac + 0x5f4e4;
  piVar7 = *(int **)(iVar8 + DAT_0005fab0);
  local_2c = *piVar7;
  FFileBase::Read(param_1,(uchar *)&local_70,4);
  uVar2 = local_70;
  UStringBase<char,int>::UStringBase((UStringBase<char,int> *)&local_4c);
  local_30 = 0xffffffff;
  if (2 < uVar2) {
    Load(param_1,(FFileHash *)&local_4c);
    iVar8 = *(int *)(iVar8 + DAT_0005fab4);
    goto LAB_0005f538;
  }
  UStringBase<char,int>::UStringBase((UStringBase<char,int> *)&local_68);
  Load<char,int>(param_1,(UStringBase *)&local_68);
  uVar9 = (int)local_54 - (int)local_50;
  uVar13 = (int)local_38 - (int)local_34;
  if (uVar13 < uVar9) {
    if (uVar13 == 0) {
      uVar9 = 0;
    }
    else {
      memmove(local_34,local_50,uVar13);
      uVar9 = (int)local_38 - (int)local_34;
    }
    psVar6 = local_34;
    psVar14 = (string *)((int)local_50 + uVar9);
    if (local_54 != psVar14) {
      psVar10 = local_54 + -(int)psVar14;
      if (local_34 == (string *)local_48) {
        psVar4 = local_34 + (0x10 - (int)local_38);
      }
      else {
        psVar4 = local_48[0] + -(int)local_38;
      }
      if (psVar10 < psVar4) {
        psVar6 = psVar14 + 1;
        uVar9 = (int)local_54 - (int)psVar6;
        if (0 < (int)uVar9) {
          psVar4 = local_38 + 1;
          bVar17 = local_38 + 5 <= psVar6;
          bVar16 = psVar6 == local_38 + 5;
          if (!bVar17 || bVar16) {
            bVar17 = psVar14 + 5 <= psVar4;
            bVar16 = psVar4 == psVar14 + 5;
          }
          uVar1 = uVar9 >> 2;
          uVar13 = uVar1 * 4;
          if (uVar1 != 0 &&
              ((3 < uVar9 && (((uint)psVar6 | (uint)psVar4) & 3) == 0) && (bVar17 && !bVar16))) {
            psVar15 = psVar14 + -3;
            uVar5 = 0;
            psVar3 = psVar4;
            do {
              psVar15 = psVar15 + 4;
              uVar5 = uVar5 + 1;
              *(undefined4 *)psVar3 = *(undefined4 *)psVar15;
              psVar3 = psVar3 + 4;
            } while (uVar5 < uVar1);
            bVar16 = uVar9 == uVar13;
            uVar9 = uVar9 + uVar1 * -4;
            psVar4 = psVar4 + uVar13;
            psVar6 = psVar6 + uVar13;
            if (bVar16) goto LAB_0005f7dc;
          }
          do {
            uVar9 = uVar9 - 1;
            *psVar4 = *psVar6;
            psVar4 = psVar4 + 1;
            psVar6 = psVar6 + 1;
          } while (0 < (int)uVar9);
        }
LAB_0005f7dc:
        local_38[(int)psVar10] = (string)0x0;
        *local_38 = *psVar14;
        uVar9 = (int)(local_38 + (int)psVar10) - (int)local_34;
        local_38 = local_38 + (int)psVar10;
      }
      else {
        uVar13 = std::string::_M_compute_next_size((string *)local_48,(uint)psVar10);
        if (uVar13 == 0) {
          psVar4 = (string *)0x0;
          local_7c = (string *)0x0;
          local_34 = psVar6;
        }
        else {
          local_6c = uVar13;
          if (uVar13 < 0x81) {
            psVar4 = (string *)std::__node_alloc::_M_allocate(&local_6c);
          }
          else {
            psVar4 = operator_new(uVar13);
          }
          local_7c = psVar4 + local_6c;
          uVar9 = (int)local_38 - (int)local_34;
        }
        psVar6 = psVar4;
        if (0 < (int)uVar9) {
          bVar17 = psVar4 + 4 <= local_34;
          bVar16 = local_34 == psVar4 + 4;
          if (!bVar17 || bVar16) {
            bVar17 = local_34 + 4 <= psVar4;
            bVar16 = psVar4 == local_34 + 4;
          }
          uVar1 = uVar9 >> 2;
          uVar13 = uVar1 * 4;
          uVar5 = uVar9;
          if (uVar1 == 0 ||
              ((uVar9 < 4 || (((uint)psVar4 | (uint)local_34) & 3) != 0) || (!bVar17 || bVar16))) {
LAB_0005f934:
            do {
              uVar5 = uVar5 - 1;
              *psVar6 = *local_34;
              psVar6 = psVar6 + 1;
              local_34 = local_34 + 1;
            } while (0 < (int)uVar5);
          }
          else {
            uVar5 = 0;
            psVar6 = local_34;
            psVar3 = psVar4;
            do {
              uVar5 = uVar5 + 1;
              *(undefined4 *)psVar3 = *(undefined4 *)psVar6;
              psVar6 = psVar6 + 4;
              psVar3 = psVar3 + 4;
            } while (uVar5 < uVar1);
            psVar6 = psVar4 + uVar13;
            uVar5 = uVar9 + uVar1 * -4;
            local_34 = local_34 + uVar13;
            if (uVar9 != uVar13) goto LAB_0005f934;
          }
          psVar6 = psVar4 + uVar9;
        }
        if (0 < (int)psVar10) {
          uVar9 = (uint)psVar10 >> 2;
          bVar17 = psVar14 + 4 <= psVar6;
          bVar16 = psVar6 == psVar14 + 4;
          if (!bVar17 || bVar16) {
            bVar17 = psVar6 + 4 <= psVar14;
            bVar16 = psVar14 == psVar6 + 4;
          }
          psVar3 = (string *)(uVar9 * 4);
          psVar15 = psVar6;
          psVar11 = psVar10;
          if (uVar9 == 0 ||
              ((psVar10 < (string *)0x4 || (((uint)psVar6 | (uint)psVar14) & 3) != 0) ||
              (!bVar17 || bVar16))) {
LAB_0005f9ec:
            do {
              psVar11 = psVar11 + -1;
              *psVar15 = *psVar14;
              psVar15 = psVar15 + 1;
              psVar14 = psVar14 + 1;
            } while (0 < (int)psVar11);
          }
          else {
            uVar13 = 0;
            psVar15 = psVar14;
            psVar11 = psVar6;
            do {
              uVar13 = uVar13 + 1;
              *(undefined4 *)psVar11 = *(undefined4 *)psVar15;
              psVar15 = psVar15 + 4;
              psVar11 = psVar11 + 4;
            } while (uVar13 < uVar9);
            psVar15 = psVar6 + (int)psVar3;
            psVar11 = psVar10 + uVar9 * -4;
            psVar14 = psVar14 + (int)psVar3;
            if (psVar10 != psVar3) goto LAB_0005f9ec;
          }
          psVar6 = psVar6 + (int)psVar10;
        }
        *psVar6 = (string)0x0;
        std::priv::_String_base<char,std::allocator<char>>::_M_deallocate_block
                  ((_String_base<char,std::allocator<char>> *)local_48);
        local_48[0] = local_7c;
        uVar9 = (int)psVar6 - (int)psVar4;
        local_38 = psVar6;
        local_34 = psVar4;
      }
    }
  }
  else {
    if (uVar9 != 0) {
      memmove(local_34,local_50,uVar9);
    }
    psVar6 = local_34 + uVar9;
    if (psVar6 == local_38) {
      uVar9 = (int)local_38 - (int)local_34;
    }
    else {
      local_34[uVar9] = *local_38;
      uVar9 = (int)psVar6 - (int)local_34;
      local_38 = psVar6;
    }
  }
  local_30 = UStringBaseHash_Internal((uchar *)local_34,uVar9);
  iVar8 = *(int *)(iVar8 + DAT_0005fab4);
  local_68 = iVar8 + 8;
  std::priv::_String_base<char,std::allocator<char>>::_M_deallocate_block(a_Stack_64);
LAB_0005f538:
  local_94 = (_String_base<char,std::allocator<char>> *)local_48;
  FFileBase::Read(param_1,(uchar *)&local_74,4);
  FFileBase::Read(param_1,&local_76,1);
  GETextureFont::Initialize(param_2,(FFileHash *)&local_4c,local_74,local_76);
  FFileBase::Read(param_1,(uchar *)(param_2 + 0x2c),4);
  if (local_74 != 0) {
    iVar12 = 0;
    uVar9 = 0;
    do {
      uVar9 = uVar9 + 1;
      Load<unsigned_short,unsigned_short>
                (param_1,(UStringBase *)(*(int *)(param_2 + 0x24) + iVar12));
      iVar12 = iVar12 + 0x2c;
    } while (uVar9 < local_74);
  }
  if (1 < uVar2) {
    FFileBase::Read(param_1,&local_75,1);
    FFileBase::Read(param_1,(uchar *)&local_70,1);
    FFileBase::Read(param_1,(uchar *)&local_6c,1);
    if (local_75 != '\0') {
      GETextureFont::SetCountdown(param_2,(uchar)local_70,(uchar)local_6c);
    }
  }
  local_4c = iVar8 + 8;
  std::priv::_String_base<char,std::allocator<char>>::_M_deallocate_block(local_94);
  if (local_2c != *piVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

