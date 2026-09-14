/* 00052740 | STG::GETextureModifier::Initialize */

/* STG::GETextureModifier::Initialize(unsigned long) */

void __thiscall STG::GETextureModifier::Initialize(GETextureModifier *this,ulong param_1)

{
  STextureInfo *pSVar1;
  void *pvVar2;
  ulong *puVar3;
  uint uVar4;
  int unaff_EBX;
  int iVar5;
  STextureInfo *this_00;
  int iVar6;
  int iVar7;
  
  FUN_0002e044();
  *(ulong *)(this + 0x24) = param_1;
  if (param_1 != *(ulong *)(this + 0x20)) {
    if (*(ulong *)(this + 0x20) != 0) {
      iVar7 = *(int *)(this + 0x1c);
      if (iVar7 != 0) {
        iVar5 = *(int *)(iVar7 + -4) * 0x68 + iVar7;
        iVar6 = iVar5;
        while (iVar7 != iVar6) {
          iVar7 = iVar6 - iVar5;
          *(int *)(iVar6 + -0x20) = *(int *)(unaff_EBX + 0x496f3) + 8;
          pvVar2 = *(void **)(iVar5 + -8 + iVar7);
          if ((pvVar2 != (void *)(iVar6 + -0x1c)) && (pvVar2 != (void *)0x0)) {
            uVar4 = *(int *)(iVar5 + -0x1c + iVar7) - (int)pvVar2;
            if (uVar4 < 0x81) {
              std::__node_alloc::_M_deallocate(pvVar2,uVar4);
            }
            else {
              operator_delete(pvVar2);
            }
          }
          *(int *)(iVar5 + -0x40 + iVar7) = *(int *)(unaff_EBX + 0x496f3) + 8;
          pvVar2 = *(void **)(iVar5 + -0x28 + iVar7);
          if ((pvVar2 != (void *)(iVar6 + -0x3c)) && (pvVar2 != (void *)0x0)) {
            uVar4 = *(int *)(iVar5 + -0x3c + iVar7) - (int)pvVar2;
            if (uVar4 < 0x81) {
              std::__node_alloc::_M_deallocate(pvVar2,uVar4);
            }
            else {
              operator_delete(pvVar2);
            }
          }
          iVar6 = iVar6 + -0x68;
          iVar7 = *(int *)(this + 0x1c);
        }
        operator_delete__((void *)(iVar7 + -4));
      }
      *(undefined4 *)(this + 0x1c) = 0;
    }
    *(ulong *)(this + 0x20) = param_1;
    if (param_1 != 0) {
      puVar3 = operator_new__(param_1 * 0x68 + 4);
      *puVar3 = param_1;
      iVar7 = param_1 - 1;
      pSVar1 = (STextureInfo *)(puVar3 + 1);
      if (iVar7 != -1) {
        iVar6 = *(int *)(unaff_EBX + 0x496f3) + 8;
        this_00 = pSVar1;
        do {
          GETimeOfDay::GETimeOfDay((GETimeOfDay *)(this_00 + 0x14));
          iVar7 = iVar7 + -1;
          *(int *)((int)puVar3 + (int)(this_00 + (0x2c - (int)pSVar1))) = iVar6;
          *(STextureInfo **)((int)puVar3 + (int)(this_00 + (0x40 - (int)pSVar1))) = this_00 + 0x2c;
          *(STextureInfo **)((int)puVar3 + (int)(this_00 + (0x44 - (int)pSVar1))) = this_00 + 0x2c;
          this_00[0x2c] = (STextureInfo)0x0;
          *(undefined4 *)((int)puVar3 + (int)(this_00 + (0x48 - (int)pSVar1))) = 0xffffffff;
          *(int *)((int)puVar3 + (int)(this_00 + (0x4c - (int)pSVar1))) = iVar6;
          *(STextureInfo **)((int)puVar3 + (int)(this_00 + (0x60 - (int)pSVar1))) = this_00 + 0x4c;
          *(STextureInfo **)((int)puVar3 + (int)(this_00 + (100 - (int)pSVar1))) = this_00 + 0x4c;
          this_00[0x4c] = (STextureInfo)0x0;
          *(undefined4 *)((int)puVar3 + (int)(this_00 + (0x68 - (int)pSVar1))) = 0xffffffff;
          STextureInfo::Initialize(this_00);
          this_00 = this_00 + 0x68;
        } while (iVar7 != -1);
      }
      *(STextureInfo **)(this + 0x1c) = pSVar1;
      return;
    }
  }
  return;
}

