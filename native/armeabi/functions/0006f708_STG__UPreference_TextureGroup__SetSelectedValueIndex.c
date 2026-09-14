/* 0006f708 | STG::UPreference_TextureGroup::SetSelectedValueIndex */

/* STG::UPreference_TextureGroup::SetSelectedValueIndex(unsigned long) */

void __thiscall
STG::UPreference_TextureGroup::SetSelectedValueIndex(UPreference_TextureGroup *this,ulong param_1)

{
  undefined4 uVar1;
  int *piVar2;
  code *pcVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  puVar5 = *(undefined4 **)(this + 0x74);
  *(ulong *)(this + 0x84) = param_1;
  if (puVar5 != (undefined4 *)0x0) {
    pcVar3 = *(code **)*puVar5;
    uVar1 = (**(code **)(*(int *)this + 0x20))();
    (*pcVar3)(puVar5,this + 4,uVar1);
  }
  if (*(int *)(this + 0x94) != 0) {
    uVar4 = 0;
    do {
      piVar2 = *(int **)(*(int *)(this + 0x90) + uVar4 * 4);
      uVar4 = uVar4 + 1;
      (**(code **)(*piVar2 + 0x24))(piVar2,param_1);
    } while (uVar4 < *(uint *)(this + 0x94));
  }
  return;
}

