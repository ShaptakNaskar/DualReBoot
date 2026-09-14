/* 00064960 | STG::UPreference_Scene::InitializeAutoTimeOfDay */

/* STG::UPreference_Scene::InitializeAutoTimeOfDay() */

void STG::UPreference_Scene::InitializeAutoTimeOfDay(void)

{
  int in_r0;
  undefined4 *puVar1;
  UPreference_TimeOfDay_Auto *pUVar2;
  int iVar3;
  UPreference_TimeOfDay_Auto *pUVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = *(int *)(in_r0 + 8);
  if (iVar7 == *(int *)(in_r0 + 0x60)) {
    return;
  }
  if (*(int *)(in_r0 + 0x60) == 0) {
    *(int *)(in_r0 + 0x60) = iVar7;
    if (iVar7 == 0) {
      return;
    }
  }
  else {
    iVar3 = *(int *)(in_r0 + 0x5c);
    if (iVar3 != 0) {
      iVar5 = *(int *)(iVar3 + -4) * 0x8c + iVar3;
      if (iVar3 != iVar5) {
        do {
          iVar6 = iVar5 + -0x8c;
          (**(code **)(*(int *)(iVar5 + -0x8c) + 0x38))(iVar6);
          iVar3 = *(int *)(in_r0 + 0x5c);
          iVar5 = iVar6;
        } while (iVar3 != iVar6);
      }
      operator_delete__((void *)(iVar3 + -8));
    }
    *(int *)(in_r0 + 0x60) = iVar7;
    *(undefined4 *)(in_r0 + 0x5c) = 0;
    if (iVar7 == 0) {
      return;
    }
  }
  puVar1 = operator_new__(iVar7 * 0x8c + 8);
  pUVar2 = (UPreference_TimeOfDay_Auto *)(puVar1 + 2);
  *puVar1 = 0x8c;
  puVar1[1] = iVar7;
  pUVar4 = pUVar2;
  iVar3 = iVar7;
  while (iVar3 = iVar3 + -1, iVar3 != -1) {
    UPreference_TimeOfDay_Auto::UPreference_TimeOfDay_Auto(pUVar4);
    pUVar4 = pUVar4 + 0x8c;
  }
  iVar5 = 0;
  iVar3 = 0;
  iVar6 = 0;
  *(UPreference_TimeOfDay_Auto **)(in_r0 + 0x5c) = pUVar2;
  while( true ) {
    pUVar4 = pUVar2 + iVar3;
    iVar6 = iVar6 + 1;
    pUVar2 = pUVar2 + iVar3;
    iVar3 = iVar3 + 0x8c;
    (**(code **)(*(int *)pUVar4 + 0x4c))(pUVar2,*(int *)(in_r0 + 4) + iVar5);
    iVar5 = iVar5 + 0x88;
    if (iVar6 == iVar7) break;
    pUVar2 = *(UPreference_TimeOfDay_Auto **)(in_r0 + 0x5c);
  }
  return;
}

