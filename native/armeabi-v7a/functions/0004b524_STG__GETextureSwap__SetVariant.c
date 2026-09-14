/* 0004b524 | STG::GETextureSwap::SetVariant */

/* STG::GETextureSwap::SetVariant(unsigned long, STG::UStringBase<char, int> const&, STG::FFileHash
   const&, STG::GETimeOfDay const&, unsigned long) */

void __thiscall
STG::GETextureSwap::SetVariant
          (GETextureSwap *this,ulong param_1,UStringBase *param_2,FFileHash *param_3,
          GETimeOfDay *param_4,ulong param_5)

{
  void *pvVar1;
  int iVar2;
  size_t sVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  void *pvVar7;
  char *pcVar8;
  
  iVar5 = *(int *)(this + 0x24) + param_1 * 0x1c;
  if ((string *)(iVar5 + 4) != (string *)(param_2 + 4)) {
    pvVar7 = *(void **)(param_2 + 0x18);
    pcVar8 = *(char **)(param_2 + 0x14);
    puVar4 = *(undefined1 **)(iVar5 + 0x14);
    pvVar1 = *(void **)(iVar5 + 0x18);
    uVar6 = (int)pcVar8 - (int)pvVar7;
    sVar3 = (int)puVar4 - (int)pvVar1;
    if (sVar3 < uVar6) {
      iVar2 = 0;
      if (sVar3 != 0) {
        memmove(pvVar1,pvVar7,sVar3);
        iVar2 = *(int *)(iVar5 + 0x14) - *(int *)(iVar5 + 0x18);
      }
      std::string::_M_append((string *)(iVar5 + 4),(char *)((int)pvVar7 + iVar2),pcVar8);
    }
    else {
      if (uVar6 != 0) {
        memmove(pvVar1,pvVar7,uVar6);
        pvVar1 = *(void **)(iVar5 + 0x18);
        puVar4 = *(undefined1 **)(iVar5 + 0x14);
      }
      if ((undefined1 *)((int)pvVar1 + uVar6) != puVar4) {
        *(undefined1 *)((int)pvVar1 + uVar6) = *puVar4;
        *(undefined1 **)(iVar5 + 0x14) =
             (undefined1 *)((int)pvVar1 + uVar6) + (*(int *)(iVar5 + 0x14) - (int)puVar4);
      }
    }
  }
  iVar5 = *(int *)(this + 0x28) + param_1 * 0x20;
  if ((string *)(iVar5 + 4) != (string *)(param_3 + 4)) {
    pvVar7 = *(void **)(param_3 + 0x18);
    pcVar8 = *(char **)(param_3 + 0x14);
    puVar4 = *(undefined1 **)(iVar5 + 0x14);
    pvVar1 = *(void **)(iVar5 + 0x18);
    uVar6 = (int)pcVar8 - (int)pvVar7;
    sVar3 = (int)puVar4 - (int)pvVar1;
    if (sVar3 < uVar6) {
      iVar2 = 0;
      if (sVar3 != 0) {
        memmove(pvVar1,pvVar7,sVar3);
        iVar2 = *(int *)(iVar5 + 0x14) - *(int *)(iVar5 + 0x18);
      }
      std::string::_M_append((string *)(iVar5 + 4),(char *)((int)pvVar7 + iVar2),pcVar8);
    }
    else {
      if (uVar6 != 0) {
        memmove(pvVar1,pvVar7,uVar6);
        pvVar1 = *(void **)(iVar5 + 0x18);
        puVar4 = *(undefined1 **)(iVar5 + 0x14);
      }
      if ((undefined1 *)((int)pvVar1 + uVar6) != puVar4) {
        *(undefined1 *)((int)pvVar1 + uVar6) = *puVar4;
        *(undefined1 **)(iVar5 + 0x14) =
             (undefined1 *)((int)pvVar1 + uVar6) + (*(int *)(iVar5 + 0x14) - (int)puVar4);
      }
    }
  }
  iVar2 = *(int *)(this + 0x2c);
  *(undefined4 *)(iVar5 + 0x1c) = *(undefined4 *)(param_3 + 0x1c);
  GETimeOfDay::operator=((GETimeOfDay *)(iVar2 + param_1 * 8),param_4);
  *(ulong *)(*(int *)(this + 0x30) + param_1 * 4) = param_5;
  return;
}

