/* 00039334 | STG::GEIndexBuffer::Clone */

/* STG::GEIndexBuffer::Clone(STG::GEIndexBuffer&) const */

void __thiscall STG::GEIndexBuffer::Clone(GEIndexBuffer *this,GEIndexBuffer *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  bool bVar11;
  bool bVar12;
  
  Deallocate(param_1);
  Allocate(param_1,*(ulong *)(this + 0xc));
  uVar9 = *(uint *)(this + 8);
  if (uVar9 != 0) {
    puVar10 = *(undefined4 **)(this + 0x10);
    puVar8 = *(undefined4 **)(param_1 + 0x10);
    uVar2 = uVar9 >> 1;
    bVar12 = puVar8 + 1 <= puVar10;
    bVar11 = puVar10 == puVar8 + 1;
    if (!bVar12 || bVar11) {
      bVar12 = puVar10 + 1 <= puVar8;
      bVar11 = puVar8 == puVar10 + 1;
    }
    uVar5 = uVar2 * 2;
    if (uVar2 == 0 ||
        ((uVar9 < 2 || (((uint)puVar8 | (uint)puVar10) & 3) != 0) || (!bVar12 || bVar11))) {
      uVar5 = 0;
    }
    else {
      uVar6 = 0;
      puVar3 = puVar10;
      puVar4 = puVar8;
      do {
        uVar6 = uVar6 + 1;
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      } while (uVar6 < uVar2);
      if (uVar9 == uVar5) {
        return;
      }
    }
    iVar1 = uVar5 * 2;
    iVar7 = 0;
    do {
      uVar5 = uVar5 + 1;
      *(undefined2 *)((int)puVar8 + iVar7 + iVar1) = *(undefined2 *)((int)puVar10 + iVar7 + iVar1);
      iVar7 = iVar7 + 2;
    } while (uVar5 < uVar9);
  }
  return;
}

