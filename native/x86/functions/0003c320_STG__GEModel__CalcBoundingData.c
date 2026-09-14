/* 0003c320 | STG::GEModel::CalcBoundingData */

/* STG::GEModel::CalcBoundingData(STG::MMatrix const&) */

void __thiscall STG::GEModel::CalcBoundingData(GEModel *this,MMatrix *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  char cVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint local_24;
  void *local_20;
  int local_1c;
  undefined4 uStack_14;
  
  uStack_14 = 0x3c32b;
  FUN_0002e044();
  local_24 = *(uint *)(this + 0x34);
  if (local_24 != 0) {
    uVar11 = 0;
    do {
      cVar7 = GEVertexBuffer::HasComponent
                        (*(GEVertexBuffer **)(*(int *)(this + 0x7c) + uVar11 * 4),0);
      if (cVar7 != '\0') {
        uVar8 = *(uint *)(this + 0x34);
        local_24 = uVar11;
        break;
      }
      uVar11 = uVar11 + 1;
      uVar8 = *(uint *)(this + 0x34);
    } while (uVar11 < uVar8);
    if (local_24 < uVar8) {
      iVar12 = *(int *)(*(int *)(this + 0x7c) + local_24 * 4);
      local_20 = (void *)0x0;
      local_1c = 0;
      iVar4 = *(int *)(iVar12 + 0x10);
      if (iVar4 != 0) {
        local_1c = iVar4;
        local_20 = operator_new__(iVar4 * 0xc);
        iVar5 = *(int *)(iVar12 + 0xc);
        iVar10 = 0;
        puVar9 = (undefined4 *)(*(int *)(iVar12 + 0x14) + *(int *)(iVar12 + 0x6c));
        iVar12 = 0;
        do {
          uVar6 = puVar9[1];
          uVar2 = puVar9[2];
          iVar10 = iVar10 + 1;
          uVar3 = *puVar9;
          puVar9 = (undefined4 *)((int)puVar9 + iVar5);
          puVar1 = (undefined4 *)((int)local_20 + iVar12);
          iVar12 = iVar12 + 0xc;
          *puVar1 = uVar3;
          puVar1[1] = uVar6;
          puVar1[2] = uVar2;
        } while (iVar10 != iVar4);
      }
      CalcBoundingData(this,param_1,(UArrayFixed *)&local_20);
      if ((local_1c != 0) && (local_20 != (void *)0x0)) {
        operator_delete__(local_20);
      }
    }
  }
  return;
}

