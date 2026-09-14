/* 00069a94 | STG::UPreference_Scene::GetPreferenceType */

/* WARNING: Removing unreachable block (ram,0x00069784) */
/* WARNING: Removing unreachable block (ram,0x0006978c) */
/* WARNING: Removing unreachable block (ram,0x000698d0) */
/* WARNING: Removing unreachable block (ram,0x000697a0) */
/* WARNING: Removing unreachable block (ram,0x000695a0) */
/* WARNING: Removing unreachable block (ram,0x000695a8) */
/* WARNING: Removing unreachable block (ram,0x000695bc) */
/* WARNING: Removing unreachable block (ram,0x00069618) */
/* WARNING: Removing unreachable block (ram,0x000696c0) */
/* WARNING: Removing unreachable block (ram,0x000696c8) */
/* WARNING: Removing unreachable block (ram,0x0006988c) */
/* WARNING: Removing unreachable block (ram,0x000696dc) */
/* WARNING: Removing unreachable block (ram,0x00069854) */
/* WARNING: Removing unreachable block (ram,0x0006985c) */
/* WARNING: Removing unreachable block (ram,0x000698dc) */
/* WARNING: Removing unreachable block (ram,0x00069870) */
/* STG::UPreference_Scene::GetPreferenceType(STG::UPreferenceBase const*) const */

int __thiscall
STG::UPreference_Scene::GetPreferenceType(UPreference_Scene *this,UPreferenceBase *param_1)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  uint *__s1;
  int iVar4;
  int *piVar5;
  size_t sVar6;
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
  undefined4 uStack_94;
  undefined2 uStack_90;
  undefined1 local_8e;
  undefined1 local_8d [5];
  undefined1 *local_88;
  undefined4 *local_84;
  int local_80;
  undefined4 local_7c;
  undefined4 uStack_78;
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
  undefined4 uStack_40;
  undefined1 local_3c;
  undefined1 local_3b [7];
  undefined1 *local_34;
  undefined4 *local_30;
  int local_2c;
  
  if (param_1 == (UPreferenceBase *)0x0) {
    return 0xb;
  }
  piVar5 = *(int **)(DAT_00069a60 + 0x694d8);
  local_178[0] = local_178[0] & 0xffffff00;
  local_2c = *piVar5;
  iVar4 = *(int *)(DAT_00069a64 + 0x694ec);
  local_17c = iVar4 + 8;
  local_168 = local_178;
  local_164 = local_178;
  (**(code **)(*(int *)param_1 + 0x10))(param_1,(UStringBase<char,int> *)&local_17c);
  __s1 = local_164;
  local_34 = local_3b;
  local_44 = *(undefined4 *)(DAT_00069a68 + 0x69524);
  uStack_40 = *(undefined4 *)(DAT_00069a68 + 0x69528);
  sVar7 = (int)local_34 - (int)&local_44;
  sVar6 = (int)local_168 - (int)local_164;
  local_3c = (undefined1)*(undefined4 *)(DAT_00069a68 + 0x6952c);
  sVar3 = sVar7;
  if ((int)sVar6 <= (int)sVar7) {
    sVar3 = sVar6;
  }
  local_3b[0] = 0;
  local_48 = iVar4 + 8;
  local_30 = &local_44;
  iVar1 = memcmp(local_164,&local_44,sVar3);
  if (((iVar1 != 0) || ((int)sVar6 < (int)sVar7)) || (iVar1 = 0, (int)sVar7 < (int)sVar6)) {
    iVar1 = 0xb;
  }
  local_48 = iVar4 + 8;
  if (iVar1 == 0xb) {
    local_4c = &local_60;
    local_64 = iVar4 + 8;
    local_60 = *(undefined4 *)(DAT_00069a6c + 0x69640);
    uStack_5c = *(undefined4 *)(DAT_00069a6c + 0x69644);
    uStack_58 = *(undefined4 *)(DAT_00069a6c + 0x69648);
    local_50 = local_52;
    sVar7 = (int)local_50 - (int)local_4c;
    sVar6 = (int)local_168 - (int)__s1;
    local_54 = (undefined2)*(undefined4 *)(DAT_00069a6c + 0x6964c);
    sVar3 = sVar7;
    if ((int)sVar6 <= (int)sVar7) {
      sVar3 = sVar6;
    }
    local_52[0] = 0;
    iVar2 = memcmp(__s1,local_4c,sVar3);
    if (((iVar2 == 0) && ((int)sVar7 <= (int)sVar6)) && ((int)sVar6 <= (int)sVar7)) {
      iVar1 = 1;
    }
    local_64 = iVar4 + 8;
    if (iVar1 == 0xb) {
      local_68 = &local_7c;
      local_80 = iVar4 + 8;
      local_7c = *(undefined4 *)(DAT_00069a70 + 0x69704);
      uStack_78 = *(undefined4 *)(DAT_00069a70 + 0x69708);
      local_6c = local_73;
      sVar6 = (int)local_6c - (int)local_68;
      local_74 = (undefined1)*(undefined4 *)(DAT_00069a70 + 0x6970c);
      sVar7 = (int)local_168 - (int)__s1;
      local_73[0] = 0;
      sVar3 = sVar6;
      if ((int)sVar7 <= (int)sVar6) {
        sVar3 = sVar7;
      }
      iVar2 = memcmp(__s1,local_68,sVar3);
      if (((iVar2 == 0) && ((int)sVar6 <= (int)sVar7)) && ((int)sVar7 <= (int)sVar6)) {
        iVar1 = 2;
      }
      local_80 = iVar4 + 8;
      if (iVar1 == 0xb) {
        local_84 = &local_98;
        local_9c = iVar4 + 8;
        local_98 = *(undefined4 *)(DAT_00069a74 + 0x697c8);
        uStack_94 = *(undefined4 *)(DAT_00069a74 + 0x697cc);
        local_88 = local_8d;
        sVar6 = (int)local_88 - (int)local_84;
        sVar7 = (int)local_168 - (int)__s1;
        uStack_90 = (undefined2)*(undefined4 *)(DAT_00069a74 + 0x697d0);
        local_8e = (undefined1)((uint)*(undefined4 *)(DAT_00069a74 + 0x697d0) >> 0x10);
        sVar3 = sVar6;
        if ((int)sVar7 <= (int)sVar6) {
          sVar3 = sVar7;
        }
        local_8d[0] = 0;
        iVar2 = memcmp(__s1,local_84,sVar3);
        if (((iVar2 == 0) && ((int)sVar6 <= (int)sVar7)) && ((int)sVar7 <= (int)sVar6)) {
          iVar1 = 3;
        }
        local_9c = iVar4 + 8;
        __s1 = local_164;
        if (iVar1 == 0xb) {
          FUN_00063fd8(aUStack_b8,DAT_00069a78 + 0x698a8);
          iVar2 = UStringBase<char,int>::IsEqual((UStringBase<char,int> *)&local_17c,aUStack_b8);
          if (iVar2 == 0) {
            UStringBase<char,int>::~UStringBase((UStringBase<char,int> *)aUStack_b8);
            FUN_00063fd8(aUStack_d4,DAT_00069a7c + 0x698fc);
            iVar2 = UStringBase<char,int>::IsEqual((UStringBase<char,int> *)&local_17c,aUStack_d4);
            if (iVar2 == 0) {
              UStringBase<char,int>::~UStringBase((UStringBase<char,int> *)aUStack_d4);
              FUN_00063fd8(aUStack_f0,DAT_00069a80 + 0x69928);
              iVar2 = UStringBase<char,int>::IsEqual((UStringBase<char,int> *)&local_17c,aUStack_f0)
              ;
              if (iVar2 == 0) {
                UStringBase<char,int>::~UStringBase((UStringBase<char,int> *)aUStack_f0);
                FUN_00063fd8(aUStack_10c,DAT_00069a84 + 0x69954);
                iVar2 = UStringBase<char,int>::IsEqual
                                  ((UStringBase<char,int> *)&local_17c,aUStack_10c);
                if (iVar2 == 0) {
                  UStringBase<char,int>::~UStringBase((UStringBase<char,int> *)aUStack_10c);
                  FUN_00063fd8(aUStack_128,DAT_00069a88 + 0x69980);
                  iVar2 = UStringBase<char,int>::IsEqual
                                    ((UStringBase<char,int> *)&local_17c,aUStack_128);
                  if (iVar2 == 0) {
                    UStringBase<char,int>::~UStringBase((UStringBase<char,int> *)aUStack_128);
                    FUN_00063fd8(aUStack_144,DAT_00069a8c + 0x699ac);
                    iVar2 = UStringBase<char,int>::IsEqual
                                      ((UStringBase<char,int> *)&local_17c,aUStack_144);
                    if (iVar2 == 0) {
                      UStringBase<char,int>::~UStringBase((UStringBase<char,int> *)aUStack_144);
                      FUN_00063fd8(aUStack_160,DAT_00069a90 + 0x699d8);
                      iVar2 = UStringBase<char,int>::IsEqual
                                        ((UStringBase<char,int> *)&local_17c,aUStack_160);
                      if (iVar2 == 0) {
                        UStringBase<char,int>::~UStringBase((UStringBase<char,int> *)aUStack_160);
                        UStringBase<char,int>::~UStringBase((UStringBase<char,int> *)&local_17c);
                        goto LAB_000695fc;
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
  local_17c = iVar4 + 8;
  if ((__s1 != local_178) && (__s1 != (uint *)0x0)) {
    if (local_178[0] - (int)__s1 < 0x81) {
      std::__node_alloc::_M_deallocate(__s1,local_178[0] - (int)__s1);
    }
    else {
      operator_delete(__s1);
    }
  }
LAB_000695fc:
  if (local_2c == *piVar5) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1);
}

