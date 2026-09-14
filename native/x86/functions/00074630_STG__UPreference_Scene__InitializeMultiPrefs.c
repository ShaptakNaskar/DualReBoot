/* 00074630 | STG::UPreference_Scene::InitializeMultiPrefs */

/* STG::UPreference_Scene::InitializeMultiPrefs(unsigned long) */

void __thiscall STG::UPreference_Scene::InitializeMultiPrefs(UPreference_Scene *this,ulong param_1)

{
  ulong *puVar1;
  int iVar2;
  ulong *puVar3;
  undefined4 *puVar4;
  ulong uVar5;
  ulong *puVar6;
  int unaff_EBX;
  undefined4 *puVar7;
  
  FUN_0002e044();
  if (param_1 != *(ulong *)(this + 0x68)) {
    if (*(ulong *)(this + 0x68) == 0) {
      *(ulong *)(this + 0x68) = param_1;
    }
    else {
      puVar4 = *(undefined4 **)(this + 100);
      if (puVar4 != (undefined4 *)0x0) {
        puVar7 = puVar4 + puVar4[-1] * 7;
        if (puVar4 != puVar7) {
          do {
            puVar7 = puVar7 + -7;
            (**(code **)*puVar7)(puVar7);
            puVar4 = *(undefined4 **)(this + 100);
          } while (puVar4 != puVar7);
        }
        operator_delete__(puVar4 + -1);
      }
      *(undefined4 *)(this + 100) = 0;
      *(ulong *)(this + 0x68) = param_1;
    }
    if (param_1 != 0) {
      puVar3 = operator_new__(param_1 * 0x1c + 4);
      iVar2 = *(int *)("_ZTIPKDi" + unaff_EBX + 1);
      puVar1 = puVar3 + 1;
      *puVar3 = param_1;
      uVar5 = 0;
      puVar6 = puVar1;
      do {
        uVar5 = uVar5 + 1;
        *puVar6 = iVar2 + 8;
        *(ulong **)((int)puVar3 + (int)puVar6 + (0x18 - (int)puVar1)) = puVar6 + 1;
        *(ulong **)((int)puVar3 + (int)puVar6 + (0x1c - (int)puVar1)) = puVar6 + 1;
        *(undefined1 *)(puVar6 + 1) = 0;
        puVar6 = puVar6 + 7;
      } while (uVar5 != param_1);
      *(ulong **)(this + 100) = puVar1;
    }
  }
  if (param_1 != *(ulong *)(this + 0x70)) {
    if (*(ulong *)(this + 0x70) == 0) {
      *(ulong *)(this + 0x70) = param_1;
    }
    else {
      puVar4 = *(undefined4 **)(this + 0x6c);
      if (puVar4 != (undefined4 *)0x0) {
        puVar7 = puVar4 + puVar4[-1] * 7;
        if (puVar4 != puVar7) {
          do {
            puVar7 = puVar7 + -7;
            (**(code **)*puVar7)(puVar7);
            puVar4 = *(undefined4 **)(this + 0x6c);
          } while (puVar4 != puVar7);
        }
        operator_delete__(puVar4 + -1);
      }
      *(undefined4 *)(this + 0x6c) = 0;
      *(ulong *)(this + 0x70) = param_1;
    }
    if (param_1 != 0) {
      puVar3 = operator_new__(param_1 * 0x1c + 4);
      iVar2 = *(int *)("_ZTIPKDi" + unaff_EBX + 1);
      puVar1 = puVar3 + 1;
      *puVar3 = param_1;
      uVar5 = 0;
      puVar6 = puVar1;
      do {
        uVar5 = uVar5 + 1;
        *puVar6 = iVar2 + 8;
        *(ulong **)((int)puVar3 + (int)puVar6 + (0x18 - (int)puVar1)) = puVar6 + 1;
        *(ulong **)((int)puVar3 + (int)puVar6 + (0x1c - (int)puVar1)) = puVar6 + 1;
        *(undefined1 *)(puVar6 + 1) = 0;
        puVar6 = puVar6 + 7;
      } while (uVar5 != param_1);
      *(ulong **)(this + 0x6c) = puVar1;
      return;
    }
  }
  return;
}

