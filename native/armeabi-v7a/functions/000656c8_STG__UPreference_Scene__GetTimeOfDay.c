/* 000656c8 | STG::UPreference_Scene::GetTimeOfDay */

/* STG::UPreference_Scene::GetTimeOfDay(STG::GETimeOfDayAuto::ResultData const&, STG::GETimeOfDay&)
   const */

undefined4 __thiscall
STG::UPreference_Scene::GetTimeOfDay
          (UPreference_Scene *this,ResultData *param_1,GETimeOfDay *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  UPreference_TimeOfDay *this_00;
  undefined4 uVar6;
  int iVar7;
  GETimeOfDay aGStack_30 [12];
  
  iVar7 = *(int *)(this + 8);
  if (iVar7 == 0) {
    uVar6 = 0;
  }
  else {
    iVar4 = 0;
    iVar3 = 0;
    iVar5 = 0;
    uVar6 = 0;
    do {
      while( true ) {
        iVar2 = *(int *)(this + 0x5c);
        this_00 = (UPreference_TimeOfDay *)(*(int *)(this + 4) + iVar3);
        iVar1 = (**(code **)(*(int *)(*(int *)(this + 4) + iVar3) + 0x18))(this_00);
        if (iVar1 != 0) break;
LAB_0006570c:
        iVar5 = iVar5 + 1;
        iVar3 = iVar3 + 0x88;
        iVar4 = iVar4 + 0x8c;
        if (iVar5 == iVar7) {
          return uVar6;
        }
      }
      if (*(char *)(*(int *)(iVar2 + iVar4 + 0x7c) + *(int *)(iVar2 + iVar4 + 0x84)) != '\0') {
        iVar1 = UPreference_TimeOfDay::GetClosestValue(this_00,(GETimeOfDay *)param_1,param_2);
        if (iVar1 != 0) {
          uVar6 = 1;
        }
        goto LAB_0006570c;
      }
      iVar5 = iVar5 + 1;
      uVar6 = 1;
      iVar3 = iVar3 + 0x88;
      iVar4 = iVar4 + 0x8c;
      GETimeOfDay::GETimeOfDay
                (aGStack_30,*(undefined4 *)(*(int *)(this_00 + 0x7c) + *(int *)(this_00 + 0x84) * 4)
                 ,0xa8c0);
      GETimeOfDay::operator=(param_2,aGStack_30);
    } while (iVar5 != iVar7);
  }
  return uVar6;
}

