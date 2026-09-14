/* 000516f0 | STG::GETextureFont::GetMessageToUse */

/* STG::GETextureFont::GetMessageToUse(STG::UStringBase<unsigned short, unsigned short> const&,
   STG::UStringBase<unsigned short, unsigned short>&) const */

basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>> *
STG::GETextureFont::GetMessageToUse(UStringBase *param_1,UStringBase *param_2)

{
  int iVar1;
  char *pcVar2;
  UTime *this;
  short *psVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
  *pbVar7;
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
  *pbVar8;
  uint uVar9;
  time_t __time1;
  time_t __time0;
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
  *pbVar10;
  uint uVar11;
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
  *pbVar12;
  int *extraout_ECX;
  uint uVar13;
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
  *pbVar14;
  int iVar15;
  int unaff_EBX;
  uint uVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
  *pbVar19;
  uint uVar20;
  byte bVar21;
  float fVar22;
  float fVar23;
  double dVar24;
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
  *local_150;
  int local_148;
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
  *local_13c;
  int local_138;
  short local_130;
  int local_12c;
  uint local_124;
  uint local_120 [2];
  tm local_118;
  tm local_ec;
  undefined4 local_c0 [9];
  int local_9c;
  int local_98;
  int local_94;
  uint local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  long local_78;
  char *local_74;
  undefined4 local_70 [15];
  int local_34;
  int local_30;
  int local_2c;
  long local_28;
  char *local_24;
  undefined4 local_18;
  
  bVar21 = 0;
  local_18 = 0x51705;
  FUN_0002e044();
  iVar1 = *extraout_ECX;
  iVar15 = extraout_ECX[1];
  pbVar7 = (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
            *)extraout_ECX[2];
  if (*(char *)(iVar1 + 0x28) != '\0') {
    if (*(ushort **)(iVar15 + 0x28) != *(ushort **)(iVar15 + 0x24)) {
      if (pbVar7 + 4 ==
          (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
           *)(iVar15 + 4)) {
        return (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
                *)(iVar15 + 4);
      }
      pbVar7 = (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
                *)std::
                  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
                  ::_M_assign(pbVar7 + 4,*(ushort **)(iVar15 + 0x28),*(ushort **)(iVar15 + 0x24));
      return pbVar7;
    }
  }
  if (*(char *)(iVar1 + 0x29) == '\0') {
    pbVar12 = *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
                **)(pbVar7 + 0x28);
    pbVar8 = pbVar7;
    pbVar19 = *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
                **)(pbVar7 + 0x24);
    goto LAB_0005178c;
  }
  pcVar2 = *(char **)(unaff_EBX + 0x4a7a7);
  this = *(UTime **)(unaff_EBX + 0x4a7ab);
  if ((*pcVar2 == '\0') && (iVar15 = FUN_00080eb0(pcVar2), iVar15 != 0)) {
    UTime::UTime(this);
    FUN_00080f40(pcVar2);
    __cxa_atexit(*(undefined4 *)(unaff_EBX + 0x4a7af),this,*(undefined4 *)(unaff_EBX + 0x4a763));
  }
  UTime::GetTime_Local();
  puVar17 = local_c0;
  puVar18 = local_70;
  for (iVar15 = 0x14; iVar15 != 0; iVar15 = iVar15 + -1) {
    *puVar18 = *puVar17;
    puVar17 = puVar17 + (uint)bVar21 * -2 + 1;
    puVar18 = puVar18 + (uint)bVar21 * -2 + 1;
  }
  local_118.tm_mon = *(byte *)(iVar1 + 0x2a) - 1;
  local_118.tm_mday = (int)*(byte *)(iVar1 + 0x2b);
  if (local_118.tm_mon < local_8c) {
LAB_000518ee:
    local_138 = 0;
    local_148 = local_88 + 1;
    local_118.tm_sec = 0;
    local_118.tm_min = 0;
  }
  else if (local_118.tm_mon == local_8c) {
    if (local_118.tm_mday < (int)local_90) goto LAB_000518ee;
    local_138 = local_94;
    if (local_118.tm_mday != local_90) {
      local_138 = 0;
    }
    local_148 = local_88;
    local_118.tm_sec = local_9c;
    local_118.tm_min = local_98;
    if (local_118.tm_mday != local_90) {
      local_118.tm_sec = 0;
      local_118.tm_min = 0;
    }
  }
  else {
    local_138 = 0;
    local_148 = local_88;
    local_118.tm_sec = 0;
    local_118.tm_min = 0;
  }
  local_ec.tm_wday = local_84;
  local_ec.tm_yday = local_80;
  local_118.tm_wday = local_34;
  local_ec.tm_isdst = local_7c;
  local_118.tm_yday = local_30;
  local_ec.tm_gmtoff = local_78;
  local_118.tm_isdst = local_2c;
  local_ec.tm_zone = local_74;
  local_118.tm_gmtoff = local_28;
  local_ec.tm_sec = local_9c;
  local_118.tm_hour = local_138;
  local_118.tm_year = local_148;
  local_ec.tm_min = local_98;
  local_118.tm_zone = local_24;
  local_ec.tm_hour = local_94;
  local_ec.tm_mday = local_90;
  local_ec.tm_year = local_88;
  local_ec.tm_mon = local_8c;
  __time1 = mktime(&local_118);
  __time0 = mktime(&local_ec);
  dVar24 = difftime(__time1,__time0);
  dVar24 = dVar24 * *(double *)(unaff_EBX + 0x362d3);
  fVar22 = (float)dVar24;
  if ((float)((uint)fVar22 & *(uint *)(unaff_EBX + 0x360fb)) < *(float *)(unaff_EBX + 0x35fd3)) {
    fVar23 = (float)(int)dVar24;
    fVar22 = (float)(*(uint *)(unaff_EBX + 0x35fa3) & -(uint)(fVar23 < fVar22)) + fVar23;
  }
  uVar16 = (uint)(*(float *)(unaff_EBX + 0x3614b) <= fVar22);
  pbVar12 = *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
              **)(pbVar7 + 0x28);
  local_124 = (int)(fVar22 - (float)((uint)*(float *)(unaff_EBX + 0x3614b) & -uVar16)) ^
              uVar16 * -0x80000000;
  if (pbVar12 !=
      *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
        **)(pbVar7 + 0x24)) {
    *(undefined2 *)pbVar12 = 0;
    pbVar12 = *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
                **)(pbVar7 + 0x28);
    *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
      **)(pbVar7 + 0x24) = pbVar12;
  }
  pbVar8 = (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
            *)0x0;
  pbVar19 = pbVar12;
  if (local_124 != 0) {
    pbVar10 = pbVar7 + 4;
    local_12c = 3;
    uVar16 = 100;
    pbVar14 = pbVar12;
    do {
      pbVar12 = pbVar19;
      uVar9 = local_124 / uVar16;
      local_124 = local_124 - uVar9 * uVar16;
      if ((pbVar12 != pbVar14) || (pbVar19 = pbVar12, uVar9 != 0)) {
        if (pbVar10 == pbVar14) {
          iVar15 = 0x10 - ((int)pbVar12 - (int)pbVar10 >> 1);
        }
        else {
          iVar15 = *(int *)(pbVar7 + 4) - (int)pbVar12 >> 1;
        }
        if (iVar15 == 1) {
          uVar20 = (int)pbVar12 - (int)pbVar14 >> 1;
          uVar13 = 1;
          if (uVar20 != 0) {
            uVar13 = uVar20;
          }
          uVar13 = uVar20 + 1 + uVar13;
          if ((uVar13 < 0x7fffffff) && (uVar20 <= uVar13)) {
            local_150 = (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
                         *)0x0;
            local_13c = (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
                         *)0x0;
            if (uVar13 != 0) {
              local_120[0] = uVar13 * 2;
              if (0x80 < local_120[0]) goto LAB_00051de7;
              local_13c = (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
                           *)std::__node_alloc::_M_allocate(local_120);
              goto LAB_00051c51;
            }
          }
          else {
            local_120[0] = 0xfffffffc;
LAB_00051de7:
            local_13c = operator_new(local_120[0]);
LAB_00051c51:
            local_150 = local_13c + (local_120[0] & 0xfffffffe);
            pbVar14 = *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
                        **)(pbVar7 + 0x28);
            uVar20 = *(int *)(pbVar7 + 0x24) - (int)pbVar14 >> 1;
          }
          pbVar12 = local_13c;
          if (0 < (int)uVar20) {
            uVar11 = uVar20 >> 3;
            pbVar12 = pbVar14;
            uVar13 = uVar20;
            pbVar8 = local_13c;
            if ((uVar20 < 0xb || local_13c <= pbVar14 + 0x10 && pbVar14 <= local_13c + 0x10) ||
               (uVar11 == 0)) {
LAB_00051d58:
              do {
                uVar13 = uVar13 - 1;
                *(undefined2 *)pbVar8 = *(undefined2 *)pbVar12;
                pbVar12 = pbVar12 + 2;
                pbVar8 = pbVar8 + 2;
              } while (0 < (int)uVar13);
            }
            else {
              iVar15 = 0;
              uVar13 = 0;
              do {
                pbVar12 = pbVar14 + iVar15;
                uVar4 = *(undefined4 *)(pbVar12 + 4);
                uVar5 = *(undefined4 *)(pbVar12 + 8);
                uVar6 = *(undefined4 *)(pbVar12 + 0xc);
                uVar13 = uVar13 + 1;
                pbVar8 = local_13c + iVar15;
                *(undefined4 *)pbVar8 = *(undefined4 *)pbVar12;
                *(undefined4 *)(pbVar8 + 4) = uVar4;
                *(undefined4 *)(pbVar8 + 8) = uVar5;
                *(undefined4 *)(pbVar8 + 0xc) = uVar6;
                iVar15 = iVar15 + 0x10;
              } while (uVar13 < uVar11);
              uVar13 = uVar20 + uVar11 * -8;
              pbVar12 = pbVar14 + uVar11 * 0x10;
              pbVar8 = local_13c + uVar11 * 0x10;
              if (uVar11 * 8 != uVar20) goto LAB_00051d58;
            }
            pbVar12 = local_13c + uVar20 * 2;
          }
          *(undefined2 *)pbVar12 = 0;
          if ((pbVar10 != pbVar14) &&
             (pbVar14 !=
              (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
               *)0x0)) {
            uVar13 = *(int *)(pbVar7 + 4) - (int)pbVar14 & 0xfffffffe;
            if (uVar13 < 0x81) {
              std::__node_alloc::_M_deallocate(pbVar14,uVar13);
            }
            else {
              operator_delete(pbVar14);
            }
          }
          *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
            **)(pbVar7 + 4) = local_150;
          *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
            **)(pbVar7 + 0x24) = pbVar12;
          *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
            **)(pbVar7 + 0x28) = local_13c;
        }
        *(undefined2 *)(pbVar12 + 2) = 0;
        local_130 = (short)uVar9;
        psVar3 = *(short **)(pbVar7 + 0x24);
        *psVar3 = local_130 + 0x30;
        pbVar19 = (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
                   *)(psVar3 + 1);
        *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
          **)(pbVar7 + 0x24) = pbVar19;
        pbVar12 = *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
                    **)(pbVar7 + 0x28);
      }
      pbVar8 = (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
                *)(uVar16 * -0x33333333);
      uVar16 = uVar16 / 10;
      local_12c = local_12c + -1;
      pbVar14 = pbVar12;
    } while (local_12c != 0);
  }
LAB_0005178c:
  if ((pbVar19 == pbVar12) && (*(int *)(iVar1 + 0x20) != 0)) {
    iVar15 = 0;
    pbVar8 = (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
              *)(*(int *)(iVar1 + 0x24) + 0x28);
    uVar16 = 0;
    do {
      if (*(int *)pbVar8 != *(int *)(pbVar8 + -4)) {
        uVar16 = uVar16 + 1;
      }
      iVar15 = iVar15 + 1;
      pbVar8 = pbVar8 + 0x2c;
    } while (iVar15 != *(int *)(iVar1 + 0x20));
    if (uVar16 != 0) {
      uVar9 = lrand48();
      pbVar8 = (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
                *)(uVar9 / uVar16);
      if (*(int *)(iVar1 + 0x20) != 0) {
        iVar15 = 0;
        uVar13 = 0;
        pbVar8 = *(basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
                   **)(iVar1 + 0x24);
        do {
          if (*(ushort **)(pbVar8 + 0x28) != *(ushort **)(pbVar8 + 0x24)) {
            if (uVar13 == uVar9 % uVar16) {
              if (pbVar7 + 4 == pbVar8 + 4) {
                return pbVar8 + 4;
              }
              pbVar7 = (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
                        *)std::
                          basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
                          ::_M_assign(pbVar7 + 4,*(ushort **)(pbVar8 + 0x28),
                                      *(ushort **)(pbVar8 + 0x24));
              return pbVar7;
            }
            uVar13 = uVar13 + 1;
          }
          iVar15 = iVar15 + 1;
          pbVar8 = pbVar8 + 0x2c;
        } while (iVar15 != *(int *)(iVar1 + 0x20));
      }
    }
  }
  return pbVar8;
}

