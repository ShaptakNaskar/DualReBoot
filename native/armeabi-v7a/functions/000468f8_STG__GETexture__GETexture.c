/* 000468f8 | STG::GETexture::GETexture */

/* STG::GETexture::GETexture() */

void __thiscall STG::GETexture::GETexture(GETexture *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = DAT_000469b4;
  iVar1 = DAT_000469b0 + 0x4690c;
  *(undefined4 *)(this + 4) = 1;
  iVar2 = *(int *)(iVar1 + iVar3);
  *(undefined4 *)(this + 0x28) = 3;
  iVar3 = DAT_000469b8;
  *(GETexture **)(this + 0x1c) = this + 0xc;
  iVar2 = iVar2 + 8;
  *(GETexture **)(this + 0x20) = this + 0xc;
  *(int *)(this + 8) = iVar2;
  this[0xc] = (GETexture)0x0;
  *(undefined4 *)(this + 0x24) = 0xffffffff;
  iVar3 = *(int *)(iVar1 + iVar3);
  *(undefined4 *)(this + 0x2c) = 0;
  *(int *)this = iVar3 + 8;
  iVar3 = DAT_000469bc;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  iVar3 = *(int *)(iVar1 + iVar3);
  *(GETexture **)(this + 0x60) = this + 0x40;
  *(GETexture **)(this + 100) = this + 0x40;
  *(int *)(this + 0x3c) = iVar3 + 8;
  *(undefined2 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  *(int *)(this + 0x6c) = iVar2;
  *(GETexture **)(this + 0x80) = this + 0x70;
  *(GETexture **)(this + 0x84) = this + 0x70;
  this[0x70] = (GETexture)0x0;
  *(undefined4 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x8c) = 0;
  *(undefined4 *)(this + 0x90) = 0;
  *(undefined4 *)(this + 0x94) = 0xffffffff;
  return;
}

