/* 000749a0 | STG::UPreference_Scene::SetTimeOfDay */

/* STG::UPreference_Scene::SetTimeOfDay(STG::GETimeOfDay::EPhase) */

undefined4 STG::UPreference_Scene::SetTimeOfDay(int param_1)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  piVar1 = *(int **)(param_1 + 4);
  piVar3 = piVar1 + *(int *)(param_1 + 8) * 0x22;
  while (piVar1 < piVar3) {
    cVar2 = (**(code **)(*piVar1 + 0x40))(piVar1,&stack0x00000008);
    piVar1 = piVar1 + 0x22;
    if (cVar2 != '\0') {
      uVar4 = 1;
    }
  }
  return uVar4;
}

