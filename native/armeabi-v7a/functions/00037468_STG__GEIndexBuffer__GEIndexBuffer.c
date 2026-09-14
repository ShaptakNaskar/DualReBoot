/* 00037468 | STG::GEIndexBuffer::GEIndexBuffer */

/* STG::GEIndexBuffer::GEIndexBuffer() */

void __thiscall STG::GEIndexBuffer::GEIndexBuffer(GEIndexBuffer *this)

{
  int iVar1;
  
  iVar1 = DAT_00037494;
  *(undefined4 *)(this + 4) = 0;
  iVar1 = *(int *)(iVar1 + 0x3747c);
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(int *)this = iVar1 + 8;
  *(undefined4 *)(this + 0x10) = 0;
  this[0x14] = (GEIndexBuffer)0x0;
  return;
}

