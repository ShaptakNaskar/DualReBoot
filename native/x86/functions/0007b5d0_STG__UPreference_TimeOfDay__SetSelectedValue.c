/* 0007b5d0 | STG::UPreference_TimeOfDay::SetSelectedValue */

/* STG::UPreference_TimeOfDay::SetSelectedValue(STG::GETimeOfDay::EPhase const&) */

undefined4 __thiscall
STG::UPreference_TimeOfDay::SetSelectedValue(UPreference_TimeOfDay *this,EPhase *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int local_20 [2];
  GETimeOfDay local_18 [4];
  undefined4 uStack_14;
  
  uStack_14 = 0x7b5db;
  FUN_0002e044();
  iVar2 = (**(code **)(*(int *)this + 0x18))(this);
  if (iVar2 == 0) {
    return 0;
  }
  if (*(int *)(this + 0x80) == 0) {
LAB_0007b632:
    GETimeOfDay::GETimeOfDay((GETimeOfDay *)local_20);
    GETimeOfDay::GETimeOfDay(local_18,*(undefined4 *)param_1,0xa8c0);
    cVar1 = GetClosestValue(this,local_18,(GETimeOfDay *)local_20);
    if (cVar1 == '\0') {
      return 0;
    }
    if (*(int *)(this + 0x80) == 0) {
      return 0;
    }
    iVar3 = 0;
    iVar2 = **(int **)(this + 0x7c);
    while (local_20[0] != iVar2) {
      iVar3 = iVar3 + 1;
      if (iVar3 == *(int *)(this + 0x80)) {
        return 0;
      }
      iVar2 = (*(int **)(this + 0x7c))[iVar3];
    }
  }
  else {
    iVar3 = 0;
    iVar2 = **(int **)(this + 0x7c);
    while (*(int *)param_1 != iVar2) {
      iVar3 = iVar3 + 1;
      if (iVar3 == *(int *)(this + 0x80)) goto LAB_0007b632;
      iVar2 = (*(int **)(this + 0x7c))[iVar3];
    }
  }
  (**(code **)(*(int *)this + 0x24))(this,iVar3);
  return 1;
}

