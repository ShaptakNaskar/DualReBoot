/* 00074890 | STG::UPreference_Scene::GetTimeOfDay */

/* STG::UPreference_Scene::GetTimeOfDay(STG::GETimeOfDayAuto::ResultData const&, STG::GETimeOfDay&)
   const */

undefined1 __thiscall
STG::UPreference_Scene::GetTimeOfDay
          (UPreference_Scene *this,ResultData *param_1,GETimeOfDay *param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  UPreference_TimeOfDay *this_00;
  int iVar6;
  undefined1 local_3c;
  GETimeOfDay local_24 [16];
  undefined4 uStack_14;
  
  uStack_14 = 0x74899;
  FUN_0002e044();
  local_3c = 0;
  iVar1 = *(int *)(this + 8);
  if (iVar1 != 0) {
    iVar5 = 0;
    iVar6 = 0;
    do {
      while( true ) {
        this_00 = (UPreference_TimeOfDay *)(iVar5 + *(int *)(this + 4));
        iVar4 = *(int *)(this + 0x5c);
        iVar3 = (**(code **)(*(int *)this_00 + 0x18))(this_00);
        if (iVar3 != 0) break;
LAB_000748f3:
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 0x88;
        if (iVar6 == iVar1) {
          return local_3c;
        }
      }
      iVar4 = iVar6 * 0x8c + iVar4;
      if (*(char *)(*(int *)(iVar4 + 0x7c) + *(int *)(iVar4 + 0x84)) != '\0') {
        cVar2 = UPreference_TimeOfDay::GetClosestValue(this_00,(GETimeOfDay *)param_1,param_2);
        if (cVar2 != '\0') {
          local_3c = 1;
        }
        goto LAB_000748f3;
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 0x88;
      GETimeOfDay::GETimeOfDay
                (local_24,*(undefined4 *)(*(int *)(this_00 + 0x7c) + *(int *)(this_00 + 0x84) * 4),
                 0xa8c0);
      GETimeOfDay::operator=(param_2,local_24);
      local_3c = 1;
    } while (iVar6 != iVar1);
  }
  return local_3c;
}

