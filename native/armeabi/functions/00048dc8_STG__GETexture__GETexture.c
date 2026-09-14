/* 00048dc8 | STG::GETexture::GETexture */

/* STG::GETexture::GETexture() */

void __thiscall STG::GETexture::GETexture(GETexture *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = DAT_00048e80;
  *(undefined4 *)(this + 4) = 1;
  iVar1 = iVar1 + 0x48de4;
  iVar3 = *(int *)(iVar1 + DAT_00048e84);
  *(GETexture **)(this + 0x1c) = this + 0xc;
  *(GETexture **)(this + 0x20) = this + 0xc;
  *(undefined4 *)(this + 0x28) = 3;
  iVar2 = DAT_00048e88;
  iVar3 = iVar3 + 8;
  *(int *)(this + 8) = iVar3;
  this[0xc] = (GETexture)0x0;
  *(undefined4 *)(this + 0x24) = 0xffffffff;
  iVar2 = *(int *)(iVar1 + iVar2);
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(int *)this = iVar2 + 8;
  iVar2 = DAT_00048e8c;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(int *)(this + 0x3c) = *(int *)(iVar1 + iVar2) + 8;
  *(GETexture **)(this + 0x60) = this + 0x40;
  *(GETexture **)(this + 100) = this + 0x40;
  *(undefined2 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  *(int *)(this + 0x6c) = iVar3;
  *(GETexture **)(this + 0x80) = this + 0x70;
  *(GETexture **)(this + 0x84) = this + 0x70;
  this[0x70] = (GETexture)0x0;
  *(undefined4 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x8c) = 0;
  *(undefined4 *)(this + 0x90) = 0;
  *(undefined4 *)(this + 0x94) = 0xffffffff;
  return;
}

