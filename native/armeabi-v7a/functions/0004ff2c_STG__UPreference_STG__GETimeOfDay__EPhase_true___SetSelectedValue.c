/* 0004ff2c | STG::UPreference<STG::GETimeOfDay::EPhase,true>::SetSelectedValue */

/* STG::UPreference<STG::GETimeOfDay::EPhase, true>::SetSelectedValue(STG::GETimeOfDay::EPhase
   const&) */

undefined4 __thiscall
STG::UPreference<STG::GETimeOfDay::EPhase,true>::SetSelectedValue
          (UPreference<STG::GETimeOfDay::EPhase,true> *this,EPhase *param_1)

{
  int iVar1;
  int *piVar2;
  
  if (*(int *)(this + 0x80) == 0) {
    return 0;
  }
  piVar2 = *(int **)(this + 0x7c);
  if (*(int *)param_1 == *piVar2) {
    iVar1 = 0;
  }
  else {
    iVar1 = 0;
    do {
      iVar1 = iVar1 + 1;
      if (iVar1 == *(int *)(this + 0x80)) {
        return 0;
      }
      piVar2 = piVar2 + 1;
    } while (*piVar2 != *(int *)param_1);
  }
  (**(code **)(*(int *)this + 0x24))(this,iVar1);
  return 1;
}

