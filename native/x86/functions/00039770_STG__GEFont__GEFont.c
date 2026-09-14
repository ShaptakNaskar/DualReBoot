/* 00039770 | STG::GEFont::GEFont */

/* STG::GEFont::GEFont() */

void __thiscall STG::GEFont::GEFont(GEFont *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ushort uVar5;
  int iVar6;
  ushort uVar7;
  ushort uVar8;
  GEFont *pGVar9;
  short sVar10;
  int unaff_EBX;
  ushort uVar11;
  uint uVar12;
  
  FUN_0002e044();
  iVar6 = *(int *)(unaff_EBX + 0x626c1) + 8;
  pGVar9 = this + 0x5e;
  *(int *)(this + 8) = iVar6;
  uVar12 = -(((uint)pGVar9 & 0xf) >> 1);
  *(GEFont **)(this + 0x1c) = this + 0xc;
  *(GEFont **)(this + 0x20) = this + 0xc;
  *(int *)(this + 0x30) = iVar6;
  iVar6 = *(int *)(unaff_EBX + 0x62705);
  *(GEFont **)(this + 0x44) = this + 0x34;
  *(GEFont **)(this + 0x48) = this + 0x34;
  uVar11 = (ushort)uVar12 & 7;
  *(undefined4 *)(this + 4) = 1;
  this[0xc] = (GEFont)0x0;
  *(undefined4 *)(this + 0x24) = 0xffffffff;
  *(undefined4 *)(this + 0x28) = 4;
  *(int *)this = iVar6 + 8;
  *(undefined4 *)(this + 0x2c) = 0;
  this[0x34] = (GEFont)0x0;
  *(undefined4 *)(this + 0x4c) = 0xffffffff;
  *(undefined4 *)(this + 0x50) = 0;
  this[0x54] = (GEFont)0x0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined2 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x360) = 0;
  *(undefined4 *)(this + 0x364) = 0;
  if ((uVar12 & 7) == 0) {
    sVar10 = 0x180;
    uVar5 = 0;
  }
  else {
    uVar7 = 0;
    do {
      uVar5 = uVar7 + 1;
      *(undefined2 *)pGVar9 = 0x180;
      pGVar9 = pGVar9 + 2;
      sVar10 = 0x17f - uVar7;
      uVar7 = uVar5;
    } while (uVar5 < uVar11);
  }
  uVar11 = 0x180 - uVar11;
  uVar7 = uVar11 >> 3;
  if (uVar7 != 0) {
    uVar1 = *(undefined4 *)(unaff_EBX + 0x4e045);
    uVar2 = *(undefined4 *)(unaff_EBX + 0x4e049);
    uVar3 = *(undefined4 *)(unaff_EBX + 0x4e04d);
    uVar4 = *(undefined4 *)(unaff_EBX + 0x4e051);
    pGVar9 = this + (uVar12 & 7) * 2 + 0x5e;
    uVar8 = 0;
    do {
      uVar8 = uVar8 + 1;
      *(undefined4 *)pGVar9 = uVar1;
      *(undefined4 *)(pGVar9 + 4) = uVar2;
      *(undefined4 *)(pGVar9 + 8) = uVar3;
      *(undefined4 *)(pGVar9 + 0xc) = uVar4;
      pGVar9 = pGVar9 + 0x10;
    } while (uVar8 < uVar7);
    sVar10 = sVar10 + uVar7 * -8;
    uVar5 = uVar5 + uVar7 * 8;
    if ((ushort)(uVar7 * 8) == uVar11) {
      return;
    }
  }
  do {
    uVar12 = (uint)uVar5;
    uVar5 = uVar5 + 1;
    sVar10 = sVar10 + -1;
    *(undefined2 *)(this + uVar12 * 2 + 0x5e) = 0x180;
  } while (sVar10 != 0);
  return;
}

