/* 000739f0 | STG::UPreference_Scene::InitializeAutoTimeOfDay */

/* STG::UPreference_Scene::InitializeAutoTimeOfDay() */

void __thiscall STG::UPreference_Scene::InitializeAutoTimeOfDay(UPreference_Scene *this)

{
  int iVar1;
  int *piVar2;
  UPreference_TimeOfDay_Auto *pUVar3;
  int iVar4;
  int iVar5;
  UPreference_TimeOfDay_Auto *this_00;
  int iVar6;
  int iVar7;
  int *piVar8;
  
  FUN_0002e044();
  iVar1 = *(int *)(this + 8);
  if (iVar1 != *(int *)(this + 0x60)) {
    if (*(int *)(this + 0x60) == 0) {
      *(int *)(this + 0x60) = iVar1;
    }
    else {
      piVar2 = *(int **)(this + 0x5c);
      if (piVar2 != (int *)0x0) {
        piVar8 = piVar2 + piVar2[-1] * 0x23;
        if (piVar2 != piVar8) {
          do {
            piVar8 = piVar8 + -0x23;
            (**(code **)(*piVar8 + 0x38))(piVar8);
            piVar2 = *(int **)(this + 0x5c);
          } while (piVar2 != piVar8);
        }
        operator_delete__(piVar2 + -1);
      }
      *(undefined4 *)(this + 0x5c) = 0;
      *(int *)(this + 0x60) = iVar1;
    }
    if (iVar1 != 0) {
      piVar2 = operator_new__(iVar1 * 0x8c + 4);
      *piVar2 = iVar1;
      pUVar3 = (UPreference_TimeOfDay_Auto *)(piVar2 + 1);
      this_00 = pUVar3;
      iVar6 = iVar1;
      while (iVar6 = iVar6 + -1, iVar6 != -1) {
        UPreference_TimeOfDay_Auto::UPreference_TimeOfDay_Auto(this_00);
        this_00 = this_00 + 0x8c;
      }
      iVar6 = 0;
      *(UPreference_TimeOfDay_Auto **)(this + 0x5c) = pUVar3;
      iVar7 = 0;
      while( true ) {
        iVar5 = iVar7 * 0x8c;
        iVar4 = *(int *)(this + 4) + iVar6;
        iVar7 = iVar7 + 1;
        iVar6 = iVar6 + 0x88;
        (**(code **)(*(int *)(pUVar3 + iVar5) + 0x4c))(pUVar3 + iVar5,iVar4);
        if (iVar7 == iVar1) break;
        pUVar3 = *(UPreference_TimeOfDay_Auto **)(this + 0x5c);
      }
      return;
    }
  }
  return;
}

