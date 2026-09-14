/* 000796e0 | STG::UPreference_Scene::SetMultiPref */

/* STG::UPreference_Scene::SetMultiPref(unsigned long, STG::UStringBase<char, int> const&,
   STG::UStringBase<char, int> const&) */

void __thiscall
STG::UPreference_Scene::SetMultiPref
          (UPreference_Scene *this,ulong param_1,UStringBase *param_2,UStringBase *param_3)

{
  char *pcVar1;
  void *pvVar2;
  int *piVar3;
  int *piVar4;
  undefined1 *puVar5;
  int iVar6;
  uint uVar7;
  undefined1 *puVar8;
  void *__dest;
  uint uVar9;
  int iVar10;
  void *local_40;
  
  FUN_0002e044();
  piVar3 = (int *)FindPreference(this,param_2);
  piVar4 = (int *)FindPreference(this,param_3);
  iVar10 = *(int *)(this + 100) + param_1 * 0x1c;
  if ((string *)(iVar10 + 4) != (string *)(param_2 + 4)) {
    pcVar1 = *(char **)(param_2 + 0x14);
    pvVar2 = *(void **)(param_2 + 0x18);
    uVar7 = (int)pcVar1 - (int)pvVar2;
    puVar5 = *(undefined1 **)(iVar10 + 0x14);
    local_40 = *(void **)(iVar10 + 0x18);
    uVar9 = (int)puVar5 - (int)local_40;
    if (uVar9 < uVar7) {
      iVar6 = 0;
      if (uVar9 != 0) {
        memmove(local_40,pvVar2,uVar9);
        iVar6 = *(int *)(iVar10 + 0x14) - *(int *)(iVar10 + 0x18);
      }
      std::string::_M_append((string *)(iVar10 + 4),(char *)(iVar6 + (int)pvVar2),pcVar1);
    }
    else {
      if (uVar7 != 0) {
        memmove(local_40,pvVar2,uVar7);
        local_40 = *(void **)(iVar10 + 0x18);
        puVar5 = *(undefined1 **)(iVar10 + 0x14);
      }
      puVar8 = (undefined1 *)(uVar7 + (int)local_40);
      if (puVar8 != puVar5) {
        *puVar8 = *puVar5;
        *(int *)(iVar10 + 0x14) = (int)(puVar8 + (*(int *)(iVar10 + 0x14) - (int)puVar5));
      }
    }
  }
  iVar10 = param_1 * 0x1c + *(int *)(this + 0x6c);
  if ((string *)(iVar10 + 4) != (string *)(param_3 + 4)) {
    pcVar1 = *(char **)(param_3 + 0x14);
    puVar5 = *(undefined1 **)(iVar10 + 0x14);
    pvVar2 = *(void **)(param_3 + 0x18);
    __dest = *(void **)(iVar10 + 0x18);
    uVar7 = (int)puVar5 - (int)__dest;
    uVar9 = (int)pcVar1 - (int)pvVar2;
    if (uVar7 < uVar9) {
      iVar6 = 0;
      if (uVar7 != 0) {
        memmove(__dest,pvVar2,uVar7);
        iVar6 = *(int *)(iVar10 + 0x14) - *(int *)(iVar10 + 0x18);
      }
      std::string::_M_append((string *)(iVar10 + 4),(char *)((int)pvVar2 + iVar6),pcVar1);
    }
    else {
      if (uVar9 != 0) {
        memmove(__dest,pvVar2,uVar9);
        puVar5 = *(undefined1 **)(iVar10 + 0x14);
        __dest = *(void **)(iVar10 + 0x18);
      }
      puVar8 = (undefined1 *)(uVar9 + (int)__dest);
      if (puVar8 != puVar5) {
        *puVar8 = *puVar5;
        *(int *)(iVar10 + 0x14) = (int)(puVar8 + (*(int *)(iVar10 + 0x14) - (int)puVar5));
      }
    }
  }
  (**(code **)(*piVar3 + 0xc))(piVar3,this);
  (**(code **)(*piVar4 + 8))(piVar4,0);
  return;
}

