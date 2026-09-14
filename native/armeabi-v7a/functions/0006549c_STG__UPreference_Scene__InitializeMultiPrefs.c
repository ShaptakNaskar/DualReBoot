/* 0006549c | STG::UPreference_Scene::InitializeMultiPrefs */

/* STG::UPreference_Scene::InitializeMultiPrefs(unsigned long) */

void __thiscall STG::UPreference_Scene::InitializeMultiPrefs(UPreference_Scene *this,ulong param_1)

{
  undefined4 *puVar1;
  ulong uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (param_1 != *(ulong *)(this + 0x68)) {
    if (*(ulong *)(this + 0x68) == 0) {
      *(ulong *)(this + 0x68) = param_1;
      iVar6 = DAT_000656bc;
    }
    else {
      iVar6 = *(int *)(this + 100);
      if (iVar6 != 0) {
        iVar7 = iVar6 + *(int *)(iVar6 + -4) * 0x1c;
        if (iVar6 != iVar7) {
          do {
            iVar5 = iVar7 + -0x1c;
            (*(code *)**(undefined4 **)(iVar7 + -0x1c))(iVar5);
            iVar6 = *(int *)(this + 100);
            iVar7 = iVar5;
          } while (iVar6 != iVar5);
        }
        operator_delete__((void *)(iVar6 + -8));
      }
      *(ulong *)(this + 0x68) = param_1;
      *(undefined4 *)(this + 100) = 0;
      iVar6 = DAT_000656bc;
    }
    DAT_000656bc = iVar6;
    if (param_1 != 0) {
      puVar1 = operator_new__(param_1 * 0x1c + 8);
      iVar6 = *(int *)(iVar6 + 0x6557c);
      uVar2 = 0;
      puVar4 = puVar1 + 2;
      puVar1[1] = param_1;
      *puVar1 = 0x1c;
      puVar3 = puVar1 + 3;
      do {
        uVar2 = uVar2 + 1;
        puVar3[-1] = iVar6 + 8;
        *(undefined4 **)((int)(puVar1 + 3) + (int)((int)puVar3 + (0xc - (int)puVar4))) = puVar3;
        *(undefined4 **)((int)puVar1 + (int)((int)puVar3 + (0x1c - (int)puVar4))) = puVar3;
        *(undefined1 *)puVar3 = 0;
        puVar3 = puVar3 + 7;
      } while (uVar2 != param_1);
      uVar2 = *(ulong *)(this + 0x70);
      *(undefined4 **)(this + 100) = puVar4;
      if (param_1 == uVar2) {
        return;
      }
      goto LAB_000654dc;
    }
  }
  uVar2 = *(ulong *)(this + 0x70);
  if (param_1 == uVar2) {
    return;
  }
LAB_000654dc:
  if (uVar2 == 0) {
    *(ulong *)(this + 0x70) = param_1;
    if (param_1 == 0) {
      return;
    }
  }
  else {
    iVar6 = *(int *)(this + 0x6c);
    if (iVar6 != 0) {
      iVar7 = iVar6 + *(int *)(iVar6 + -4) * 0x1c;
      if (iVar6 != iVar7) {
        do {
          iVar5 = iVar7 + -0x1c;
          (*(code *)**(undefined4 **)(iVar7 + -0x1c))(iVar5);
          iVar6 = *(int *)(this + 0x6c);
          iVar7 = iVar5;
        } while (iVar6 != iVar5);
      }
      operator_delete__((void *)(iVar6 + -8));
    }
    *(ulong *)(this + 0x70) = param_1;
    *(undefined4 *)(this + 0x6c) = 0;
    if (param_1 == 0) {
      return;
    }
  }
  iVar6 = DAT_000656b8;
  puVar1 = operator_new__(param_1 * 0x1c + 8);
  iVar6 = *(int *)(iVar6 + 0x6550c);
  uVar2 = 0;
  puVar4 = puVar1 + 2;
  puVar1[1] = param_1;
  *puVar1 = 0x1c;
  puVar3 = puVar1 + 3;
  do {
    uVar2 = uVar2 + 1;
    puVar3[-1] = iVar6 + 8;
    *(undefined4 **)((int)(puVar1 + 3) + (int)((int)puVar3 + (0xc - (int)puVar4))) = puVar3;
    *(undefined4 **)((int)puVar1 + (int)((int)puVar3 + (0x1c - (int)puVar4))) = puVar3;
    *(undefined1 *)puVar3 = 0;
    puVar3 = puVar3 + 7;
  } while (uVar2 != param_1);
  *(undefined4 **)(this + 0x6c) = puVar4;
  return;
}

