/* 00038a88 | STG::GEModel::GEModel */

/* STG::GEModel::GEModel() */

void __thiscall STG::GEModel::GEModel(GEModel *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00038ba0;
  iVar1 = DAT_00038b9c + 0x38aa8;
  *(undefined4 *)(this + 4) = 1;
  iVar3 = *(int *)(iVar1 + iVar2);
  *(undefined4 *)(this + 0x28) = 1;
  iVar2 = DAT_00038ba4;
  iVar3 = iVar3 + 8;
  *(GEModel **)(this + 0x1c) = this + 0xc;
  *(GEModel **)(this + 0x20) = this + 0xc;
  *(undefined4 *)(this + 0x24) = 0xffffffff;
  this[0xc] = (GEModel)0x0;
  *(int *)(this + 8) = iVar3;
  iVar2 = *(int *)(iVar1 + iVar2);
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(int *)this = iVar2 + 8;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  *(int *)(this + 0x38) = iVar3;
  *(undefined4 *)(this + 100) = 0;
  *(GEModel **)(this + 0x4c) = this + 0x3c;
  *(undefined4 *)(this + 0x68) = 0;
  *(GEModel **)(this + 0x50) = this + 0x3c;
  *(undefined4 *)(this + 0x6c) = 0;
  this[0x3c] = (GEModel)0x0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  *(undefined4 *)(this + 0x88) = 0x3f800000;
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x8c) = 0x3f800000;
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0x90) = 0x3f800000;
  *(undefined4 *)(this + 0x94) = 0x3f800000;
  *(undefined4 *)(this + 0x98) = 0x3f800000;
  this[0x9c] = (GEModel)0x0;
  *(undefined4 *)(this + 0xa0) = 0x3f800000;
  this[0x9d] = (GEModel)0x0;
  *(undefined4 *)(this + 0xa8) = 0;
  this[0xa4] = (GEModel)0x0;
  *(undefined4 *)(this + 0xac) = 0x3f800000;
  this[0xa5] = (GEModel)0x0;
  *(undefined4 *)(this + 0xb4) = 0;
  this[0xb0] = (GEModel)0x0;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  this[0xc0] = (GEModel)0x0;
  this[0xc1] = (GEModel)0x0;
  this[0xc2] = (GEModel)0x0;
  this[0xc3] = (GEModel)0x0;
  this[0xc4] = (GEModel)0x0;
  this[0xc5] = (GEModel)0x0;
  this[0xc6] = (GEModel)0x0;
  return;
}

