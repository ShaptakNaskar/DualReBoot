/* 0006ef90 | STG::UPreference_Scene::SetMultiPref */

/* STG::UPreference_Scene::SetMultiPref(unsigned long, STG::UStringBase<char, int> const&,
   STG::UStringBase<char, int> const&) */

void __thiscall
STG::UPreference_Scene::SetMultiPref
          (UPreference_Scene *this,ulong param_1,UStringBase *param_2,UStringBase *param_3)

{
  int *piVar1;
  int *piVar2;
  void *pvVar3;
  size_t sVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  uint uVar8;
  void *pvVar9;
  char *pcVar10;
  
  piVar1 = (int *)FindPreference(this,param_2);
  piVar2 = (int *)FindPreference(this,param_3);
  iVar7 = *(int *)(this + 100) + param_1 * 0x1c;
  if ((string *)(iVar7 + 4) != (string *)(param_2 + 4)) {
    pvVar9 = *(void **)(param_2 + 0x18);
    pcVar10 = *(char **)(param_2 + 0x14);
    puVar6 = *(undefined1 **)(iVar7 + 0x14);
    pvVar3 = *(void **)(iVar7 + 0x18);
    uVar8 = (int)pcVar10 - (int)pvVar9;
    sVar4 = (int)puVar6 - (int)pvVar3;
    if (sVar4 < uVar8) {
      iVar5 = 0;
      if (sVar4 != 0) {
        memmove(pvVar3,pvVar9,sVar4);
        iVar5 = *(int *)(iVar7 + 0x14) - *(int *)(iVar7 + 0x18);
      }
      std::string::_M_append((string *)(iVar7 + 4),(char *)((int)pvVar9 + iVar5),pcVar10);
    }
    else {
      if (uVar8 != 0) {
        memmove(pvVar3,pvVar9,uVar8);
        pvVar3 = *(void **)(iVar7 + 0x18);
        puVar6 = *(undefined1 **)(iVar7 + 0x14);
      }
      if ((undefined1 *)((int)pvVar3 + uVar8) != puVar6) {
        *(undefined1 *)((int)pvVar3 + uVar8) = *puVar6;
        *(undefined1 **)(iVar7 + 0x14) =
             (undefined1 *)((int)pvVar3 + uVar8) + (*(int *)(iVar7 + 0x14) - (int)puVar6);
      }
    }
  }
  iVar7 = *(int *)(this + 0x6c) + param_1 * 0x1c;
  if ((string *)(iVar7 + 4) != (string *)(param_3 + 4)) {
    pvVar9 = *(void **)(param_3 + 0x18);
    puVar6 = *(undefined1 **)(iVar7 + 0x14);
    pcVar10 = *(char **)(param_3 + 0x14);
    pvVar3 = *(void **)(iVar7 + 0x18);
    uVar8 = (int)pcVar10 - (int)pvVar9;
    sVar4 = (int)puVar6 - (int)pvVar3;
    if (sVar4 < uVar8) {
      iVar5 = 0;
      if (sVar4 != 0) {
        memmove(pvVar3,pvVar9,sVar4);
        iVar5 = *(int *)(iVar7 + 0x14) - *(int *)(iVar7 + 0x18);
      }
      std::string::_M_append((string *)(iVar7 + 4),(char *)((int)pvVar9 + iVar5),pcVar10);
    }
    else {
      if (uVar8 != 0) {
        memmove(pvVar3,pvVar9,uVar8);
        pvVar3 = *(void **)(iVar7 + 0x18);
        puVar6 = *(undefined1 **)(iVar7 + 0x14);
      }
      if ((undefined1 *)((int)pvVar3 + uVar8) != puVar6) {
        *(undefined1 *)((int)pvVar3 + uVar8) = *puVar6;
        *(undefined1 **)(iVar7 + 0x14) =
             (undefined1 *)((int)pvVar3 + uVar8) + (*(int *)(iVar7 + 0x14) - (int)puVar6);
      }
    }
  }
  (**(code **)(*piVar1 + 0xc))(piVar1,this);
  (**(code **)(*piVar2 + 8))(piVar2,0);
  return;
}

