/* 00039254 | STG::GEModel::CalcBoundingData */

/* STG::GEModel::CalcBoundingData(STG::MMatrix const&) */

void __thiscall STG::GEModel::CalcBoundingData(GEModel *this,MMatrix *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  void *local_28;
  int local_24;
  
  uVar6 = *(uint *)(this + 0x34);
  if (uVar6 != 0) {
    uVar5 = 0;
    do {
      iVar1 = GEVertexBuffer::HasComponent
                        (*(GEVertexBuffer **)(*(int *)(this + 0x7c) + uVar5 * 4),0);
      uVar7 = uVar5;
      if (iVar1 != 0) break;
      uVar5 = uVar5 + 1;
      uVar7 = uVar6;
    } while (uVar5 < *(uint *)(this + 0x34));
    if (uVar7 < *(uint *)(this + 0x34)) {
      iVar9 = 0;
      iVar8 = *(int *)(*(int *)(this + 0x7c) + uVar7 * 4);
      local_28 = (void *)0x0;
      local_24 = 0;
      iVar1 = *(int *)(iVar8 + 0x10);
      if (iVar1 != 0) {
        local_24 = iVar1;
        local_28 = operator_new__(iVar1 * 0xc);
        iVar2 = 0;
        iVar10 = *(int *)(iVar8 + 0xc);
        puVar4 = (undefined4 *)(*(int *)(iVar8 + 0x14) + *(int *)(iVar8 + 0x6c));
        do {
          iVar2 = iVar2 + 1;
          uVar12 = puVar4[1];
          puVar3 = (undefined4 *)((int)local_28 + iVar9);
          uVar11 = puVar4[2];
          iVar9 = iVar9 + 0xc;
          *puVar3 = *puVar4;
          puVar3[1] = uVar12;
          puVar4 = (undefined4 *)((int)puVar4 + iVar10);
          puVar3[2] = uVar11;
        } while (iVar2 != iVar1);
      }
      CalcBoundingData(this,param_1,(UArrayFixed *)&local_28);
      if ((local_24 != 0) && (local_28 != (void *)0x0)) {
        operator_delete__(local_28);
      }
    }
  }
  return;
}

