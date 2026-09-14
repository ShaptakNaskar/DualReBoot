/* 00039218 | STG::GEIndexBuffer::GEIndexBuffer */

/* STG::GEIndexBuffer::GEIndexBuffer() */

void __thiscall STG::GEIndexBuffer::GEIndexBuffer(GEIndexBuffer *this)

{
  int iVar1;
  
  iVar1 = DAT_00039244;
  *(undefined4 *)(this + 4) = 0;
  *(int *)this = *(int *)(iVar1 + 0x3922c) + 8;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  this[0x14] = (GEIndexBuffer)0x0;
  return;
}

