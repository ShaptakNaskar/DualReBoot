/* 00069474 | STG::UPreference_Scene::InitializeAutoTimeOfDay */

/* STG::UPreference_Scene::InitializeAutoTimeOfDay() */

void STG::UPreference_Scene::InitializeAutoTimeOfDay(void)

{
  int *piVar1;
  int in_r0;
  undefined4 *puVar2;
  UPreference_TimeOfDay_Auto *pUVar3;
  int iVar4;
  UPreference_TimeOfDay_Auto *this;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = *(int *)(in_r0 + 8);
  if (iVar7 != *(int *)(in_r0 + 0x60)) {
    if (*(int *)(in_r0 + 0x60) == 0) {
      *(int *)(in_r0 + 0x60) = iVar7;
    }
    else {
      iVar4 = *(int *)(in_r0 + 0x5c);
      if (iVar4 != 0) {
        iVar5 = *(int *)(iVar4 + -4) * 0x8c + iVar4;
        if (iVar4 != iVar5) {
          do {
            piVar1 = (int *)(iVar5 + -0x8c);
            iVar5 = iVar5 + -0x8c;
            (**(code **)(*piVar1 + 0x38))(iVar5);
            iVar4 = *(int *)(in_r0 + 0x5c);
          } while (iVar4 != iVar5);
        }
        operator_delete__((void *)(iVar4 + -8));
      }
      *(undefined4 *)(in_r0 + 0x5c) = 0;
      *(int *)(in_r0 + 0x60) = iVar7;
    }
    if (iVar7 != 0) {
      puVar2 = operator_new__(iVar7 * 0x8c + 8);
      pUVar3 = (UPreference_TimeOfDay_Auto *)(puVar2 + 2);
      *puVar2 = 0x8c;
      puVar2[1] = iVar7;
      this = pUVar3;
      iVar4 = iVar7;
      while (iVar4 = iVar4 + -1, iVar4 != -1) {
        UPreference_TimeOfDay_Auto::UPreference_TimeOfDay_Auto(this);
        this = this + 0x8c;
      }
      iVar5 = 0;
      *(UPreference_TimeOfDay_Auto **)(in_r0 + 0x5c) = pUVar3;
      iVar4 = 0;
      iVar6 = 0;
      while( true ) {
        iVar6 = iVar6 + 1;
        (**(code **)(*(int *)(pUVar3 + iVar4) + 0x4c))(pUVar3 + iVar4,*(int *)(in_r0 + 4) + iVar5);
        iVar4 = iVar4 + 0x8c;
        iVar5 = iVar5 + 0x88;
        if (iVar6 == iVar7) break;
        pUVar3 = *(UPreference_TimeOfDay_Auto **)(in_r0 + 0x5c);
      }
      return;
    }
  }
  return;
}

