/* 00037178 | STG::GEFont::GEFont */

/* STG::GEFont::GEFont() */

GEFont * __thiscall STG::GEFont::GEFont(GEFont *this)

{
  GEFont *pGVar1;
  GEFont *pGVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = DAT_00037244 + 0x3718c;
  *(undefined4 *)(this + 4) = 1;
  iVar5 = DAT_0003724c;
  iVar4 = *(int *)(iVar3 + DAT_00037248);
  this[0xc] = (GEFont)0x0;
  *(GEFont **)(this + 0x1c) = this + 0xc;
  iVar4 = iVar4 + 8;
  *(GEFont **)(this + 0x20) = this + 0xc;
  *(int *)(this + 8) = iVar4;
  *(undefined4 *)(this + 0x24) = 0xffffffff;
  *(undefined4 *)(this + 0x28) = 4;
  iVar5 = *(int *)(iVar3 + iVar5);
  *(undefined4 *)(this + 0x2c) = 0;
  *(int *)(this + 0x30) = iVar4;
  *(int *)this = iVar5 + 8;
  *(GEFont **)(this + 0x44) = this + 0x34;
  *(undefined4 *)(this + 0x50) = 0;
  *(GEFont **)(this + 0x48) = this + 0x34;
  this[0x34] = (GEFont)0x0;
  *(undefined4 *)(this + 0x4c) = 0xffffffff;
  this[0x54] = (GEFont)0x0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x360) = 0;
  *(undefined4 *)(this + 0x364) = 0;
  *(undefined4 *)(this + 0x5c) = 0x1800000;
  pGVar1 = this + 0x60;
  do {
    pGVar2 = pGVar1 + 4;
    *(undefined4 *)pGVar1 = 0x1800180;
    pGVar1 = pGVar2;
  } while (pGVar2 != this + 0x35c);
  *(undefined2 *)(this + 0x35c) = 0x180;
  return this;
}

