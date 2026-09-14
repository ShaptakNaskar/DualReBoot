/* 0003a510 | STG::GEModel::LoadResources */

/* STG::GEModel::LoadResources() */

void __thiscall STG::GEModel::LoadResources(GEModel *this)

{
  GEModel GVar1;
  int iVar2;
  GEVertexBuffer *this_00;
  GEIndexBuffer *this_01;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(this + 0x34);
  iVar3 = *(int *)(this + 0x30);
  if (iVar4 != 0) {
    iVar2 = 0;
    do {
      this_00 = *(GEVertexBuffer **)(*(int *)(this + 0x7c) + iVar2 * 4);
      iVar2 = iVar2 + 1;
      GEVertexBuffer::AllocateBufferObject(this_00);
      GEVertexBuffer::UpdateBufferObject(this_00);
    } while (iVar2 != iVar4);
  }
  if (iVar3 != 0) {
    iVar4 = 0;
    do {
      this_01 = *(GEIndexBuffer **)(*(int *)(this + 0x80) + iVar4 * 4);
      iVar4 = iVar4 + 1;
      GEIndexBuffer::AllocateBufferObject(this_01);
      GEIndexBuffer::UpdateBufferObject(this_01);
    } while (iVar4 != iVar3);
  }
  if (this[0x9c] == (GEModel)0x0) {
    if (this[0xa4] == (GEModel)0x0) {
      GVar1 = this[0xc0];
      this[0xc2] = GVar1;
    }
    else {
      GVar1 = (GEModel)0x1;
      this[0xc2] = (GEModel)0x1;
    }
  }
  else {
    GVar1 = (GEModel)0x1;
    this[0xc2] = (GEModel)0x1;
    if (this[0xa4] == (GEModel)0x0) {
      GVar1 = this[0xc0];
    }
  }
  this[0xc3] = GVar1;
  UResource::LoadResources((UResource *)this);
  return;
}

