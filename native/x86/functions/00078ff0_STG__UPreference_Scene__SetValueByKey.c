/* 00078ff0 | STG::UPreference_Scene::SetValueByKey */

/* STG::UPreference_Scene::SetValueByKey(STG::UPreference_Scene::EPreferenceType,
   STG::UStringBase<char, int> const&, STG::UStringBase<char, int> const&) */

undefined4 STG::UPreference_Scene::SetValueByKey(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  int unaff_EBX;
  
  FUN_0002e044();
  if (param_2 < 0xb) {
                    /* WARNING: Could not recover jumptable at 0x00079051. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(
                      "_ZNK3STG5UTime18ComputeSolarEventsElRKNS_9MLocationERNS_13MExplicitTypeINS0_10TimeStructILNS0_10ETimeValueE0EEEmEES9_"
                      + *(int *)(unaff_EBX + 0xf9f1 + param_2 * 4) + unaff_EBX + 0x5a))();
    return uVar1;
  }
  if (**(int **)("_ZNK3STG5UTime20InternalTime_Default13GetTime_LocalEP2tm" + unaff_EBX + 0x2f) ==
      **(int **)("_ZNK3STG5UTime20InternalTime_Default13GetTime_LocalEP2tm" + unaff_EBX + 0x2f)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002e000();
}

