/* 0004d860 | STG::GEVertexBuffer::GEVertexBuffer */

/* STG::GEVertexBuffer::GEVertexBuffer() */

void __thiscall STG::GEVertexBuffer::GEVertexBuffer(GEVertexBuffer *this)

{
  uint uVar1;
  int unaff_EBX;
  uint uVar2;
  GEVertexBuffer *pGVar3;
  bool bVar4;
  byte bVar5;
  
  bVar5 = 0;
  uVar2 = 0x1c;
  FUN_0002e044();
  pGVar3 = this + 0x50;
  *(int *)this = *(int *)(unaff_EBX + 0x4e64f) + 8;
  bVar4 = ((uint)pGVar3 & 1) != 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 2;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0xa4) = 0;
  this[0xa8] = (GEVertexBuffer)0x0;
  *(undefined4 *)(this + 0x88) = 7;
  *(undefined4 *)(this + 0x18) = 2;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x8c) = 7;
  *(undefined4 *)(this + 0x1c) = 2;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x90) = 7;
  *(undefined4 *)(this + 0x20) = 2;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x94) = 7;
  *(undefined4 *)(this + 0x24) = 2;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x98) = 7;
  *(undefined4 *)(this + 0x28) = 2;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x9c) = 7;
  *(undefined4 *)(this + 0x2c) = 2;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0xa0) = 7;
  *(undefined4 *)(this + 0x30) = 2;
  *(undefined4 *)(this + 0x4c) = 0;
  if (bVar4) {
    pGVar3 = this + 0x51;
    this[0x50] = (GEVertexBuffer)0x0;
    uVar2 = 0x1b;
  }
  if (((uint)pGVar3 & 2) != 0) {
    *(undefined2 *)pGVar3 = 0;
    uVar2 = uVar2 - 2;
    pGVar3 = pGVar3 + 2;
  }
  for (uVar1 = uVar2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)pGVar3 = 0;
    pGVar3 = pGVar3 + (uint)bVar5 * -8 + 4;
  }
  if ((uVar2 & 2) != 0) {
    *(undefined2 *)pGVar3 = 0;
    pGVar3 = pGVar3 + 2;
  }
  if (bVar4) {
    *pGVar3 = (GEVertexBuffer)0x0;
  }
  pGVar3 = this + 0x6c;
  uVar2 = 0x1c;
  bVar4 = ((uint)pGVar3 & 1) != 0;
  if (bVar4) {
    pGVar3 = this + 0x6d;
    this[0x6c] = (GEVertexBuffer)0x0;
    uVar2 = 0x1b;
  }
  if (((uint)pGVar3 & 2) != 0) {
    *(undefined2 *)pGVar3 = 0;
    uVar2 = uVar2 - 2;
    pGVar3 = pGVar3 + 2;
  }
  for (uVar1 = uVar2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)pGVar3 = 0;
    pGVar3 = pGVar3 + (uint)bVar5 * -8 + 4;
  }
  if ((uVar2 & 2) != 0) {
    *(undefined2 *)pGVar3 = 0;
    pGVar3 = pGVar3 + 2;
  }
  if (bVar4) {
    *pGVar3 = (GEVertexBuffer)0x0;
  }
  return;
}

