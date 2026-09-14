/* 0007a170 | STG::UPreference_TextureGroup::SetSelectedValueIndex */

/* STG::UPreference_TextureGroup::SetSelectedValueIndex(unsigned long) */

void __thiscall
STG::UPreference_TextureGroup::SetSelectedValueIndex(UPreference_TextureGroup *this,ulong param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  
  puVar1 = *(undefined4 **)(this + 0x74);
  *(ulong *)(this + 0x84) = param_1;
  if (puVar1 != (undefined4 *)0x0) {
    pcVar2 = *(code **)*puVar1;
    uVar4 = (**(code **)(*(int *)this + 0x20))(this);
    (*pcVar2)(puVar1,this + 4,uVar4);
  }
  if (*(int *)(this + 0x94) != 0) {
    uVar5 = 0;
    do {
      piVar3 = *(int **)(*(int *)(this + 0x90) + uVar5 * 4);
      uVar5 = uVar5 + 1;
      (**(code **)(*piVar3 + 0x24))(piVar3,param_1);
    } while (uVar5 < *(uint *)(this + 0x94));
  }
  return;
}

