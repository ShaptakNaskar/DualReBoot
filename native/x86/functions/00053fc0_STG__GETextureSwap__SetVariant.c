/* 00053fc0 | STG::GETextureSwap::SetVariant */

/* STG::GETextureSwap::SetVariant(unsigned long, STG::UStringBase<char, int> const&, STG::FFileHash
   const&, STG::GETimeOfDay const&, unsigned long) */

void __thiscall
STG::GETextureSwap::SetVariant
          (GETextureSwap *this,ulong param_1,UStringBase *param_2,FFileHash *param_3,
          GETimeOfDay *param_4,ulong param_5)

{
  char *pcVar1;
  void *pvVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  uint uVar7;
  undefined1 *puVar8;
  int iVar9;
  
  FUN_0002e044();
  iVar9 = param_1 * 0x1c + *(int *)(this + 0x24);
  if ((string *)(iVar9 + 4) != (string *)(param_2 + 4)) {
    pcVar1 = *(char **)(param_2 + 0x14);
    pvVar2 = *(void **)(param_2 + 0x18);
    uVar5 = (int)pcVar1 - (int)pvVar2;
    puVar3 = *(undefined1 **)(iVar9 + 0x14);
    pvVar6 = *(void **)(iVar9 + 0x18);
    uVar7 = (int)puVar3 - (int)pvVar6;
    if (uVar7 < uVar5) {
      iVar4 = 0;
      if (uVar7 != 0) {
        memmove(pvVar6,pvVar2,uVar7);
        iVar4 = *(int *)(iVar9 + 0x14) - *(int *)(iVar9 + 0x18);
      }
      std::string::_M_append((string *)(iVar9 + 4),(char *)(iVar4 + (int)pvVar2),pcVar1);
    }
    else {
      if (uVar5 != 0) {
        memmove(pvVar6,pvVar2,uVar5);
        puVar3 = *(undefined1 **)(iVar9 + 0x14);
        pvVar6 = *(void **)(iVar9 + 0x18);
      }
      puVar8 = (undefined1 *)(uVar5 + (int)pvVar6);
      if (puVar3 != puVar8) {
        *puVar8 = *puVar3;
        *(int *)(iVar9 + 0x14) = (int)(puVar8 + (*(int *)(iVar9 + 0x14) - (int)puVar3));
      }
    }
  }
  iVar9 = param_1 * 0x20 + *(int *)(this + 0x28);
  if ((string *)(iVar9 + 4) != (string *)(param_3 + 4)) {
    pvVar2 = *(void **)(param_3 + 0x18);
    pcVar1 = *(char **)(param_3 + 0x14);
    puVar3 = *(undefined1 **)(iVar9 + 0x14);
    uVar5 = (int)pcVar1 - (int)pvVar2;
    pvVar6 = *(void **)(iVar9 + 0x18);
    uVar7 = (int)puVar3 - (int)pvVar6;
    if (uVar7 < uVar5) {
      iVar4 = 0;
      if (uVar7 != 0) {
        memmove(pvVar6,pvVar2,uVar7);
        iVar4 = *(int *)(iVar9 + 0x14) - *(int *)(iVar9 + 0x18);
      }
      std::string::_M_append((string *)(iVar9 + 4),(char *)(iVar4 + (int)pvVar2),pcVar1);
    }
    else {
      if (uVar5 != 0) {
        memmove(pvVar6,pvVar2,uVar5);
        puVar3 = *(undefined1 **)(iVar9 + 0x14);
        pvVar6 = *(void **)(iVar9 + 0x18);
      }
      puVar8 = (undefined1 *)(uVar5 + (int)pvVar6);
      if (puVar8 != puVar3) {
        *puVar8 = *puVar3;
        *(int *)(iVar9 + 0x14) = (int)(puVar8 + (*(int *)(iVar9 + 0x14) - (int)puVar3));
      }
    }
  }
  *(undefined4 *)(iVar9 + 0x1c) = *(undefined4 *)(param_3 + 0x1c);
  GETimeOfDay::operator=((GETimeOfDay *)(*(int *)(this + 0x2c) + param_1 * 8),param_4);
  *(ulong *)(*(int *)(this + 0x30) + param_1 * 4) = param_5;
  return;
}

