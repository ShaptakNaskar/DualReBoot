/* 0005a2e0 | STG::UPreference<STG::GETimeOfDay::EPhase,true>::SetSelectedValueIndex */

/* STG::UPreference<STG::GETimeOfDay::EPhase, true>::SetSelectedValueIndex(unsigned long) */

void __thiscall
STG::UPreference<STG::GETimeOfDay::EPhase,true>::SetSelectedValueIndex
          (UPreference<STG::GETimeOfDay::EPhase,true> *this,ulong param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  
  puVar1 = *(undefined4 **)(this + 0x74);
  *(ulong *)(this + 0x84) = param_1;
  if (puVar1 != (undefined4 *)0x0) {
    pcVar2 = *(code **)*puVar1;
    uVar3 = (**(code **)(*(int *)this + 0x20))(this);
    (*pcVar2)(puVar1,this + 4,uVar3);
  }
  return;
}

