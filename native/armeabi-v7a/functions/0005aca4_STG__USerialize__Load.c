/* 0005aca4 | STG::USerialize::Load */

/* STG::USerialize::Load(STG::FFileBase const*, STG::GETextureFont&) */

void STG::USerialize::Load(FFileBase *param_1,GETextureFont *param_2)

{
  uint uVar1;
  uint uVar2;
  string *psVar3;
  UStringBase *pUVar4;
  string *psVar5;
  uint uVar6;
  string *psVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  string *psVar11;
  string *psVar12;
  int iVar13;
  uint uVar14;
  string *psVar15;
  string *psVar16;
  bool bVar17;
  bool bVar18;
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
  
  iVar9 = DAT_0005b274 + 0x5acc4;
  piVar8 = *(int **)(iVar9 + DAT_0005b278);
  local_2c = *piVar8;
  FFileBase::Read(param_1,(uchar *)&local_70,4);
  uVar2 = local_70;
  UStringBase<char,int>::UStringBase((UStringBase<char,int> *)&local_4c);
  local_30 = 0xffffffff;
  if (2 < uVar2) {
    Load(param_1,(FFileHash *)&local_4c);
    iVar9 = *(int *)(iVar9 + DAT_0005b27c);
    goto LAB_0005ad10;
  }
  UStringBase<char,int>::UStringBase((UStringBase<char,int> *)&local_68);
  Load<char,int>(param_1,(UStringBase *)&local_68);
  uVar10 = (int)local_54 - (int)local_50;
  uVar14 = (int)local_38 - (int)local_34;
  if (uVar14 < uVar10) {
    if (uVar14 == 0) {
      uVar10 = 0;
    }
    else {
      memmove(local_34,local_50,uVar14);
      uVar10 = (int)local_38 - (int)local_34;
    }
    psVar7 = local_34;
    psVar15 = (string *)((int)local_50 + uVar10);
    if (local_54 != psVar15) {
      psVar11 = local_54 + -(int)psVar15;
      if (local_34 == (string *)local_48) {
        psVar5 = local_34 + (0x10 - (int)local_38);
      }
      else {
        psVar5 = local_48[0] + -(int)local_38;
      }
      if (psVar11 < psVar5) {
        psVar7 = psVar15 + 1;
        uVar10 = (int)local_54 - (int)psVar7;
        if (0 < (int)uVar10) {
          psVar5 = local_38 + 1;
          uVar14 = uVar10 >> 2;
          bVar18 = local_38 + 5 <= psVar7;
          bVar17 = psVar7 == local_38 + 5;
          if (!bVar18 || bVar17) {
            bVar18 = psVar15 + 5 <= psVar5;
            bVar17 = psVar5 == psVar15 + 5;
          }
          uVar1 = uVar14 * 4;
          if (uVar14 != 0 &&
              ((3 < uVar10 && (((uint)psVar7 | (uint)psVar5) & 3) == 0) && (bVar18 && !bVar17))) {
            psVar16 = psVar15 + -3;
            uVar6 = 0;
            psVar3 = psVar5;
            do {
              psVar16 = psVar16 + 4;
              uVar6 = uVar6 + 1;
              *(undefined4 *)psVar3 = *(undefined4 *)psVar16;
              psVar3 = psVar3 + 4;
            } while (uVar6 < uVar14);
            bVar17 = uVar10 == uVar1;
            uVar10 = uVar10 + uVar14 * -4;
            psVar5 = psVar5 + uVar1;
            psVar7 = psVar7 + uVar1;
            if (bVar17) goto LAB_0005afac;
          }
          do {
            uVar10 = uVar10 - 1;
            *psVar5 = *psVar7;
            psVar5 = psVar5 + 1;
            psVar7 = psVar7 + 1;
          } while (0 < (int)uVar10);
        }
LAB_0005afac:
        local_38[(int)psVar11] = (string)0x0;
        *local_38 = *psVar15;
        uVar10 = (int)(local_38 + (int)psVar11) - (int)local_34;
        local_38 = local_38 + (int)psVar11;
      }
      else {
        uVar14 = std::string::_M_compute_next_size((string *)local_48,(uint)psVar11);
        if (uVar14 == 0) {
          psVar5 = (string *)0x0;
          local_7c = (string *)0x0;
          local_34 = psVar7;
        }
        else {
          local_6c = uVar14;
          if (uVar14 < 0x81) {
            psVar5 = (string *)std::__node_alloc::_M_allocate(&local_6c);
          }
          else {
            psVar5 = operator_new(uVar14);
          }
          uVar10 = (int)local_38 - (int)local_34;
          local_7c = psVar5 + local_6c;
        }
        psVar7 = psVar5;
        if (0 < (int)uVar10) {
          uVar14 = uVar10 >> 2;
          bVar18 = psVar5 + 4 <= local_34;
          bVar17 = local_34 == psVar5 + 4;
          if (!bVar18 || bVar17) {
            bVar18 = local_34 + 4 <= psVar5;
            bVar17 = psVar5 == local_34 + 4;
          }
          uVar1 = uVar14 * 4;
          uVar6 = uVar10;
          if (uVar14 == 0 ||
              ((uVar10 < 4 || (((uint)psVar5 | (uint)local_34) & 3) != 0) || (!bVar18 || bVar17))) {
LAB_0005b0fc:
            do {
              uVar6 = uVar6 - 1;
              *psVar7 = *local_34;
              psVar7 = psVar7 + 1;
              local_34 = local_34 + 1;
            } while (0 < (int)uVar6);
          }
          else {
            uVar6 = 0;
            psVar7 = local_34;
            psVar3 = psVar5;
            do {
              uVar6 = uVar6 + 1;
              *(undefined4 *)psVar3 = *(undefined4 *)psVar7;
              psVar7 = psVar7 + 4;
              psVar3 = psVar3 + 4;
            } while (uVar6 < uVar14);
            psVar7 = psVar5 + uVar1;
            uVar6 = uVar10 + uVar14 * -4;
            local_34 = local_34 + uVar1;
            if (uVar10 != uVar1) goto LAB_0005b0fc;
          }
          psVar7 = psVar5 + uVar10;
        }
        if (0 < (int)psVar11) {
          uVar10 = (uint)psVar11 >> 2;
          psVar3 = (string *)(uVar10 * 4);
          bVar18 = psVar15 + 4 <= psVar7;
          bVar17 = psVar7 == psVar15 + 4;
          if (!bVar18 || bVar17) {
            bVar18 = psVar7 + 4 <= psVar15;
            bVar17 = psVar15 == psVar7 + 4;
          }
          psVar16 = psVar7;
          psVar12 = psVar11;
          if (uVar10 == 0 ||
              ((psVar11 < (string *)0x4 || (((uint)psVar7 | (uint)psVar15) & 3) != 0) ||
              (!bVar18 || bVar17))) {
LAB_0005b1b4:
            do {
              psVar12 = psVar12 + -1;
              *psVar16 = *psVar15;
              psVar16 = psVar16 + 1;
              psVar15 = psVar15 + 1;
            } while (0 < (int)psVar12);
          }
          else {
            uVar14 = 0;
            psVar16 = psVar15;
            psVar12 = psVar7;
            do {
              uVar14 = uVar14 + 1;
              *(undefined4 *)psVar12 = *(undefined4 *)psVar16;
              psVar16 = psVar16 + 4;
              psVar12 = psVar12 + 4;
            } while (uVar14 < uVar10);
            psVar16 = psVar7 + (int)psVar3;
            psVar12 = psVar11 + uVar10 * -4;
            psVar15 = psVar15 + (int)psVar3;
            if (psVar11 != psVar3) goto LAB_0005b1b4;
          }
          psVar7 = psVar7 + (int)psVar11;
        }
        *psVar7 = (string)0x0;
        std::priv::_String_base<char,std::allocator<char>>::_M_deallocate_block
                  ((_String_base<char,std::allocator<char>> *)local_48);
        local_48[0] = local_7c;
        uVar10 = (int)psVar7 - (int)psVar5;
        local_38 = psVar7;
        local_34 = psVar5;
      }
    }
  }
  else {
    if (uVar10 != 0) {
      memmove(local_34,local_50,uVar10);
    }
    psVar7 = local_34 + uVar10;
    if (psVar7 == local_38) {
      uVar10 = (int)local_38 - (int)local_34;
    }
    else {
      local_34[uVar10] = *local_38;
      uVar10 = (int)psVar7 - (int)local_34;
      local_38 = psVar7;
    }
  }
  local_30 = UStringBaseHash_Internal((uchar *)local_34,uVar10);
  iVar9 = *(int *)(iVar9 + DAT_0005b27c);
  local_68 = iVar9 + 8;
  std::priv::_String_base<char,std::allocator<char>>::_M_deallocate_block(a_Stack_64);
LAB_0005ad10:
  local_94 = (_String_base<char,std::allocator<char>> *)local_48;
  FFileBase::Read(param_1,(uchar *)&local_74,4);
  FFileBase::Read(param_1,&local_76,1);
  GETextureFont::Initialize(param_2,(FFileHash *)&local_4c,local_74,local_76);
  FFileBase::Read(param_1,(uchar *)(param_2 + 0x2c),4);
  if (local_74 != 0) {
    iVar13 = 0;
    uVar10 = 0;
    do {
      uVar10 = uVar10 + 1;
      pUVar4 = (UStringBase *)(*(int *)(param_2 + 0x24) + iVar13);
      iVar13 = iVar13 + 0x2c;
      Load<unsigned_short,unsigned_short>(param_1,pUVar4);
    } while (uVar10 < local_74);
  }
  if (1 < uVar2) {
    FFileBase::Read(param_1,&local_75,1);
    FFileBase::Read(param_1,(uchar *)&local_70,1);
    FFileBase::Read(param_1,(uchar *)&local_6c,1);
    if (local_75 != '\0') {
      GETextureFont::SetCountdown(param_2,(uchar)local_70,(uchar)local_6c);
    }
  }
  local_4c = iVar9 + 8;
  std::priv::_String_base<char,std::allocator<char>>::_M_deallocate_block(local_94);
  if (local_2c != *piVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

