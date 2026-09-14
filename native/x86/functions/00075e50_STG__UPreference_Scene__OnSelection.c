/* 00075e50 | STG::UPreference_Scene::OnSelection */

/* STG::UPreference_Scene::OnSelection(STG::UStringBase<char, int> const&, unsigned long) */

void __thiscall
STG::UPreference_Scene::OnSelection(UPreference_Scene *this,UStringBase *param_1,ulong param_2)

{
  int iVar1;
  size_t __n;
  int *piVar2;
  int iVar3;
  size_t sVar4;
  size_t sVar5;
  uint local_20;
  
  FUN_0002e044();
  if (*(int *)(this + 0x68) != 0) {
    iVar3 = 0;
    local_20 = 0;
    do {
      iVar1 = FindPreference(this,(UStringBase *)(*(int *)(this + 100) + iVar3));
      sVar4 = *(int *)(iVar1 + 0x18) - (int)*(void **)(iVar1 + 0x1c);
      sVar5 = *(int *)(param_1 + 0x14) - (int)*(void **)(param_1 + 0x18);
      __n = sVar5;
      if ((int)sVar4 <= (int)sVar5) {
        __n = sVar4;
      }
      iVar1 = memcmp(*(void **)(param_1 + 0x18),*(void **)(iVar1 + 0x1c),__n);
      if (((iVar1 == 0) && ((int)sVar4 <= (int)sVar5)) && ((int)sVar5 <= (int)sVar4)) {
        piVar2 = (int *)FindPreference(this,(UStringBase *)(*(int *)(this + 0x6c) + iVar3));
        (**(code **)(*piVar2 + 0x24))(piVar2,param_2);
      }
      local_20 = local_20 + 1;
      iVar3 = iVar3 + 0x1c;
    } while (local_20 < *(uint *)(this + 0x68));
  }
  return;
}

