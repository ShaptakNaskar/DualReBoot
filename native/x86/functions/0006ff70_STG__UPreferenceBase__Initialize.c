/* 0006ff70 | STG::UPreferenceBase::Initialize */

/* STG::UPreferenceBase::Initialize(STG::UStringBase<char, int> const&, STG::UStringBase<char, int>
   const&, STG::UStringBase<char, int> const&) */

void __thiscall
STG::UPreferenceBase::Initialize
          (UPreferenceBase *this,UStringBase *param_1,UStringBase *param_2,UStringBase *param_3)

{
  char *pcVar1;
  void *pvVar2;
  undefined1 *puVar3;
  int iVar4;
  void *pvVar5;
  uint uVar6;
  uint uVar7;
  undefined1 *puVar8;
  
  FUN_0002e044();
  if ((string *)(this + 8) != (string *)(param_1 + 4)) {
    pcVar1 = *(char **)(param_1 + 0x14);
    pvVar2 = *(void **)(param_1 + 0x18);
    uVar7 = (int)pcVar1 - (int)pvVar2;
    puVar3 = *(undefined1 **)(this + 0x18);
    pvVar5 = *(void **)(this + 0x1c);
    uVar6 = (int)puVar3 - (int)pvVar5;
    if (uVar6 < uVar7) {
      iVar4 = 0;
      if (uVar6 != 0) {
        memmove(pvVar5,pvVar2,uVar6);
        iVar4 = *(int *)(this + 0x18) - *(int *)(this + 0x1c);
      }
      std::string::_M_append((string *)(this + 8),(char *)((int)pvVar2 + iVar4),pcVar1);
    }
    else {
      if (uVar7 != 0) {
        memmove(pvVar5,pvVar2,uVar7);
        puVar3 = *(undefined1 **)(this + 0x18);
        pvVar5 = *(void **)(this + 0x1c);
      }
      puVar8 = (undefined1 *)(uVar7 + (int)pvVar5);
      if (puVar8 != puVar3) {
        *puVar8 = *puVar3;
        *(undefined1 **)(this + 0x18) = puVar8 + (*(int *)(this + 0x18) - (int)puVar3);
      }
    }
  }
  if ((string *)(this + 0x24) != (string *)(param_2 + 4)) {
    pcVar1 = *(char **)(param_2 + 0x14);
    puVar3 = *(undefined1 **)(this + 0x34);
    pvVar2 = *(void **)(param_2 + 0x18);
    pvVar5 = *(void **)(this + 0x38);
    uVar7 = (int)pcVar1 - (int)pvVar2;
    uVar6 = (int)puVar3 - (int)pvVar5;
    if (uVar6 < uVar7) {
      iVar4 = 0;
      if (uVar6 != 0) {
        memmove(pvVar5,pvVar2,uVar6);
        iVar4 = *(int *)(this + 0x34) - *(int *)(this + 0x38);
      }
      std::string::_M_append((string *)(this + 0x24),(char *)((int)pvVar2 + iVar4),pcVar1);
    }
    else {
      if (uVar7 != 0) {
        memmove(pvVar5,pvVar2,uVar7);
        puVar3 = *(undefined1 **)(this + 0x34);
        pvVar5 = *(void **)(this + 0x38);
      }
      puVar8 = (undefined1 *)(uVar7 + (int)pvVar5);
      if (puVar8 != puVar3) {
        *puVar8 = *puVar3;
        *(undefined1 **)(this + 0x34) = puVar8 + (*(int *)(this + 0x34) - (int)puVar3);
      }
    }
  }
  if ((string *)(this + 0x40) != (string *)(param_3 + 4)) {
    puVar3 = *(undefined1 **)(this + 0x50);
    pcVar1 = *(char **)(param_3 + 0x14);
    pvVar2 = *(void **)(param_3 + 0x18);
    pvVar5 = *(void **)(this + 0x54);
    uVar7 = (int)pcVar1 - (int)pvVar2;
    uVar6 = (int)puVar3 - (int)pvVar5;
    if (uVar6 < uVar7) {
      iVar4 = 0;
      if (uVar6 != 0) {
        memmove(pvVar5,pvVar2,uVar6);
        iVar4 = *(int *)(this + 0x50) - *(int *)(this + 0x54);
      }
      std::string::_M_append((string *)(this + 0x40),(char *)((int)pvVar2 + iVar4),pcVar1);
      if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) goto LAB_000700f4;
      goto LAB_000700b8;
    }
    if (uVar7 != 0) {
      memmove(pvVar5,pvVar2,uVar7);
      puVar3 = *(undefined1 **)(this + 0x50);
      pvVar5 = *(void **)(this + 0x54);
    }
    puVar8 = (undefined1 *)(uVar7 + (int)pvVar5);
    if (puVar8 != puVar3) {
      *puVar8 = *puVar3;
      *(undefined1 **)(this + 0x50) = puVar8 + (*(int *)(this + 0x50) - (int)puVar3);
    }
  }
  if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
LAB_000700f4:
    GenerateDefaultKey(this);
    this[0x79] = (UPreferenceBase)0x1;
    return;
  }
LAB_000700b8:
  this[0x79] = (UPreferenceBase)0x1;
  return;
}

