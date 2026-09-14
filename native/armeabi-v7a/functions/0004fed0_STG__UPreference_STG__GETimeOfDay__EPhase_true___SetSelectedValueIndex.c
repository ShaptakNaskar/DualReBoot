/* 0004fed0 | STG::UPreference<STG::GETimeOfDay::EPhase,true>::SetSelectedValueIndex */

/* STG::UPreference<STG::GETimeOfDay::EPhase, true>::SetSelectedValueIndex(unsigned long) */

void __thiscall
STG::UPreference<STG::GETimeOfDay::EPhase,true>::SetSelectedValueIndex
          (UPreference<STG::GETimeOfDay::EPhase,true> *this,ulong param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)(this + 0x74);
  *(ulong *)(this + 0x84) = param_1;
  if (puVar3 == (undefined4 *)0x0) {
    return;
  }
  pcVar2 = *(code **)*puVar3;
  uVar1 = (**(code **)(*(int *)this + 0x20))();
  (*pcVar2)(puVar3,this + 4,uVar1);
  return;
}

