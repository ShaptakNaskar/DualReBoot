/* 00074db0 | STG::UPreference_Scene::GatherPreferencesByType */

/* STG::UPreference_Scene::GatherPreferencesByType(STG::UPreference_Scene::EPreferenceType,
   STG::UArrayFixed<STG::UPreferenceBase const*, unsigned long>&) const */

undefined4 __thiscall
STG::UPreference_Scene::GatherPreferencesByType(undefined4 this,uint param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int unaff_EBX;
  
  FUN_0002e044();
  if (10 < param_2) {
    if (param_3[1] != 0) {
      if ((void *)*param_3 != (void *)0x0) {
        operator_delete__((void *)*param_3);
      }
      *param_3 = 0;
      param_3[1] = 0;
    }
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00074e19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)("_ZTSSt13runtime_error" +
                    *(int *)(unaff_EBX + 0x13c07 + param_2 * 4) + unaff_EBX + 0xf))();
  return uVar1;
}

