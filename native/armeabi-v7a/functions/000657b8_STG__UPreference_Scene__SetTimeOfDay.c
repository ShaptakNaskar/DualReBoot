/* 000657b8 | STG::UPreference_Scene::SetTimeOfDay */

/* STG::UPreference_Scene::SetTimeOfDay(STG::GETimeOfDay::EPhase) */

undefined4 __thiscall
STG::UPreference_Scene::SetTimeOfDay(UPreference_Scene *this,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 local_14;
  
  piVar3 = *(int **)(this + 4);
  iVar6 = *(int *)(this + 8);
  uVar5 = 0;
  piVar1 = piVar3;
  local_14 = param_2;
  while (piVar1 < piVar3 + iVar6 * 0x22) {
    piVar4 = piVar1 + 0x22;
    iVar2 = (**(code **)(*piVar1 + 0x40))(piVar1,&local_14);
    piVar1 = piVar4;
    if (iVar2 != 0) {
      uVar5 = 1;
    }
  }
  return uVar5;
}

