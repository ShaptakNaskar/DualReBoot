/* 0003b2c0 | STG::GEModel::LoadResources */

/* STG::GEModel::LoadResources() */

void __thiscall STG::GEModel::LoadResources(GEModel *this)

{
  int iVar1;
  GEVertexBuffer *this_00;
  GEIndexBuffer *this_01;
  GEModel GVar2;
  int iVar3;
  int iVar4;
  
  FUN_0002e044();
  iVar4 = *(int *)(this + 0x34);
  iVar1 = *(int *)(this + 0x30);
  if (iVar4 != 0) {
    iVar3 = 0;
    do {
      this_00 = *(GEVertexBuffer **)(*(int *)(this + 0x7c) + iVar3 * 4);
      iVar3 = iVar3 + 1;
      GEVertexBuffer::AllocateBufferObject(this_00);
      GEVertexBuffer::UpdateBufferObject(this_00);
    } while (iVar3 != iVar4);
  }
  if (iVar1 != 0) {
    iVar4 = 0;
    do {
      this_01 = *(GEIndexBuffer **)(*(int *)(this + 0x80) + iVar4 * 4);
      iVar4 = iVar4 + 1;
      GEIndexBuffer::AllocateBufferObject(this_01);
      GEIndexBuffer::UpdateBufferObject(this_01);
    } while (iVar4 != iVar1);
  }
  if (this[0x9c] == (GEModel)0x0) {
    if (this[0xa4] == (GEModel)0x0) {
      GVar2 = this[0xc0];
      this[0xc2] = GVar2;
    }
    else {
      this[0xc2] = (GEModel)0x1;
      GVar2 = (GEModel)0x1;
    }
  }
  else {
    this[0xc2] = (GEModel)0x1;
    GVar2 = (GEModel)0x1;
    if (this[0xa4] == (GEModel)0x0) {
      GVar2 = this[0xc0];
    }
  }
  this[0xc3] = GVar2;
  UResource::LoadResources((UResource *)this);
  return;
}

