/* 0006e4d4 | STG::UPreference_Scene::GetPreferenceType */

/* WARNING: Removing unreachable block (ram,0x0006e198) */
/* WARNING: Removing unreachable block (ram,0x0006e1a0) */
/* WARNING: Removing unreachable block (ram,0x0006e2d8) */
/* WARNING: Removing unreachable block (ram,0x0006e1b4) */
/* STG::UPreference_Scene::GetPreferenceType(STG::UPreferenceBase const*) const */

int __thiscall
STG::UPreference_Scene::GetPreferenceType(UPreference_Scene *this,UPreferenceBase *param_1)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  size_t sVar4;
  uint *__s1;
  int iVar5;
  int *piVar6;
  size_t sVar7;
  int local_17c;
  uint local_178 [4];
  uint *local_168;
  uint *local_164;
  UStringBase aUStack_160 [28];
  UStringBase aUStack_144 [28];
  UStringBase aUStack_128 [28];
  UStringBase aUStack_10c [28];
  UStringBase aUStack_f0 [28];
  UStringBase aUStack_d4 [28];
  UStringBase aUStack_b8 [28];
  int local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined2 local_90;
  undefined1 local_8e;
  undefined1 local_8d [5];
  undefined1 *local_88;
  undefined4 *local_84;
  int local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined1 local_74;
  undefined1 local_73 [7];
  undefined1 *local_6c;
  undefined4 *local_68;
  int local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined2 local_54;
  undefined1 local_52 [2];
  undefined1 *local_50;
  undefined4 *local_4c;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_3c;
  undefined1 local_3b [7];
  undefined1 *local_34;
  undefined4 *local_30;
  int local_2c;
  
  if (param_1 == (UPreferenceBase *)0x0) {
    return 0xb;
  }
  piVar6 = *(int **)(DAT_0006e498 + 0x6dfe4);
  local_2c = *piVar6;
  iVar5 = *(int *)(DAT_0006e49c + 0x6dff0);
  local_178[0] = local_178[0] & 0xffffff00;
  local_17c = iVar5 + 8;
  local_168 = local_178;
  local_164 = local_178;
  (**(code **)(*(int *)param_1 + 0x10))(param_1,(UStringBase<char,int> *)&local_17c);
  __s1 = local_164;
  local_30 = &local_44;
  local_34 = local_3b;
  local_44 = DAT_0006e4a0;
  sVar3 = (int)local_34 - (int)local_30;
  sVar7 = (int)local_168 - (int)local_164;
  sVar4 = sVar3;
  if ((int)sVar7 <= (int)sVar3) {
    sVar4 = sVar7;
  }
  local_40 = DAT_0006e4a4;
  local_3c = 0x79;
  local_3b[0] = 0;
  local_48 = iVar5 + 8;
  iVar1 = memcmp(local_164,local_30,sVar4);
  if (((iVar1 != 0) || ((int)sVar7 < (int)sVar3)) || (iVar1 = 0, (int)sVar3 < (int)sVar7)) {
    iVar1 = 0xb;
  }
  local_48 = iVar5 + 8;
  if (iVar1 == 0xb) {
    local_4c = &local_60;
    local_64 = iVar5 + 8;
    local_60 = *(undefined4 *)(DAT_0006e4a8 + 0x6e118);
    uStack_5c = *(undefined4 *)(DAT_0006e4a8 + 0x6e11c);
    uStack_58 = *(undefined4 *)(DAT_0006e4a8 + 0x6e120);
    local_50 = local_52;
    sVar7 = (int)local_168 - (int)__s1;
    sVar3 = (int)local_50 - (int)local_4c;
    local_54 = (undefined2)*(undefined4 *)(DAT_0006e4a8 + 0x6e124);
    sVar4 = sVar3;
    if ((int)sVar7 <= (int)sVar3) {
      sVar4 = sVar7;
    }
    local_52[0] = 0;
    iVar2 = memcmp(__s1,local_4c,sVar4);
    if (((iVar2 == 0) && ((int)sVar3 <= (int)sVar7)) && ((int)sVar7 <= (int)sVar3)) {
      iVar1 = 1;
    }
    local_64 = iVar5 + 8;
    if (iVar1 == 0xb) {
      local_80 = iVar5 + 8;
      local_7c = DAT_0006e4ac;
      local_68 = &local_7c;
      local_6c = local_73;
      sVar7 = (int)local_6c - (int)local_68;
      local_78 = DAT_0006e4b0;
      sVar3 = (int)local_168 - (int)__s1;
      sVar4 = sVar7;
      if ((int)sVar3 <= (int)sVar7) {
        sVar4 = sVar3;
      }
      local_74 = 0x74;
      local_73[0] = 0;
      iVar2 = memcmp(__s1,local_68,sVar4);
      if (((iVar2 == 0) && ((int)sVar7 <= (int)sVar3)) && ((int)sVar3 <= (int)sVar7)) {
        iVar1 = 2;
      }
      local_80 = iVar5 + 8;
      if (iVar1 == 0xb) {
        local_84 = &local_98;
        local_9c = iVar5 + 8;
        local_88 = local_8d;
        local_98 = *(undefined4 *)(DAT_0006e4b4 + 0x6e26c);
        local_94 = *(undefined4 *)(DAT_0006e4b4 + 0x6e270);
        sVar7 = (int)local_88 - (int)local_84;
        sVar3 = (int)local_168 - (int)__s1;
        local_90 = (undefined2)*(undefined4 *)(DAT_0006e4b4 + 0x6e274);
        local_8e = (undefined1)((uint)*(undefined4 *)(DAT_0006e4b4 + 0x6e274) >> 0x10);
        sVar4 = sVar7;
        if ((int)sVar3 <= (int)sVar7) {
          sVar4 = sVar3;
        }
        local_8d[0] = 0;
        iVar2 = memcmp(__s1,local_84,sVar4);
        if (((iVar2 == 0) && ((int)sVar7 <= (int)sVar3)) && ((int)sVar3 <= (int)sVar7)) {
          iVar1 = 3;
        }
        local_9c = iVar5 + 8;
        __s1 = local_164;
        if (iVar1 == 0xb) {
          FUN_00068aec(aUStack_b8,DAT_0006e4b8 + 0x6e2f4);
          iVar2 = UStringBase<char,int>::IsEqual((UStringBase<char,int> *)&local_17c,aUStack_b8);
          if (iVar2 == 0) {
            UStringBase<char,int>::~UStringBase((UStringBase<char,int> *)aUStack_b8);
            FUN_00068aec(aUStack_d4,DAT_0006e4bc + 0x6e334);
            iVar2 = UStringBase<char,int>::IsEqual((UStringBase<char,int> *)&local_17c,aUStack_d4);
            if (iVar2 == 0) {
              UStringBase<char,int>::~UStringBase((UStringBase<char,int> *)aUStack_d4);
              FUN_00068aec(aUStack_f0,DAT_0006e4c0 + 0x6e360);
              iVar2 = UStringBase<char,int>::IsEqual((UStringBase<char,int> *)&local_17c,aUStack_f0)
              ;
              if (iVar2 == 0) {
                UStringBase<char,int>::~UStringBase((UStringBase<char,int> *)aUStack_f0);
                FUN_00068aec(aUStack_10c,DAT_0006e4c4 + 0x6e38c);
                iVar2 = UStringBase<char,int>::IsEqual
                                  ((UStringBase<char,int> *)&local_17c,aUStack_10c);
                if (iVar2 == 0) {
                  UStringBase<char,int>::~UStringBase((UStringBase<char,int> *)aUStack_10c);
                  FUN_00068aec(aUStack_128,DAT_0006e4c8 + 0x6e3b8);
                  iVar2 = UStringBase<char,int>::IsEqual
                                    ((UStringBase<char,int> *)&local_17c,aUStack_128);
                  if (iVar2 == 0) {
                    UStringBase<char,int>::~UStringBase((UStringBase<char,int> *)aUStack_128);
                    FUN_00068aec(aUStack_144,DAT_0006e4cc + 0x6e3e4);
                    iVar2 = UStringBase<char,int>::IsEqual
                                      ((UStringBase<char,int> *)&local_17c,aUStack_144);
                    if (iVar2 == 0) {
                      UStringBase<char,int>::~UStringBase((UStringBase<char,int> *)aUStack_144);
                      FUN_00068aec(aUStack_160,DAT_0006e4d0 + 0x6e410);
                      iVar2 = UStringBase<char,int>::IsEqual
                                        ((UStringBase<char,int> *)&local_17c,aUStack_160);
                      if (iVar2 == 0) {
                        UStringBase<char,int>::~UStringBase((UStringBase<char,int> *)aUStack_160);
                        UStringBase<char,int>::~UStringBase((UStringBase<char,int> *)&local_17c);
                        goto LAB_0006e0d8;
                      }
                      UStringBase<char,int>::~UStringBase((UStringBase<char,int> *)aUStack_160);
                      iVar1 = 10;
                      __s1 = local_164;
                    }
                    else {
                      UStringBase<char,int>::~UStringBase((UStringBase<char,int> *)aUStack_144);
                      iVar1 = 9;
                      __s1 = local_164;
                    }
                  }
                  else {
                    UStringBase<char,int>::~UStringBase((UStringBase<char,int> *)aUStack_128);
                    iVar1 = 8;
                    __s1 = local_164;
                  }
                }
                else {
                  UStringBase<char,int>::~UStringBase((UStringBase<char,int> *)aUStack_10c);
                  iVar1 = 7;
                  __s1 = local_164;
                }
              }
              else {
                UStringBase<char,int>::~UStringBase((UStringBase<char,int> *)aUStack_f0);
                iVar1 = 6;
                __s1 = local_164;
              }
            }
            else {
              UStringBase<char,int>::~UStringBase((UStringBase<char,int> *)aUStack_d4);
              iVar1 = 5;
              __s1 = local_164;
            }
          }
          else {
            UStringBase<char,int>::~UStringBase((UStringBase<char,int> *)aUStack_b8);
            iVar1 = 4;
            __s1 = local_164;
          }
        }
      }
    }
  }
  local_17c = iVar5 + 8;
  if ((__s1 != local_178) && (__s1 != (uint *)0x0)) {
    if (local_178[0] - (int)__s1 < 0x81) {
      std::__node_alloc::_M_deallocate(__s1,local_178[0] - (int)__s1);
    }
    else {
      operator_delete(__s1);
    }
  }
LAB_0006e0d8:
  if (local_2c == *piVar6) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1);
}

