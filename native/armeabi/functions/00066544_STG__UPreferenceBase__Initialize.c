/* 00066544 | STG::UPreferenceBase::Initialize */

/* STG::UPreferenceBase::Initialize(STG::UStringBase<char, int> const&, STG::UStringBase<char, int>
   const&, STG::UStringBase<char, int> const&) */

void __thiscall
STG::UPreferenceBase::Initialize
          (UPreferenceBase *this,UStringBase *param_1,UStringBase *param_2,UStringBase *param_3)

{
  void *pvVar1;
  size_t sVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  char *pcVar6;
  void *pvVar7;
  
  if ((string *)(this + 8) != (string *)(param_1 + 4)) {
    pvVar7 = *(void **)(param_1 + 0x18);
    pcVar6 = *(char **)(param_1 + 0x14);
    puVar4 = *(undefined1 **)(this + 0x18);
    pvVar1 = *(void **)(this + 0x1c);
    uVar5 = (int)pcVar6 - (int)pvVar7;
    sVar2 = (int)puVar4 - (int)pvVar1;
    if (sVar2 < uVar5) {
      iVar3 = 0;
      if (sVar2 != 0) {
        memmove(pvVar1,pvVar7,sVar2);
        iVar3 = *(int *)(this + 0x18) - *(int *)(this + 0x1c);
      }
      std::string::_M_append((string *)(this + 8),(char *)((int)pvVar7 + iVar3),pcVar6);
    }
    else {
      if (uVar5 != 0) {
        memmove(pvVar1,pvVar7,uVar5);
        pvVar1 = *(void **)(this + 0x1c);
        puVar4 = *(undefined1 **)(this + 0x18);
      }
      if ((undefined1 *)((int)pvVar1 + uVar5) != puVar4) {
        *(undefined1 *)((int)pvVar1 + uVar5) = *puVar4;
        *(undefined1 **)(this + 0x18) =
             (undefined1 *)((int)pvVar1 + uVar5) + (*(int *)(this + 0x18) - (int)puVar4);
      }
    }
  }
  if ((string *)(this + 0x24) != (string *)(param_2 + 4)) {
    pvVar7 = *(void **)(param_2 + 0x18);
    pcVar6 = *(char **)(param_2 + 0x14);
    puVar4 = *(undefined1 **)(this + 0x34);
    pvVar1 = *(void **)(this + 0x38);
    uVar5 = (int)pcVar6 - (int)pvVar7;
    sVar2 = (int)puVar4 - (int)pvVar1;
    if (sVar2 < uVar5) {
      iVar3 = 0;
      if (sVar2 != 0) {
        memmove(pvVar1,pvVar7,sVar2);
        iVar3 = *(int *)(this + 0x34) - *(int *)(this + 0x38);
      }
      std::string::_M_append((string *)(this + 0x24),(char *)((int)pvVar7 + iVar3),pcVar6);
    }
    else {
      if (uVar5 != 0) {
        memmove(pvVar1,pvVar7,uVar5);
        pvVar1 = *(void **)(this + 0x38);
        puVar4 = *(undefined1 **)(this + 0x34);
      }
      if ((undefined1 *)((int)pvVar1 + uVar5) != puVar4) {
        *(undefined1 *)((int)pvVar1 + uVar5) = *puVar4;
        *(undefined1 **)(this + 0x34) =
             (undefined1 *)((int)pvVar1 + uVar5) + (*(int *)(this + 0x34) - (int)puVar4);
      }
    }
  }
  if ((string *)(this + 0x40) != (string *)(param_3 + 4)) {
    pvVar7 = *(void **)(param_3 + 0x18);
    puVar4 = *(undefined1 **)(this + 0x50);
    pcVar6 = *(char **)(param_3 + 0x14);
    pvVar1 = *(void **)(this + 0x54);
    uVar5 = (int)pcVar6 - (int)pvVar7;
    sVar2 = (int)puVar4 - (int)pvVar1;
    if (sVar2 < uVar5) {
      iVar3 = 0;
      if (sVar2 != 0) {
        memmove(pvVar1,pvVar7,sVar2);
        iVar3 = *(int *)(this + 0x50) - *(int *)(this + 0x54);
      }
      std::string::_M_append((string *)(this + 0x40),(char *)((int)pvVar7 + iVar3),pcVar6);
      if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) goto LAB_000666e8;
      goto LAB_000666b4;
    }
    if (uVar5 != 0) {
      memmove(pvVar1,pvVar7,uVar5);
      pvVar1 = *(void **)(this + 0x54);
      puVar4 = *(undefined1 **)(this + 0x50);
    }
    if ((undefined1 *)((int)pvVar1 + uVar5) != puVar4) {
      *(undefined1 *)((int)pvVar1 + uVar5) = *puVar4;
      *(undefined1 **)(this + 0x50) =
           (undefined1 *)((int)pvVar1 + uVar5) + (*(int *)(this + 0x50) - (int)puVar4);
    }
  }
  if (*(int *)(this + 0x1c) == *(int *)(this + 0x18)) {
LAB_000666e8:
    GenerateDefaultKey(this);
    this[0x79] = (UPreferenceBase)0x1;
    return;
  }
LAB_000666b4:
  this[0x79] = (UPreferenceBase)0x1;
  return;
}

