/* 0006db04 | STG::UPreference_Scene::OnSelection */

/* STG::UPreference_Scene::OnSelection(STG::UStringBase<char, int> const&, unsigned long) */

void __thiscall
STG::UPreference_Scene::OnSelection(UPreference_Scene *this,UStringBase *param_1,ulong param_2)

{
  int iVar1;
  int *piVar2;
  size_t __n;
  int iVar3;
  uint uVar4;
  size_t sVar5;
  size_t sVar6;
  
  if (*(int *)(this + 0x68) != 0) {
    iVar3 = 0;
    uVar4 = 0;
    do {
      iVar1 = FindPreference(this,(UStringBase *)(*(int *)(this + 100) + iVar3));
      sVar5 = *(int *)(iVar1 + 0x18) - (int)*(void **)(iVar1 + 0x1c);
      sVar6 = *(int *)(param_1 + 0x14) - (int)*(void **)(param_1 + 0x18);
      __n = sVar5;
      if ((int)sVar6 <= (int)sVar5) {
        __n = sVar6;
      }
      iVar1 = memcmp(*(void **)(param_1 + 0x18),*(void **)(iVar1 + 0x1c),__n);
      if (((iVar1 == 0) && ((int)sVar5 <= (int)sVar6)) && ((int)sVar6 <= (int)sVar5)) {
        piVar2 = (int *)FindPreference(this,(UStringBase *)(*(int *)(this + 0x6c) + iVar3));
        (**(code **)(*piVar2 + 0x24))(piVar2,param_2);
      }
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + 0x1c;
    } while (uVar4 < *(uint *)(this + 0x68));
    return;
  }
  return;
}

