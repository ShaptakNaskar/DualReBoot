/* 00069fa4 | STG::UPreference_Scene::InitializeMultiPrefs */

/* STG::UPreference_Scene::InitializeMultiPrefs(unsigned long) */

void __thiscall STG::UPreference_Scene::InitializeMultiPrefs(UPreference_Scene *this,ulong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  ulong uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  
  if (param_1 != *(ulong *)(this + 0x68)) {
    if (*(ulong *)(this + 0x68) == 0) {
      *(ulong *)(this + 0x68) = param_1;
    }
    else {
      iVar2 = *(int *)(this + 100);
      if (iVar2 != 0) {
        iVar6 = *(int *)(iVar2 + -4) * 0x1c + iVar2;
        if (iVar2 != iVar6) {
          do {
            puVar4 = (undefined4 *)(iVar6 + -0x1c);
            iVar6 = iVar6 + -0x1c;
            (**(code **)*puVar4)(iVar6);
            iVar2 = *(int *)(this + 100);
          } while (iVar2 != iVar6);
        }
        operator_delete__((void *)(iVar2 + -8));
      }
      *(undefined4 *)(this + 100) = 0;
      *(ulong *)(this + 0x68) = param_1;
    }
    if (param_1 != 0) {
      puVar1 = operator_new__(param_1 * 0x1c + 8);
      uVar3 = 0;
      iVar2 = *(int *)(DAT_0006a1ac + 0x6a020);
      *puVar1 = 0x1c;
      puVar1[1] = param_1;
      puVar5 = puVar1 + 2;
      puVar4 = puVar1 + 3;
      do {
        uVar3 = uVar3 + 1;
        puVar4[-1] = iVar2 + 8;
        *(undefined4 **)((int)(puVar1 + 3) + (int)((int)puVar4 + (0xc - (int)puVar5))) = puVar4;
        *(undefined4 **)((int)puVar1 + (int)((int)puVar4 + (0x1c - (int)puVar5))) = puVar4;
        *(undefined1 *)puVar4 = 0;
        puVar4 = puVar4 + 7;
      } while (uVar3 != param_1);
      *(undefined4 **)(this + 100) = puVar5;
    }
  }
  if (param_1 != *(ulong *)(this + 0x70)) {
    if (*(ulong *)(this + 0x70) == 0) {
      *(ulong *)(this + 0x70) = param_1;
    }
    else {
      iVar2 = *(int *)(this + 0x6c);
      if (iVar2 != 0) {
        iVar6 = *(int *)(iVar2 + -4) * 0x1c + iVar2;
        if (iVar2 != iVar6) {
          do {
            puVar4 = (undefined4 *)(iVar6 + -0x1c);
            iVar6 = iVar6 + -0x1c;
            (**(code **)*puVar4)(iVar6);
            iVar2 = *(int *)(this + 0x6c);
          } while (iVar2 != iVar6);
        }
        operator_delete__((void *)(iVar2 + -8));
      }
      *(undefined4 *)(this + 0x6c) = 0;
      *(ulong *)(this + 0x70) = param_1;
    }
    if (param_1 != 0) {
      puVar1 = operator_new__(param_1 * 0x1c + 8);
      uVar3 = 0;
      iVar2 = *(int *)(DAT_0006a1b0 + 0x6a08c);
      *puVar1 = 0x1c;
      puVar1[1] = param_1;
      puVar5 = puVar1 + 2;
      puVar4 = puVar1 + 3;
      do {
        uVar3 = uVar3 + 1;
        puVar4[-1] = iVar2 + 8;
        *(undefined4 **)((int)(puVar1 + 3) + (int)((int)puVar4 + (0xc - (int)puVar5))) = puVar4;
        *(undefined4 **)((int)puVar1 + (int)((int)puVar4 + (0x1c - (int)puVar5))) = puVar4;
        *(undefined1 *)puVar4 = 0;
        puVar4 = puVar4 + 7;
      } while (uVar3 != param_1);
      *(undefined4 **)(this + 0x6c) = puVar5;
      return;
    }
  }
  return;
}

