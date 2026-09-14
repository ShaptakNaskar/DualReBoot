/* 00039be0 | STG::GEMaterial::GEMaterial */

/* STG::GEMaterial::GEMaterial() */

GEMaterial * __thiscall STG::GEMaterial::GEMaterial(GEMaterial *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = DAT_00039c80;
  *(undefined4 *)(this + 4) = 1;
  iVar3 = *(int *)(iVar1 + 0x39bfc + DAT_00039c84);
  *(GEMaterial **)(this + 0x1c) = this + 0xc;
  *(GEMaterial **)(this + 0x20) = this + 0xc;
  *(undefined4 *)(this + 0x28) = 2;
  iVar2 = DAT_00039c88;
  iVar3 = iVar3 + 8;
  *(int *)(this + 8) = iVar3;
  this[0xc] = (GEMaterial)0x0;
  *(undefined4 *)(this + 0x24) = 0xffffffff;
  *(int *)this = *(int *)(iVar1 + 0x39bfc + iVar2) + 8;
  *(int *)(this + 0x6c) = iVar3;
  *(GEMaterial **)(this + 0x80) = this + 0x70;
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

