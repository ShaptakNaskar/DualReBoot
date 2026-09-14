/* 0003a810 | STG::GEMaterial::GEMaterial */

/* STG::GEMaterial::GEMaterial() */

void __thiscall STG::GEMaterial::GEMaterial(GEMaterial *this)

{
  int iVar1;
  int iVar2;
  int unaff_EBX;
  
  FUN_0002e044();
  iVar2 = *(int *)(unaff_EBX + 0x61626) + 8;
  *(GEMaterial **)(this + 0x1c) = this + 0xc;
  *(GEMaterial **)(this + 0x20) = this + 0xc;
  iVar1 = *(int *)(unaff_EBX + 0x6168a);
  *(int *)(this + 8) = iVar2;
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0x6c) = iVar2;
  *(int *)(this + 0x8c) = iVar2;
  *(undefined4 *)(this + 4) = 1;
  this[0xc] = (GEMaterial)0x0;
  *(undefined4 *)(this + 0x24) = 0xffffffff;
  *(undefined4 *)(this + 0x28) = 2;
  *(GEMaterial **)(this + 0x80) = this + 0x70;
  *(GEMaterial **)(this + 0x84) = this + 0x70;
  this[0x70] = (GEMaterial)0x0;
  *(undefined4 *)(this + 0x88) = 0xffffffff;
  *(GEMaterial **)(this + 0xa0) = this + 0x90;
  *(GEMaterial **)(this + 0xa4) = this + 0x90;
  this[0x90] = (GEMaterial)0x0;
  *(undefined4 *)(this + 0xa8) = 0xffffffff;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  SetDefault(this);
  return;
}

