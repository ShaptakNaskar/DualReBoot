/* 00035d34 | STG::GEBufferObject::Deallocate */

/* STG::GEBufferObject::Deallocate() */

void __thiscall STG::GEBufferObject::Deallocate(GEBufferObject *this)

{
  if ((this[0x18] != (GEBufferObject)0x0) && (*(int *)(this + 0x14) != 0)) {
    GERendererAPI::GL_DeleteBuffer((ulong *)(this + 0x10));
    *(undefined4 *)(this + 0xc) = 0;
    *(undefined4 *)(this + 0x10) = 0;
    *(undefined4 *)(this + 0x14) = 0;
    this[0x18] = (GEBufferObject)0x0;
    return;
  }
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  this[0x18] = (GEBufferObject)0x0;
  return;
}

