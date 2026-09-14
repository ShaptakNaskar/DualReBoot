/* 0006a2b0 | STG::UPreference_Scene::SetTimeOfDay */

/* STG::UPreference_Scene::SetTimeOfDay(STG::GETimeOfDay::EPhase) */

undefined4 __thiscall
STG::UPreference_Scene::SetTimeOfDay(UPreference_Scene *this,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 local_14;
  
  piVar2 = *(int **)(this + 4);
  piVar4 = piVar2 + *(int *)(this + 8) * 0x22;
  uVar3 = 0;
  local_14 = param_2;
  while (piVar2 < piVar4) {
    iVar1 = (**(code **)(*piVar2 + 0x40))(piVar2,&local_14);
    piVar2 = piVar2 + 0x22;
    if (iVar1 != 0) {
      uVar3 = 1;
    }
  }
  return uVar3;
}

