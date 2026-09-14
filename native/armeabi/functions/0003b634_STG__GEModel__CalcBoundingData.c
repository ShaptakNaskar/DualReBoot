/* 0003b634 | STG::GEModel::CalcBoundingData */

/* STG::GEModel::CalcBoundingData(STG::MMatrix const&) */

void __thiscall STG::GEModel::CalcBoundingData(GEModel *this,MMatrix *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  void *local_28;
  int local_24;
  
  uVar4 = *(uint *)(this + 0x34);
  if (uVar4 != 0) {
    uVar3 = 0;
    do {
      iVar1 = GEVertexBuffer::HasComponent
                        (*(GEVertexBuffer **)(*(int *)(this + 0x7c) + uVar3 * 4),0);
      uVar5 = uVar3;
      if (iVar1 != 0) break;
      uVar3 = uVar3 + 1;
      uVar5 = uVar4;
    } while (uVar3 < *(uint *)(this + 0x34));
    if (uVar5 < *(uint *)(this + 0x34)) {
      iVar7 = 0;
      iVar6 = *(int *)(*(int *)(this + 0x7c) + uVar5 * 4);
      local_28 = (void *)0x0;
      local_24 = 0;
      iVar1 = *(int *)(iVar6 + 0x10);
      if (iVar1 != 0) {
        local_24 = iVar1;
        local_28 = operator_new__(iVar1 * 0xc);
        iVar8 = *(int *)(iVar6 + 0xc);
        puVar2 = (undefined4 *)(*(int *)(iVar6 + 0x14) + *(int *)(iVar6 + 0x6c));
        iVar6 = 0;
        do {
          uVar10 = puVar2[1];
          uVar9 = puVar2[2];
          iVar6 = iVar6 + 1;
          *(undefined4 *)((int)local_28 + iVar7) = *puVar2;
          *(undefined4 *)((int)local_28 + iVar7 + 4) = uVar10;
          *(undefined4 *)((int)local_28 + iVar7 + 8) = uVar9;
          iVar7 = iVar7 + 0xc;
          puVar2 = (undefined4 *)((int)puVar2 + iVar8);
        } while (iVar6 != iVar1);
      }
      CalcBoundingData(this,param_1,(UArrayFixed *)&local_28);
      if ((local_24 != 0) && (local_28 != (void *)0x0)) {
        operator_delete__(local_28);
      }
    }
  }
  return;
}

