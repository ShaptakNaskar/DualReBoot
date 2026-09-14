/* 00033f30 | STG::FFileManager::MakeUniquePath */

/* STG::FFileManager::MakeUniquePath(STG::UStringBase<char, int> const&, STG::UStringBase<char,
   int>&) const */

undefined1 __thiscall
STG::FFileManager::MakeUniquePath(FFileManager *this,UStringBase *param_1,UStringBase *param_2)

{
  char *pcVar1;
  int iVar2;
  undefined1 uVar3;
  string *psVar4;
  string *psVar5;
  undefined1 **ppuVar6;
  undefined1 **ppuVar7;
  char cVar8;
  long lVar9;
  uint *puVar10;
  void *pvVar11;
  uint uVar12;
  undefined1 *puVar13;
  int iVar14;
  string *this_00;
  void *__dest;
  uint *puVar15;
  int unaff_EBX;
  uint uVar16;
  undefined1 *puVar17;
  uint uVar18;
  size_t sVar19;
  int local_34c;
  int local_340;
  int local_330;
  uint local_300 [4];
  int local_2f0;
  uint local_2ec [4];
  uint *local_2dc;
  uint *local_2d8;
  int local_2d0;
  uint local_2cc [4];
  uint *local_2bc;
  uint *local_2b8;
  int local_2b0;
  uint local_2ac [4];
  uint *local_29c;
  uint *local_298;
  int local_290;
  uint local_28c [4];
  uint *local_27c;
  uint *local_278;
  int local_270;
  uint local_26c [4];
  uint *local_25c;
  uint *local_258;
  int local_250;
  uint local_24c [4];
  uint *local_23c;
  uint *local_238;
  int local_230;
  undefined4 local_22c;
  int local_21c;
  undefined4 *local_218;
  int local_210;
  string *local_20c [4];
  string *local_1fc;
  string *local_1f8;
  int local_1f0;
  undefined1 *local_1ec [4];
  undefined1 **local_1dc;
  undefined1 **local_1d8;
  int local_1d0;
  undefined1 *local_1cc [4];
  undefined1 **local_1bc;
  undefined1 **local_1b8;
  int local_1b0;
  undefined1 *local_1ac [4];
  undefined1 **local_19c;
  undefined1 **local_198;
  int local_190;
  undefined1 *local_18c [4];
  undefined1 **local_17c;
  undefined1 **local_178;
  int local_170;
  undefined4 local_16c;
  int local_15c;
  char *local_158;
  FFileDisk local_148 [52];
  uint local_114 [64];
  int local_14;
  
  local_14 = 0x33f3b;
  FUN_0002e044();
  this_00 = (string *)(param_2 + 4);
  local_14 = **(int **)(unaff_EBX + 0x67efd);
  if (this_00 != (string *)(param_1 + 4)) {
    pcVar1 = *(char **)(param_1 + 0x14);
    pvVar11 = *(void **)(param_1 + 0x18);
    uVar16 = (int)pcVar1 - (int)pvVar11;
    puVar13 = *(undefined1 **)(param_2 + 0x14);
    __dest = *(void **)(param_2 + 0x18);
    uVar18 = (int)puVar13 - (int)__dest;
    if (uVar18 < uVar16) {
      iVar14 = 0;
      if (uVar18 != 0) {
        memmove(__dest,pvVar11,uVar18);
        iVar14 = *(int *)(param_2 + 0x14) - *(int *)(param_2 + 0x18);
      }
      std::string::_M_append(this_00,(char *)(iVar14 + (int)pvVar11),pcVar1);
    }
    else {
      if (uVar16 != 0) {
        memmove(__dest,pvVar11,uVar16);
        puVar13 = *(undefined1 **)(param_2 + 0x14);
        __dest = *(void **)(param_2 + 0x18);
      }
      puVar17 = (undefined1 *)(uVar16 + (int)__dest);
      if (puVar17 != puVar13) {
        *puVar17 = *puVar13;
        *(undefined1 **)(param_2 + 0x14) = puVar17 + (*(int *)(param_2 + 0x14) - (int)puVar13);
      }
    }
  }
  iVar2 = *(int *)(unaff_EBX + 0x67f01);
  iVar14 = iVar2 + 8;
  local_2ec[0] = local_2ec[0] & 0xffffff00;
  local_2cc[0] = local_2cc[0] & 0xffffff00;
  local_2ac[0] = local_2ac[0] & 0xffffff00;
  local_28c[0] = local_28c[0] & 0xffffff00;
  local_2f0 = iVar14;
  local_2dc = local_2ec;
  local_2d8 = local_2ec;
  local_2d0 = iVar14;
  local_2bc = local_2cc;
  local_2b8 = local_2cc;
  local_2b0 = iVar14;
  local_29c = local_2ac;
  local_298 = local_2ac;
  local_290 = iVar14;
  local_27c = local_28c;
  local_278 = local_28c;
  GetPathComponents(this,param_1,(UStringBase *)&local_2f0,(UStringBase *)&local_2d0,
                    (UStringBase *)&local_2b0,(UStringBase *)&local_290);
  uVar16 = GetPathFlags(this,(UStringBase *)&local_2f0,(UStringBase *)&local_2d0,
                        (UStringBase *)&local_2b0,(UStringBase *)&local_290);
  uVar3 = 0;
  if ((uVar16 & 4) == 0) goto LAB_00034109;
  FFileDisk::FFileDisk(local_148);
  local_21c = (int)&local_22c + 1;
  local_26c[0] = local_26c[0] & 0xffffff00;
  local_24c[0] = local_24c[0] & 0xffffff00;
  local_22c = CONCAT22(local_22c._2_2_,0x5f);
  local_270 = iVar14;
  local_25c = local_26c;
  local_258 = local_26c;
  local_250 = iVar14;
  local_23c = local_24c;
  local_238 = local_24c;
  local_230 = iVar14;
  local_218 = &local_22c;
  cVar8 = UStringBase<char,int>::Find_FromEnd
                    ((UStringBase<char,int> *)&local_2b0,(UStringBase *)&local_230,
                     (UStringBase *)&local_270,(UStringBase *)&local_250);
  local_230 = iVar14;
  if ((local_218 != &local_22c) && (local_218 != (undefined4 *)0x0)) {
    if ((uint)(local_22c - (int)local_218) < 0x81) {
      std::__node_alloc::_M_deallocate(local_218,local_22c - (int)local_218);
    }
    else {
      operator_delete(local_218);
    }
  }
  puVar15 = local_298;
  puVar10 = local_29c;
  if (cVar8 == '\0') {
    uVar18 = (int)local_29c - (int)local_298;
    uVar12 = (int)local_25c - (int)local_258;
    if (uVar12 < uVar18) {
      iVar14 = 0;
      if (uVar12 != 0) {
        memmove(local_258,local_298,uVar12);
        iVar14 = (int)local_25c - (int)local_258;
      }
      std::string::_M_append((string *)local_26c,(char *)((int)puVar15 + iVar14),(char *)puVar10);
    }
    else {
      if (uVar18 != 0) {
        memmove(local_258,local_298,uVar18);
      }
      puVar10 = (uint *)((int)local_258 + uVar18);
      if (puVar10 != local_25c) {
        *(char *)puVar10 = (char)*local_25c;
        local_25c = puVar10;
      }
    }
LAB_00034488:
    local_340 = 1;
    local_34c = 100;
  }
  else {
    if ((local_238 == local_23c) || (lVar9 = atol((char *)local_238), lVar9 < 1)) goto LAB_00034488;
    local_34c = lVar9 + 100;
    local_340 = lVar9 + 1;
  }
  local_330 = local_340;
LAB_00034a76:
  do {
    snprintf((char *)local_114,0x100,(char *)(unaff_EBX + 0x533e2),local_330);
    puVar15 = local_2d8;
    puVar10 = local_2dc;
    sVar19 = (int)local_2dc - (int)local_2d8;
    local_1f0 = iVar2 + 8;
    uVar18 = sVar19 + 1;
    local_1dc = local_1ec;
    local_1d8 = local_1ec;
    if (uVar18 == 0) {
LAB_00034adf:
                    /* WARNING: Subroutine does not return */
      std::__stl_throw_length_error((char *)(unaff_EBX + 0x533d1));
    }
    if (0x10 < uVar18) {
      local_300[0] = uVar18;
      if (uVar18 < 0x81) {
        local_1d8 = (undefined1 **)std::__node_alloc::_M_allocate(local_300);
      }
      else {
        local_1d8 = operator_new(uVar18);
      }
      local_1ec[0] = (undefined1 *)(local_300[0] + (int)local_1d8);
    }
    local_1dc = local_1d8;
    if (puVar10 != puVar15) {
      pvVar11 = memcpy(local_1d8,puVar15,sVar19);
      local_1dc = (undefined1 **)((int)pvVar11 + sVar19);
    }
    *(undefined1 *)local_1dc = 0;
    std::string::_M_append
              ((string *)local_1ec,(char *)(unaff_EBX + 0x533de),(char *)(unaff_EBX + 0x533df));
    ppuVar7 = local_1d8;
    ppuVar6 = local_1dc;
    sVar19 = (int)local_1dc - (int)local_1d8;
    local_1d0 = iVar2 + 8;
    uVar18 = sVar19 + 1;
    local_1bc = local_1cc;
    local_1b8 = local_1cc;
    if (uVar18 == 0) goto LAB_00034adf;
    if (0x10 < uVar18) {
      local_300[0] = uVar18;
      if (uVar18 < 0x81) {
        local_1b8 = (undefined1 **)std::__node_alloc::_M_allocate(local_300);
      }
      else {
        local_1b8 = operator_new(uVar18);
      }
      local_1cc[0] = (undefined1 *)(local_300[0] + (int)local_1b8);
    }
    local_1bc = local_1b8;
    if (ppuVar6 != ppuVar7) {
      pvVar11 = memcpy(local_1b8,ppuVar7,sVar19);
      local_1bc = (undefined1 **)((int)pvVar11 + sVar19);
    }
    puVar10 = local_2b8;
    *(undefined1 *)local_1bc = 0;
    sVar19 = strlen((char *)local_2b8);
    std::string::_M_append((string *)local_1cc,(char *)puVar10,(char *)((int)puVar10 + sVar19));
    ppuVar7 = local_1b8;
    ppuVar6 = local_1bc;
    sVar19 = (int)local_1bc - (int)local_1b8;
    local_1b0 = iVar2 + 8;
    uVar18 = sVar19 + 1;
    local_19c = local_1ac;
    local_198 = local_1ac;
    if (uVar18 == 0) goto LAB_00034adf;
    if (0x10 < uVar18) {
      local_300[0] = uVar18;
      if (uVar18 < 0x81) {
        local_198 = (undefined1 **)std::__node_alloc::_M_allocate(local_300);
      }
      else {
        local_198 = operator_new(uVar18);
      }
      local_1ac[0] = (undefined1 *)(local_300[0] + (int)local_198);
    }
    local_19c = local_198;
    if (ppuVar6 != ppuVar7) {
      pvVar11 = memcpy(local_198,ppuVar7,sVar19);
      local_19c = (undefined1 **)((int)pvVar11 + sVar19);
    }
    *(undefined1 *)local_19c = 0;
    std::string::_M_append
              ((string *)local_1ac,(char *)(unaff_EBX + 0x533e9),(char *)(unaff_EBX + 0x533ea));
    ppuVar7 = local_198;
    ppuVar6 = local_19c;
    sVar19 = (int)local_19c - (int)local_198;
    local_190 = iVar2 + 8;
    uVar18 = sVar19 + 1;
    local_17c = local_18c;
    local_178 = local_18c;
    if (uVar18 == 0) goto LAB_00034adf;
    if (0x10 < uVar18) {
      local_300[0] = uVar18;
      if (uVar18 < 0x81) {
        local_178 = (undefined1 **)std::__node_alloc::_M_allocate(local_300);
      }
      else {
        local_178 = operator_new(uVar18);
      }
      local_18c[0] = (undefined1 *)(local_300[0] + (int)local_178);
    }
    local_17c = local_178;
    if (ppuVar6 != ppuVar7) {
      pvVar11 = memcpy(local_178,ppuVar7,sVar19);
      local_17c = (undefined1 **)((int)pvVar11 + sVar19);
    }
    puVar10 = local_258;
    *(undefined1 *)local_17c = 0;
    sVar19 = strlen((char *)local_258);
    std::string::_M_append((string *)local_18c,(char *)puVar10,(char *)((int)puVar10 + sVar19));
    ppuVar7 = local_178;
    ppuVar6 = local_17c;
    local_210 = iVar2 + 8;
    sVar19 = (int)local_17c - (int)local_178;
    uVar18 = sVar19 + 1;
    local_1f8 = (string *)local_20c;
    local_1fc = (string *)local_20c;
    if (uVar18 == 0) goto LAB_00034adf;
    if (0x10 < uVar18) {
      local_300[0] = uVar18;
      if (uVar18 < 0x81) {
        local_1fc = (string *)std::__node_alloc::_M_allocate(local_300);
      }
      else {
        local_1fc = operator_new(uVar18);
      }
      local_1f8 = local_1fc;
      local_20c[0] = local_1fc + local_300[0];
    }
    local_1f8 = local_1fc;
    if (ppuVar6 != ppuVar7) {
      pvVar11 = memcpy(local_1fc,ppuVar7,sVar19);
      local_1fc = (string *)((int)pvVar11 + sVar19);
    }
    *local_1fc = (string)0x0;
    puVar10 = local_114;
    do {
      puVar15 = puVar10;
      uVar12 = *puVar15 + 0xfefefeff & ~*puVar15;
      uVar18 = uVar12 & 0x80808080;
      puVar10 = puVar15 + 1;
    } while (uVar18 == 0);
    if ((uVar12 & 0x8080) == 0) {
      puVar10 = (uint *)((int)puVar15 + 6);
      uVar18 = uVar18 >> 0x10;
    }
    std::string::_M_append
              ((string *)local_20c,(char *)local_114,
               (char *)((int)puVar10 + (-3 - (uint)CARRY1((byte)uVar18,(byte)uVar18))));
    local_190 = iVar2 + 8;
    if ((local_178 != local_18c) && (local_178 != (undefined1 **)0x0)) {
      if ((uint)((int)local_18c[0] - (int)local_178) < 0x81) {
        std::__node_alloc::_M_deallocate(local_178,(int)local_18c[0] - (int)local_178);
      }
      else {
        operator_delete(local_178);
      }
    }
    local_1b0 = iVar2 + 8;
    if ((local_198 != local_1ac) && (local_198 != (undefined1 **)0x0)) {
      if ((uint)((int)local_1ac[0] - (int)local_198) < 0x81) {
        std::__node_alloc::_M_deallocate(local_198,(int)local_1ac[0] - (int)local_198);
      }
      else {
        operator_delete(local_198);
      }
    }
    local_1d0 = iVar2 + 8;
    if ((local_1b8 != local_1cc) && (local_1b8 != (undefined1 **)0x0)) {
      if ((uint)((int)local_1cc[0] - (int)local_1b8) < 0x81) {
        std::__node_alloc::_M_deallocate(local_1b8,(int)local_1cc[0] - (int)local_1b8);
      }
      else {
        operator_delete(local_1b8);
      }
    }
    local_1f0 = iVar2 + 8;
    if ((local_1d8 != local_1ec) && (local_1d8 != (undefined1 **)0x0)) {
      if ((uint)((int)local_1ec[0] - (int)local_1d8) < 0x81) {
        std::__node_alloc::_M_deallocate(local_1d8,(int)local_1ec[0] - (int)local_1d8);
      }
      else {
        operator_delete(local_1d8);
      }
    }
    puVar10 = local_278;
    psVar4 = local_1fc;
    psVar5 = local_1f8;
    if ((uVar16 & 8) != 0) {
      iVar14 = iVar2 + 8;
      local_15c = (int)&local_16c + 1;
      local_16c = CONCAT22(local_16c._2_2_,0x2e);
      local_170 = iVar14;
      local_158 = (char *)&local_16c;
      sVar19 = strlen((char *)local_278);
      std::string::_M_append((string *)&local_16c,(char *)puVar10,(char *)((int)puVar10 + sVar19));
      pcVar1 = local_158;
      sVar19 = strlen(local_158);
      std::string::_M_append((string *)local_20c,pcVar1,pcVar1 + sVar19);
      psVar4 = local_1fc;
      psVar5 = local_1f8;
      local_170 = iVar14;
      if ((local_158 != (char *)&local_16c) && (local_158 != (char *)0x0)) {
        if ((uint)(local_16c - (int)local_158) < 0x81) {
          std::__node_alloc::_M_deallocate(local_158,local_16c - (int)local_158);
          psVar4 = local_1fc;
          psVar5 = local_1f8;
        }
        else {
          operator_delete(local_158);
          psVar4 = local_1fc;
          psVar5 = local_1f8;
        }
      }
    }
    local_1fc = psVar4;
    local_1f8 = psVar5;
    if (local_330 == local_340) {
      uVar18 = (int)psVar4 - (int)psVar5;
      puVar13 = *(undefined1 **)(param_2 + 0x14);
      pvVar11 = *(void **)(param_2 + 0x18);
      uVar12 = (int)puVar13 - (int)pvVar11;
      if (uVar12 < uVar18) {
        iVar14 = 0;
        if (uVar12 != 0) {
          memmove(pvVar11,psVar5,uVar12);
          iVar14 = *(int *)(param_2 + 0x14) - *(int *)(param_2 + 0x18);
        }
        std::string::_M_append(this_00,(char *)(psVar5 + iVar14),(char *)psVar4);
      }
      else {
        if (uVar18 != 0) {
          memmove(pvVar11,psVar5,uVar18);
          puVar13 = *(undefined1 **)(param_2 + 0x14);
          pvVar11 = *(void **)(param_2 + 0x18);
        }
        puVar17 = (undefined1 *)((int)pvVar11 + uVar18);
        if (puVar13 != puVar17) {
          *puVar17 = *puVar13;
          *(undefined1 **)(param_2 + 0x14) = puVar17 + (*(int *)(param_2 + 0x14) - (int)puVar13);
        }
      }
    }
    cVar8 = FFileBase::Open((FFileBase *)local_148,local_1f8,0);
    psVar5 = local_1f8;
    psVar4 = local_1fc;
    if (cVar8 == '\0') {
      uVar16 = (int)local_1fc - (int)local_1f8;
      puVar13 = *(undefined1 **)(param_2 + 0x14);
      pvVar11 = *(void **)(param_2 + 0x18);
      uVar18 = (int)puVar13 - (int)pvVar11;
      if (uVar18 < uVar16) {
        iVar14 = 0;
        if (uVar18 != 0) {
          memmove(pvVar11,local_1f8,uVar18);
          iVar14 = *(int *)(param_2 + 0x14) - *(int *)(param_2 + 0x18);
        }
        std::string::_M_append(this_00,(char *)(psVar5 + iVar14),(char *)psVar4);
      }
      else {
        if (uVar16 != 0) {
          memmove(pvVar11,local_1f8,uVar16);
          puVar13 = *(undefined1 **)(param_2 + 0x14);
          pvVar11 = *(void **)(param_2 + 0x18);
        }
        puVar17 = (undefined1 *)((int)pvVar11 + uVar16);
        if (puVar13 != puVar17) {
          *puVar17 = *puVar13;
          *(undefined1 **)(param_2 + 0x14) = puVar17 + (*(int *)(param_2 + 0x14) - (int)puVar13);
        }
      }
      local_210 = iVar2 + 8;
      uVar3 = 1;
      if ((local_1f8 != (string *)local_20c) && (local_1f8 != (string *)0x0)) {
        if ((uint)((int)local_20c[0] - (int)local_1f8) < 0x81) {
          std::__node_alloc::_M_deallocate(local_1f8,(int)local_20c[0] - (int)local_1f8);
        }
        else {
          operator_delete(local_1f8);
        }
      }
      goto LAB_00034eb0;
    }
    FFileBase::Close((FFileBase *)local_148);
    local_210 = iVar2 + 8;
    if ((local_1f8 == (string *)local_20c) || (local_1f8 == (string *)0x0)) {
LAB_00034a63:
      local_330 = local_330 + 1;
      if (local_34c < local_330) break;
      goto LAB_00034a76;
    }
    if ((uint)((int)local_20c[0] - (int)local_1f8) < 0x81) {
      std::__node_alloc::_M_deallocate(local_1f8,(int)local_20c[0] - (int)local_1f8);
      goto LAB_00034a63;
    }
    operator_delete(local_1f8);
    local_330 = local_330 + 1;
  } while (local_330 <= local_34c);
  uVar3 = 0;
LAB_00034eb0:
  local_250 = iVar2 + 8;
  if ((local_238 != local_24c) && (local_238 != (uint *)0x0)) {
    if (local_24c[0] - (int)local_238 < 0x81) {
      std::__node_alloc::_M_deallocate(local_238,local_24c[0] - (int)local_238);
    }
    else {
      operator_delete(local_238);
    }
  }
  local_270 = iVar2 + 8;
  if ((local_258 != local_26c) && (local_258 != (uint *)0x0)) {
    if (local_26c[0] - (int)local_258 < 0x81) {
      std::__node_alloc::_M_deallocate(local_258,local_26c[0] - (int)local_258);
    }
    else {
      operator_delete(local_258);
    }
  }
  FFileDisk::~FFileDisk(local_148);
LAB_00034109:
  local_290 = iVar2 + 8;
  if ((local_278 != local_28c) && (local_278 != (uint *)0x0)) {
    if (local_28c[0] - (int)local_278 < 0x81) {
      std::__node_alloc::_M_deallocate(local_278,local_28c[0] - (int)local_278);
    }
    else {
      operator_delete(local_278);
    }
  }
  local_2b0 = iVar2 + 8;
  if ((local_298 != local_2ac) && (local_298 != (uint *)0x0)) {
    if (local_2ac[0] - (int)local_298 < 0x81) {
      std::__node_alloc::_M_deallocate(local_298,local_2ac[0] - (int)local_298);
    }
    else {
      operator_delete(local_298);
    }
  }
  local_2d0 = iVar2 + 8;
  if ((local_2b8 != local_2cc) && (local_2b8 != (uint *)0x0)) {
    if (local_2cc[0] - (int)local_2b8 < 0x81) {
      std::__node_alloc::_M_deallocate(local_2b8,local_2cc[0] - (int)local_2b8);
    }
    else {
      operator_delete(local_2b8);
    }
  }
  local_2f0 = iVar2 + 8;
  if ((local_2d8 != local_2ec) && (local_2d8 != (uint *)0x0)) {
    if (local_2ec[0] - (int)local_2d8 < 0x81) {
      std::__node_alloc::_M_deallocate(local_2d8,local_2ec[0] - (int)local_2d8);
    }
    else {
      operator_delete(local_2d8);
    }
  }
  if (local_14 == **(int **)(unaff_EBX + 0x67efd)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002e000();
}

