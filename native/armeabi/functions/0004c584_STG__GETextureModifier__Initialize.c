/* 0004c584 | STG::GETextureModifier::Initialize */

/* STG::GETextureModifier::Initialize(unsigned long) */

void __thiscall STG::GETextureModifier::Initialize(GETextureModifier *this,ulong param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  uint uVar3;
  STextureInfo *this_00;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  STextureInfo *pSVar9;
  
  *(ulong *)(this + 0x24) = param_1;
  if (param_1 != *(ulong *)(this + 0x20)) {
    if (*(ulong *)(this + 0x20) != 0) {
      iVar4 = *(int *)(this + 0x1c);
      if (iVar4 != 0) {
        iVar8 = *(int *)(iVar4 + -4) * 0x68 + iVar4;
        puVar1 = (undefined4 *)(iVar8 + -0x28);
        for (iVar7 = iVar8; iVar7 != iVar4; iVar7 = iVar7 + -0x68) {
          iVar4 = *(int *)(DAT_0004c7b8 + 0x4c760);
          *(int *)(iVar7 + -0x20) = iVar4 + 8;
          pvVar2 = *(void **)((int)puVar1 + ((iVar8 + -0x1c) - (iVar8 + -0x3c)));
          iVar6 = iVar7 - iVar8;
          if ((pvVar2 != (void *)(iVar7 + -0x1c)) && (pvVar2 != (void *)0x0)) {
            uVar3 = *(int *)(iVar6 + iVar8 + -0x1c) - (int)pvVar2;
            if (uVar3 < 0x81) {
              std::__node_alloc::_M_deallocate(pvVar2,uVar3);
            }
            else {
              operator_delete(pvVar2);
            }
          }
          *(int *)(iVar6 + iVar8 + -0x40) = iVar4 + 8;
          pvVar2 = (void *)*puVar1;
          if ((pvVar2 != (void *)(iVar7 + -0x3c)) && (pvVar2 != (void *)0x0)) {
            uVar3 = *(int *)(iVar6 + iVar8 + -0x3c) - (int)pvVar2;
            if (uVar3 < 0x81) {
              std::__node_alloc::_M_deallocate(pvVar2,uVar3);
            }
            else {
              operator_delete(pvVar2);
            }
          }
          iVar4 = *(int *)(this + 0x1c);
          puVar1 = puVar1 + -0x1a;
        }
        operator_delete__((void *)(iVar7 + -8));
      }
      *(undefined4 *)(this + 0x1c) = 0;
    }
    *(ulong *)(this + 0x20) = param_1;
    if (param_1 != 0) {
      puVar1 = operator_new__(param_1 * 0x68 + 8);
      iVar4 = param_1 - 1;
      *puVar1 = 0x68;
      puVar1[1] = param_1;
      if (iVar4 != -1) {
        pSVar9 = (STextureInfo *)(puVar1 + 2);
        iVar7 = *(int *)(DAT_0004c7b4 + 0x4c600) + 8;
        this_00 = pSVar9;
        piVar5 = puVar1 + 0x19;
        do {
          GETimeOfDay::GETimeOfDay((GETimeOfDay *)(this_00 + 0x14));
          *(int *)((int)puVar1 + (int)(this_00 + (0x30 - (int)pSVar9))) = iVar7;
          piVar5[-8] = (int)(this_00 + 0x2c);
          iVar4 = iVar4 + -1;
          *(STextureInfo **)((int)puVar1 + (int)(this_00 + (0x48 - (int)pSVar9))) = this_00 + 0x2c;
          this_00[0x2c] = (STextureInfo)0x0;
          *(undefined4 *)((int)puVar1 + (int)(this_00 + (0x4c - (int)pSVar9))) = 0xffffffff;
          *(int *)((int)puVar1 + (int)(this_00 + (0x50 - (int)pSVar9))) = iVar7;
          *piVar5 = (int)(this_00 + 0x4c);
          *(STextureInfo **)((int)puVar1 + (int)(this_00 + (0x68 - (int)pSVar9))) = this_00 + 0x4c;
          this_00[0x4c] = (STextureInfo)0x0;
          *(undefined4 *)((int)puVar1 + (int)(this_00 + (0x6c - (int)pSVar9))) = 0xffffffff;
          STextureInfo::Initialize(this_00);
          this_00 = this_00 + 0x68;
          piVar5 = piVar5 + 0x1a;
        } while (iVar4 != -1);
      }
      *(undefined4 **)(this + 0x1c) = puVar1 + 2;
    }
  }
  return;
}

