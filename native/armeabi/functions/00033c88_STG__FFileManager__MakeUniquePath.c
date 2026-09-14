/* 00033c88 | STG::FFileManager::MakeUniquePath */

/* STG::FFileManager::MakeUniquePath(STG::UStringBase<char, int> const&, STG::UStringBase<char,
   int>&) const */

void __thiscall
STG::FFileManager::MakeUniquePath(FFileManager *this,UStringBase *param_1,UStringBase *param_2)

{
  string *psVar1;
  string *psVar2;
  uint *puVar3;
  uint *puVar4;
  void *pvVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  size_t sVar10;
  undefined1 *puVar11;
  char *pcVar12;
  uint uVar13;
  int iVar14;
  void *__src;
  undefined4 uVar15;
  char *pcVar16;
  int iVar17;
  int *piVar18;
  string *this_00;
  char *pcVar19;
  char *pcVar20;
  int local_2fc;
  int local_2d8;
  uint local_2d0;
  int local_2cc;
  uint local_2c8 [4];
  uint *local_2b8;
  uint *local_2b4;
  int local_2b0;
  uint local_2ac [4];
  uint *local_29c;
  uint *local_298;
  int local_294;
  uint local_290 [4];
  uint *local_280;
  uint *local_27c;
  int local_278;
  uint local_274 [4];
  uint *local_264;
  uint *local_260;
  int local_25c;
  uint local_258 [4];
  uint *local_248;
  uint *local_244;
  int local_240;
  uint local_23c [4];
  uint *local_22c;
  uint *local_228;
  int local_224;
  undefined4 local_220;
  int local_210;
  undefined4 *local_20c;
  int local_208;
  string *local_204 [4];
  string *local_1f4;
  string *local_1f0;
  int local_1ec;
  string *local_1e8 [4];
  string *local_1d8;
  string *local_1d4;
  int local_1d0;
  string *local_1cc [4];
  string *local_1bc;
  string *local_1b8;
  int local_1b4;
  string *local_1b0 [4];
  string *local_1a0;
  string *local_19c;
  int local_198;
  string *local_194 [4];
  string *local_184;
  string *local_180;
  int local_17c;
  undefined4 local_178;
  int local_168;
  string *local_164;
  FFileDisk aFStack_160 [52];
  char acStack_12c [256];
  int local_2c;
  
  piVar18 = *(int **)(DAT_00034920 + 0x33ca0);
  local_2c = *piVar18;
  this_00 = (string *)(param_2 + 4);
  if (this_00 != (string *)(param_1 + 4)) {
    __src = *(void **)(param_1 + 0x18);
    pcVar16 = *(char **)(param_1 + 0x14);
    puVar11 = *(undefined1 **)(param_2 + 0x14);
    pvVar5 = *(void **)(param_2 + 0x18);
    uVar13 = (int)pcVar16 - (int)__src;
    sVar10 = (int)puVar11 - (int)pvVar5;
    if (sVar10 < uVar13) {
      iVar14 = 0;
      if (sVar10 != 0) {
        memmove(pvVar5,__src,sVar10);
        iVar14 = *(int *)(param_2 + 0x14) - *(int *)(param_2 + 0x18);
      }
      std::string::_M_append(this_00,(char *)((int)__src + iVar14),pcVar16);
    }
    else {
      if (uVar13 != 0) {
        memmove(pvVar5,__src,uVar13);
        pvVar5 = *(void **)(param_2 + 0x18);
        puVar11 = *(undefined1 **)(param_2 + 0x14);
      }
      if ((undefined1 *)((int)pvVar5 + uVar13) != puVar11) {
        *(undefined1 *)((int)pvVar5 + uVar13) = *puVar11;
        *(undefined1 **)(param_2 + 0x14) =
             (undefined1 *)((int)pvVar5 + uVar13) + (*(int *)(param_2 + 0x14) - (int)puVar11);
      }
    }
  }
  iVar14 = *(int *)(DAT_00034924 + 0x33d5c);
  local_2b8 = local_2c8;
  iVar17 = iVar14 + 8;
  local_29c = local_2ac;
  local_280 = local_290;
  local_264 = local_274;
  local_2c8[0] = local_2c8[0] & 0xffffff00;
  local_2ac[0] = local_2ac[0] & 0xffffff00;
  local_290[0] = local_290[0] & 0xffffff00;
  local_274[0] = local_274[0] & 0xffffff00;
  local_2cc = iVar17;
  local_2b4 = local_2b8;
  local_2b0 = iVar17;
  local_298 = local_29c;
  local_294 = iVar17;
  local_27c = local_280;
  local_278 = iVar17;
  local_260 = local_264;
  GetPathComponents(this,param_1,(UStringBase *)&local_2cc,(UStringBase *)&local_2b0,
                    (UStringBase *)&local_294,(UStringBase *)&local_278);
  uVar13 = GetPathFlags(this,(UStringBase *)&local_2cc,(UStringBase *)&local_2b0,
                        (UStringBase *)&local_294,(UStringBase *)&local_278);
  if ((uVar13 & 4) == 0) {
    uVar15 = 0;
    goto LAB_00033e04;
  }
  FFileDisk::FFileDisk(aFStack_160);
  local_248 = local_258;
  local_22c = local_23c;
  local_210 = (int)&local_220 + 1;
  local_258[0] = local_258[0] & 0xffffff00;
  local_23c[0] = local_23c[0] & 0xffffff00;
  local_220 = CONCAT22(local_220._2_2_,0x5f);
  local_25c = iVar17;
  local_244 = local_248;
  local_240 = iVar17;
  local_228 = local_22c;
  local_224 = iVar17;
  local_20c = &local_220;
  iVar6 = UStringBase<char,int>::Find_FromEnd
                    ((UStringBase<char,int> *)&local_294,(UStringBase *)&local_224,
                     (UStringBase *)&local_25c,(UStringBase *)&local_240);
  local_224 = iVar17;
  if ((local_20c != &local_220) && (local_20c != (undefined4 *)0x0)) {
    if ((uint)(local_220 - (int)local_20c) < 0x81) {
      std::__node_alloc::_M_deallocate(local_20c,local_220 - (int)local_20c);
    }
    else {
      operator_delete(local_20c);
    }
  }
  puVar4 = local_27c;
  puVar3 = local_280;
  if (iVar6 == 0) {
    uVar9 = (int)local_280 - (int)local_27c;
    sVar10 = (int)local_248 - (int)local_244;
    if (sVar10 < uVar9) {
      iVar17 = 0;
      if (sVar10 != 0) {
        memmove(local_244,local_27c,sVar10);
        iVar17 = (int)local_248 - (int)local_244;
      }
      std::string::_M_append((string *)local_258,(char *)((int)puVar4 + iVar17),(char *)puVar3);
    }
    else {
      if (uVar9 != 0) {
        memmove(local_244,local_27c,uVar9);
      }
      if ((uint *)((int)local_244 + uVar9) != local_248) {
        *(char *)((int)local_244 + uVar9) = (char)*local_248;
        local_248 = (uint *)((int)local_244 + uVar9);
      }
    }
LAB_0003406c:
    local_2d8 = 100;
    local_2fc = 1;
  }
  else {
    if ((local_228 == local_22c) || (lVar7 = atol((char *)local_228), lVar7 < 1)) goto LAB_0003406c;
    local_2d8 = lVar7 + 100;
    local_2fc = lVar7 + 1;
  }
  iVar17 = DAT_0003492c;
  pcVar16 = (char *)(DAT_00034928 + 0x34090);
  pcVar12 = (char *)(DAT_00034930 + 0x340ac);
  pcVar19 = (char *)(DAT_00034928 + 0x34091);
  pcVar20 = (char *)(DAT_00034930 + 0x340ad);
  iVar6 = local_2fc;
LAB_000344e0:
  do {
    snprintf(acStack_12c,0x100,(char *)(iVar17 + 0x344f8),iVar6);
    puVar4 = local_2b4;
    puVar3 = local_2b8;
    local_1ec = iVar14 + 8;
    sVar10 = (int)local_2b8 - (int)local_2b4;
    uVar9 = sVar10 + 1;
    local_1d8 = (string *)local_1e8;
    local_1d4 = (string *)local_1e8;
    if (uVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      std::__stl_throw_length_error((char *)(DAT_00034934 + 0x34528));
    }
    if (0x10 < uVar9) {
      local_2d0 = uVar9;
      if (uVar9 < 0x81) {
        local_1d8 = (string *)std::__node_alloc::_M_allocate(&local_2d0);
      }
      else {
        local_1d8 = operator_new(uVar9);
      }
      local_1e8[0] = local_1d8 + local_2d0;
    }
    local_1d4 = local_1d8;
    if (puVar4 != puVar3) {
      pvVar5 = memcpy(local_1d8,puVar4,sVar10);
      local_1d8 = (string *)((int)pvVar5 + sVar10);
    }
    *local_1d8 = (string)0x0;
    std::string::_M_append((string *)local_1e8,pcVar16,pcVar19);
    psVar2 = local_1d4;
    psVar1 = local_1d8;
    local_1d0 = iVar14 + 8;
    sVar10 = (int)local_1d8 - (int)local_1d4;
    uVar9 = sVar10 + 1;
    local_1bc = (string *)local_1cc;
    local_1b8 = (string *)local_1cc;
    if (uVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      std::__stl_throw_length_error((char *)(DAT_00034938 + 0x34534));
    }
    if (0x10 < uVar9) {
      local_2d0 = uVar9;
      if (uVar9 < 0x81) {
        local_1bc = (string *)std::__node_alloc::_M_allocate(&local_2d0);
      }
      else {
        local_1bc = operator_new(uVar9);
      }
      local_1cc[0] = local_1bc + local_2d0;
    }
    local_1b8 = local_1bc;
    if (psVar2 != psVar1) {
      pvVar5 = memcpy(local_1bc,psVar2,sVar10);
      local_1bc = (string *)((int)pvVar5 + sVar10);
    }
    puVar3 = local_298;
    *local_1bc = (string)0x0;
    sVar10 = strlen((char *)local_298);
    std::string::_M_append((string *)local_1cc,(char *)puVar3,(char *)((int)puVar3 + sVar10));
    psVar2 = local_1b8;
    psVar1 = local_1bc;
    local_1b4 = iVar14 + 8;
    sVar10 = (int)local_1bc - (int)local_1b8;
    uVar9 = sVar10 + 1;
    local_1a0 = (string *)local_1b0;
    local_19c = (string *)local_1b0;
    if (uVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      std::__stl_throw_length_error((char *)(DAT_0003493c + 0x34540));
    }
    if (0x10 < uVar9) {
      local_2d0 = uVar9;
      if (uVar9 < 0x81) {
        local_1a0 = (string *)std::__node_alloc::_M_allocate(&local_2d0);
      }
      else {
        local_1a0 = operator_new(uVar9);
      }
      local_1b0[0] = local_1a0 + local_2d0;
    }
    local_19c = local_1a0;
    if (psVar2 != psVar1) {
      pvVar5 = memcpy(local_1a0,psVar2,sVar10);
      local_1a0 = (string *)((int)pvVar5 + sVar10);
    }
    *local_1a0 = (string)0x0;
    std::string::_M_append((string *)local_1b0,pcVar12,pcVar20);
    psVar2 = local_19c;
    psVar1 = local_1a0;
    local_198 = iVar14 + 8;
    sVar10 = (int)local_1a0 - (int)local_19c;
    uVar9 = sVar10 + 1;
    local_184 = (string *)local_194;
    local_180 = (string *)local_194;
    if (uVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      std::__stl_throw_length_error((char *)(DAT_00034940 + 0x3454c));
    }
    if (0x10 < uVar9) {
      local_2d0 = uVar9;
      if (uVar9 < 0x81) {
        local_184 = (string *)std::__node_alloc::_M_allocate(&local_2d0);
      }
      else {
        local_184 = operator_new(uVar9);
      }
      local_194[0] = local_184 + local_2d0;
    }
    local_180 = local_184;
    if (psVar2 != psVar1) {
      pvVar5 = memcpy(local_184,psVar2,sVar10);
      local_184 = (string *)((int)pvVar5 + sVar10);
    }
    puVar3 = local_244;
    *local_184 = (string)0x0;
    sVar10 = strlen((char *)local_244);
    std::string::_M_append((string *)local_194,(char *)puVar3,(char *)((int)puVar3 + sVar10));
    psVar2 = local_180;
    psVar1 = local_184;
    local_208 = iVar14 + 8;
    sVar10 = (int)local_184 - (int)local_180;
    uVar9 = sVar10 + 1;
    local_1f4 = (string *)local_204;
    local_1f0 = (string *)local_204;
    if (uVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      std::__stl_throw_length_error((char *)(DAT_00034944 + 0x34558));
    }
    if (0x10 < uVar9) {
      local_2d0 = uVar9;
      if (uVar9 < 0x81) {
        local_1f4 = (string *)std::__node_alloc::_M_allocate(&local_2d0);
      }
      else {
        local_1f4 = operator_new(uVar9);
      }
      local_204[0] = local_1f4 + local_2d0;
    }
    local_1f0 = local_1f4;
    if (psVar2 != psVar1) {
      pvVar5 = memcpy(local_1f4,psVar2,sVar10);
      local_1f4 = (string *)((int)pvVar5 + sVar10);
    }
    *local_1f4 = (string)0x0;
    sVar10 = strlen(acStack_12c);
    std::string::_M_append((string *)local_204,acStack_12c,acStack_12c + sVar10);
    local_198 = iVar14 + 8;
    if ((local_180 != (string *)local_194) && (local_180 != (string *)0x0)) {
      if ((uint)((int)local_194[0] - (int)local_180) < 0x81) {
        std::__node_alloc::_M_deallocate(local_180,(int)local_194[0] - (int)local_180);
      }
      else {
        operator_delete(local_180);
      }
    }
    local_1b4 = iVar14 + 8;
    if ((local_19c != (string *)local_1b0) && (local_19c != (string *)0x0)) {
      if ((uint)((int)local_1b0[0] - (int)local_19c) < 0x81) {
        std::__node_alloc::_M_deallocate(local_19c,(int)local_1b0[0] - (int)local_19c);
      }
      else {
        operator_delete(local_19c);
      }
    }
    local_1d0 = iVar14 + 8;
    if ((local_1b8 != (string *)local_1cc) && (local_1b8 != (string *)0x0)) {
      if ((uint)((int)local_1cc[0] - (int)local_1b8) < 0x81) {
        std::__node_alloc::_M_deallocate(local_1b8,(int)local_1cc[0] - (int)local_1b8);
      }
      else {
        operator_delete(local_1b8);
      }
    }
    local_1ec = iVar14 + 8;
    if ((local_1d4 != (string *)local_1e8) && (local_1d4 != (string *)0x0)) {
      if ((uint)((int)local_1e8[0] - (int)local_1d4) < 0x81) {
        std::__node_alloc::_M_deallocate(local_1d4,(int)local_1e8[0] - (int)local_1d4);
      }
      else {
        operator_delete(local_1d4);
      }
    }
    puVar3 = local_260;
    if ((uVar13 & 8) == 0) {
LAB_00034474:
      if (iVar6 != local_2fc) goto LAB_00034480;
LAB_000345f0:
      psVar2 = local_1f0;
      psVar1 = local_1f4;
      puVar11 = *(undefined1 **)(param_2 + 0x14);
      pvVar5 = *(void **)(param_2 + 0x18);
      uVar9 = (int)local_1f4 - (int)local_1f0;
      sVar10 = (int)puVar11 - (int)pvVar5;
      if (sVar10 < uVar9) {
        iVar8 = 0;
        if (sVar10 != 0) {
          memmove(pvVar5,local_1f0,sVar10);
          iVar8 = *(int *)(param_2 + 0x14) - *(int *)(param_2 + 0x18);
        }
        std::string::_M_append(this_00,(char *)(psVar2 + iVar8),(char *)psVar1);
        goto LAB_00034480;
      }
      if (uVar9 != 0) {
        memmove(pvVar5,local_1f0,uVar9);
        pvVar5 = *(void **)(param_2 + 0x18);
        puVar11 = *(undefined1 **)(param_2 + 0x14);
      }
      if (puVar11 == (undefined1 *)((int)pvVar5 + uVar9)) goto LAB_00034480;
      *(undefined1 *)((int)pvVar5 + uVar9) = *puVar11;
      *(undefined1 **)(param_2 + 0x14) =
           (undefined1 *)((int)pvVar5 + uVar9) + (*(int *)(param_2 + 0x14) - (int)puVar11);
      iVar8 = FFileBase::Open((FFileBase *)aFStack_160,local_1f0,0);
      psVar1 = local_1f4;
      psVar2 = local_1f0;
    }
    else {
      local_168 = (int)&local_178 + 1;
      iVar8 = iVar14 + 8;
      uVar9 = (uint)local_178 >> 8;
      local_178 = CONCAT31((uint3)uVar9 & 0xffff00,0x2e);
      local_17c = iVar8;
      local_164 = (string *)&local_178;
      sVar10 = strlen((char *)local_260);
      std::string::_M_append((string *)&local_178,(char *)puVar3,(char *)((int)puVar3 + sVar10));
      psVar1 = local_164;
      sVar10 = strlen((char *)local_164);
      std::string::_M_append((string *)local_204,(char *)psVar1,(char *)(psVar1 + sVar10));
      local_17c = iVar8;
      if ((local_164 == (string *)&local_178) || (local_164 == (string *)0x0)) goto LAB_00034474;
      if (0x80 < (uint)(local_178 - (int)local_164)) {
        operator_delete(local_164);
        goto LAB_00034474;
      }
      std::__node_alloc::_M_deallocate(local_164,local_178 - (int)local_164);
      if (iVar6 == local_2fc) goto LAB_000345f0;
LAB_00034480:
      iVar8 = FFileBase::Open((FFileBase *)aFStack_160,local_1f0,0);
      psVar1 = local_1f4;
      psVar2 = local_1f0;
    }
    local_1f4 = psVar1;
    local_1f0 = psVar2;
    if (iVar8 == 0) {
      puVar11 = *(undefined1 **)(param_2 + 0x14);
      pvVar5 = *(void **)(param_2 + 0x18);
      uVar13 = (int)psVar1 - (int)psVar2;
      sVar10 = (int)puVar11 - (int)pvVar5;
      if (sVar10 < uVar13) {
        iVar17 = 0;
        if (sVar10 != 0) {
          memmove(pvVar5,psVar2,sVar10);
          iVar17 = *(int *)(param_2 + 0x14) - *(int *)(param_2 + 0x18);
        }
        std::string::_M_append(this_00,(char *)(psVar2 + iVar17),(char *)psVar1);
      }
      else {
        if (uVar13 != 0) {
          memmove(pvVar5,psVar2,uVar13);
          pvVar5 = *(void **)(param_2 + 0x18);
          puVar11 = *(undefined1 **)(param_2 + 0x14);
        }
        if (puVar11 != (undefined1 *)((int)pvVar5 + uVar13)) {
          *(undefined1 *)((int)pvVar5 + uVar13) = *puVar11;
          *(undefined1 **)(param_2 + 0x14) =
               (undefined1 *)((int)pvVar5 + uVar13) + (*(int *)(param_2 + 0x14) - (int)puVar11);
        }
      }
      local_208 = iVar14 + 8;
      if ((local_1f0 == (string *)local_204) || (local_1f0 == (string *)0x0)) {
        uVar15 = 1;
      }
      else if ((uint)((int)local_204[0] - (int)local_1f0) < 0x81) {
        std::__node_alloc::_M_deallocate(local_1f0,(int)local_204[0] - (int)local_1f0);
        uVar15 = 1;
      }
      else {
        operator_delete(local_1f0);
        uVar15 = 1;
      }
      goto LAB_000346fc;
    }
    FFileBase::Close((FFileBase *)aFStack_160);
    local_208 = iVar14 + 8;
    if ((local_1f0 != (string *)local_204) && (local_1f0 != (string *)0x0)) {
      if (0x80 < (uint)((int)local_204[0] - (int)local_1f0)) {
        operator_delete(local_1f0);
        iVar6 = iVar6 + 1;
        if (local_2d8 < iVar6) break;
        goto LAB_000344e0;
      }
      std::__node_alloc::_M_deallocate(local_1f0,(int)local_204[0] - (int)local_1f0);
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 <= local_2d8);
  uVar15 = 0;
LAB_000346fc:
  local_240 = iVar14 + 8;
  if ((local_228 != local_23c) && (local_228 != (uint *)0x0)) {
    if (local_23c[0] - (int)local_228 < 0x81) {
      std::__node_alloc::_M_deallocate(local_228,local_23c[0] - (int)local_228);
    }
    else {
      operator_delete(local_228);
    }
  }
  local_25c = iVar14 + 8;
  if ((local_244 != local_258) && (local_244 != (uint *)0x0)) {
    if (local_258[0] - (int)local_244 < 0x81) {
      std::__node_alloc::_M_deallocate(local_244,local_258[0] - (int)local_244);
    }
    else {
      operator_delete(local_244);
    }
  }
  FFileDisk::~FFileDisk(aFStack_160);
LAB_00033e04:
  local_278 = iVar14 + 8;
  if ((local_260 != local_274) && (local_260 != (uint *)0x0)) {
    if (local_274[0] - (int)local_260 < 0x81) {
      std::__node_alloc::_M_deallocate(local_260,local_274[0] - (int)local_260);
    }
    else {
      operator_delete(local_260);
    }
  }
  local_294 = iVar14 + 8;
  if ((local_27c != local_290) && (local_27c != (uint *)0x0)) {
    if (local_290[0] - (int)local_27c < 0x81) {
      std::__node_alloc::_M_deallocate(local_27c,local_290[0] - (int)local_27c);
    }
    else {
      operator_delete(local_27c);
    }
  }
  local_2b0 = iVar14 + 8;
  if ((local_298 != local_2ac) && (local_298 != (uint *)0x0)) {
    if (local_2ac[0] - (int)local_298 < 0x81) {
      std::__node_alloc::_M_deallocate(local_298,local_2ac[0] - (int)local_298);
    }
    else {
      operator_delete(local_298);
    }
  }
  local_2cc = iVar14 + 8;
  if ((local_2b4 != local_2c8) && (local_2b4 != (uint *)0x0)) {
    if (local_2c8[0] - (int)local_2b4 < 0x81) {
      std::__node_alloc::_M_deallocate(local_2b4,local_2c8[0] - (int)local_2b4);
    }
    else {
      operator_delete(local_2b4);
    }
  }
  if (local_2c != *piVar18) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar15);
  }
  return;
}

