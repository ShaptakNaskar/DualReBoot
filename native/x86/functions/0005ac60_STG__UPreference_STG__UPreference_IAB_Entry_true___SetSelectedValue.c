/* 0005ac60 | STG::UPreference<STG::UPreference_IAB_Entry,true>::SetSelectedValue */

/* STG::UPreference<STG::UPreference_IAB_Entry, true>::SetSelectedValue(STG::UPreference_IAB_Entry
   const&) */

undefined4 __thiscall
STG::UPreference<STG::UPreference_IAB_Entry,true>::SetSelectedValue
          (UPreference<STG::UPreference_IAB_Entry,true> *this,UPreference_IAB_Entry *param_1)

{
  int iVar1;
  void *__s1;
  undefined4 uVar2;
  int iVar3;
  size_t sVar4;
  size_t sVar5;
  size_t sVar6;
  int *piVar7;
  size_t sVar8;
  int local_24;
  
  uVar2 = FUN_0002e044();
  iVar1 = *(int *)(this + 0x80);
  if (iVar1 == 0) {
    return uVar2;
  }
  local_24 = 0;
  __s1 = *(void **)(param_1 + 0x18);
  sVar8 = *(int *)(param_1 + 0x14) - (int)__s1;
  piVar7 = (int *)(*(int *)(this + 0x7c) + 0x14);
  do {
    sVar5 = *piVar7 - piVar7[1];
    sVar4 = sVar8;
    if ((int)sVar5 <= (int)sVar8) {
      sVar4 = sVar5;
    }
    iVar3 = memcmp(__s1,(void *)piVar7[1],sVar4);
    if (((iVar3 == 0) && ((int)sVar5 <= (int)sVar8)) && ((int)sVar8 <= (int)sVar5)) {
      sVar5 = piVar7[7] - piVar7[8];
      sVar6 = *(int *)(param_1 + 0x30) - (int)*(void **)(param_1 + 0x34);
      sVar4 = sVar6;
      if ((int)sVar5 <= (int)sVar6) {
        sVar4 = sVar5;
      }
      iVar3 = memcmp(*(void **)(param_1 + 0x34),(void *)piVar7[8],sVar4);
      if (((iVar3 == 0) && ((int)sVar5 <= (int)sVar6)) && ((int)sVar6 <= (int)sVar5)) {
        (**(code **)(*(int *)this + 0x24))(this,local_24);
        return 1;
      }
    }
    local_24 = local_24 + 1;
    piVar7 = piVar7 + 0xe;
    if (local_24 == iVar1) {
      return 0;
    }
  } while( true );
}

