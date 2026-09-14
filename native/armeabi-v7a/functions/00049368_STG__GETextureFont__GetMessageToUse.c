/* 00049368 | STG::GETextureFont::GetMessageToUse */

/* STG::GETextureFont::GetMessageToUse(STG::UStringBase<unsigned short, unsigned short> const&,
   STG::UStringBase<unsigned short, unsigned short>&) const */

void __thiscall
STG::GETextureFont::GetMessageToUse(GETextureFont *this,UStringBase *param_1,UStringBase *param_2)

{
  long lVar1;
  time_t __time1;
  time_t __time0;
  undefined4 extraout_r0;
  int iVar2;
  int extraout_r1;
  undefined4 extraout_r1_00;
  uint uVar3;
  ushort *puVar4;
  uint uVar5;
  uint uVar6;
  ushort *puVar7;
  int iVar8;
  UStringBase *pUVar9;
  int iVar10;
  int iVar11;
  UStringBase *pUVar12;
  int iVar13;
  UStringBase *pUVar14;
  uint uVar15;
  UTime *this_00;
  uint *puVar16;
  UStringBase *pUVar17;
  bool bVar18;
  bool bVar19;
  float fVar20;
  int local_14c;
  int local_13c;
  int local_138;
  UStringBase *local_134;
  UStringBase *local_130;
  uint local_124;
  tm local_120;
  tm local_f4;
  undefined1 auStack_c8 [36];
  int local_a4;
  int local_a0;
  int local_9c;
  uint local_98;
  int local_94;
  int local_90;
  int iStack_8c;
  int iStack_88;
  int local_84;
  long lStack_80;
  char *pcStack_7c;
  undefined1 auStack_78 [60];
  int iStack_3c;
  int iStack_38;
  int local_34;
  long lStack_30;
  char *pcStack_2c;
  
  iVar10 = DAT_00049938 + 0x4938c;
  if (this[0x28] != (GETextureFont)0x0) {
    puVar7 = *(ushort **)(param_1 + 0x28);
    puVar4 = *(ushort **)(param_1 + 0x24);
    if (puVar7 != puVar4) {
      if (param_2 + 4 == param_1 + 4) {
        return;
      }
LAB_000493ac:
      std::
      basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>::
      _M_assign((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
                 *)(param_2 + 4),puVar7,puVar4);
      return;
    }
  }
  if (this[0x29] == (GETextureFont)0x0) {
    local_134 = *(UStringBase **)(param_2 + 0x24);
    pUVar17 = *(UStringBase **)(param_2 + 0x28);
    goto LAB_000493d4;
  }
  puVar16 = *(uint **)(iVar10 + DAT_0004993c);
  if ((*puVar16 & 1) == 0) {
    iVar8 = thunk_FUN_0007004c(puVar16);
    this_00 = *(UTime **)(iVar10 + DAT_00049940);
    if (iVar8 != 0) {
      UTime::UTime(this_00);
      thunk_FUN_000700b0(puVar16);
      __aeabi_atexit(this_00,*(undefined4 *)(iVar10 + DAT_00049944),
                     *(undefined4 *)(iVar10 + DAT_00049948));
    }
  }
  UTime::GetTime_Local();
  local_14c = local_90;
  memcpy(auStack_78,auStack_c8,0x50);
  local_120.tm_mday = (int)(byte)this[0x2b];
  local_120.tm_mon = (byte)this[0x2a] - 1;
  if (local_120.tm_mon < local_94) {
LAB_00049710:
    local_120.tm_hour = 0;
    local_14c = local_90 + 1;
    local_13c = 0;
    local_138 = 0;
  }
  else if (local_120.tm_mon == local_94) {
    if (local_120.tm_mday < (int)local_98) goto LAB_00049710;
    if (local_120.tm_mday != local_98) goto LAB_00049528;
    local_13c = local_a0;
    local_138 = local_a4;
    local_120.tm_hour = local_9c;
  }
  else {
LAB_00049528:
    local_13c = 0;
    local_138 = 0;
    local_120.tm_hour = 0;
  }
  local_120.tm_wday = iStack_3c;
  local_120.tm_yday = iStack_38;
  local_120.tm_min = local_13c;
  local_120.tm_isdst = local_34;
  local_120.tm_gmtoff = lStack_30;
  local_120.tm_zone = pcStack_2c;
  local_120.tm_year = local_14c;
  local_f4.tm_wday = iStack_8c;
  local_f4.tm_yday = iStack_88;
  local_f4.tm_sec = local_a4;
  local_f4.tm_min = local_a0;
  local_f4.tm_isdst = local_84;
  local_f4.tm_gmtoff = lStack_80;
  local_f4.tm_zone = pcStack_7c;
  local_f4.tm_hour = local_9c;
  local_f4.tm_mday = local_98;
  local_f4.tm_mon = local_94;
  local_f4.tm_year = local_90;
  local_120.tm_sec = local_138;
  __time1 = mktime(&local_120);
  __time0 = mktime(&local_f4);
  difftime(__time1,__time0);
  fVar20 = ceilf((float)((double)CONCAT44(extraout_r1_00,extraout_r0) * DAT_00049930));
  local_134 = *(UStringBase **)(param_2 + 0x28);
  if (local_134 != *(UStringBase **)(param_2 + 0x24)) {
    *(short *)local_134 = 0;
    *(UStringBase **)(param_2 + 0x24) = local_134;
  }
  iVar10 = (uint)(0.0 < fVar20) * (int)fVar20;
  pUVar17 = local_134;
  if (iVar10 != 0) {
    pUVar9 = param_2 + 4;
    iVar8 = -0x33333333;
    iVar11 = 3;
    uVar15 = 100;
    pUVar14 = local_134;
    do {
      local_134 = pUVar17;
      iVar8 = __udivsi3(iVar10,uVar15,iVar8);
      iVar10 = iVar10 - uVar15 * iVar8;
      pUVar17 = local_134;
      if ((local_134 != pUVar14) || (iVar8 != 0)) {
        if (pUVar9 == local_134) {
          iVar13 = 0x10 - ((int)pUVar14 - (int)pUVar9 >> 1);
        }
        else {
          iVar13 = *(int *)(param_2 + 4) - (int)pUVar14 >> 1;
        }
        if (iVar13 == 1) {
          uVar3 = (int)pUVar14 - (int)local_134 >> 1;
          uVar5 = uVar3 * 2 + 1;
          if (uVar3 == 0) {
            uVar5 = 2;
          }
          if ((uVar5 < 0x7fffffff) && (uVar3 <= uVar5)) {
            if (uVar5 != 0) {
              local_124 = uVar5 * 2;
              if (0x80 < local_124) goto LAB_000498c8;
              pUVar17 = (UStringBase *)std::__node_alloc::_M_allocate(&local_124);
              goto LAB_0004977c;
            }
            pUVar12 = (UStringBase *)0x2;
            pUVar17 = (UStringBase *)0x0;
            local_130 = (UStringBase *)0x0;
          }
          else {
            local_124 = 0xfffffffc;
LAB_000498c8:
            pUVar17 = operator_new(local_124);
LAB_0004977c:
            local_134 = *(UStringBase **)(param_2 + 0x28);
            pUVar12 = pUVar17 + 2;
            uVar3 = *(int *)(param_2 + 0x24) - (int)local_134 >> 1;
            local_130 = pUVar17 + (local_124 & 0xfffffffe);
          }
          pUVar14 = pUVar17;
          if (0 < (int)uVar3) {
            bVar19 = local_134 + 4 <= pUVar17;
            bVar18 = pUVar17 == local_134 + 4;
            if (!bVar19 || bVar18) {
              bVar19 = pUVar17 + 4 <= local_134;
              bVar18 = local_134 == pUVar17 + 4;
            }
            uVar5 = uVar3 >> 1;
            pUVar14 = local_134;
            pUVar12 = pUVar17;
            uVar6 = uVar3;
            if (uVar5 == 0 ||
                ((!bVar19 || bVar18) || (uVar3 < 2 || (((uint)local_134 | (uint)pUVar17) & 3) != 0))
               ) {
LAB_0004984c:
              do {
                uVar6 = uVar6 - 1;
                *(short *)pUVar12 = *(short *)pUVar14;
                pUVar14 = pUVar14 + 2;
                pUVar12 = pUVar12 + 2;
              } while (0 < (int)uVar6);
            }
            else {
              uVar6 = 0;
              do {
                uVar6 = uVar6 + 1;
                *(undefined4 *)pUVar12 = *(undefined4 *)pUVar14;
                pUVar14 = pUVar14 + 4;
                pUVar12 = pUVar12 + 4;
              } while (uVar6 < uVar5);
              pUVar14 = local_134 + uVar5 * 4;
              pUVar12 = pUVar17 + uVar5 * 4;
              uVar6 = uVar3 + uVar5 * -2;
              if (uVar5 * 2 != uVar3) goto LAB_0004984c;
            }
            pUVar12 = pUVar17 + uVar3 * 2 + 2;
            pUVar14 = pUVar17 + uVar3 * 2;
          }
          *(short *)pUVar14 = 0;
          if ((pUVar9 != local_134) && (local_134 != (UStringBase *)0x0)) {
            uVar3 = *(int *)(param_2 + 4) - (int)local_134 & 0xfffffffe;
            if (uVar3 < 0x81) {
              std::__node_alloc::_M_deallocate(local_134,uVar3);
            }
            else {
              operator_delete(local_134);
            }
          }
          *(UStringBase **)(param_2 + 0x24) = pUVar14;
          *(UStringBase **)(param_2 + 0x28) = pUVar17;
          *(UStringBase **)(param_2 + 4) = local_130;
        }
        else {
          pUVar12 = pUVar14 + 2;
        }
        *(short *)(pUVar14 + 2) = 0;
        *(short *)pUVar14 = (short)iVar8 + 0x30;
        *(UStringBase **)(param_2 + 0x24) = pUVar12;
        local_134 = pUVar12;
      }
      iVar11 = iVar11 + -1;
      iVar8 = uVar15 * -0x33333333;
      uVar15 = uVar15 / 10;
      pUVar14 = local_134;
    } while (iVar11 != 0);
  }
LAB_000493d4:
  if ((pUVar17 == local_134) && (*(int *)(this + 0x20) != 0)) {
    iVar8 = 0;
    iVar11 = 0;
    iVar13 = *(int *)(this + 0x24) + 4;
    iVar10 = iVar13;
    do {
      iVar8 = iVar8 + 1;
      iVar2 = (iVar10 - *(int *)(this + 0x24)) + iVar13;
      iVar10 = iVar10 + 0x2c;
      if (*(int *)(iVar2 + 0x20) != *(int *)(iVar2 + 0x1c)) {
        iVar11 = iVar11 + 1;
      }
    } while (iVar8 != *(int *)(this + 0x20));
    if (iVar11 != 0) {
      lVar1 = lrand48();
      __aeabi_uidivmod(lVar1,iVar11);
      if (*(int *)(this + 0x20) != 0) {
        iVar11 = *(int *)(this + 0x24);
        iVar10 = 0;
        iVar8 = 0;
        pUVar14 = (UStringBase *)(iVar11 + 4);
        pUVar17 = pUVar14;
        do {
          iVar10 = iVar10 + 1;
          puVar7 = *(ushort **)(pUVar14 + (int)(pUVar17 + (0x20 - iVar11)));
          puVar4 = *(ushort **)(pUVar14 + (int)(pUVar17 + (0x1c - iVar11)));
          if ((puVar7 != puVar4) && (bVar18 = iVar8 == extraout_r1, iVar8 = iVar8 + 1, bVar18)) {
            if (param_2 + 4 == pUVar17) {
              return;
            }
            goto LAB_000493ac;
          }
          pUVar17 = pUVar17 + 0x2c;
        } while (iVar10 != *(int *)(this + 0x20));
      }
    }
  }
  return;
}

