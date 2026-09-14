/* 00037e24 | STG::GEMaterial::GEMaterial */

/* STG::GEMaterial::GEMaterial() */

GEMaterial * __thiscall STG::GEMaterial::GEMaterial(GEMaterial *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00037ec8;
  iVar1 = DAT_00037ec4 + 0x37e38;
  *(undefined4 *)(this + 4) = 1;
  iVar3 = *(int *)(iVar1 + iVar2);
  *(undefined4 *)(this + 0x28) = 2;
  iVar2 = DAT_00037ecc;
  iVar3 = iVar3 + 8;
  this[0xc] = (GEMaterial)0x0;
  *(GEMaterial **)(this + 0x1c) = this + 0xc;
  *(int *)(this + 8) = iVar3;
  *(GEMaterial **)(this + 0x20) = this + 0xc;
  *(undefined4 *)(this + 0x24) = 0xffffffff;
  iVar2 = *(int *)(iVar1 + iVar2);
  *(int *)(this + 0x6c) = iVar3;
  *(GEMaterial **)(this + 0x80) = this + 0x70;
  *(int *)this = iVar2 + 8;
  *(GEMaterial **)(this + 0x84) = this + 0x70;
  this[0x70] = (GEMaterial)0x0;
  *(undefined4 *)(this + 0x88) = 0xffffffff;
  *(int *)(this + 0x8c) = iVar3;
  *(GEMaterial **)(this + 0xa0) = this + 0x90;
  *(GEMaterial **)(this + 0xa4) = this + 0x90;
  this[0x90] = (GEMaterial)0x0;
  *(undefined4 *)(this + 0xa8) = 0xffffffff;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  SetDefault(this);
  return this;
}

