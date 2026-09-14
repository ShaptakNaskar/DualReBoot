/* 00070718 | STG::UPreference_TimeOfDay::SetSelectedValue */

/* STG::UPreference_TimeOfDay::SetSelectedValue(STG::GETimeOfDay::EPhase const&) */

undefined4 __thiscall
STG::UPreference_TimeOfDay::SetSelectedValue(UPreference_TimeOfDay *this,EPhase *param_1)

{
  int iVar1;
  int *piVar2;
  int local_20 [2];
  GETimeOfDay aGStack_18 [12];
  
  iVar1 = (**(code **)(*(int *)this + 0x18))();
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(this + 0x80) == 0) {
LAB_0007077c:
    GETimeOfDay::GETimeOfDay((GETimeOfDay *)local_20);
    GETimeOfDay::GETimeOfDay(aGStack_18,*(undefined4 *)param_1,0xa8c0);
    iVar1 = GetClosestValue(this,aGStack_18,(GETimeOfDay *)local_20);
    if (iVar1 == 0) {
      return 0;
    }
    if (*(int *)(this + 0x80) == 0) {
      return 0;
    }
    piVar2 = *(int **)(this + 0x7c);
    if (local_20[0] != *piVar2) {
      iVar1 = 0;
      do {
        iVar1 = iVar1 + 1;
        if (iVar1 == *(int *)(this + 0x80)) {
          return 0;
        }
        piVar2 = piVar2 + 1;
      } while (local_20[0] != *piVar2);
      goto LAB_00070800;
    }
  }
  else {
    piVar2 = *(int **)(this + 0x7c);
    if (*(int *)param_1 != *piVar2) {
      iVar1 = 0;
      do {
        iVar1 = iVar1 + 1;
        if (iVar1 == *(int *)(this + 0x80)) goto LAB_0007077c;
        piVar2 = piVar2 + 1;
      } while (*piVar2 != *(int *)param_1);
      goto LAB_00070800;
    }
  }
  iVar1 = 0;
LAB_00070800:
  (**(code **)(*(int *)this + 0x24))(this,iVar1);
  return 1;
}

