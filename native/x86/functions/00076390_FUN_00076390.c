/* 00076390 | FUN_00076390 */

int FUN_00076390(void)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  size_t sVar5;
  size_t sVar6;
  UStringBase<char,int> *pUVar7;
  int unaff_EBX;
  size_t sVar8;
  int iVar9;
  UStringBase<char,int> *pUVar10;
  UStringBase<char,int> *__s2;
  int local_180;
  uint local_17c [4];
  UStringBase<char,int> *local_16c;
  UStringBase<char,int> *local_168;
  int local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined2 local_154;
  undefined1 local_152;
  undefined1 local_151 [5];
  undefined1 *local_14c;
  undefined4 *local_148;
  int local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined1 local_134;
  undefined1 local_133 [7];
  undefined1 *local_12c;
  undefined4 *local_128;
  int local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined2 local_110;
  undefined1 local_10e [2];
  undefined1 *local_10c;
  undefined4 *local_108;
  int local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined1 local_f4;
  undefined1 local_f3 [7];
  undefined1 *local_ec;
  UStringBase<char,int> *local_e8;
  UStringBase<char,int> local_d8 [28];
  UStringBase<char,int> local_bc [28];
  UStringBase<char,int> local_a0 [28];
  UStringBase<char,int> local_84 [28];
  UStringBase<char,int> local_68 [28];
  UStringBase<char,int> local_4c [28];
  UStringBase<char,int> local_30 [28];
  int local_14;
  
  local_14 = 0x7639b;
  piVar3 = (int *)FUN_0002e044();
  local_17c[0] = local_17c[0] & 0xffffff00;
  local_14 = **(int **)("_ZN3STG21UPreference_TimeOfDay10InitializeERKNS_11UStringBaseIciEES4_S4_m"
                       + unaff_EBX + 1);
  iVar1 = *(int *)("_ZN3STG21UPreference_TimeOfDay10InitializeERKNS_11UStringBaseIciEES4_S4_m" +
                  unaff_EBX + 5);
  local_180 = iVar1 + 8;
  local_16c = (UStringBase<char,int> *)local_17c;
  local_168 = (UStringBase<char,int> *)local_17c;
  (**(code **)(*piVar3 + 0x10))(piVar3,&local_180);
  __s2 = (UStringBase<char,int> *)&local_fc;
  local_ec = local_f3;
  sVar6 = (int)local_16c - (int)local_168;
  sVar8 = (int)local_ec - (int)__s2;
  sVar5 = sVar8;
  if ((int)sVar6 < (int)sVar8) {
    sVar5 = sVar6;
  }
  local_fc = 0x656d6954;
  local_f8 = 0x6144664f;
  local_f4 = 0x79;
  local_f3[0] = 0;
  pUVar10 = local_168;
  local_100 = iVar1 + 8;
  local_e8 = __s2;
  iVar4 = memcmp(local_168,__s2,sVar5);
  iVar9 = 0xb;
  if (iVar4 == 0) {
    iVar4 = 0;
    if ((int)sVar8 < (int)sVar6) {
      iVar4 = 0xb;
    }
    if ((int)sVar8 <= (int)sVar6) {
      iVar9 = iVar4;
    }
  }
  local_100 = iVar1 + 8;
  if (iVar9 == 0xb) {
    local_108 = &local_11c;
    sVar8 = (int)local_16c - (int)local_168;
    local_10c = local_10e;
    sVar6 = (int)local_10c - (int)local_108;
    local_11c = 0x656d6954;
    sVar5 = sVar6;
    if ((int)sVar8 < (int)sVar6) {
      sVar5 = sVar8;
    }
    local_118 = 0x6144664f;
    __s2 = (UStringBase<char,int> *)&local_11c;
    local_114 = 0x75415f79;
    local_110 = 0x6f74;
    local_10e[0] = 0;
    pUVar10 = local_168;
    local_120 = local_100;
    iVar4 = memcmp(local_168,__s2,sVar5);
    if (((iVar4 == 0) && ((int)sVar6 <= (int)sVar8)) && ((int)sVar8 <= (int)sVar6)) {
      iVar9 = 1;
    }
    local_120 = iVar1 + 8;
    if (iVar9 == 0xb) {
      local_128 = &local_13c;
      local_12c = local_133;
      sVar8 = (int)local_16c - (int)local_168;
      sVar6 = (int)local_12c - (int)local_128;
      local_13c = 0x656d6143;
      sVar5 = sVar6;
      if ((int)sVar8 < (int)sVar6) {
        sVar5 = sVar8;
      }
      local_138 = 0x65536172;
      __s2 = (UStringBase<char,int> *)&local_13c;
      local_134 = 0x74;
      local_133[0] = 0;
      pUVar10 = local_168;
      local_140 = local_120;
      iVar4 = memcmp(local_168,__s2,sVar5);
      if (((iVar4 == 0) && ((int)sVar6 <= (int)sVar8)) && ((int)sVar8 <= (int)sVar6)) {
        iVar9 = 2;
      }
      local_140 = iVar1 + 8;
      if (iVar9 == 0xb) {
        local_148 = &local_15c;
        local_14c = local_151;
        sVar8 = (int)local_16c - (int)local_168;
        sVar6 = (int)local_14c - (int)local_148;
        local_15c = 0x65646f4d;
        sVar5 = sVar6;
        if ((int)sVar8 < (int)sVar6) {
          sVar5 = sVar8;
        }
        local_158 = 0x676f546c;
        __s2 = (UStringBase<char,int> *)&local_15c;
        local_154 = 0x6c67;
        local_152 = 0x65;
        local_151[0] = 0;
        pUVar10 = local_168;
        local_160 = local_140;
        iVar4 = memcmp(local_168,__s2,sVar5);
        if (((iVar4 == 0) && ((int)sVar6 <= (int)sVar8)) && ((int)sVar8 <= (int)sVar6)) {
          iVar9 = 3;
        }
        local_160 = iVar1 + 8;
        if (iVar9 == 0xb) {
          FUN_00072f30();
          __s2 = local_30;
          cVar2 = STG::UStringBase<char,int>::IsEqual((UStringBase *)&local_180);
          if (cVar2 == '\0') {
            pUVar10 = local_30;
            STG::UStringBase<char,int>::~UStringBase(pUVar10);
            FUN_00072f30(pUVar10,__s2);
            __s2 = local_4c;
            cVar2 = STG::UStringBase<char,int>::IsEqual((UStringBase *)&local_180);
            if (cVar2 == '\0') {
              pUVar10 = local_4c;
              STG::UStringBase<char,int>::~UStringBase(pUVar10);
              FUN_00072f30(pUVar10,__s2);
              __s2 = local_68;
              cVar2 = STG::UStringBase<char,int>::IsEqual((UStringBase *)&local_180);
              pUVar10 = local_68;
              if (cVar2 == '\0') {
                STG::UStringBase<char,int>::~UStringBase(pUVar10);
                FUN_00072f30(pUVar10,__s2);
                __s2 = local_84;
                cVar2 = STG::UStringBase<char,int>::IsEqual((UStringBase *)&local_180);
                pUVar10 = local_84;
                if (cVar2 == '\0') {
                  STG::UStringBase<char,int>::~UStringBase(pUVar10);
                  FUN_00072f30(pUVar10,__s2);
                  __s2 = local_a0;
                  cVar2 = STG::UStringBase<char,int>::IsEqual((UStringBase *)&local_180);
                  if (cVar2 == '\0') {
                    pUVar10 = local_a0;
                    STG::UStringBase<char,int>::~UStringBase(pUVar10);
                    FUN_00072f30(pUVar10,__s2);
                    __s2 = local_bc;
                    cVar2 = STG::UStringBase<char,int>::IsEqual((UStringBase *)&local_180);
                    if (cVar2 == '\0') {
                      pUVar10 = local_bc;
                      STG::UStringBase<char,int>::~UStringBase(pUVar10);
                      FUN_00072f30(pUVar10,__s2);
                      __s2 = local_d8;
                      cVar2 = STG::UStringBase<char,int>::IsEqual((UStringBase *)&local_180);
                      if (cVar2 == '\0') {
                        STG::UStringBase<char,int>::~UStringBase(local_d8);
                        pUVar10 = (UStringBase<char,int> *)&local_180;
                        STG::UStringBase<char,int>::~UStringBase(pUVar10);
                        goto LAB_000764bf;
                      }
                      pUVar10 = local_d8;
                      iVar9 = 10;
                      STG::UStringBase<char,int>::~UStringBase(pUVar10);
                    }
                    else {
                      pUVar10 = local_bc;
                      iVar9 = 9;
                      STG::UStringBase<char,int>::~UStringBase(pUVar10);
                    }
                  }
                  else {
                    pUVar10 = local_a0;
                    iVar9 = 8;
                    STG::UStringBase<char,int>::~UStringBase(pUVar10);
                  }
                }
                else {
                  iVar9 = 7;
                  STG::UStringBase<char,int>::~UStringBase(pUVar10);
                }
              }
              else {
                iVar9 = 6;
                STG::UStringBase<char,int>::~UStringBase(pUVar10);
              }
            }
            else {
              pUVar10 = local_4c;
              iVar9 = 5;
              STG::UStringBase<char,int>::~UStringBase(pUVar10);
            }
          }
          else {
            pUVar10 = local_30;
            iVar9 = 4;
            STG::UStringBase<char,int>::~UStringBase(pUVar10);
          }
        }
      }
    }
  }
  local_180 = iVar1 + 8;
  if ((local_168 != (UStringBase<char,int> *)local_17c) &&
     (local_168 != (UStringBase<char,int> *)0x0)) {
    pUVar7 = (UStringBase<char,int> *)(local_17c[0] - (int)local_168);
    pUVar10 = local_168;
    if (pUVar7 < (UStringBase<char,int> *)0x81) {
      std::__node_alloc::_M_deallocate(local_168,(uint)pUVar7);
      __s2 = pUVar7;
    }
    else {
      operator_delete(local_168);
    }
  }
LAB_000764bf:
  if (local_14 ==
      **(int **)("_ZN3STG21UPreference_TimeOfDay10InitializeERKNS_11UStringBaseIciEES4_S4_m" +
                unaff_EBX + 1)) {
    return iVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002e000(pUVar10,__s2);
}

