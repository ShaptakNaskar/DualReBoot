/* 00039d60 | STG::GEIndexBuffer::Clone */

/* STG::GEIndexBuffer::Clone(STG::GEIndexBuffer&) const */

void __thiscall STG::GEIndexBuffer::Clone(GEIndexBuffer *this,GEIndexBuffer *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  
  FUN_0002e044();
  Deallocate(param_1);
  Allocate((ulong)param_1);
  uVar3 = *(uint *)(this + 8);
  if (uVar3 != 0) {
    uVar9 = uVar3 >> 3;
    uVar4 = *(uint *)(this + 0x10);
    uVar5 = *(uint *)(param_1 + 0x10);
    uVar10 = uVar9 << 3;
    if ((uVar9 == 0) || (uVar3 < 0xb || uVar5 <= uVar4 + 0x10 && uVar4 <= uVar5 + 0x10)) {
      uVar10 = 0;
    }
    else {
      iVar12 = 0;
      uVar11 = 0;
      do {
        puVar1 = (undefined4 *)(uVar4 + iVar12);
        uVar6 = puVar1[1];
        uVar7 = puVar1[2];
        uVar8 = puVar1[3];
        uVar11 = uVar11 + 1;
        puVar2 = (undefined4 *)(uVar5 + iVar12);
        *puVar2 = *puVar1;
        puVar2[1] = uVar6;
        puVar2[2] = uVar7;
        puVar2[3] = uVar8;
        iVar12 = iVar12 + 0x10;
      } while (uVar11 < uVar9);
      if (uVar3 == uVar10) {
        return;
      }
    }
    do {
      *(undefined2 *)(uVar5 + uVar10 * 2) = *(undefined2 *)(uVar4 + uVar10 * 2);
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar3);
  }
  return;
}

