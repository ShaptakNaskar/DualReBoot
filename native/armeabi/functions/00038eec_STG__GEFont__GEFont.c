/* 00038eec | STG::GEFont::GEFont */

/* STG::GEFont::GEFont() */

void __thiscall STG::GEFont::GEFont(GEFont *this)

{
  int iVar1;
  GEFont *pGVar2;
  int iVar4;
  int iVar5;
  GEFont *pGVar3;
  
  iVar5 = DAT_00038fac;
  *(undefined4 *)(this + 4) = 1;
  iVar4 = *(int *)(iVar5 + 0x38f08 + DAT_00038fb0);
  *(GEFont **)(this + 0x1c) = this + 0xc;
  *(GEFont **)(this + 0x20) = this + 0xc;
  *(undefined4 *)(this + 0x28) = 4;
  iVar1 = DAT_00038fb4;
  iVar4 = iVar4 + 8;
  this[0xc] = (GEFont)0x0;
  *(undefined4 *)(this + 0x24) = 0xffffffff;
  *(int *)(this + 8) = iVar4;
  iVar5 = *(int *)(iVar5 + 0x38f08 + iVar1);
  *(undefined4 *)(this + 0x4c) = 0xffffffff;
  *(undefined4 *)(this + 0x2c) = 0;
  this[0x34] = (GEFont)0x0;
  *(undefined4 *)(this + 0x50) = 0;
  this[0x54] = (GEFont)0x0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x360) = 0;
  *(undefined4 *)(this + 0x364) = 0;
  *(undefined4 *)(this + 0x5c) = 0x1800000;
  *(int *)this = iVar5 + 8;
  *(int *)(this + 0x30) = iVar4;
  *(GEFont **)(this + 0x44) = this + 0x34;
  *(GEFont **)(this + 0x48) = this + 0x34;
  pGVar3 = this + 0x60;
  do {
    pGVar2 = pGVar3 + 4;
    *(undefined4 *)pGVar3 = 0x1800180;
    pGVar3 = pGVar2;
  } while (pGVar2 != this + 0x35c);
  *(undefined2 *)(this + 0x35c) = 0x180;
  return;
}

