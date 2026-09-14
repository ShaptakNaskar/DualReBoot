/* 0006419c | STG::UPreference<unsigned_long,true>::SetSelectedValueIndex */

/* STG::UPreference<unsigned long, true>::SetSelectedValueIndex(unsigned long) */

void __thiscall
STG::UPreference<unsigned_long,true>::SetSelectedValueIndex
          (UPreference<unsigned_long,true> *this,ulong param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)(this + 0x74);
  *(ulong *)(this + 0x84) = param_1;
  if (puVar3 != (undefined4 *)0x0) {
    pcVar2 = *(code **)*puVar3;
    uVar1 = (**(code **)(*(int *)this + 0x20))();
    (*pcVar2)(puVar3,this + 4,uVar1);
  }
  return;
}

