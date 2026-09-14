/* 0004b814 | STG::GETextureFont::GetMessageToUse */

/* STG::GETextureFont::GetMessageToUse(STG::UStringBase<unsigned short, unsigned short> const&,
   STG::UStringBase<unsigned short, unsigned short>&) const */

GETextureFont * __thiscall
STG::GETextureFont::GetMessageToUse(GETextureFont *this,UStringBase *param_1,UStringBase *param_2)

{
  GETextureFont *pGVar1;
  long lVar2;
  time_t __time1;
  time_t __time0;
  int iVar3;
  uint uVar4;
  ushort *puVar5;
  uint uVar6;
  uint uVar7;
  ushort *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  UStringBase *pUVar12;
  UStringBase *pUVar13;
  int iVar14;
  uint uVar15;
  UTime *this_00;
  uint *puVar16;
  UStringBase *pUVar17;
  UStringBase *pUVar18;
  bool bVar19;
  bool bVar20;
  float __x;
  undefined8 uVar21;
  int local_140;
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
  
  iVar10 = DAT_0004bdcc + 0x4b834;
  if (this[0x28] != (GETextureFont)0x0) {
    puVar8 = *(ushort **)(param_1 + 0x28);
    puVar5 = *(ushort **)(param_1 + 0x24);
    if (puVar8 != puVar5) {
      if (param_2 + 4 == param_1 + 4) {
        return (GETextureFont *)(param_2 + 4);
      }
LAB_0004b858:
      pGVar1 = (GETextureFont *)
               std::
               basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
               ::_M_assign((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
                            *)(param_2 + 4),puVar8,puVar5);
      return pGVar1;
    }
  }
  if (this[0x29] == (GETextureFont)0x0) {
    local_134 = *(UStringBase **)(param_2 + 0x24);
    pGVar1 = this;
    pUVar17 = *(UStringBase **)(param_2 + 0x28);
    goto LAB_0004b87c;
  }
  puVar16 = *(uint **)(iVar10 + DAT_0004bdd0);
  if ((*puVar16 & 1) == 0) {
    iVar9 = thunk_FUN_00074338(puVar16);
    this_00 = *(UTime **)(iVar10 + DAT_0004bdd4);
    if (iVar9 != 0) {
      UTime::UTime(this_00);
      thunk_FUN_000743a0(puVar16);
      __aeabi_atexit(this_00,*(undefined4 *)(iVar10 + DAT_0004bde4),
                     *(undefined4 *)(iVar10 + DAT_0004bde8));
    }
  }
  UTime::GetTime_Local();
  local_140 = local_90;
  memcpy(auStack_78,auStack_c8,0x50);
  local_120.tm_mday = (int)(byte)this[0x2b];
  local_120.tm_mon = (byte)this[0x2a] - 1;
  if (local_120.tm_mon < local_94) {
LAB_0004bba4:
    local_120.tm_hour = 0;
    local_140 = local_90 + 1;
    local_13c = 0;
    local_138 = 0;
  }
  else if (local_120.tm_mon == local_94) {
    if (local_120.tm_mday < (int)local_98) goto LAB_0004bba4;
    if (local_120.tm_mday != local_98) goto LAB_0004b9c0;
    local_13c = local_a0;
    local_138 = local_a4;
    local_120.tm_hour = local_9c;
  }
  else {
LAB_0004b9c0:
    local_13c = 0;
    local_138 = 0;
    local_120.tm_hour = 0;
  }
  local_120.tm_wday = iStack_3c;
  local_120.tm_yday = iStack_38;
  local_120.tm_isdst = local_34;
  local_120.tm_gmtoff = lStack_30;
  local_120.tm_zone = pcStack_2c;
  local_120.tm_sec = local_138;
  local_120.tm_min = local_13c;
  local_120.tm_year = local_140;
  local_f4.tm_wday = iStack_8c;
  local_f4.tm_yday = iStack_88;
  local_f4.tm_isdst = local_84;
  local_f4.tm_gmtoff = lStack_80;
  local_f4.tm_zone = pcStack_7c;
  local_f4.tm_min = local_a0;
  local_f4.tm_sec = local_a4;
  local_f4.tm_mday = local_98;
  local_f4.tm_hour = local_9c;
  local_f4.tm_mon = local_94;
  local_f4.tm_year = local_90;
  __time1 = mktime(&local_120);
  __time0 = mktime(&local_f4);
  difftime(__time1,__time0);
  __muldf3();
  __x = (float)__truncdfsf2();
  ceilf(__x);
  iVar10 = __fixunssfsi();
  local_134 = *(UStringBase **)(param_2 + 0x28);
  if (local_134 != *(UStringBase **)(param_2 + 0x24)) {
    *(short *)local_134 = 0;
    *(UStringBase **)(param_2 + 0x24) = local_134;
  }
  pGVar1 = (GETextureFont *)0x0;
  pUVar17 = local_134;
  if (iVar10 != 0) {
    pUVar18 = param_2 + 4;
    iVar9 = 3;
    uVar15 = 100;
    pUVar12 = local_134;
    do {
      local_134 = pUVar17;
      iVar11 = __udivsi3(iVar10,uVar15);
      iVar10 = iVar10 - uVar15 * iVar11;
      pUVar17 = local_134;
      if ((local_134 != pUVar12) || (iVar11 != 0)) {
        if (pUVar18 == local_134) {
          iVar14 = 0x10 - ((int)pUVar12 - (int)pUVar18 >> 1);
        }
        else {
          iVar14 = *(int *)(param_2 + 4) - (int)pUVar12 >> 1;
        }
        if (iVar14 == 1) {
          uVar4 = (int)pUVar12 - (int)local_134 >> 1;
          uVar6 = uVar4 * 2 + 1;
          if (uVar4 == 0) {
            uVar6 = 2;
          }
          if ((uVar6 < 0x7fffffff) && (uVar4 <= uVar6)) {
            if (uVar6 != 0) {
              local_124 = uVar6 * 2;
              if (0x80 < local_124) goto LAB_0004bd64;
              pUVar17 = (UStringBase *)std::__node_alloc::_M_allocate(&local_124);
              goto LAB_0004bc14;
            }
            pUVar13 = (UStringBase *)0x2;
            pUVar17 = (UStringBase *)0x0;
            local_130 = (UStringBase *)0x0;
          }
          else {
            local_124 = 0xfffffffc;
LAB_0004bd64:
            pUVar17 = operator_new(local_124);
LAB_0004bc14:
            local_134 = *(UStringBase **)(param_2 + 0x28);
            local_130 = pUVar17 + (local_124 & 0xfffffffe);
            uVar4 = *(int *)(param_2 + 0x24) - (int)local_134 >> 1;
            pUVar13 = pUVar17 + 2;
          }
          pUVar12 = pUVar17;
          if (0 < (int)uVar4) {
            uVar6 = uVar4 >> 1;
            bVar20 = local_134 + 4 <= pUVar17;
            bVar19 = pUVar17 == local_134 + 4;
            if (!bVar20 || bVar19) {
              bVar20 = pUVar17 + 4 <= local_134;
              bVar19 = local_134 == pUVar17 + 4;
            }
            pUVar12 = local_134;
            pUVar13 = pUVar17;
            uVar7 = uVar4;
            if (uVar6 == 0 ||
                ((!bVar20 || bVar19) || (uVar4 < 2 || (((uint)local_134 | (uint)pUVar17) & 3) != 0))
               ) {
LAB_0004bce8:
              do {
                uVar7 = uVar7 - 1;
                *(short *)pUVar13 = *(short *)pUVar12;
                pUVar12 = pUVar12 + 2;
                pUVar13 = pUVar13 + 2;
              } while (0 < (int)uVar7);
            }
            else {
              uVar7 = 0;
              do {
                uVar7 = uVar7 + 1;
                *(undefined4 *)pUVar13 = *(undefined4 *)pUVar12;
                pUVar12 = pUVar12 + 4;
                pUVar13 = pUVar13 + 4;
              } while (uVar7 < uVar6);
              pUVar12 = local_134 + uVar6 * 4;
              pUVar13 = pUVar17 + uVar6 * 4;
              uVar7 = uVar4 + uVar6 * -2;
              if (uVar6 * 2 != uVar4) goto LAB_0004bce8;
            }
            pUVar13 = pUVar17 + uVar4 * 2 + 2;
            pUVar12 = pUVar17 + uVar4 * 2;
          }
          *(short *)pUVar12 = 0;
          if ((pUVar18 != local_134) && (local_134 != (UStringBase *)0x0)) {
            uVar4 = *(int *)(param_2 + 4) - (int)local_134 & 0xfffffffe;
            if (uVar4 < 0x81) {
              std::__node_alloc::_M_deallocate(local_134,uVar4);
            }
            else {
              operator_delete(local_134);
            }
          }
          *(UStringBase **)(param_2 + 0x24) = pUVar12;
          *(UStringBase **)(param_2 + 0x28) = pUVar17;
          *(UStringBase **)(param_2 + 4) = local_130;
        }
        else {
          pUVar13 = pUVar12 + 2;
        }
        *(short *)(pUVar12 + 2) = 0;
        *(short *)pUVar12 = (short)iVar11 + 0x30;
        *(UStringBase **)(param_2 + 0x24) = pUVar13;
        local_134 = pUVar13;
      }
      iVar9 = iVar9 + -1;
      pGVar1 = (GETextureFont *)((ulonglong)uVar15 * (ulonglong)DAT_0004bde0);
      uVar15 = (uint)((ulonglong)uVar15 * (ulonglong)DAT_0004bde0 >> 0x23);
      pUVar12 = local_134;
    } while (iVar9 != 0);
  }
LAB_0004b87c:
  if ((pUVar17 == local_134) && (*(int *)(this + 0x20) != 0)) {
    iVar9 = 0;
    iVar11 = 0;
    iVar14 = *(int *)(this + 0x24) + 4;
    iVar10 = iVar14;
    do {
      iVar3 = (iVar10 - *(int *)(this + 0x24)) + iVar14;
      pGVar1 = *(GETextureFont **)(iVar3 + 0x20);
      iVar9 = iVar9 + 1;
      iVar10 = iVar10 + 0x2c;
      if (pGVar1 != *(GETextureFont **)(iVar3 + 0x1c)) {
        iVar11 = iVar11 + 1;
      }
    } while (iVar9 != *(int *)(this + 0x20));
    if (iVar11 != 0) {
      lVar2 = lrand48();
      uVar21 = __aeabi_uidivmod(lVar2,iVar11);
      pGVar1 = (GETextureFont *)uVar21;
      if (*(GETextureFont **)(this + 0x20) != (GETextureFont *)0x0) {
        iVar9 = *(int *)(this + 0x24);
        pGVar1 = (GETextureFont *)0x0;
        iVar10 = 0;
        pUVar12 = (UStringBase *)(iVar9 + 4);
        pUVar17 = pUVar12;
        do {
          puVar8 = *(ushort **)(pUVar12 + (int)(pUVar17 + (0x20 - iVar9)));
          puVar5 = *(ushort **)(pUVar12 + (int)(pUVar17 + (0x1c - iVar9)));
          pGVar1 = pGVar1 + 1;
          if (puVar8 != puVar5) {
            if (iVar10 == (int)((ulonglong)uVar21 >> 0x20)) {
              if (param_2 + 4 == pUVar17) {
                return (GETextureFont *)(param_2 + 4);
              }
              goto LAB_0004b858;
            }
            iVar10 = iVar10 + 1;
          }
          pUVar17 = pUVar17 + 0x2c;
        } while (pGVar1 != *(GETextureFont **)(this + 0x20));
      }
    }
  }
  return pGVar1;
}

