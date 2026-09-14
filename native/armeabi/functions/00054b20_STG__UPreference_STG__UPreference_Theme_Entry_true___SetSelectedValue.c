/* 00054b20 | STG::UPreference<STG::UPreference_Theme_Entry,true>::SetSelectedValue */

/* STG::UPreference<STG::UPreference_Theme_Entry,
   true>::SetSelectedValue(STG::UPreference_Theme_Entry const&) */

undefined4 __thiscall
STG::UPreference<STG::UPreference_Theme_Entry,true>::SetSelectedValue
          (UPreference<STG::UPreference_Theme_Entry,true> *this,UPreference_Theme_Entry *param_1)

{
  int iVar1;
  size_t sVar2;
  int iVar3;
  undefined4 *puVar4;
  size_t sVar5;
  void *__s1;
  int iVar6;
  size_t sVar7;
  size_t sVar8;
  
  iVar3 = *(int *)(this + 0x80);
  if (iVar3 != 0) {
    __s1 = *(void **)(param_1 + 0x18);
    puVar4 = (undefined4 *)(*(int *)(this + 0x7c) + 0x18);
    iVar6 = 0;
    sVar5 = *(int *)(param_1 + 0x14) - (int)__s1;
    do {
      sVar7 = puVar4[-1] - (int)*puVar4;
      sVar2 = sVar7;
      if ((int)sVar5 <= (int)sVar7) {
        sVar2 = sVar5;
      }
      iVar1 = memcmp(__s1,(void *)*puVar4,sVar2);
      if (((iVar1 == 0) && ((int)sVar7 <= (int)sVar5)) && ((int)sVar5 <= (int)sVar7)) {
        sVar8 = *(int *)(param_1 + 0x30) - (int)*(void **)(param_1 + 0x34);
        sVar7 = puVar4[6] - (int)puVar4[7];
        sVar2 = sVar7;
        if ((int)sVar8 <= (int)sVar7) {
          sVar2 = sVar8;
        }
        iVar1 = memcmp(*(void **)(param_1 + 0x34),(void *)puVar4[7],sVar2);
        if (((iVar1 == 0) && ((int)sVar7 <= (int)sVar8)) && ((int)sVar8 <= (int)sVar7)) {
          (**(code **)(*(int *)this + 0x24))(this,iVar6);
          return 1;
        }
      }
      iVar6 = iVar6 + 1;
      puVar4 = puVar4 + 0xe;
    } while (iVar6 != iVar3);
  }
  return 0;
}

