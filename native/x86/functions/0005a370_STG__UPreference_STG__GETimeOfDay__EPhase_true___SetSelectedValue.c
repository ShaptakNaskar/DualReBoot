/* 0005a370 | STG::UPreference<STG::GETimeOfDay::EPhase,true>::SetSelectedValue */

/* STG::UPreference<STG::GETimeOfDay::EPhase, true>::SetSelectedValue(STG::GETimeOfDay::EPhase
   const&) */

undefined4 __thiscall
STG::UPreference<STG::GETimeOfDay::EPhase,true>::SetSelectedValue
          (UPreference<STG::GETimeOfDay::EPhase,true> *this,EPhase *param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(this + 0x80) != 0) {
    iVar2 = 0;
    iVar1 = **(int **)(this + 0x7c);
    while( true ) {
      if (*(int *)param_1 == iVar1) {
        (**(code **)(*(int *)this + 0x24))(this,iVar2);
        return 1;
      }
      iVar2 = iVar2 + 1;
      if (iVar2 == *(int *)(this + 0x80)) break;
      iVar1 = (*(int **)(this + 0x7c))[iVar2];
    }
  }
  return 0;
}

